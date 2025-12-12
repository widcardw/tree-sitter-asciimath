# Makefile for tree-sitter-asciimath C bindings
# This Makefile builds the C wrapper library that links to the Rust FFI library

# Project directories
SRC_DIR := .
BUILD_DIR := build
PROJECT_ROOT := ../..

# Platform detection
UNAME_S := $(shell uname -s)
UNAME_M := $(shell uname -m)

# Platform-specific settings
ifeq ($(UNAME_S),Darwin)
	LIB_EXT := dylib
	LIB_PREFIX := lib
	SHARED_FLAG := -dynamiclib
	OUTPUT_NAME := libtree_sitter_asciimath_c.$(LIB_EXT)
	INSTALL_NAME := @rpath/$(OUTPUT_NAME)
	INSTALL_NAME_TOOL := install_name_tool
else ifeq ($(UNAME_S),Linux)
	LIB_EXT := so
	LIB_PREFIX := lib
	SHARED_FLAG := -shared
	OUTPUT_NAME := libtree_sitter_asciimath_c.$(LIB_EXT)
	INSTALL_NAME := 
	INSTALL_NAME_TOOL := 
else ifneq (,$(findstring MINGW,$(UNAME_S)))
	LIB_EXT := dll
	LIB_PREFIX := 
	SHARED_FLAG := -shared
	OUTPUT_NAME := tree_sitter_asciimath_c.$(LIB_EXT)
	INSTALL_NAME := 
	INSTALL_NAME_TOOL := 
else ifneq (,$(findstring MSYS,$(UNAME_S)))
	LIB_EXT := dll
	LIB_PREFIX := 
	SHARED_FLAG := -shared
	OUTPUT_NAME := tree_sitter_asciimath_c.$(LIB_EXT)
	INSTALL_NAME := 
	INSTALL_NAME_TOOL := 
else ifneq (,$(findstring CYGWIN,$(UNAME_S)))
	LIB_EXT := dll
	LIB_PREFIX := 
	SHARED_FLAG := -shared
	OUTPUT_NAME := tree_sitter_asciimath_c.$(LIB_EXT)
	INSTALL_NAME := 
	INSTALL_NAME_TOOL := 
else
	$(error Unsupported platform: $(UNAME_S))
endif

# Rust library name
RUST_LIB_NAME := $(LIB_PREFIX)tree_sitter_asciimath.$(LIB_EXT)

# Search paths for Rust library
RUST_LIB_PATHS := \
	$(PROJECT_ROOT)/target/release/$(RUST_LIB_NAME) \
	$(PROJECT_ROOT)/build/Release/$(RUST_LIB_NAME) \
	$(PROJECT_ROOT)/build/$(RUST_LIB_NAME) \
	$(PROJECT_ROOT)/bindings/node/$(RUST_LIB_NAME)

# Find Rust library
RUST_LIB_PATH := $(firstword $(wildcard $(RUST_LIB_PATHS)))

# Source files
C_SRCS := $(SRC_DIR)/tree_sitter_asciimath.c
C_OBJS := $(BUILD_DIR)/tree_sitter_asciimath.o

# Example source
EXAMPLE_SRC := $(SRC_DIR)/example.c
EXAMPLE_EXE := $(BUILD_DIR)/example

# Compiler and linker flags
CC := gcc
CFLAGS := -Wall -Wextra -O2 -fPIC -I$(SRC_DIR)
LDFLAGS := -L$(BUILD_DIR) -ltree_sitter_asciimath -ldl

# Default target
all: $(BUILD_DIR)/$(OUTPUT_NAME) $(BUILD_DIR)/libtree_sitter_asciimath_c.a $(EXAMPLE_EXE) pkg-config

# Create build directory
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# Compile C source files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

# Create shared library
$(BUILD_DIR)/$(OUTPUT_NAME): $(C_OBJS) | check-rust-lib
	@echo "Creating shared library $@..."
	@$(CC) $(SHARED_FLAG) $(C_OBJS) -o $@ $(LDFLAGS)
ifneq ($(INSTALL_NAME),)
	@if command -v $(INSTALL_NAME_TOOL) >/dev/null 2>&1; then \
		echo "Setting install name to $(INSTALL_NAME)..."; \
		$(INSTALL_NAME_TOOL) -id "$(INSTALL_NAME)" "$@"; \
	fi
endif

# Create static library
$(BUILD_DIR)/libtree_sitter_asciimath_c.a: $(C_OBJS)
	@echo "Creating static library $@..."
	@ar rcs $@ $(C_OBJS)

# Build example program
$(EXAMPLE_EXE): $(EXAMPLE_SRC) $(BUILD_DIR)/$(OUTPUT_NAME)
	@echo "Building example program $@..."
	@$(CC) $(CFLAGS) $(EXAMPLE_SRC) -o $@ -L$(BUILD_DIR) -ltree_sitter_asciimath_c -Wl,-rpath,$(BUILD_DIR)

# Create pkg-config file
pkg-config: $(BUILD_DIR)/tree-sitter-asciimath-c.pc

$(BUILD_DIR)/tree-sitter-asciimath-c.pc: | $(BUILD_DIR)
	@echo "Creating pkg-config file $@..."
	@echo "prefix=$(BUILD_DIR)" > $@
	@echo "libdir=\$${prefix}" >> $@
	@echo "includedir=$(SRC_DIR)" >> $@
	@echo "" >> $@
	@echo "Name: tree-sitter-asciimath-c" >> $@
	@echo "Description: C bindings for tree-sitter-asciimath with LaTeX conversion" >> $@
	@echo "Version: 0.1.0" >> $@
	@echo "Libs: -L\$${libdir} -ltree_sitter_asciimath_c" >> $@
	@echo "Cflags: -I\$${includedir}" >> $@
	@echo "Requires: " >> $@

# Check if Rust library exists
check-rust-lib:
ifndef RUST_LIB_PATH
	$(error Rust library not found! Please build the Rust library first: npm run build:rust)
else
	@echo "Using Rust library: $(RUST_LIB_PATH)"
	@cp "$(RUST_LIB_PATH)" "$(BUILD_DIR)/" 2>/dev/null || true
endif

# Run the example
run: $(EXAMPLE_EXE)
	@cd $(BUILD_DIR) && LD_LIBRARY_PATH=. DYLD_LIBRARY_PATH=. ./example

# Clean build artifacts
clean:
	@echo "Cleaning build directory..."
	@rm -rf $(BUILD_DIR)

# Install the library (system-wide, requires sudo on some systems)
install: all
	@echo "Installing C bindings..."
	@mkdir -p /usr/local/lib /usr/local/include 2>/dev/null || true
	@cp $(BUILD_DIR)/$(OUTPUT_NAME) /usr/local/lib/ 2>/dev/null || \
		echo "Failed to copy shared library. Try with sudo."
	@cp $(BUILD_DIR)/libtree_sitter_asciimath_c.a /usr/local/lib/ 2>/dev/null || \
		echo "Failed to copy static library. Try with sudo."
	@cp $(SRC_DIR)/tree_sitter_asciimath.h /usr/local/include/ 2>/dev/null || \
		echo "Failed to copy header file. Try with sudo."
	@cp $(BUILD_DIR)/tree-sitter-asciimath-c.pc /usr/local/lib/pkgconfig/ 2>/dev/null || \
		echo "Failed to copy pkg-config file. Try with sudo."
	@echo "Installation complete."

# Uninstall the library
uninstall:
	@echo "Uninstalling C bindings..."
	@rm -f /usr/local/lib/$(OUTPUT_NAME) 2>/dev/null || true
	@rm -f /usr/local/lib/libtree_sitter_asciimath_c.a 2>/dev/null || true
	@rm -f /usr/local/include/tree_sitter_asciimath.h 2>/dev/null || true
	@rm -f /usr/local/lib/pkgconfig/tree-sitter-asciimath-c.pc 2>/dev/null || true
	@echo "Uninstallation complete."

# Test the library
test: run

# Show build information
info:
	@echo "=== Build Information ==="
	@echo "Platform: $(UNAME_S)"
	@echo "Architecture: $(UNAME_M)"
	@echo "Library extension: $(LIB_EXT)"
	@echo "Output name: $(OUTPUT_NAME)"
	@echo "Build directory: $(BUILD_DIR)"
	@echo "Rust library: $(RUST_LIB_PATH)"
	@echo "Compiler: $(CC)"
	@echo "CFLAGS: $(CFLAGS)"
	@echo "LDFLAGS: $(LDFLAGS)"

# Phony targets
.PHONY: all clean run install uninstall test info check-rust-lib pkg-config
