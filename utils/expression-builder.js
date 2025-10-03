const categories = require('../identifiers/categories');

/**
 * 构建simple_expression的choice数组
 * @param {Object} $ - tree-sitter的参数对象
 * @param {Array} excludeCategories - 要排除的类别名称数组
 * @param {Array} includeOnly - 只包含指定的类别数组
 * @returns {Array} choice数组
 */
function buildSimpleExpression($, excludeCategories = [], includeOnly = null) {
  const allCategories = {}
  Object.assign(allCategories, categories);

  // 如果指定了只包含某些类别
  if (includeOnly) {
    const filteredCategories = {};
    includeOnly.forEach(category => {
      if (allCategories[category]) {
        filteredCategories[category] = allCategories[category];
      }
    });
    Object.assign(allCategories, filteredCategories);
  }

  // 排除指定类别
  excludeCategories.forEach(category => {
    delete allCategories[category];
  });

  // 构建最终的choice数组
  const choiceArray = [];
  Object.values(allCategories).forEach(categoryItems => {
    choiceArray.push(...categoryItems);
  });

  // 转换为tree-sitter的引用格式
  const res = choiceArray.map(item => $[item]);
  return res
}

/**
 * 验证所有identifier是否都被包含在某个类别中
 * @param {Object} allIdentifiers - 所有identifier的对象
 * @returns {Object} 验证结果
 */
function validateIdentifierCoverage(allIdentifiers) {
  const allCategories = [
    ...categories.basicTypes,
    ...categories.logicSymbols,
    ...categories.greekLetters,
    ...categories.mathConstants,
    ...categories.setOperators,
    ...categories.mathOperators,
    ...categories.asciiEscape,
    ...categories.miscSymbols,
    ...categories.unarySymbols,
    ...categories.binarySymbols,
    ...categories.differentialSymbols,
  ];

  const identifierKeys = Object.keys(allIdentifiers);
  const missingFromCategories = identifierKeys.filter(key => !allCategories.includes(key));
  const extraInCategories = allCategories.filter(cat => !identifierKeys.includes(cat));

  return {
    missingFromCategories,
    extraInCategories,
    isComplete: missingFromCategories.length === 0 && extraInCategories.length === 0
  };
}

/**
 * 生成simple_expression的统计信息
 * @returns {Object} 统计信息
 */
function generateStatistics() {
  const stats = {};
  Object.entries(categories).forEach(([category, items]) => {
    stats[category] = items.length;
  });

  const total = Object.values(stats).reduce((sum, count) => sum + count, 0);
  stats.total = total;

  return stats;
}

module.exports = {
  buildSimpleExpression,
  validateIdentifierCoverage,
  generateStatistics
};
