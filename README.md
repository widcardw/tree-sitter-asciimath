# tree-sitter-asciimath

> A *third-party* asciimath grammar for tree-sitter

[WIP]

References

- http://asciimath.org
- https://github.com/asciimath/asciimathml
- https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef

## Setup

1. `npm install tree-sitter-cli`
2. `npm run prepare && npm run generate`
3. `uv sync` (make sure `python` is in `PATH`)
4. `npm i`

## Roadmap

- [x] `symbols-config.json` for common symbols
- [x] `grammar.js` for parsing expressions into trees
  - [ ] Remove redundant precedences (`binary_frac`, `unary`, `super_and_sub_scripts` and so on)
  - [ ] `test/corpus`
    - [x] Basic test cases
    - [ ] Corner cases, like `a/b/c/d`, `x^y^z`, maybe `sin(x)/x` to be `\frac{sin(x)}{x}`?
- [ ] bindings
  - [ ] `to_latex`
    - [x] Python (Will be replaced with rust libraries)
    - [x] Rust
    - [ ] Node.js, C, Go, Swift (May be built with rust libraries)
  - [ ] `to_mathml` 

## Warning

You are **NOT** encouraged to use `pnpm` to install dependencies, since it will cause some issues, especially `gyp` and bindings. Use `npm` instead, then everything will work fine.

## Structure

### Main Files

- `symbols-config.json`, containing almost all the categories and symbols, except strictly edge cases like `color`
- `scripts/generate-symbols.js`, to generate `identifiers/` which will be imported into `grammar.js`
- `grammar.js`

### Build Steps

1. Run `npm run prepare` to load the JSON file and parse them into `identifiers/`
2. Run `npm run generate` to transform `grammar.js` into grammar

### Bindings

#### Test Cases

##### Python

(Optional) clean cache

```sh
uv clean
```

Build grammar to python bindings (if there was any change in grammar.js)

```sh
npm run uv-prepare
# If the command above does not work, then manually remove and add one package, for example, wheel
uv remove wheel && uv add wheel
```

Test bindings

```sh
uv run -m pytest bindings/python/tests/test_binding.py
```

##### Rust

```sh
cargo test
```

##### Node.js

```sh
npm i
npm run node-test
```

