# tree-sitter-asciimath

> A *third-party* asciimath grammar for tree-sitter

[WIP]

References

- http://asciimath.org
- https://github.com/asciimath/asciimathml
- https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef

## TODO

- [ ] Bars in matrices
    - [x] code generation 中 matrix_expr_to_latex 的 bar 识别还存在问题
- [ ] Test cases in `test/`
- [ ] Test cases for bindings
    - [ ] Recursive bracket parsing
    - [ ] Unary `+` and `-`

## Setup

1. `npm install tree-sitter-cli`
2. `npm run prepare && npm run generate`
3. `uv sync` (make sure `python` is in `PATH`)
4. `npm i`

## Warning

You are **NOT** encouraged to use `pnpm` to install dependencies, since it will cause some issues, especially `gyp` and bindings. Use `npm` instead, then everything will work fine.

## Structure

### Main Files

- `symbols-config.json`, containing almost all the categories and symbols, except strictly edge cases like `color`
- `scripts/generate-symbols.js`, to generate `identifiers/` which will be imported into `grammar.js`
- `grammar.js`

### Build Steps

1. Run `npm run prepare` to load the JSON file and parse them into `identifiers/`
2. Run `npm run generate` to generate `grammar.js`

### Bindings

#### Python

Test cases

```sh
# (Optional) clean cache
uv clean
# Build grammar to python bindings
npm run uv-prepare
# Test bindings
uv run -m pytest bindings/python/tests/test_binding.py
```

