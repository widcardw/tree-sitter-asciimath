module.exports = grammar({
  name: 'asciimath',

  rules: {
    // === 顶级规则 ===
    source_file: $ => repeat($.expression),  // 允许多个表达式

    expression: $ => choice(
      $.binary_frac,    // I/I (分数)
      $.concatenation,   // I E (连接，如乘法)
      $.intermediate,
    ),

    concatenation: $ => prec.left(1, seq(
      $.intermediate,
      $.expression
    )),

    binary_frac: $ => prec.left(2, seq(
      $.intermediate,
      '/',
      $.intermediate
    )),

    // === 中间表达式 (I) ===
    intermediate: $ => choice(
      $.subscript,          // S_S
      $.superscript,        // S^S
      $.subscript_superscript, // S_S^S
      $.simple              // S
    ),

    subscript: $ => prec.left(3, seq(
      $.simple,
      '_',
      $.simple
    )),

    superscript: $ => prec.left(3, seq(
      $.simple,
      '^',
      $.simple
    )),

    subscript_superscript: $ => prec.left(4, seq(
      $.simple,
      '_',
      $.simple,
      '^',
      $.simple
    )),

    // === 简单表达式 (S) ===
    simple: $ => choice(
      $.variable,           // v
      $.bracket_expr,       // l E r
      $.unary_expr,         // u S
      $.binary_expr         // b S S
    ),

    bracket_expr: $ => prec(5, seq(
      $.left_bracket,
      $.expression,
      $.right_bracket
    )),

    unary_expr: $ => prec.left(4, seq(
      $.unary_op,
      $.simple
    )),

    // 修改后的二元表达式规则
    binary_expr: $ => prec.left(3, seq(
      $.binary_op,
      choice(
        $.bracket_expr,   // 优先匹配括号表达式
        $.variable,
        $.unary_expr
      ),
      choice(
        $.bracket_expr,   // 优先匹配括号表达式
        $.variable,
        $.unary_expr
      )
    )),

    // === Token 定义 ===
    variable: $ => choice(
      // 希腊字母（小写）
      'alpha', 'beta', 'gamma', 'delta', 'epsilon', 'zeta', 'eta', 'theta',
      'iota', 'kappa', 'lambda', 'mu', 'nu', 'xi', 'omicron', 'pi', 'rho',
      'sigma', 'tau', 'upsilon', 'phi', 'chi', 'psi', 'omega',

      // 希腊字母（大写）
      'Alpha', 'Beta', 'Gamma', 'Delta', 'Epsilon', 'Zeta', 'Eta', 'Theta',
      'Iota', 'Kappa', 'Lambda', 'Mu', 'Nu', 'Xi', 'Omicron', 'Pi', 'Rho',
      'Sigma', 'Tau', 'Upsilon', 'Phi', 'Chi', 'Psi', 'Omega',

      // 数学常量
      'pi', 'infty', 'hbar', 'ell', 'Re', 'Im', 'aleph', 'nabla', 'partial',
      'forall', 'exists', 'emptyset', 'grad', 'del', 'pm', 'mp',

      // 数字（支持整数和小数）
      /\d+(\.\d+)?/,

      // 普通变量（字母序列）
      /[A-Za-z]+/,

      // 符号
      /[\+\-\*\=><]/,
    ),

    unary_op: $ => choice(
      'sqrt', 'text', 'bb', 'cc', 'tt', 'fr', 'sf',
      'bold', 'cal', 'frak', 'monospace', 'italic'
    ),

    binary_op: $ => choice(
      'frac', 'root', 'stackrel', 'choose', 'atop', 'over'
    ),

    left_bracket: $ => choice(
      '(', '[', '{', '(:', '{:', '[:', '|:', 'langle'
    ),

    right_bracket: $ => choice(
      ')', ']', '}', ':)', ':}', ':]', ':|', 'rangle'
    ),
  },
});
