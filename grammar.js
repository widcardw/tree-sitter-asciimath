const my_precs = {
  str: 25,
  factorial: 24,
  supsub: 20,
  binary_frac: 20,
  sup_or_sub: 19,
  bracket: 18,
  diffential: 17,
  binary: 16,
  unary: 15,
  concat: 11,
  matrix_row: 10,
  matrix: 9,
};

// 导入所有identifier
const identifiers = require('./identifiers');
const { buildSimpleExpression } = require('./utils/expression-builder');

module.exports = grammar({
  name: "asciimath",
  extras: $ => [$._whitespace],
  rules: {
    source_file: $ => repeat(choice($._expression, $.multi_linebreak)),

    _expression: $ =>
      choice($.binary_frac, $.concatenation, $.intermediate_expression),

    // Numbers and identifiers
    number_symbol: $ => /\d+(\.\d+)?/,
    identifier: $ => /[A-Za-z]+/,

    // 导入所有identifiers
    ...identifiers,

    // Whitespace and delimiters
    multi_linebreak: $ => /(\r?\n){2,}/,
    _whitespace: $ => /\s+|\r?\n|\t/,

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

    // Brackets
    left_bracket: $ => choice("(", "[", "{", "{:", ":(", "|__", '|~',),
    right_bracket: $ => choice(")", "]", "}", ":}", ":)", "__|", '~|',),

    // Bracket expressions
    bracket_expr: $ =>
      prec(
        my_precs.bracket,
        seq($.left_bracket, $._expression, $.right_bracket),
      ),

    // Matrix expressions
    matrix_row_expr: $ =>
      prec.left(
        my_precs.matrix_row,
        seq(
          $.left_bracket,
          $._expression,
          repeat(seq(",", $._expression)),
          $.right_bracket,
        ),
      ),

    matrix_expr: $ =>
      prec.left(
        my_precs.matrix,
        seq(
          $.left_bracket,
          seq($.matrix_row_expr, repeat(seq(",", $.matrix_row_expr))),
          $.right_bracket,
        ),
      ),

    // Unary expressions
    unary_expr: $ =>
      prec.left(
        my_precs.unary,
        seq(
          choice(
            $.sqrt,
            $.text,
            $.bb,
            $.cc,
            $.tt,
            $.fr,
            $.sf,
            $.bold,
            $.cal,
            $.frak,
            $.mono,
            $.italic,
          ),
          $.simple_expression,
        ),
      ),

    // Binary expressions
    binary_expr: $ =>
      prec.left(
        my_precs.binary,
        seq(
          choice($.frac, $.root, $.stackrel, $.choose, $.atop, $.over),
          $.simple_expression,
          $.simple_expression,
        ),
      ),

    // Fraction expressions (special case)
    binary_frac: $ =>
      prec.left(
        my_precs.binary_frac,
        seq($.intermediate_expression, "/", $.intermediate_expression),
      ),

    factorial_expr: $ =>
      prec.left(
        my_precs.factorial,
        seq($.simple_expression, choice($.double_factorial, $.factorial)),
      ),

    differential_expr: $ =>
      prec.left(
        my_precs.diffential,
        seq(
          choice($.dd, $.pp),
          optional(seq("^", $.simple_expression)),
          $.simple_expression,
          $.simple_expression,
        ),
      ),

    // Simple expressions (automatically import)
    // and complex expression (e.g., unary_expr, binary_expr, factorial_expr, matrix_expr) injection
    simple_expression: $ => choice(...buildSimpleExpression($)),

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
    intermediate_expression: $ =>
      choice(
        $.subscript,
        $.superscript,
        $.subscript_superscript,
        $.simple_expression,
      ),

    // Concatenation
    concatenation: $ =>
      prec.left(my_precs.concat, seq($.intermediate_expression, $._expression)),
  },
});
