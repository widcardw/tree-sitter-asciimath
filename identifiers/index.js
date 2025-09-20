const greekLetters = require('./greek-letters');
const mathConstants = require('./math-constants');
const binaryOperators = require('./binary-operators');
const logicSymbols = require('./logic-symbols');
const setOperators = require('./set-operators');
const unaryBinarySymbols = require('./unary-binary-symbols');
const asciiEscape = require('./ascii-escape');
const miscSymbols = require('./misc-symbols');

module.exports = {
  ...greekLetters,
  ...mathConstants,
  ...binaryOperators,
  ...logicSymbols,
  ...setOperators,
  ...unaryBinarySymbols,
  ...asciiEscape,
  ...miscSymbols
};
