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
    assert.strictEqual(result, testCase.expected, `Failed for input: '${testCase.input}'`);
  }
});
