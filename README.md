# tree-sitter-asciimath

> A *third-party* asciimath grammar for tree-sitter

[WIP]

References

- http://asciimath.org
- https://github.com/asciimath/asciimathml
- https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef

## Structure

- `symbols-config.json` contains all the predefined constant symbols, unary operators, binary operators, and the *placeholder* for expressions.
    - Run `nr generate-symbols` to load the JSON file and parse them into `identifiers/`. The `identifiers/` will contain `categories.js` (for verification), `index.js` (containing all the symbols).
    - The placeholders will also be included in `categories.js`. When invoking `nr generate` (that is, `tree-sitter generate`)
        - The symbols in `index.js` will be injected into `rules` for grammar
        - and `simple_expressions` will be built by `utils/expression_builder.js` with placeholders injected.
