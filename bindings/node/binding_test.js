const assert = require("node:assert");
const { test } = require("node:test");

const Parser = require("tree-sitter");

test("can load grammar", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(require(".")));
});

// test("basic transformation", () => {
//   const result = AsciiMathToLatex.convert("x^2");
//   assert.strictEqual(result, "x^{2}");
// });

// test("common cases", () => {
//   // 读取测试用例文件
//   const testCasesPath = path.join(__dirname, "..", "test_cases", "common_cases.yml");
//   const testCasesContent = fs.readFileSync(testCasesPath, "utf8");
  
//   // if (currentCase) testCases.push(currentCase);
//   /**
//    * @type {Array<{input: string, expected: string}>}
//    */
//   const testCases = yaml.load(testCasesContent);
  
//   // 运行每个测试用例
//   for (const testCase of testCases) {
//     const result = AsciiMathToLatex.convert(testCase.input);
//     assert.strictEqual(result, testCase.expected, `Failed for input: '${testCase.input}'`);
//   }
// });