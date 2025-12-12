#!/bin/bash

# Build script for tree-sitter-asciimath C bindings
# This script builds the C wrapper library that links to the Rust FFI library

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

echo "=== Building tree-sitter-asciimath C bindings ==="

# Detect platform
PLATFORM="$(uname -s)"
ARCH="$(uname -m)"

echo "Platform: $PLATFORM"
echo "Architecture: $ARCH"

# Set platform-specific variables
case "$PLATFORM" in
    Darwin)
        LIB_EXT="dylib"
        LIB_PREFIX="lib"
        SHARED_FLAG="-dynamiclib"
        OUTPUT_NAME="libtree_sitter_asciimath_c.$LIB_EXT"
        ;;
    Linux)
        LIB_EXT="so"
        LIB_PREFIX="lib"
        SHARED_FLAG="-shared"
        OUTPUT_NAME="libtree_sitter_asciimath_c.$LIB_EXT"
        ;;
    MINGW*|MSYS*|CYGWIN*)
        LIB_EXT="dll"
        LIB_PREFIX=""
        SHARED_FLAG="-shared"
        OUTPUT_NAME="tree_sitter_asciimath_c.$LIB_EXT"
        ;;
    *)
        echo "Unsupported platform: $PLATFORM"
        exit 1
        ;;
esac

# Create build directory
BUILD_DIR="$SCRIPT_DIR/build"
mkdir -p "$BUILD_DIR"

# Find Rust library
RUST_LIB_NAME="${LIB_PREFIX}tree_sitter_asciimath.$LIB_EXT"
RUST_LIB_PATHS=(
    "$PROJECT_ROOT/target/release/$RUST_LIB_NAME"
    "$PROJECT_ROOT/build/Release/$RUST_LIB_NAME"
    "$PROJECT_ROOT/build/$RUST_LIB_NAME"
    "$PROJECT_ROOT/bindings/node/$RUST_LIB_NAME"
)

RUST_LIB_PATH=""
for path in "${RUST_LIB_PATHS[@]}"; do
    if [[ -f "$path" ]]; then
        RUST_LIB_PATH="$path"
        echo "Found Rust library: $RUST_LIB_PATH"
        break
    fi
done

if [[ -z "$RUST_LIB_PATH" ]]; then
    echo "ERROR: Rust library not found!"
    echo "Please build the Rust library first:"
    echo "  npm run build:rust"
    echo "Or run: npm run rebuild"
    exit 1
fi

# Copy Rust library to build directory for linking
cp "$RUST_LIB_PATH" "$BUILD_DIR/"

# Compiler flags
CFLAGS="-Wall -Wextra -O2 -fPIC -I$SCRIPT_DIR"
LDFLAGS="-L$BUILD_DIR -ltree_sitter_asciimath -ldl"

# Compile the C wrapper
echo "Compiling C wrapper..."
gcc $CFLAGS -c "$SCRIPT_DIR/tree_sitter_asciimath.c" -o "$BUILD_DIR/tree_sitter_asciimath.o"

# Create shared library
echo "Creating shared library..."
gcc $SHARED_FLAG \
    "$BUILD_DIR/tree_sitter_asciimath.o" \
    -o "$BUILD_DIR/$OUTPUT_NAME" \
    $LDFLAGS

# Create static library (optional)
echo "Creating static library..."
ar rcs "$BUILD_DIR/libtree_sitter_asciimath_c.a" "$BUILD_DIR/tree_sitter_asciimath.o"

# Build example program
echo "Building example program..."
gcc $CFLAGS \
    "$SCRIPT_DIR/example.c" \
    -o "$BUILD_DIR/example" \
    -L"$BUILD_DIR" \
    -ltree_sitter_asciimath_c \
    -Wl,-rpath,"$BUILD_DIR"

# Create pkg-config file
echo "Creating pkg-config file..."
cat > "$BUILD_DIR/tree-sitter-asciimath-c.pc" << EOF
prefix=$BUILD_DIR
libdir=\${prefix}
includedir=$SCRIPT_DIR

Name: tree-sitter-asciimath-c
Description: C bindings for tree-sitter-asciimath with LaTeX conversion
Version: 0.1.0
Libs: -L\${libdir} -ltree_sitter_asciimath_c
Cflags: -I\${includedir}
Requires: 
EOF

echo ""
echo "=== Build completed successfully ==="
echo ""
echo "Output files in $BUILD_DIR/:"
echo "  - $OUTPUT_NAME          (shared library)"
echo "  - libtree_sitter_asciimath_c.a  (static library)"
echo "  - example               (example program)"
echo "  - tree-sitter-asciimath-c.pc (pkg-config file)"
echo ""
echo "To run the example:"
echo "  cd $BUILD_DIR && ./example"
echo ""
echo "To use the library in your C program:"
echo "  #include \"tree_sitter_asciimath.h\""
echo "  Compile with: -I$SCRIPT_DIR -L$BUILD_DIR -ltree_sitter_asciimath_c"
echo ""
echo "Note: The Rust library ($RUST_LIB_NAME) must be available at runtime."
echo "It has been copied to the build directory for convenience."