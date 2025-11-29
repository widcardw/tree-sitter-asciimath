//! This crate provides AsciiMath language support for the [tree-sitter] parsing library.
//!
//! Typically, you will use the [`LANGUAGE`] constant to add this language to a
//! tree-sitter [`Parser`], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_asciimath::LANGUAGE;
//! parser
//!     .set_language(&language.into())
//!     .expect("Error loading AsciiMath parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [`Parser`]: https://docs.rs/tree-sitter/0.25.10/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

mod node_type;
mod to_latex;
// use node_type::{NodeType, SymbolConfig};
// use tree_sitter::Node;
use tree_sitter_language::LanguageFn;
use to_latex::{AsciiMathToLatex};
use std::ffi::CStr;
use std::os::raw::{c_char, c_int, c_uint};
use std::ptr;
use std::slice;
use std::str;

extern "C" {
    fn tree_sitter_asciimath() -> *const ();
}

/// The tree-sitter [`LanguageFn`] for this grammar.
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_asciimath) };

/// The content of the [`node-types.json`] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers/6-static-node-types
pub const NODE_TYPES: &str = include_str!("../../src/node-types.json");

// NOTE: uncomment these to include any queries that this grammar contains:

// pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

// C interface for external languages
use std::sync::Once;
use std::sync::Mutex;

static INIT: Once = Once::new();
static mut TRANSFORMER: Option<Mutex<AsciiMathToLatex>> = None;

/// Initialize the global AsciiMathToLatex transformer
/// This function is thread-safe and only initializes once
fn get_transformer() -> &'static Mutex<AsciiMathToLatex> {
    unsafe {
        INIT.call_once(|| {
            TRANSFORMER = Some(Mutex::new(AsciiMathToLatex::new()));
        });
        TRANSFORMER.as_ref().unwrap()
    }
}

/// Represents a string with its length for C ABI compatibility
#[repr(C)]
pub struct CStringResult {
    pub ptr: *mut c_char,
    pub len: c_uint,
}

impl Default for CStringResult {
    fn default() -> Self {
        CStringResult {
            ptr: ptr::null_mut(),
            len: 0,
        }
    }
}

/// Convert an AsciiMath tree to LaTeX using C ABI
/// 
/// # Parameters
/// - `tree_ptr`: Pointer to the tree_sitter Tree object
/// - `source_ptr`: Pointer to the source string (null-terminated)
/// - `source_len`: Length of the source string in bytes
/// 
/// # Returns
/// A CStringResult containing the LaTeX string and its length
/// The caller is responsible for freeing the returned pointer using `free_string`
#[no_mangle]
pub extern "C" fn ascii_math_to_latex(
    tree_ptr: *mut tree_sitter::Tree,
    source_ptr: *const c_char,
    source_len: c_uint,
) -> CStringResult {
    if tree_ptr.is_null() || source_ptr.is_null() {
        return CStringResult::default();
    }

    // Convert C string to Rust slice
    let source_slice = unsafe {
        slice::from_raw_parts(source_ptr as *const u8, source_len as usize)
    };

    // Get the tree and root node
    let tree = unsafe { &mut *tree_ptr };
    let root_node = tree.root_node();

    // Transform to LaTeX
    let transformer = get_transformer();
    let result = match transformer.lock() {
        Ok(guard) => guard.to_latex(root_node, source_slice),
        Err(_) => return CStringResult::default(),
    };

    match result {
        Ok(latex_string) => {
            // Convert to C string
            let c_string = std::ffi::CString::new(latex_string).unwrap_or_default();
            let ptr = c_string.into_raw();
            let len = unsafe { CStr::from_ptr(ptr).to_bytes().len() as c_uint };
            
            CStringResult { ptr, len }
        }
        Err(_) => CStringResult::default(),
    }
}

/// Free the string returned by ascii_math_to_latex
#[no_mangle]
pub extern "C" fn free_string(ptr: *mut c_char) {
    if !ptr.is_null() {
        unsafe {
            let _ = std::ffi::CString::from_raw(ptr);
        }
    }
}



#[cfg(test)]
mod tests {
    use super::*;
    use serde::Deserialize;

    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading AsciiMath parser");
    }

    #[test]
    fn test_basic_transformation() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading AsciiMath parser");

        let code = "x^2";
        let tree = parser.parse(code, None).unwrap();
        let root_node = tree.root_node();

        let transformer = AsciiMathToLatex::new();
        let result = transformer.to_latex(root_node, code.as_bytes()).unwrap();

        assert_eq!(result, "x^{2}");
    }

    #[derive(Deserialize)]
    struct TestCase {
        input: String,
        expected: String,
    }

    #[test]
    fn test_common_cases() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading AsciiMath parser");

        let transformer = AsciiMathToLatex::new();

        let test_cases_content = include_str!("../test_cases/common_cases.yml");
        let test_cases: Vec<TestCase> = serde_yaml::from_str(test_cases_content).expect("Cannot deserialize yaml");

        for case in test_cases {
            let tree = parser.parse(&case.input, None).unwrap();
            let root_node = tree.root_node();

            match transformer.to_latex(root_node, case.input.as_bytes()) {
                Ok(result) => {
                    assert_eq!(result, case.expected, "Failed for input: '{}'", case.input);
                }
                Err(e) => {
                    panic!("Error processing '{}': {}", case.input, e);
                }
            }
        }
    }
}
