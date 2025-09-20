// 基础类型
const basicTypes = [
  'number_symbol',
  'identifier'
];

// 逻辑符号
const logicSymbols = [
  'if', 'otherwise', 'else', 'and', 'or', 'not',
  'forall_symbol', 'exists_symbol', 'bot', 'top', 'vdash', 'models',
  'implies', 'iff', 'not_implies', 'tilde_gt', 'dash_gt', 'not_dash_gt',
  'lt_dash', 'not_lt_dash', 'lt_dash_gt', 'n_left_right_arrow',
  'long_left_arrow', 'long_right_arrow', 'not_iff'
];

// 希腊字母
const greekLetters = [
  'alpha', 'beta', 'gamma', 'delta', 'epsilon', 'zeta', 'eta', 'theta',
  'iota', 'kappa', 'lambda', 'mu', 'nu', 'xi', 'omicron', 'pi', 'rho',
  'sigma', 'tau', 'upsilon', 'phi', 'varphi', 'chi', 'psi', 'omega',
  'Alpha', 'Beta', 'Gamma', 'Delta', 'Epsilon', 'Zeta', 'Eta', 'Theta',
  'Iota', 'Kappa', 'Lambda', 'Mu', 'Nu', 'Xi', 'Omicron', 'Pi', 'Rho',
  'Sigma', 'Tau', 'Upsilon', 'Phi', 'varPhi', 'Chi', 'Psi', 'Omega'
];

// 数学常量
const mathConstants = [
  'sum', 'prod', 'infty', 'hbar', 'ell', 'Re', 'Im', 'aleph', 'nabla',
  'partial', 'emptyset', 'varnothing', 'grad', 'del'
];

// 集合运算符
const setOperators = [
  'union', 'bigUnion', 'intersect', 'bigIntersect',
  'conjunction', 'bigConjunction', 'disjunction', 'bigDisjunction',
  'propto', 'complement', 'in', 'not_in', 'sub', 'sup', 'sub_eq', 'sup_eq'
];

// 二元运算符
const binaryOperators = [
  'plus', 'minus', 'cdot', 'times', 'equals', 'lt', 'gt', 'le', 'ge',
  'ne', 'cong', 'approx', 'equiv', 'pm', 'mp', 'sim',
  'star', 'ast', 'slash', 'backslash', 'setminus', 'ltimes', 'rtimes',
  'bowtie', 'div', 'circ', 'oplus', 'otimes', 'odot', 'll', 'gg',
  'prec_than', 'prec_than_eq', 'succ_than', 'succ_than_eq',
  'coloneqq', 'eqqcolon'
];

// ASCII转义字符
const asciiEscape = [
  'ascii_hash', 'ascii_and', 'ascii_percent', 'ascii_at', 'ascii_underline',
  'ascii_caret', 'ascii_dollar', 'ascii_space', 'ascii_comma_space',
  'ascii_semi_space', 'ascii_colon_space', 'ascii_exclaim_space'
];

// 杂项符号
const miscSymbols = [
  'ldots', 'cdots', 'ddots', 'quad', 'qquad', 'diamond', 'Lap',
  'square', 'vdots', 'therefore', 'because', 'angle', 'triangle'
];

// 一元和二元符号
const unaryBinarySymbols = [
  'sqrt', 'text', 'bb', 'cc', 'tt', 'fr', 'sf', 'bold', 'cal', 'frak',
  'monospace', 'mono', 'italic', 'frac', 'root', 'stackrel', 'choose',
  'atop', 'over', 'CC', 'NN', 'RR', 'QQ', 'ZZ', 'factorial', 'double_factorial'
];

// 复合表达式类型
const complexExpressions = [
  'unary_expr', 'bracket_expr', 'binary_expr', 'matrix_expr', 'factorial_expr'
];

// 字符串类型
const stringTypes = [
  'literal_string'
];

module.exports = {
  basicTypes,
  logicSymbols,
  greekLetters,
  mathConstants,
  setOperators,
  binaryOperators,
  asciiEscape,
  miscSymbols,
  unaryBinarySymbols,
  complexExpressions,
  stringTypes
};
