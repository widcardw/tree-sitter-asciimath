module.exports = {
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
  ascii_exclaim_space: ($) => '\\!'
};
