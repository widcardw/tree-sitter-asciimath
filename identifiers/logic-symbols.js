module.exports = {
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

  // Special identifiers
  if: ($) => "if",
  otherwise: ($) => "otherwise",
  else: ($) => "else",
  and: $ => 'and',
  or: $ => 'or',
  not: $ => 'not'
};
