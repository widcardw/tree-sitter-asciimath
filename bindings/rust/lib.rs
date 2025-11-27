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

use serde::Deserialize;
use std::collections::HashMap;
use tree_sitter::Node;
use tree_sitter_language::LanguageFn;

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

#[derive(Deserialize, Debug)]
struct SymbolConfig {
    logic_symbols: HashMap<String, SymbolEntry>,
    greek_letters: HashMap<String, SymbolEntry>,
    math_constants: HashMap<String, SymbolEntry>,
    set_operators: HashMap<String, SymbolEntry>,
    math_operators: HashMap<String, SymbolEntry>,
    ascii_escape: HashMap<String, SymbolEntry>,
    misc_symbols: HashMap<String, SymbolEntry>,
    unary_symbols: HashMap<String, SymbolEntry>,
    factorial_symbols: HashMap<String, SymbolEntry>,
    binary_symbols: HashMap<String, SymbolEntry>,
    binary_mid_symbols: HashMap<String, SymbolEntry>,
    differential_symbols: HashMap<String, SymbolEntry>,
    separator_symbols: HashMap<String, SymbolEntry>,
    big_equal_symbols: HashMap<String, SymbolEntry>,
    unary_frozen_symbols: HashMap<String, SymbolEntry>,
    right_associative_operators: HashMap<String, SymbolEntry>,
    // skipped since we just use control flow
    // number_symbol: HashMap<String, SymbolEntry>,
    // identifier: HashMap<String, SymbolEntry>,
    left_bracket: HashMap<String, SymbolEntry>,
    right_bracket: HashMap<String, SymbolEntry>,
}

#[derive(Deserialize, Debug)]
struct SymbolEntry {
    #[serde(skip_serializing_if = "Option::is_none")]
    token: Option<String>,
    #[serde(skip_serializing_if = "Option::is_none")]
    alias: Option<Vec<String>>,
    tex: String,
    #[serde(skip_serializing_if = "Option::is_none")]
    template: Option<String>,
}

pub struct AsciiMathToLatex {
    symbol_config: SymbolConfig,
}

impl AsciiMathToLatex {
    pub fn new() -> Self {
        let config_str = include_str!("../../symbols-config.json");
        let symbol_config: SymbolConfig =
            serde_json::from_str(&config_str).expect("Failed to parse symbol config");

        Self { symbol_config }
    }

    fn get_tex(&self, typ: &str, token: &str) -> Result<String, String> {
        match typ {
            "logic_symbols" => self
                .symbol_config
                .logic_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "greek_letters" => self
                .symbol_config
                .greek_letters
                .get(token)
                .map(|s| s.tex.clone()),
            "math_constants" => self
                .symbol_config
                .math_constants
                .get(token)
                .map(|s| s.tex.clone()),
            "set_operators" => self
                .symbol_config
                .set_operators
                .get(token)
                .map(|s| s.tex.clone()),
            "math_operators" => self
                .symbol_config
                .math_operators
                .get(token)
                .map(|s| s.tex.clone()),
            "ascii_escape" => self
                .symbol_config
                .ascii_escape
                .get(token)
                .map(|s| s.tex.clone()),
            "misc_symbols" => self
                .symbol_config
                .misc_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "unary_symbols" => self
                .symbol_config
                .unary_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "factorial_symbols" => self
                .symbol_config
                .factorial_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "binary_symbols" => self
                .symbol_config
                .binary_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "binary_mid_symbols" => self
                .symbol_config
                .binary_mid_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "differential_symbols" => self
                .symbol_config
                .differential_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "separator_symbols" => self
                .symbol_config
                .separator_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "big_equal_symbols" => self
                .symbol_config
                .big_equal_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "unary_frozen_symbols" => self
                .symbol_config
                .unary_frozen_symbols
                .get(token)
                .map(|s| s.tex.clone()),
            "right_associative_operators" => self
                .symbol_config
                .right_associative_operators
                .get(token)
                .map(|s| s.tex.clone()),
            "number_symbol" | "identifier" => Some(token.to_string()),
            "left_bracket" => self
                .symbol_config
                .left_bracket
                .get(token)
                .map(|s| s.tex.clone()),
            "right_bracket" => self
                .symbol_config
                .right_bracket
                .get(token)
                .map(|s| s.tex.clone()),
            _ => None,
        }
        .ok_or_else(|| format!("Unknown token: {} in type: {}", token, typ))
    }

    fn _process_bracket_only(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let left = self.to_latex(node.child(0).ok_or("Missing left bracket")?, source)?;
        let right = self.to_latex(
            node.child(node.child_count() - 1)
                .ok_or("Missing right bracket")?,
            source,
        )?;

        let mut contents = String::new();
        for i in 1..node.child_count() - 1 {
            if !contents.is_empty() {
                contents.push(' ');
            }
            contents.push_str(&self.to_latex(node.child(i).ok_or("Missing content")?, source)?);
        }

        if left.trim() == "(" && right.trim() == ")" {
            Ok(contents)
        } else if left.trim() == "." && right.trim() == "." {
            Ok(format!("{{{}}}", contents))
        } else {
            Ok(format!("\\left{}{}\\right{}", left, contents, right))
        }
    }

    fn _trim_paren(&self, expr_node: Node, source: &[u8]) -> Result<String, String> {
        if expr_node.kind() == "simple_expression" && expr_node.child_count() > 0 {
            let first_child = expr_node.child(0).unwrap();
            if first_child.kind() == "bracket_expr" {
                return self._process_bracket_only(first_child, source);
            }
        } else if expr_node.kind() == "intermediate_expression" && expr_node.child_count() > 0 {
            let first_child = expr_node.child(0).unwrap();
            if first_child.kind() == "simple_expression" && first_child.child_count() > 0 {
                let grand_child = first_child.child(0).unwrap();
                if grand_child.kind() == "bracket_expr" {
                    return self._process_bracket_only(grand_child, source);
                }
            }
        }
        self.to_latex(expr_node, source)
    }

    pub fn to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        match node.kind() {
            "source_file" => self.source_file_to_latex(node, source),
            "number_symbol" | "identifier" => Ok(String::from_utf8_lossy(
                &source[node.start_byte()..node.end_byte()],
            )
            .to_string()),
            "superscript" => self.superscript_to_latex(node, source),
            "subscript" => self.subscript_to_latex(node, source),
            "subscript_superscript" => self.subscript_superscript_to_latex(node, source),
            "bracket_expr" => self.bracket_expr_to_latex(node, source),
            "unary_expr" => self.unary_expr_to_latex(node, source),
            "unaryFrozen_expr" => self.unary_frozen_expr_to_latex(node, source),
            "color_expr" => self.color_expr_to_latex(node, source),
            "binary_expr" => self.binary_expr_to_latex(node, source),
            "binary_frac" => self.binary_frac_to_latex(node, source),
            "factorial_expr" => self.factorial_expr_to_latex(node, source),
            "differential_expr" => self.differential_expr_to_latex(node, source),
            "simple_expression" => self.simple_expression_to_latex(node, source),
            "matrix_single_row_expr" => self.matrix_single_row_expr_to_latex(node, source),
            "matrix_expr" => self.matrix_expr_to_latex(node, source),
            "det_expr" => self.det_expr_to_latex(node, source),
            "bigEqual_expr" => self.big_equal_expr_to_latex(node, source),
            "right_associative_expr" => self.right_associative_expr_to_latex(node, source),
            "multiline_expr" => self.multiline_expr_to_latex(node, source),

            "literal_string" => {
                let t = node.utf8_text(source).expect("Cannot decode string!");
                Ok(format!("\\text{{{}}}", t[1..t.len() - 1].to_string()))
            }
            "left_bracket" | "right_bracket" => {
                let child_node = node.child(0).expect("Cannot get first child of bracket!");
                let token = child_node.kind();
                self.get_tex(node.kind(), token)
            }
            "logic_symbols"
            | "greek_letters"
            | "math_constants"
            | "set_operators"
            | "math_operators"
            | "ascii_escape"
            | "misc_symbols"
            | "unary_symbols"
            | "factorial_symbols"
            | "binary_symbols"
            | "binary_mid_symbols"
            | "differential_symbols"
            | "separator_symbols"
            | "big_equal_symbols"
            | "unary_frozen_symbols"
            | "right_associative_operators"
            | "color" => {
                let child_node = node.child(0).expect("Cannot get first child of bracket!");
                let token = child_node.kind();
                self.get_tex(node.kind(), token)
            }
            _ => {
                if node.named_child_count() == 0 && node.child_count() > 0 {
                    // Handle terminal nodes with children (like symbols)
                    let child = node.child(0).unwrap();
                    let token_type = node.kind();
                    let token = child.kind();
                    self.get_tex(token_type, token)
                } else if node.named_child_count() == 1 {
                    // Handle wrapper nodes
                    self.to_latex(node.named_child(0).unwrap(), source)
                } else {
                    // Err(format!("Unhandled node type: {}", node.kind()))
                    Ok(node.kind().to_string())
                }
            }
        }
    }

    fn source_file_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let mut result = String::new();
        let mut cursor = node.walk();

        if cursor.goto_first_child() {
            loop {
                let child = cursor.node();
                result.push_str(&self.to_latex(child, source)?);
                if !cursor.goto_next_sibling() {
                    break;
                }
                result.push(' ');
            }
        }

        Ok(result)
    }

    fn superscript_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let base = self.to_latex(node.child(0).ok_or("Missing base in superscript")?, source)?;
        let sup = self._trim_paren(node.child(2).ok_or("Missing superscript")?, source)?;
        Ok(format!("{}^{{{}}}", base, sup))
    }

    fn subscript_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let base = self.to_latex(node.child(0).ok_or("Missing base in subscript")?, source)?;
        let sub = self._trim_paren(node.child(2).ok_or("Missing subscript")?, source)?;
        Ok(format!("{}_{{{}}}", base, sub))
    }

    fn subscript_superscript_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let base = self.to_latex(node.child(0).ok_or("Missing base in sub/sup")?, source)?;
        let op1_kind = node.child(1).ok_or("Missing first operator")?.kind();
        let expr1 = self._trim_paren(node.child(2).ok_or("Missing first expression")?, source)?;
        let op2_kind = node.child(3).ok_or("Missing second operator")?.kind();
        let expr2 = self._trim_paren(node.child(4).ok_or("Missing second expression")?, source)?;

        if op1_kind == "^" && op2_kind == "_" {
            Ok(format!("{}_{{{}}}^{{{}}}", base, expr2, expr1))
        } else if op1_kind == "_" && op2_kind == "^" {
            Ok(format!("{}_{{{}}}^{{{}}}", base, expr1, expr2))
        } else {
            Err("Invalid sub/superscript combination".to_string())
        }
    }

    fn bracket_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        if node.named_child_count() < 2 {
            return Err("Invalid bracket expression".to_string());
        }

        let left = self.to_latex(node.child(0).ok_or("Missing left bracket")?, source)?;
        let right = self.to_latex(
            node.child(node.child_count() - 1)
                .ok_or("Missing right bracket")?,
            source,
        )?;

        let mut contents = String::new();
        for i in 1..node.child_count() - 1 {
            if !contents.is_empty() {
                contents.push(' ');
            }
            contents.push_str(&self.to_latex(node.child(i).ok_or("Missing content")?, source)?);
        }

        if left.trim() == "." && right.trim() == "." {
            Ok(format!("{{{}}}", contents))
        } else {
            Ok(format!("\\left{}{}\\right{}", left, contents, right))
        }
    }

    fn unary_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let op_node = node
            .child(0)
            .ok_or("Missing operator in unary expression")?;
        let expr_node = node
            .child(1)
            .ok_or("Missing expression in unary expression")?;

        let op = self.to_latex(op_node, source)?;
        let expr = self._trim_paren(expr_node, source)?;

        // Get the actual token for template lookup
        let token_node = op_node.child(0).ok_or("Missing token in operator")?;
        let token = token_node.kind();

        if let Some(symbol_entry) = self.symbol_config.unary_symbols.get(token) {
            if let Some(template) = &symbol_entry.template {
                return Ok(template.replace("$0", &op).replace("$1", &expr));
            }
        }

        Ok(format!("{}{{{}}}", op, expr))
    }

    fn unary_frozen_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let op_node = node
            .child(0)
            .ok_or("Missing operator in unary frozen expression")?;
        let op = self.to_latex(op_node, source)?;

        // Get the actual token for template lookup
        let token_node = op_node.child(0).ok_or("Missing token in operator")?;
        let token = token_node.kind();

        let expr = if node.child_count() == 2 {
            // literal string case
            let expr_node = node
                .child(1)
                .ok_or("Missing expression in unary frozen expression")?;
            let text =
                String::from_utf8_lossy(&source[expr_node.start_byte()..expr_node.end_byte()])
                    .to_string();
            // Remove surrounding quotes
            text[1..text.len() - 1].to_string()
        } else {
            // Using exact string
            let expr_node = node
                .child(2)
                .ok_or("Missing expression in unary frozen expression")?;
            String::from_utf8_lossy(&source[expr_node.start_byte()..expr_node.end_byte()])
                .to_string()
        };

        if let Some(symbol_entry) = self.symbol_config.unary_frozen_symbols.get(token) {
            if let Some(template) = &symbol_entry.template {
                return Ok(template.replace("$0", &op).replace("$1", &expr));
            }
        }

        Ok(format!("{}{{{}}}", op, expr))
    }

    fn color_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let color = if node.child_count() == 3 {
            // literal string case
            let color_node = node.child(1).ok_or("Missing color in color expression")?;
            let text =
                String::from_utf8_lossy(&source[color_node.start_byte()..color_node.end_byte()])
                    .to_string();
            // Remove surrounding quotes
            text[1..text.len() - 1].to_string()
        } else {
            // Using exact color string
            let color_node = node.child(2).ok_or("Missing color in color expression")?;
            String::from_utf8_lossy(&source[color_node.start_byte()..color_node.end_byte()])
                .to_string()
        };

        let expr_node = node
            .child(node.child_count() - 1)
            .ok_or("Missing expression in color expression")?;
        let expr = self._trim_paren(expr_node, source)?;

        Ok(format!("{{\\color{{{}}}{}}}", color, expr))
    }

    fn binary_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let op_node = node
            .child(0)
            .ok_or("Missing operator in binary expression")?;
        let left_node = node
            .child(1)
            .ok_or("Missing left operand in binary expression")?;
        let right_node = node
            .child(2)
            .ok_or("Missing right operand in binary expression")?;

        let op = self.to_latex(op_node, source)?;
        let left = self._trim_paren(left_node, source)?;
        let right = self._trim_paren(right_node, source)?;

        // Get the actual token for template lookup
        let token_node = op_node.child(0).ok_or("Missing token in operator")?;
        let token = token_node.kind();

        if let Some(symbol_entry) = self.symbol_config.binary_symbols.get(token) {
            if let Some(template) = &symbol_entry.template {
                return Ok(template
                    .replace("$0", &op)
                    .replace("$1", &left)
                    .replace("$2", &right));
            }
        }

        Ok(format!("{}{{{}}}{{{}}}", op, left, right))
    }

    fn binary_frac_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let left = self._trim_paren(node.child(0).ok_or("Missing numerator")?, source)?;
        let right = self._trim_paren(node.child(2).ok_or("Missing denominator")?, source)?;
        Ok(format!("\\frac{{{}}}{{{}}}", left, right))
    }

    fn factorial_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let expr = self.to_latex(
            node.child(0)
                .ok_or("Missing expression in factorial expression")?,
            source,
        )?;
        let factorial =
            self.to_latex(node.child(1).ok_or("Missing factorial operator")?, source)?;
        Ok(format!("{}{}", expr, factorial))
    }

    fn differential_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let diff = self.to_latex(
            node.child(0).ok_or("Missing differential operator")?,
            source,
        )?;

        let mut copy_super = true;
        let (sup, up_str, down_str) = if node.child_count() == 3 {
            // No superscript case
            let up = self._trim_paren(node.child(1).ok_or("Missing upper expression")?, source)?;
            let down =
                self._trim_paren(node.child(2).ok_or("Missing lower expression")?, source)?;
            (None, up, down)
        } else {
            // With superscript case
            let sup = Some(self._trim_paren(node.child(2).ok_or("Missing superscript")?, source)?);
            let up = self._trim_paren(node.child(3).ok_or("Missing upper expression")?, source)?;
            let down_node = node.child(4).ok_or("Missing lower expression")?;
            let down_child = down_node
                .child(0)
                .ok_or("Cannot get the first child of down expr")?;
            let down = if down_child.kind() == "bracket_expr" && down_child.child_count() > 3 {
                copy_super = false;
                let mut contents = Vec::new();
                for i in 1..down_child.child_count() - 1 {
                    let child = down_child
                        .child(i)
                        .ok_or("Cannot get child of bracket_expr")?;
                    contents.push(self.to_latex(child, source)?);
                }
                contents
                    .into_iter()
                    .map(|d| format!("{} {}", diff, d))
                    .collect::<Vec<_>>()
                    .join(" ")
            } else {
                self._trim_paren(down_node, source)?
            };
            (sup, up, down)
        };

        if let Some(sup_val) = sup {
            if copy_super {
                Ok(format!(
                    "\\frac{{{}^{{{}}} {}}}{{{} {}^{{{}}}}}",
                    diff, sup_val, up_str, diff, down_str, sup_val
                ))
            } else {
                Ok(format!(
                    "\\frac{{{}^{{{}}} {}}}{{{}}}",
                    diff, sup_val, up_str, down_str
                ))
            }
        } else {
            Ok(format!(
                "\\frac{{{} {}}}{{{} {}}}",
                diff, up_str, diff, down_str
            ))
        }
    }

    fn simple_expression_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let child = node.child(0).ok_or("Missing child in simple expression")?;
        self.to_latex(child, source)
    }

    fn matrix_row_to_list_with_bar_detection(
        &self,
        node: Node,
        source: &[u8],
    ) -> (Vec<String>, Vec<usize>) {
        let mut row: Vec<String> = Vec::new();
        let mut bar_positions: Vec<usize> = Vec::new();
        let mut current_col = 0;
        let mut temp_cell: Vec<String> = Vec::new();

        for idx in 1..node.child_count() - 1 {
            let child = node
                .child(idx)
                .ok_or(format!("Cannot find child at index {}", idx))
                .expect("Cannot get the result of child");
            if child.kind() == "," {
                if temp_cell.len() > 0 {
                    row.push(temp_cell.join(" "));
                    current_col += 1;
                }
                temp_cell.clear();
            } else {
                let cc = child
                    .child(0)
                    .ok_or(format!("Cannot find cc at index {}", idx))
                    .expect("Cannot get the result of sub children");
                if cc.kind() == "math_operators"
                    && cc.child_count() == 1
                    && cc
                        .child(0)
                        .ok_or("Cannot find the vbar")
                        .expect("Cannot get the result")
                        .kind()
                        == "vbar"
                {
                    bar_positions.push(current_col);
                    println!("Detected bar at {}", current_col);
                }
                temp_cell.push(self.to_latex(child, source).expect("Cannot parse to latex"));
            }
        }

        if node.child_count() >= 3 {
            let child = node
                .child(node.child_count() - 2)
                .ok_or("Cannot find the last child")
                .expect("Cannot get the result of last child");
            let cc = child
                .child(0)
                .ok_or("Cannot find cc at index -2")
                .expect("Cannot get the child at index -2");
            if cc.kind() == "math_operator"
                && cc.child_count() == 1
                && cc
                    .child(0)
                    .ok_or("Cannot find the vbar")
                    .expect("Cannot get the result of vbar")
                    .kind()
                    == "vbar"
            {
                bar_positions.push(current_col);
                temp_cell.push(self.to_latex(cc, source).expect("Cannot parse to latex"));
            }

            if temp_cell.len() > 0 {
                row.push(temp_cell.join(" "));
            }
        }

        (row, bar_positions)
    }

    fn _check_is_separated_matrix(
        &self,
        rows_data: Vec<Vec<String>>,
        all_bar_positions: Vec<usize>,
    ) -> (Vec<Vec<String>>, Option<Vec<usize>>) {
        if all_bar_positions.len() == 0 {
            return (rows_data, None);
        }
        let mut rows_data = rows_data;
        let mut unique_bar_positions = all_bar_positions;
        unique_bar_positions.dedup();
        unique_bar_positions.sort_by(|a, b| b.cmp(a));
        let unique_bar_positions: Vec<usize> = unique_bar_positions;
        let mut real_bar_pos: Vec<usize> = Vec::new();
        for bar_pos in unique_bar_positions {
            let mut flag = true;
            for row in rows_data.iter() {
                if let Some(maybe_bar) = row.get(bar_pos) {
                    if maybe_bar != "|" {
                        flag = false;
                        break;
                    }
                };
            }
            if flag {
                // 修复：使用 iter_mut() 而不是直接 move rows_data
                for row in rows_data.iter_mut() {
                    if row.len() > bar_pos {
                        row.remove(bar_pos);
                    }
                }
                real_bar_pos.push(bar_pos);
            }
        }
        real_bar_pos.sort();
        (rows_data, Some(real_bar_pos))
    }

    fn matrix_single_row_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let lb = self.to_latex(node.child(0).ok_or("Missing left bracket")?, source)?;
        let rb = self.to_latex(
            node.child(node.child_count() - 1)
                .ok_or("Missing right bracket")?,
            source,
        )?;

        let row_node = node.child(1).ok_or("Missing row node")?;
        if row_node.kind() != "matrix_row_expr" {
            return Err("Expected matrix_row_expr".to_string());
        }

        let mut rows_data: Vec<Vec<String>> = Vec::new();
        let mut all_bar_positions = Vec::new();
        let (row_cells, mut bar_positions) =
            self.matrix_row_to_list_with_bar_detection(row_node, source);
        let max_cols = row_cells.len();
        rows_data.push(row_cells);
        all_bar_positions.append(&mut bar_positions);

        let align = if lb.trim() == "\\lbrace" && rb.trim() == "." {
            "l"
        } else {
            "c"
        };
        let (rows_data, real_bar_pos) =
            self._check_is_separated_matrix(rows_data, all_bar_positions);
        let col_spec_str = if let Some(real_bar_pos) = real_bar_pos {
            let mut col_spec = Vec::new();
            for i in 0..max_cols {
                if real_bar_pos.contains(&i) {
                    col_spec.push(format!("{}|", align));
                } else {
                    col_spec.push(align.to_owned());
                }
            }
            col_spec.join("")
        } else {
            align.repeat(max_cols)
        };

        Ok(format!(
            "\\left{}\\begin{{array}}{{{}}} {} \\end{{array}}\\right{}",
            lb,
            col_spec_str,
            rows_data
                .into_iter()
                .map(|row| { row.join(" & ") })
                .collect::<Vec<_>>()
                .join(" \\\\ "),
            rb
        ))
    }

    fn matrix_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let lb = self.to_latex(node.child(0).ok_or("Missing left bracket")?, source)?;
        let rb = self.to_latex(
            node.child(node.child_count() - 1)
                .ok_or("Missing right bracket")?,
            source,
        )?;

        let align = if lb.trim() == "\\lbrace" && rb.trim() == "." {
            "l"
        } else {
            "c"
        };

        let mut rows_data = Vec::new();
        let mut all_bar_poss = Vec::new();

        for idx in 1..node.child_count() - 1 {
            let child = node.child(idx).ok_or("Cannot find child")?;
            if child.kind() == "matrix_row_expr" {
                let (row_cells, mut bar_poss) =
                    self.matrix_row_to_list_with_bar_detection(child, source);
                rows_data.push(row_cells);
                all_bar_poss.append(&mut bar_poss);
            }
        }

        let (rows_data, real_bar_pos) = self._check_is_separated_matrix(rows_data, all_bar_poss);
        let max_cols = rows_data
            .iter()
            .map(|row| row.len())
            .max()
            .ok_or("Cannot get the max_value")?;
        let col_spec_str = if let Some(real_bar_pos) = real_bar_pos {
            let mut col_spec = Vec::new();
            for i in 0..max_cols {
                if real_bar_pos.contains(&i) {
                    col_spec.push(format!("|{}", align));
                } else {
                    col_spec.push(align.to_owned());
                }
            }
            col_spec.join("")
        } else {
            align.repeat(max_cols)
        };

        Ok(format!(
            "\\left{}\\begin{{array}}{{{}}} {} \\end{{array}}\\right{}",
            lb,
            col_spec_str,
            rows_data
                .into_iter()
                .map(|row| { row.join(" & ") })
                .collect::<Vec<_>>()
                .join(" \\\\ "),
            rb
        ))
    }

    fn det_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let lbar = self.to_latex(node.child(0).ok_or("Missing left bar")?, source)?;
        let rbar = self.to_latex(
            node.child(node.child_count() - 1)
                .ok_or("Missing right bar")?,
            source,
        )?;

        let mut rows = Vec::new();

        for i in 1..node.child_count() - 1 {
            let child = node.child(i).ok_or("Missing child in determinant")?;
            if child.kind() == "matrix_row_expr" {
                let mut row_data = Vec::new();
                for j in 1..child.child_count() - 1 {
                    let row_child = child.child(j).ok_or("Missing child in row")?;
                    if row_child.kind() != "," {
                        row_data.push(self.to_latex(row_child, source)?);
                    }
                }
                rows.push(row_data);
            }
        }

        let col_count = rows.first().map_or(0, |r| r.len());
        let col_spec = "c".repeat(col_count);

        let row_strings: Vec<String> = rows.into_iter().map(|row| row.join(" & ")).collect();

        Ok(format!(
            "\\left{}\\begin{{array}}{{{}}} {} \\end{{array}}\\right{}",
            lbar,
            if col_spec.is_empty() {
                "c".to_string()
            } else {
                col_spec
            },
            row_strings.join(" \\\\ "),
            rbar
        ))
    }

    fn big_equal_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let op_node = node
            .child(0)
            .ok_or("Missing operator in big equal expression")?;
        let op = self.to_latex(op_node, source)?;

        // Get the actual token for template lookup
        let token_node = op_node.child(0).ok_or("Missing token in operator")?;
        let token = token_node.kind();

        let symbol_entry = self
            .symbol_config
            .big_equal_symbols
            .get(token)
            .ok_or_else(|| format!("Unknown token: {} in big_equal_symbols", token))?;
        let template = symbol_entry
            .template
            .as_ref()
            .ok_or_else(|| format!("Missing template for token: {}", token))?;

        let (sup, sub) = match node.child_count() {
            1 => (None, None),
            3 => {
                let sub_or_sup = node.child(1).ok_or("Missing sub/sup indicator")?.kind();
                let expr = self._trim_paren(node.child(2).ok_or("Missing expression")?, source)?;
                if sub_or_sup == "_" {
                    (None, Some(expr))
                } else if sub_or_sup == "^" {
                    (Some(expr), None)
                } else {
                    return Err(format!("Unexpected sub_or_sup: {}", sub_or_sup));
                }
            }
            5 => {
                let second_node_kind = node.child(1).ok_or("Missing second node")?.kind();
                let fourth_node_kind = node.child(3).ok_or("Missing fourth node")?.kind();

                if second_node_kind == "_" && fourth_node_kind == "^" {
                    let sub_expr =
                        self._trim_paren(node.child(2).ok_or("Missing sub expression")?, source)?;
                    let sup_expr =
                        self._trim_paren(node.child(4).ok_or("Missing sup expression")?, source)?;
                    (Some(sup_expr), Some(sub_expr))
                } else if second_node_kind == "^" && fourth_node_kind == "_" {
                    let sup_expr =
                        self._trim_paren(node.child(2).ok_or("Missing sup expression")?, source)?;
                    let sub_expr =
                        self._trim_paren(node.child(4).ok_or("Missing sub expression")?, source)?;
                    (Some(sup_expr), Some(sub_expr))
                } else {
                    return Err(format!(
                        "Unexpected combination: {} and {}",
                        second_node_kind, fourth_node_kind
                    ));
                }
            }
            _ => {
                return Err(format!(
                    "Unexpected number of children: {}",
                    node.child_count()
                ))
            }
        };

        let result = template
            .replace("$0", &op)
            .replace("$1", &sup.unwrap_or_default())
            .replace("$2", &sub.unwrap_or_default());

        Ok(result)
    }

    fn right_associative_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let op = self.to_latex(
            node.child(0)
                .ok_or("Missing operator in right associative expression")?,
            source,
        )?;
        let expr = self.to_latex(
            node.child(1)
                .ok_or("Missing expression in right associative expression")?,
            source,
        )?;
        Ok(format!("{} {}", op, expr))
    }

    fn multiline_expr_to_latex(&self, node: Node, source: &[u8]) -> Result<String, String> {
        let mut rows = Vec::new();
        let mut current_row = Vec::new();

        for i in 0..node.child_count() {
            let child = node
                .child(i)
                .ok_or("Missing child in multiline expression")?;
            if child.kind() == "multi_linebreak" {
                rows.push(current_row.join(" "));
                current_row = Vec::new();
            } else {
                current_row.push(self.to_latex(child, source)?);
            }
        }

        if !current_row.is_empty() {
            rows.push(current_row.join(" "));
        }

        Ok(format!(
            "\\begin{{aligned}} {} \\end{{aligned}}",
            rows.join(" \\\\ ")
        ))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

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

        // Load test cases from JSON file
        let test_cases_content = include_str!("../test_cases/common_cases.jsonc");

        // Remove comments (lines starting with //)
        let lines: Vec<&str> = test_cases_content
            .lines()
            .filter(|line| !line.trim().starts_with("//"))
            .collect();

        let clean_json = lines.join("\n");
        let test_cases: Vec<TestCase> =
            serde_json::from_str(&clean_json).expect("Failed to parse test cases");

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
