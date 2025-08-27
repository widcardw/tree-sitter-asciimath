module.exports = grammar({
	name: "asciimath",
	extras: ($) => [$._whitespace],
	rules: {
		source_file: ($) => repeat(choice($._expression, $.multi_linebreak)),

		_expression: ($) =>
			choice($.binary_frac, $.concatenation, $.intermediate_expression),

		number_symbol: ($) => /\d+(\.\d+)?/,
		italic_symbol: ($) =>
			choice(
				// 希腊字母（小写）
				"alpha",
				"beta",
				"gamma",
				"delta",
				"epsilon",
				"zeta",
				"eta",
				"theta",
				"iota",
				"kappa",
				"lambda",
				"mu",
				"nu",
				"xi",
				"omicron",
				"pi",
				"rho",
				"sigma",
				"tau",
				"upsilon",
				"phi",
				"chi",
				"psi",
				"omega",

				// 希腊字母（大写）
				"Alpha",
				"Beta",
				"Gamma",
				"Delta",
				"Epsilon",
				"Zeta",
				"Eta",
				"Theta",
				"Iota",
				"Kappa",
				"Lambda",
				"Mu",
				"Nu",
				"Xi",
				"Omicron",
				"Pi",
				"Rho",
				"Sigma",
				"Tau",
				"Upsilon",
				"Phi",
				"Chi",
				"Psi",
				"Omega",

				// 数学常量
				"pi",
				"infty",
				"hbar",
				"ell",
				"Re",
				"Im",
				"aleph",
				"nabla",
				"partial",
				"forall",
				"exists",
				"emptyset",
				"grad",
				"del",
				"pm",
				"mp",
			),
		math_op: ($) =>
			choice(
				"+",
				"-",
				"*",
				"=",
				"<",
				">",
				"lt",
				"gt",
				">=",
				"<=",
				"=>",
				"=/=>",
				"~>",
				"-/->",
				"<-/-",
				"<-/->",
				"<==",
				"<=>",
				"<=/=>",
				"AA",
				"EE",
				"_|_",
				"TT",
				"|--",
				"|==",
			),

		constant_symbol: ($) =>
			choice(
				$.italic_symbol,

				/[A-Za-z]+/,
				$.number_symbol,

				/[+\-*=><]/,
			),
		unary_symbol: ($) =>
			choice(
				"sqrt",
				"text",
				"bb",
				"cc",
				"tt",
				"fr",
				"sf",
				"bold",
				"cal",
				"frak",
				"monospace",
				"italic",
			),
		binary_symbol: ($) =>
			choice("frac", "root", "stackrel", "choose", "atop", "over"),
		suffix_symbol: ($) => choice("!", "!!"),
		multi_linebreak: ($) => /(\r?\n){2,}/,
		_whitespace: ($) => /\s+|\r?\n|\t /,

		literal_string: ($) =>
			prec.left(
				10,
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

		left_bracket: ($) => choice("(", "[", "{", "{:", "(:"),
		right_bracket: ($) => choice(")", "]", "}", ":}", ":)"),

		bracket_expr: ($) =>
			prec(5, seq($.left_bracket, $._expression, $.right_bracket)),

		matrix_row_expr: ($) =>
			prec.left(
				6,
				seq(
					$.left_bracket,
					$._expression,
					repeat(seq(",", $._expression)),
					$.right_bracket,
				),
			),

		matrix_expr: ($) =>
			prec.left(
				6,
				seq(
					$.left_bracket,
					seq($.matrix_row_expr, repeat(seq(",", $.matrix_row_expr))),
					$.right_bracket,
				),
			),

		other_matrix_row_expr: ($) =>
			seq($._expression, repeat(seq(",", $._expression))),

		other_matrix_expr: ($) =>
			prec.left(
				7,
				seq(
					$.left_bracket,
					$.other_matrix_row_expr,
					repeat(seq(";", $.other_matrix_row_expr)),
					$.right_bracket,
				),
			),

		unary_expr: ($) => prec.left(4, seq($.unary_symbol, $.simple_expression)),

		binary_expr: ($) =>
			prec.left(
				3,
				seq($.binary_symbol, $.simple_expression, $.simple_expression),
			),

		binary_frac: ($) =>
			prec.left(
				2,
				seq($.intermediate_expression, "/", $.intermediate_expression),
			),

		simple_expression: ($) =>
			choice(
				$.constant_symbol,
				$.literal_string,
				$.unary_expr,
				$.bracket_expr,
				$.binary_expr,
				$.matrix_expr,
				$.other_matrix_expr,
			),

		subscript: ($) =>
			prec.left(3, seq($.simple_expression, "_", $.simple_expression)),

		superscript: ($) =>
			prec.left(3, seq($.simple_expression, "^", $.simple_expression)),

		subscript_superscript: ($) =>
			prec.left(
				4,
				seq(
					$.simple_expression,
					"_",
					$.simple_expression,
					"^",
					$.simple_expression,
				),
			),

		intermediate_expression: ($) =>
			choice(
				$.subscript,
				$.superscript,
				$.subscript_superscript,
				$.simple_expression,
			),

		concatenation: ($) =>
			prec.left(1, seq($.intermediate_expression, $._expression)),
	},
});
