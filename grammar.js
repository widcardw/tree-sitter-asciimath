/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const my_precs = {
  str: 30,
  factorial: 29,
  det: 28,
  bigEqual: 27,
  supsub: 26,
  binary_frac: 25,
  sup_or_sub: 20,
  diffential: 18,
  binary: 17,
  unary: 16,
  multiline: 12,
  matrix: 10,
  matrix_row: 9,
  bracket: 8,
  concat: 7,
};

// 导入所有identifier
const identifiers = require('./identifiers/index.js');
const categorizedSymbols = require('./identifiers/categorized.js');

module.exports = grammar({
  name: "asciimath",
  extras: $ => [$._whitespace],
  conflicts: $ => [
    [$._expression],
    [$.matrix_row_expr, $.bracket_expr],
  ],
  rules: {
    source_file: $ => optional(choice($._expression, $.multiline_expr)),

    _expression: $ => prec.dynamic(-1,
      seq(
        $._intermediate_expression,
        repeat($._expression),
      )),

    // inject all the identifiers
    ...identifiers,

    // categorize all the identifiers, so that we will not enumerate all the choices in grammar.js
    ...categorizedSymbols,

    // Whitespace and delimiters
    multi_linebreak: $ => /(\r?\n){2,}/,
    _whitespace: $ => /\s+|\r?\n|\t/,

    // multiline expression
    multiline_expr: $ => prec.left(
      my_precs.multiline,
      seq(
        $._expression,
        repeat1(seq($.multi_linebreak, $._expression))
      )
    ),

    // String literals
    literal_string: $ =>
      prec.left(
        my_precs.str,
        seq(
          '"',
          repeat(
            choice(
              alias($.unescaped_double_string_fragment, $.string_fragment),
              $.escape_sequence,
            ),
          ),
          '"',
        ),
      ),

    unescaped_double_string_fragment: (_) =>
      token.immediate(prec(1, /[^"\\\r\n]+/)),

    escape_sequence: (_) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u\{[0-9a-fA-F]+\}/,
            /[\r?][\n\u2028\u2029]/,
          ),
        ),
      ),

    // Bracket expressions
    bracket_expr: $ => seq($.left_bracket, optional($._expression), $.right_bracket),

    // Matrix expressions
    matrix_row_expr: $ =>
      prec.dynamic(
        my_precs.matrix_row,
        seq(
          $.left_bracket,
          $._expression,
          repeat(seq(",", $._expression)),
          $.right_bracket,
        ),
      ),

    matrix_expr: $ =>
      seq(
        $.left_bracket,
        $.matrix_row_expr, repeat1(seq(",", $.matrix_row_expr)),
        $.right_bracket,
      ),

    det_expr: $ =>
      prec.left(
        my_precs.det,
        choice(
          seq(
            '|',
            seq($.matrix_row_expr, repeat1(seq(",", $.matrix_row_expr))),
            '|',
          ),
          seq(
            '||',
            seq($.matrix_row_expr, repeat1(seq(",", $.matrix_row_expr))),
            '||',
          )
        ),
      ),

    // Unary expressions
    unary_expr: $ =>
      prec.left(
        my_precs.unary,
        seq(
          $.unarySymbols,
          $.simple_expression,
        ),
      ),

    inner_frozen: _ => token.immediate(prec(1, /[^\)]+/)),

    unaryFrozen_expr: $ => prec.left(
      my_precs.unary,
      seq(
        $.unaryFrozenSymbols,
        choice(
          $.literal_string,
          seq($.left_bracket, $.inner_frozen, $.right_bracket)
        )
      )
    ),

    color_expr: $ => prec.left(
      my_precs.binary,
      seq(
        "color",
        choice(
          $.literal_string,
          seq($.left_bracket, $.inner_frozen, $.right_bracket)
        ),
        $.simple_expression,
      )
    ),

    // Binary expressions
    binary_expr: $ =>
      prec.left(
        my_precs.binary,
        seq(
          $.binarySymbols,
          $.simple_expression,
          $.simple_expression,
        ),
      ),

    // Fraction expressions (special case)
    binary_frac: $ =>
      prec.left(
        my_precs.binary_frac,
        seq($._intermediate_expression, $.binaryMidSymbols, $._intermediate_expression),
      ),

    factorial_expr: $ =>
      prec.left(
        my_precs.factorial,
        seq($.simple_expression, $.factorialSymbols),
      ),

    differential_expr: $ =>
      prec.left(
        my_precs.diffential,
        seq(
          $.differentialSymbols,
          optional(seq("^", $.simple_expression)),
          $.simple_expression,
          $.simple_expression,
        ),
      ),

    bigEqual_expr: $ => prec.left(
      my_precs.bigEqual,
      choice(
        seq(
          $.bigEqualSymbols,
          optional(seq("^", $.simple_expression)),
          optional(seq("_", $.simple_expression)),
        ),
        seq(
          $.bigEqualSymbols,
          optional(seq("_", $.simple_expression)),
          optional(seq("^", $.simple_expression)),
        ),
      )
    ),

    // Simple expressions (automatically import)
    // and complex expression (e.g., unary_expr, binary_expr, factorial_expr, matrix_expr) injection
    simple_expression: $ => choice(
      $.number_symbol,
      $.identifier,
      // categorized
      $.logicSymbols,
      $.greekLetters,
      $.mathConstants,
      $.setOperators,
      $.mathOperators,
      $.asciiEscape,
      $.miscSymbols,
      $.separatorSymbols,
      // complex expressions
      $.unary_expr,
      $.binary_expr,
      $.factorial_expr,
      $.differential_expr,
      $.matrix_expr,
      $.det_expr,
      $.literal_string,
      $.bracket_expr,
      $.binary_frac,
      // 需要将下一个 expression 直接以原格式接收的表达式
      $.unaryFrozen_expr,
      $.color_expr,
    ),

    // Subscript and superscript
    subscript: $ =>
      prec.left(
        my_precs.sup_or_sub,
        seq($.simple_expression, "_", $.simple_expression),
      ),

    superscript: $ =>
      prec.left(
        my_precs.sup_or_sub,
        seq($.simple_expression, "^", $.simple_expression),
      ),

    subscript_superscript: $ =>
      prec.left(
        my_precs.supsub,
        choice(
          seq(
            $.simple_expression,
            "_",
            $.simple_expression,
            "^",
            $.simple_expression,
          ),
          seq(
            $.simple_expression,
            "^",
            $.simple_expression,
            "_",
            $.simple_expression,
          ),
        ),
      ),

    // Intermediate expressions
    _intermediate_expression: $ =>
      choice(
        $.subscript,
        $.superscript,
        $.subscript_superscript,
        $.simple_expression,

        // bigEqual_expr should not be in simple_expression,
        // otherwise super and sub script will be matched first
        $.bigEqual_expr,
      ),

    // Concatenation
    concatenation: $ =>
      prec.left(my_precs.concat, seq($._intermediate_expression, $._expression)),
  },
});
