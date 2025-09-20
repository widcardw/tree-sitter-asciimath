const fs = require('fs');
const path = require('path');

// 读取配置文件
const configPath = path.join(__dirname, '../symbols-config.json');
const config = JSON.parse(fs.readFileSync(configPath, 'utf8'));

// 生成categories.js
function generateCategories() {
  const categoriesPath = path.join(__dirname, '../identifiers/categories.js');

  let content = '// 自动生成的文件，请勿手动修改\n\n';

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

// 生成identifiers/index.js
function generateIdentifiersIndex() {
  const indexPath = path.join(__dirname, '../identifiers/index.js');

  let content = '// 自动生成的文件，请勿手动修改\n\n';
  content += 'const { buildSimpleExpression } = require(\'../utils/expression-builder\');\n\n';

  // 导入所有类别
  for (const category of Object.keys(config)) {
    content += `const ${category} = require(\'./${category}.js\');\n`;
  }

  content += '\nmodule.exports = {\n';

  // 导出所有symbol规则
  for (const [category, symbols] of Object.entries(config)) {
    for (const [symbolName, symbolData] of Object.entries(symbols)) {
      if (symbolData.type === 'regex') {
        content += `  ${symbolName}: ($) => ${symbolData.pattern},\n`;
      } else {
        content += `  ${symbolName}: ($) => '${symbolData.token}',\n`;
      }
    }
  }

  content += '};';

  fs.writeFileSync(indexPath, content);
  console.log('Generated identifiers/index.js');
}

// 生成各个类别的文件
function generateCategoryFiles() {
  const identifiersDir = path.join(__dirname, '../identifiers');

  for (const [category, symbols] of Object.entries(config)) {
    const categoryPath = path.join(identifiersDir, `${category}.js`);

    let content = '// 自动生成的文件，请勿手动修改\n\n';
    content += 'module.exports = {\n';

    for (const [symbolName, symbolData] of Object.entries(symbols)) {
      if (symbolData.type === 'regex') {
        content += `  ${symbolName}: ($) => ${symbolData.pattern},\n`;
      } else {
        content += `  ${symbolName}: ($) => '${symbolData.token}',\n`;
      }
    }

    content += '};';

    fs.writeFileSync(categoryPath, content);
    console.log(`Generated identifiers/${category}.js`);
  }
}

// 主函数
function main() {
  console.log('Generating symbol files...');

  // 确保目录存在
  const identifiersDir = path.join(__dirname, '../identifiers');
  if (!fs.existsSync(identifiersDir)) {
    fs.mkdirSync(identifiersDir, { recursive: true });
  }

  generateCategories();
  generateIdentifiersIndex();
  generateCategoryFiles();

  console.log('All symbol files generated successfully!');
}

// 如果直接运行此脚本
if (require.main === module) {
  main();
}

module.exports = { generateCategories, generateIdentifiersIndex, generateCategoryFiles, main };
