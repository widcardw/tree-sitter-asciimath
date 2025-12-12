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
use tree_sitter_language::LanguageFn;
use std::ffi::CStr;
use std::os::raw::{c_char, c_uint};
use std::ptr;
use std::str;
pub use to_latex::AsciiMathToLatex;

extern "C" {
    fn tree_sitter_asciimath() -> *const ();
}

#[no_mangle]
pub extern "C" fn reexport_tree_sitter_asciimath() -> *const () {
    unsafe { tree_sitter_asciimath() }
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
use std::sync::OnceLock;
use std::sync::Mutex;

static TRANSFORMER: OnceLock<Mutex<(tree_sitter::Parser, AsciiMathToLatex)>> = OnceLock::new();

/// Initialize the global AsciiMathToLatex transformer
/// This function is thread-safe and only initializes once
fn get_transformer() -> &'static Mutex<(tree_sitter::Parser, AsciiMathToLatex)> {
    TRANSFORMER.get_or_init(|| {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(&LANGUAGE.into())
              .expect("Error loading AsciiMath parser");
        Mutex::new((parser, AsciiMathToLatex::new()))
    })
}

/// Represents a string with its length for C ABI compatibility
#[repr(C)]
pub struct FfiString {
    pub data: *mut c_char,
    pub len: usize,
    pub capacity: usize,
}

impl Default for FfiString {
    fn default() -> Self {
        FfiString {
            data: ptr::null_mut(),
            len: 0,
            capacity: 0,
        }
    }
}

impl FfiString {
    pub fn new(s: String) -> Self {
        let mut bytes = s.into_bytes();
        let len = bytes.len();
        bytes.push(0); // Add null terminator for C strings
        let capacity = bytes.capacity();
        
        let data = Box::into_raw(bytes.into_boxed_slice()) as *mut u8 as *mut c_char;
        
        FfiString { data, len: len, capacity: capacity }
    }
}

impl Drop for FfiString {
    fn drop(&mut self) {
        if !self.data.is_null() {
            let slice = unsafe {
                // We need to include the null terminator in the length
                Vec::from_raw_parts(self.data as *mut u8, self.len + 1, self.capacity)
            };
            drop(slice);
        }
    }
}

#[no_mangle]
pub extern "C" fn directly_to_latex(input: *const c_char) -> *mut FfiString {
    if input.is_null() {
        return ptr::null_mut();
    }

    let c_str = unsafe { CStr::from_ptr(input) };
    let input_str = match c_str.to_str() {
        Ok(s) => s,
        Err(_) => return ptr::null_mut()
    };
    
    // Transform to LaTeX
    let tr = get_transformer();
    let result = match tr.lock() {
        Ok(mut guard) => {
            let (parser, transformer) = &mut *guard;
            let tree = match parser.parse(input_str, None) {
                Some(tree) => tree,
                None => return ptr::null_mut(),
            };
            let root_node = tree.root_node();
            match transformer.to_latex(root_node, input_str.as_bytes()) {
                Ok(res2) => res2,
                Err(_) => return ptr::null_mut(),
            }
        },
        Err(_) => return ptr::null_mut(),
    };

    let ffi_string = FfiString::new(result);
    Box::into_raw(Box::new(ffi_string))
}

/// Free the string returned by ascii_math_to_latex
#[no_mangle]
pub extern "C" fn free_ffi_string(ptr: *mut FfiString) {
    if !ptr.is_null() {
        unsafe {
            let _ = Box::from_raw(ptr);
        }
    }
}

#[no_mangle]
pub extern "C" fn ffi_string_data(ptr: *const FfiString) -> *const c_char {
    if ptr.is_null() {
        return ptr::null();
    }
    unsafe { (*ptr).data }
}

#[no_mangle]
pub extern "C" fn ffi_string_len(ptr: *const FfiString) -> c_uint {
    if ptr.is_null() {
        return 0;
    }
    unsafe { (*ptr).len as c_uint }
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
