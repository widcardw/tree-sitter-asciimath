const my_precs = {
  str: 25,
  factorial: 24,
  supsub: 20,
  binary_frac: 20,
  sup_or_sub: 19,
  bracket: 18,
  binary: 17,
  unary: 16,
  concat: 11,
  matrix_row: 10,
  matrix: 9,
};

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

    // special identifiers
    if: ($) => "if",
    otherwise: ($) => "otherwise",
    else: ($) => "else",
    and: $ => 'and',
    or: $ => 'or',
    not: $ => 'not',

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
    varphi: ($) => choice("varphi", 'phv'),
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
    varPhi: ($) => choice("varPhi", 'Phv'),
    Chi: ($) => "Chi",
    Psi: ($) => "Psi",
    Omega: ($) => "Omega",

    sum: ($) => "sum",
    prod: ($) => "prod",

    // 交集并集
    union: ($) => 'uu',
    bigUnion: ($) => 'uuu',
    intersect: ($) => 'nn',
    bigIntersect: ($) => 'nnn',
    // 合取
    conjunction: ($) => '^^',
    bigConjunction: ($) => '^^^',
    // 析取
    disjunction: ($) => 'vv',
    bigDisjunction: ($) => 'vvv',

    // Mathematical constants
    infty: ($) => choice('oo', 'infty'),
    hbar: ($) => "hbar",
    ell: ($) => "ell",
    Re: ($) => "Re",
    Im: ($) => "Im",
    aleph: ($) => "aleph",
    nabla: ($) => "nabla",
    partial: ($) => "partial",
    emptyset: ($) => "emptyset",
    varnothing: $ => 'O/',
    grad: ($) => "grad",
    del: ($) => "del",
    ldots: $ => '...',
    cdots: $ => 'cdots',
    ddots: $ => 'ddots',
    quad: $ => 'quad',
    qquad: $ => 'qquad',
    diamond: $ => 'diamond',
    Lap: $ => 'Lap',
    square: $ => 'square',
    vdots: $ => 'vdots',
    therefore: $ => ':.',
    because: $ => ":'",
    angle: $ => '/_',
    triangle: $ => '/_\\',

    // Binary operators
    plus: ($) => "+",
    minus: ($) => "-",
    cdot: ($) => choice("cdot", "*"),
    times: $ => choice("times", 'xx'),
    equals: ($) => "=",
    lt: ($) => "<",
    gt: ($) => ">",
    le: ($) => "<=",
    ge: ($) => ">=",
    ne: ($) => "!=",
    cong: ($) => "~=",
    approx: $ => '~~',
    equiv: $ => '-=',
    pm: ($) => choice('+-', "pm"),
    mp: ($) => choice('-+', "mp"),
    sim: ($) => '~',

    ascii_hash: ($) => '\\#',
    ascii_and: ($) => '\\&',
    ascii_percent: ($) => choice('\\%', '%'),
    ascii_at: ($) => '\\@',
    ascii_underline: ($) => '\\_',
    ascii_caret: ($) => '\\^',
    ascii_dollar: ($) => '\\$',
    ascii_space: ($) => '\\ ',
    ascii_comma_space: ($) => '\\,',
    ascii_semi_space: ($) => '\\;',
    ascii_colon_space: ($) => '\\:',
    ascii_exclaim_space: ($) => '\\!',
    propto: ($) => 'prop',
    complement: ($) => choice('comp', 'complement'),

    star: $ => choice("star", '***'),
    ast: $ => choice('ast', '**'),
    slash: $ => choice("slash", '//'),
    backslash: $ => choice("backslash", '\\\\'),
    setminus: $ => "setminus",
    ltimes: ($) => choice("ltimes", '|><'),
    rtimes: ($) => choice("rtimes", '><|'),
    bowtie: ($) => choice("bowtie", '|><|'),
    div: ($) => choice("div", '-:'),
    circ: ($) => choice("circ", '@'),
    oplus: ($) => choice("oplus", 'o+'),
    otimes: ($) => choice("otimes", 'ox'),
    odot: ($) => choice("odot", 'o.'),
    ll: ($) => choice("ll", '<<'),
    gg: ($) => choice("gg", '>>'),
    prec_than: ($) => '-<',
    prec_than_eq: ($) => '-<=',
    succ_than: ($) => '>-',
    succ_than_eq: ($) => '>-=',
    in: ($) => 'in',
    not_in: ($) => '!in',
    sub: ($) => 'sub',
    sup: ($) => 'sup',
    sub_eq: ($) => 'sube',
    sup_eq: ($) => 'supe',
    coloneqq: ($) => ':=',
    eqqcolon: ($) => '=:',

    // Logic symbols
    implies: ($) => "=>",
    iff: ($) => choice('iff', "<=>"),
    not_implies: ($) => "=/=>",
    tilde_gt: ($) => "~>",
    dash_gt: ($) => "->",
    not_dash_gt: ($) => "-/->",
    lt_dash: ($) => "<-",
    not_lt_dash: ($) => "<-/-",
    lt_dash_gt: ($) => "<->",
    n_left_right_arrow: ($) => "<-/->",
    long_left_arrow: ($) => "<==",
    long_right_arrow: ($) => "==>",
    not_iff: ($) => "<=/=>",
    forall_symbol: ($) => "AA",
    exists_symbol: ($) => "EE",
    bot: ($) => "_|_",
    top: ($) => "TT",
    vdash: ($) => "|--",
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
    mono: ($) => "mono",
    italic: ($) => "italic",

    // Binary symbols
    frac: ($) => "frac",
    root: ($) => "root",
    stackrel: ($) => "stackrel",
    choose: ($) => "choose",
    atop: ($) => "atop",
    over: ($) => "over",

    // bb symbols
    CC: ($) => "CC",
    NN: ($) => "NN",
    RR: ($) => "RR",
    QQ: ($) => "QQ",
    ZZ: ($) => "ZZ",

    // Suffix symbols
    factorial: ($) => "!",
    double_factorial: ($) => "!!",

    // Whitespace and delimiters
    multi_linebreak: ($) => /(\r?\n){2,}/,
    _whitespace: ($) => /\s+|\r?\n|\t/,

    // String literals
    literal_string: ($) =>
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
    left_bracket: ($) => choice("(", "[", "{", "{:", "(:", "|__", '|~',),
    right_bracket: ($) => choice(")", "]", "}", ":}", ":)", "__|", '~|',),

    // Bracket expressions
    bracket_expr: ($) =>
      prec(
        my_precs.bracket,
        seq($.left_bracket, $._expression, $.right_bracket),
      ),

    // Matrix expressions
    matrix_row_expr: ($) =>
      prec.left(
        my_precs.matrix_row,
        seq(
          $.left_bracket,
          $._expression,
          repeat(seq(",", $._expression)),
          $.right_bracket,
        ),
      ),

    matrix_expr: ($) =>
      prec.left(
        my_precs.matrix,
        seq(
          $.left_bracket,
          seq($.matrix_row_expr, repeat(seq(",", $.matrix_row_expr))),
          $.right_bracket,
        ),
      ),

    // Unary expressions
    unary_expr: ($) =>
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
            $.monospace,
            $.mono,
            $.italic,
          ),
          $.simple_expression,
        ),
      ),

    // Binary expressions
    binary_expr: ($) =>
      prec.left(
        my_precs.binary,
        seq(
          choice($.frac, $.root, $.stackrel, $.choose, $.atop, $.over),
          $.simple_expression,
          $.simple_expression,
        ),
      ),

    // Fraction expressions (special case)
    binary_frac: ($) =>
      prec.left(
        my_precs.binary_frac,
        seq($.intermediate_expression, "/", $.intermediate_expression),
      ),

    factorial_expr: ($) =>
      prec.left(
        my_precs.factorial,
        seq($.simple_expression, choice($.double_factorial, $.factorial)),
      ),

    // Simple expressions
    simple_expression: ($) =>
      choice(
        $.number_symbol,
        $.identifier,
        $.if,
        $.otherwise,
        $.else,
        $.plus,
        $.minus,
        $.cdot,
        $.equals,
        $.lt,
        $.gt,
        $.le,
        $.ge,
        $.ne,
        $.approx,
        $.pm,
        $.mp,
        $.infty,
        $.hbar,
        $.ell,
        $.Re,
        $.Im,
        $.aleph,
        $.nabla,
        $.partial,
        $.forall,
        $.exists,
        $.emptyset,
        $.grad,
        $.del,
        $.alpha,
        $.beta,
        $.gamma,
        $.delta,
        $.epsilon,
        $.zeta,
        $.eta,
        $.theta,
        $.iota,
        $.kappa,
        $.lambda,
        $.mu,
        $.nu,
        $.xi,
        $.omicron,
        $.pi,
        $.rho,
        $.sigma,
        $.tau,
        $.upsilon,
        $.phi,
        $.chi,
        $.psi,
        $.omega,
        $.Alpha,
        $.Beta,
        $.Gamma,
        $.Delta,
        $.Epsilon,
        $.Zeta,
        $.Eta,
        $.Theta,
        $.Iota,
        $.Kappa,
        $.Lambda,
        $.Mu,
        $.Nu,
        $.Xi,
        $.Omicron,
        $.Pi,
        $.Rho,
        $.Sigma,
        $.Tau,
        $.Upsilon,
        $.Phi,
        $.Chi,
        $.Psi,
        $.Omega,
        $.sum,
        $.prod,
        $.union,
        $.intersect,
        $.conjunction,
        $.disjunction,
        $.bigUnion,
        $.bigIntersect,
        $.bigConjunction,
        $.bigDisjunction,
        $.literal_string,
        $.unary_expr,
        $.bracket_expr,
        $.binary_expr,
        $.matrix_expr,
        $.factorial_expr,
      ),

    // Subscript and superscript
    subscript: ($) =>
      prec.left(
        my_precs.sup_or_sub,
        seq($.simple_expression, "_", $.simple_expression),
      ),

    superscript: ($) =>
      prec.left(
        my_precs.sup_or_sub,
        seq($.simple_expression, "^", $.simple_expression),
      ),

    subscript_superscript: ($) =>
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
    intermediate_expression: ($) =>
      choice(
        $.subscript,
        $.superscript,
        $.subscript_superscript,
        $.simple_expression,
      ),

    // Concatenation
    concatenation: ($) =>
      prec.left(my_precs.concat, seq($.intermediate_expression, $._expression)),
  },
});
