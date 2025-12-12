# tree-sitter-asciimath

> A *third-party* asciimath grammar for tree-sitter with LaTeX conversion support

[![npm version](https://img.shields.io/npm/v/tree-sitter-asciimath)](https://www.npmjs.com/package/tree-sitter-asciimath)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A Tree-sitter grammar for parsing AsciiMath expressions with built-in conversion to LaTeX format. This package provides bindings for multiple languages including Rust, Node.js, and Python.

References

- http://asciimath.org
- https://github.com/asciimath/asciimathml
- https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef

## Quick Start

### Installation

```bash
# Clone the repository
git clone <repository-url>
cd tree-sitter-asciimath

# Install dependencies
npm install

# Build everything
npm run rebuild
```

### Basic Usage

```javascript
const { toLatex, language } = require('tree-sitter-asciimath/bindings/node');

// Convert AsciiMath to LaTeX
const latex = toLatex('x^2 + y^2 = z^2');
console.log(latex); // Output: "x^{2} + y^{2} = z^{2}"

// Use with tree-sitter parser
const Parser = require('tree-sitter');
const parser = new Parser();
parser.setLanguage(language);
const tree = parser.parse('sqrt(a^2 + b^2)');
```

## Command Reference

### Tree-sitter Grammar Commands

| Command | Description |
|---------|-------------|
| `npm run ts:prepare` | Generate all symbols in grammar.js |
| `npm run generate` | Generate parser from grammar.js |
| `npm run parse` | Parse a file using the generated parser |
| `npm run test` | Run tree-sitter test suite |
| `npm run build` | Build tree-sitter parser |

### Rust FFI Library Commands

| Command | Description |
|---------|-------------|
| `npm run build:rust` | Build Rust library with FFI bindings |
| `npm run test:rust` | Run Rust tests |

### Node.js Binding Commands

| Command | Description |
|---------|-------------|
| `npm run build:node` | Build Node.js native addon |
| `npm run copy:rust-lib` | Copy Rust library to build directory |
| `npm run rebuild` | Full rebuild: Rust + Node.js + copy library |
| `npm run test:node` | Run Node.js binding tests |

### C Binding Commands

| Command | Description |
|---------|-------------|
| `npm run build:c` | Build C bindings using Makefile |
| `npm run build:c-script` | Build C bindings using shell script |
| `npm run test:c` | Run C binding example program |
| `npm run clean:c` | Clean C binding build artifacts |

### Python Binding Commands

| Command | Description |
|---------|-------------|
| `npm run uv-prepare` | Install Python bindings with uv |
| `npm run test:python` | Run Python binding tests |

### Development Commands

| Command | Description |
|---------|-------------|
| `npm run prepare` | Prepare project (generates symbols, builds Rust, copies library) |
| `npm run dev` | Development workflow: rebuild + test Node.js bindings |
| `npm run rebuild:all` | Full rebuild including all bindings (Rust, Node.js, C) |

### Setup for Development

1. Install dependencies:
   ```bash
   npm install
   ```

2. Build the project:
   ```bash
   npm run rebuild
   ```

3. Test the bindings:
   ```bash
   npm run test:node
   # or
   npm run test:rust
   # or
   npm run test:python
   ```

## Project Structure

### Main Files

- `symbols-config.json` - Contains almost all the categories and symbols
- `scripts/generate-symbols.js` - Generates `identifiers/` for grammar.js
- `grammar.js` - Tree-sitter grammar definition
- `bindings/rust/lib.rs` - Rust FFI implementation with LaTeX conversion
- `bindings/node/binding.cc` - Node.js native addon binding
- `bindings/python/` - Python bindings

### Architecture

This project uses a hybrid architecture:

1. **Core Parser**: Tree-sitter grammar written in JavaScript
2. **Rust FFI Library**: Provides LaTeX conversion functionality via C-compatible interface
3. **Language Bindings**: 
   - Node.js: Uses `dlopen` to dynamically load Rust library
   - Python: Uses ctypes to call Rust functions
   - Rust: Direct library usage
   - C: Thin wrapper library that dynamically loads Rust FFI functions

## Roadmap

### Completed ✓
- [x] `symbols-config.json` for common symbols
- [x] `grammar.js` for parsing expressions into trees
- [x] Basic test cases in `test/corpus`
- [x] Rust FFI library with LaTeX conversion
- [x] Node.js bindings with dynamic library loading
- [x] Python bindings

### In Progress / Planned
- [x] C language bindings ✓
- [ ] Remove redundant precedences in grammar
- [ ] Add more corner case tests (`a/b/c/d`, `x^y^z`, etc.)
- [ ] Additional language bindings (Go, Swift)
- [ ] `to_mathml` conversion
- [ ] Performance optimizations
- [ ] WebAssembly build target

## Troubleshooting

### Common Issues

1. **Segmentation fault in Node.js bindings**
   - Ensure Rust library is built: `npm run build:rust`
   - Rebuild everything: `npm run rebuild`
   - Check that Rust library is copied: `npm run copy:rust-lib`

2. **Missing symbols in Rust library**
   - Clean and rebuild: `cargo clean && cargo build --release`
   - Check exports: `nm -gU target/release/libtree_sitter_asciimath.dylib`

3. **Node-gyp build failures**
   - Ensure Python is installed and in PATH
   - Update node-gyp: `npm install -g node-gyp`
   - Clear build cache: `rm -rf build/ node_modules/`

4. **Python binding issues**
   - Ensure uv is installed: `curl -LsSf https://astral.sh/uv/install.sh | sh`
   - Clean Python cache: `uv clean`
   - Reinstall: `npm run uv-prepare` or manually reinstall any library (e.g., `wheel`)

### Package Manager Compatibility

⚠️ **Warning**: Using `pnpm` may cause issues with `gyp` and native bindings. Recommended to use `npm` for this project.

### Platform Support

- **macOS**: Fully supported (tested)
- **Linux**: Should work (needs testing)
- **Windows**: Should work with MSVC toolchain (needs testing)

## API Reference

### Node.js API

```javascript
// Import the binding
const binding = require('tree-sitter-asciimath/bindings/node');

// Available exports
const { language, toLatex } = binding;

// Convert AsciiMath to LaTeX
const latex = toLatex('x^2 + sqrt(y)');
// Returns: "x^{2} + \sqrt{y}"

// Use with tree-sitter parser
const Parser = require('tree-sitter');
const parser = new Parser();
parser.setLanguage(language);
const tree = parser.parse('a + b');
```

### Rust API

```rust
use tree_sitter_asciimath::{LANGUAGE, AsciiMathToLatex};

fn main() {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&LANGUAGE.into())
        .expect("Error loading AsciiMath parser");
    
    let transformer = AsciiMathToLatex::new();
    let code = "x^2";
    let tree = parser.parse(code, None).unwrap();
    let result = transformer.to_latex(tree.root_node(), code.as_bytes()).unwrap();
    
    println!("{}", result); // Output: "x^{2}"
}
```

### C API

```c
#include "tree_sitter_asciimath.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Convert AsciiMath to LaTeX
    char* latex = asciimath_convert_to_latex("x^2 + sqrt(y)");
    if (latex) {
        printf("LaTeX: %s\n", latex); // Output: "x^{2} + \sqrt{y}"
        free(latex);
    }
    
    // Get tree-sitter language
    TSLanguage* language = tree_sitter_asciimath();
    if (language) {
        printf("Got tree-sitter language\n");
    }
    
    // Cleanup
    asciimath_cleanup();
    return 0;
}
```

**Building C bindings:**
```bash
# Using Makefile
cd bindings/c
make
make run  # Run example

# Or using npm
npm run build:c
npm run test:c
```

### Python API

```python
import tree_sitter_asciimath

# Convert AsciiMath to LaTeX
result = tree_sitter_asciimath.to_latex("x^2 + y^2")
print(result)  # Output: "x^{2} + y^{2}"
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Run tests:
   ```bash
   npm run test:node
   npm run test:rust
   npm run test:python
   ```
5. Submit a pull request

## C Binding Details

### Building from Source

```bash
# Method 1: Using npm scripts
npm run rebuild:all  # Builds everything including C bindings

# Method 2: Manual build
cd bindings/c
make          # Build using Makefile
./build.sh    # Alternative: build using shell script
```

### Library Files

The C binding produces:
- `libtree_sitter_asciimath_c.dylib` (macOS) / `.so` (Linux) / `.dll` (Windows) - Shared library
- `libtree_sitter_asciimath_c.a` - Static library
- `tree-sitter-asciimath-c.pc` - pkg-config file

### Dependencies

The C binding has the following dependencies:
1. **Runtime**: Rust FFI library (`libtree_sitter_asciimath.*`)
2. **Build-time**: Rust library must be built first
3. **System**: `dlopen`/`dlsym` for dynamic loading

### Integration with Other Languages

The C binding can be used as a foundation for bindings in other languages:

- **Go**: Use cgo to call C functions
- **Swift**: Create a bridging header
- **Rust (FFI)**: Use `extern "C"` to call C functions
- **Python (alternative)**: Use ctypes with C library instead of direct Rust FFI

## License

MIT License - see [LICENSE](LICENSE) file for details.

## Acknowledgments

- [tree-sitter](https://tree-sitter.github.io/) for the parsing framework
- [AsciiMath](http://asciimath.org) for the mathematical notation syntax
- All contributors and users of this project
