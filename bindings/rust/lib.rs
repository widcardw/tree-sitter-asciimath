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
