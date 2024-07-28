module.exports = grammar({
  name: 'asciimath',
  extras: $ => [$._whitespace],
  rules: {
    source_file: $ => repeat(choice($.intermediate_expression, $.multi_linebreak)),

    constant_symbol: $ => /[A-Za-z0-9]+/,
    unary_symbol: $ => "bb",
    binary_symbol: $ => "frac",
    suffix_symbol: $ => choice('!', '!!'),
    multi_linebreak: $ => /(\r?\n){2,}/,
    _whitespace: $ => /\s+|\r?\n|\t /,

    literal_string: $ => seq(
      '"',
      repeat(choice(
        alias($.unescaped_double_string_fragment, $.string_fragment),
        $.escape_sequence,
      )),
      '"'
    ),

    unescaped_double_string_fragment: _ => token.immediate(prec(1, /[^"\\\r\n]+/)),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/,
        /[\r?][\n\u2028\u2029]/,
      ),
    )),

    left_bracket: $ => choice('(', '[', '{', '{:', '(:'),
    right_bracket: $ => choice(')', ']', '}', ':}', ':)'),

    simple_expression: $ => choice(
      $.constant_symbol,
      $.literal_string,
      seq(
        $.left_bracket,
        $.simple_expression,
        $.right_bracket,
      ),
      // seq(
      //   $.unary_symbol,
      //   $.simple_expression,
      // ),
      // seq(
      //   $.binary_symbol,
      //   $.simple_expression,
      //   $.simple_expression,
      // )
    ),

    intermediate_expression: $ => choice(
      seq($.simple_expression, '_', $.simple_expression),
      seq($.simple_expression, '^', $.simple_expression),
      seq($.simple_expression, '_', $.simple_expression, '^', $.simple_expression),
      $.simple_expression,
    ),

    _expression: $ => choice(
      $.intermediate_expression,
      // seq($.intermediate_expression, $._expression),
      // seq($.intermediate_expression, '/', $.intermediate_expression),
    ),
  }
})
