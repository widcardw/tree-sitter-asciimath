module.exports = grammar({
	name: "asciimath",
	extras: ($) => [$._whitespace],
	rules: {
		source_file: ($) => repeat(choice($._expression, $.multi_linebreak)),

		_expression: ($) =>
			choice($.binary_frac, $.concatenation, $.intermediate_expression),

		// Numbers and identifiers
		number_symbol: ($) => /\d+(\.\d+)?/,
		identifier: ($) => /[A-Za-z]+/,

		// Greek letters (lowercase)
		alpha: ($) => "alpha",
		beta: ($) => "beta",
		gamma: ($) => "gamma",
		delta: ($) => "delta",
		epsilon: ($) => "epsilon",
		zeta: ($) => "zeta",
		eta: ($) => "eta",
		theta: ($) => "theta",
		iota: ($) => "iota",
		kappa: ($) => "kappa",
		lambda: ($) => "lambda",
		mu: ($) => "mu",
		nu: ($) => "nu",
		xi: ($) => "xi",
		omicron: ($) => "omicron",
		pi: ($) => "pi",
		rho: ($) => "rho",
		sigma: ($) => "sigma",
		tau: ($) => "tau",
		upsilon: ($) => "upsilon",
		phi: ($) => "phi",
		chi: ($) => "chi",
		psi: ($) => "psi",
		omega: ($) => "omega",

		// Greek letters (uppercase)
		Alpha: ($) => "Alpha",
		Beta: ($) => "Beta",
		Gamma: ($) => "Gamma",
		Delta: ($) => "Delta",
		Epsilon: ($) => "Epsilon",
		Zeta: ($) => "Zeta",
		Eta: ($) => "Eta",
		Theta: ($) => "Theta",
		Iota: ($) => "Iota",
		Kappa: ($) => "Kappa",
		Lambda: ($) => "Lambda",
		Mu: ($) => "Mu",
		Nu: ($) => "Nu",
		Xi: ($) => "Xi",
		Omicron: ($) => "Omicron",
		Pi: ($) => "Pi",
		Rho: ($) => "Rho",
		Sigma: ($) => "Sigma",
		Tau: ($) => "Tau",
		Upsilon: ($) => "Upsilon",
		Phi: ($) => "Phi",
		Chi: ($) => "Chi",
		Psi: ($) => "Psi",
		Omega: ($) => "Omega",

		// Mathematical constants
		infty: ($) => "infty",
		hbar: ($) => "hbar",
		ell: ($) => "ell",
		Re: ($) => "Re",
		Im: ($) => "Im",
		aleph: ($) => "aleph",
		nabla: ($) => "nabla",
		partial: ($) => "partial",
		forall: ($) => "forall",
		exists: ($) => "exists",
		emptyset: ($) => "emptyset",
		grad: ($) => "grad",
		del: ($) => "del",

		// Binary operators
		plus: ($) => "+",
		minus: ($) => "-",
		times: ($) => "*",
		equals: ($) => "=",
		lt: ($) => "<",
		gt: ($) => ">",
		le: ($) => "<=",
		ge: ($) => ">=",
		ne: ($) => "!=",
		approx: ($) => "~=",
		pm: ($) => "pm",
		mp: ($) => "mp",

		// Logic symbols
		implies: ($) => "=>",
		equiv: ($) => "<=>",
		not_implies: ($) => "=/=>",
		tilde_gt: ($) => "~>",
		dash_gt: ($) => "->",
		not_dash_gt: ($) => "-/->",
		lt_dash: ($) => "<-",
		not_lt_dash: ($) => "<-/-",
		lt_dash_gt: ($) => "<->",
		not_lt_dash_gt: ($) => "<-/->",
		lt_eq: ($) => "<==",
		not_lt_eq_gt: ($) => "<=/=>",
		forall_symbol: ($) => "AA",
		exists_symbol: ($) => "EE",
		falsum: ($) => "_|_",
		verum: ($) => "TT",
		turnstile: ($) => "|--",
		models: ($) => "|==",

		// Unary symbols
		sqrt: ($) => "sqrt",
		text: ($) => "text",
		bb: ($) => "bb",
		cc: ($) => "cc",
		tt: ($) => "tt",
		fr: ($) => "fr",
		sf: ($) => "sf",
		bold: ($) => "bold",
		cal: ($) => "cal",
		frak: ($) => "frak",
		monospace: ($) => "monospace",
		italic: ($) => "italic",

		// Binary symbols
		frac: ($) => "frac",
		root: ($) => "root",
		stackrel: ($) => "stackrel",
		choose: ($) => "choose",
		atop: ($) => "atop",
		over: ($) => "over",

		// Suffix symbols
		factorial: ($) => "!",
		double_factorial: ($) => "!!",

		// Whitespace and delimiters
		multi_linebreak: ($) => /(\r?\n){2,}/,
		_whitespace: ($) => /\s+|\r?\n|\t/,

		// String literals
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

		// Brackets
		left_bracket: ($) => choice("(", "[", "{", "{:", "(:"),
		right_bracket: ($) => choice(")", "]", "}", ":}", ":)"),

		// Bracket expressions
		bracket_expr: ($) =>
			prec(5, seq($.left_bracket, $._expression, $.right_bracket)),

		// Matrix expressions
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

		// Unary expressions
		unary_expr: ($) => prec.left(4, seq(choice($.sqrt, $.text, $.bb, $.cc, $.tt, $.fr, $.sf, $.bold, $.cal, $.frak, $.monospace, $.italic), $.simple_expression)),

		// Binary expressions
		binary_expr: ($) =>
			prec.left(
				3,
				seq(choice($.frac, $.root, $.stackrel, $.choose, $.atop, $.over), $.simple_expression, $.simple_expression),
			),

		// Fraction expressions (special case)
		binary_frac: ($) =>
			prec.left(
				2,
				seq($.intermediate_expression, "/", $.intermediate_expression),
			),

		// Simple expressions
		simple_expression: ($) =>
			choice(
				$.number_symbol,
				$.identifier,
				$.plus, $.minus, $.times, $.equals,
				$.infty, $.hbar, $.ell, $.Re, $.Im, $.aleph, $.nabla, $.partial, $.forall, $.exists, $.emptyset, $.grad, $.del,
				$.alpha, $.beta, $.gamma, $.delta, $.epsilon, $.zeta, $.eta, $.theta, $.iota, $.kappa, $.lambda, $.mu, $.nu, $.xi, $.omicron, $.pi, $.rho, $.sigma, $.tau, $.upsilon, $.phi, $.chi, $.psi, $.omega,
				$.Alpha, $.Beta, $.Gamma, $.Delta, $.Epsilon, $.Zeta, $.Eta, $.Theta, $.Iota, $.Kappa, $.Lambda, $.Mu, $.Nu, $.Xi, $.Omicron, $.Pi, $.Rho, $.Sigma, $.Tau, $.Upsilon, $.Phi, $.Chi, $.Psi, $.Omega,
				$.literal_string,
				$.unary_expr,
				$.bracket_expr,
				$.binary_expr,
				$.matrix_expr,
			),

		// Subscript and superscript
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

		// Intermediate expressions
		intermediate_expression: ($) =>
			choice(
				$.subscript,
				$.superscript,
				$.subscript_superscript,
				$.simple_expression,
			),

		// Concatenation
		concatenation: ($) =>
			prec.left(1, seq($.intermediate_expression, $._expression)),
	},
});