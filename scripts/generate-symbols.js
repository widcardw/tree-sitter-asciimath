const fs = require('fs');
const path = require('path');

// read config file
const configPath = path.join(__dirname, '../symbols-config.json');
const config = JSON.parse(fs.readFileSync(configPath, 'utf8'));

/**
 * Escape single quotes in a string
 * @param {string} str
 * @returns {string} The string with single quotes escaped
 */
function escapeQuote(str) {
  if (typeof str !== 'string') {
    console.log('Warning: escapeQuote called with non-string argument:', str);
    return str;
  }
  return str.replace(/'/g, '\\\'');
}

// generate `categories.js` (for validation and metadata)
function generateCategories() {
  const categoriesPath = path.join(__dirname, '../identifiers/categories.js');

  let content = '// Automatically generated, please do not change this file!\n\n';

  for (const [category, symbols] of Object.entries(config)) {
    const symbolNames = Object.keys(symbols);
    content += `const ${category} = [\n`;
    content += `  ${symbolNames.map(name => `'${name}'`).join(', ', '\n  ')}\n`;
    content += `];\n\n`;
  }

  content += 'module.exports = {\n';
  content += Object.keys(config).map(category => `  ${category}`).join(',\n');
  content += '\n};';

  fs.writeFileSync(categoriesPath, content);
  console.log('Generated categories.js');
}

// generate identifiers/index.js (imported into grammar.js)
function generateIdentifiersIndex() {
  const indexPath = path.join(__dirname, '../identifiers/index.js');

  let content = '// Automatically generated, please do not change this file!\n\n';

  // import all the categories
  for (const category of Object.keys(config)) {
    content += `const ${category} = require(\'./${category}.js\');\n`;
  }

  content += '\nmodule.exports = {\n';

  // regenerate symbols again
  // for (const [category, symbols] of Object.entries(config)) {
  //   for (const [symbolName, symbolData] of Object.entries(symbols)) {
  //     if (symbolData.type === 'regex') {
  //       content += `  ${symbolName}: ($) => /${symbolData.pattern}/,\n`;
  //     } else if (symbolData.alias) {
  //       content += `  ${symbolName}: $ => choice('${symbolData.token.replace(/'/g, '\\\'')}', ${symbolData.alias.map(alias => `'${alias.replace(/'/g, '\\\'')}'`).join(', ')}),\n`;
  //     } else if (symbolData.type !== "placeholder") {
  //       content += `  ${symbolName}: $ => '${symbolData.token.replace(/'/g, '\\\'')}',\n`;
  //     }
  //   }
  // }

  // simply distruct the categories
  for (const category of Object.keys(config)) {
    content += `  ...${category},\n`;
  }

  content += '};';

  fs.writeFileSync(indexPath, content);
  console.log('Generated identifiers/index.js');
}

// generate all the symbols of each category
function generateCategoryFiles() {
  const identifiersDir = path.join(__dirname, '../identifiers');

  for (const [category, symbols] of Object.entries(config)) {
    const categoryPath = path.join(identifiersDir, `${category}.js`);

    let content = '// Automatically generated, please do not change this file!\n\n';
    content += 'module.exports = {\n';

    for (const [symbolName, symbolData] of Object.entries(symbols)) {
      if (symbolData.type === 'regex') {
        content += `  ${symbolName}: $ => /${symbolData.pattern}/,\n`;
      } else {
        if (symbolData.alias) {
          content += `  ${symbolName}: $ => choice('${escapeQuote(symbolData.token)}', ${symbolData.alias.map(alias => `'${escapeQuote(alias)}'`).join(', ')}),\n`;
        } else if (symbolData.type !== "placeholder") {
          content += `  ${symbolName}: $ => '${escapeQuote(symbolData.token)}',\n`;
        }
      }
    }

    content += '};';

    fs.writeFileSync(categoryPath, content);
    console.log(`Generated identifiers/${category}.js`);
  }
}

function generateCategorizedSymbols(excludeCategories = []) {
  const categorizedSymbolsPath = path.join(__dirname, '../identifiers/categorized.js');
  let content = '// Automatically generated, please do not change this file!\n\n';
  content += 'module.exports = {\n';

  for (const [category, symbols] of Object.entries(config)) {
    if (excludeCategories.includes(category)) {
      continue;
    }

    const symbolNames = Object.keys(symbols)
    content += `  ${category}: $ => choice(${symbolNames.map(name => `$.${name}`).join(', ')}),\n`;
  }

  content += '};';

  fs.writeFileSync(categorizedSymbolsPath, content);
  console.log('Generated identifiers/categorized.js');
}

function main() {
  console.log('Generating symbol files...');

  const identifiersDir = path.join(__dirname, '../identifiers');
  if (!fs.existsSync(identifiersDir)) {
    fs.mkdirSync(identifiersDir, { recursive: true });
  }

  generateCategories();
  generateIdentifiersIndex();
  generateCategoryFiles();
  generateCategorizedSymbols(['basicTypes']);

  console.log('All symbol files generated successfully!');
}

// 如果直接运行此脚本
if (require.main === module) {
  main();
}

module.exports = { generateCategories, generateIdentifiersIndex, generateCategoryFiles, main };
