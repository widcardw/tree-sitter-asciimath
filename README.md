# tree-sitter-asciimath

> A *third-party* asciimath grammar for tree-sitter

[WIP]

References

- http://asciimath.org
- https://github.com/asciimath/asciimathml
- https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef

## TODO

- [ ] Bars in matrices
- [ ] Test cases in `test/`
- [ ] Test cases for bindings

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

