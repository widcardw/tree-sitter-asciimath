const assert = require("node:assert");
const { test } = require("node:test");

const Parser = require("tree-sitter");

test("can load grammar", () => {
  const parser = new Parser();
  const binding = require("./index.js")
  const language = binding.language
  assert.doesNotThrow(() => parser.setLanguage(language));
});

test("basic transformation", () => {
  const binding = require("./index.js")
  const toLatex = binding.toLatex
  const result = toLatex("x^2");
  assert.strictEqual(result, "x^{2}");
});

test("common cases", () => {
  const path = require("node:path")
  const fs = require("node:fs")
  const yaml = require("js-yaml")
  
  const binding = require("./index.js")
  const toLatex = binding.toLatex
  
  const testCasesPath = path.join(__dirname, "..", "test_cases", "common_cases.yml");
  const testCasesContent = fs.readFileSync(testCasesPath, "utf8");
  
  /** @type {Array<{input: string, expected: string}>} */
  const testCases = yaml.load(testCasesContent);
  
  for (const testCase of testCases) {
    const result = toLatex(testCase.input);
    assert.strictEqual(result, testCase.expected, `Failed for input: '${testCase.input}', expect '${testCase.expected}', got '${result}'.`);
  }
});

test("module can be required multiple times", () => {
  // Clear require cache to simulate fresh module loading
  delete require.cache[require.resolve("./index.js")];
  
  const binding1 = require("./index.js");
  const result1 = binding1.toLatex("a+b");
  assert.strictEqual(result1, "a + b");
  
  // Clear cache and require again
  delete require.cache[require.resolve("./index.js")];
  
  const binding2 = require("./index.js");
  const result2 = binding2.toLatex("x/y");
  assert.strictEqual(result2, "\\frac{x}{y}");
  
  // Both should work independently
  const result3 = binding1.toLatex("sqrt(4)");
  assert.strictEqual(result3, "\\sqrt{4}");
  
  const result4 = binding2.toLatex("alpha beta");
  assert.strictEqual(result4, "\\alpha \\beta");
});

test("stress test - multiple loads and unloads", () => {
  const iterations = 10;
  
  for (let i = 0; i < iterations; i++) {
    // Clear cache
    delete require.cache[require.resolve("./index.js")];
    
    // Require fresh module
    const binding = require("./index.js");
    
    // Test basic functionality
    const result = binding.toLatex(`"test"_${i}`);
    assert.strictEqual(result, `\\text{test}_{${i}}`);
    
    // Test language loading
    const parser = new Parser();
    assert.doesNotThrow(() => parser.setLanguage(binding.language));
  }
});
