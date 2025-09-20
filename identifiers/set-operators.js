module.exports = {
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

  // Set relations
  propto: ($) => 'prop',
  complement: ($) => choice('comp', 'complement')
};
