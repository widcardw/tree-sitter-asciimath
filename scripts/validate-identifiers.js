const identifiers = require('../identifiers');
const { validateIdentifierCoverage, generateStatistics } = require('../utils/expression-builder');

console.log('=== Identifier Coverage Validation ===');
const validation = validateIdentifierCoverage(identifiers);

if (validation.missingFromCategories.length > 0) {
  console.log('\n❌ Missing from categories:');
  validation.missingFromCategories.forEach(item => {
    console.log(`  - ${item}`);
  });
}

if (validation.extraInCategories.length > 0) {
  console.log('\n⚠️  Extra in categories (not in identifiers):');
  validation.extraInCategories.forEach(item => {
    console.log(`  - ${item}`);
  });
}

if (validation.isComplete) {
  console.log('\n✅ All identifiers are properly categorized!');
}

console.log('\n=== Statistics ===');
const stats = generateStatistics();
Object.entries(stats).forEach(([category, count]) => {
  console.log(`${category}: ${count}`);
});

console.log(`\nTotal identifiers in simple_expression: ${stats.total}`);
