#include "tree_sitter_asciimath.h"
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>

// ============================================================================
// Dynamic Library Loading
// ============================================================================

// Function pointer types for Rust FFI functions
typedef TSLanguage* (*tree_sitter_asciimath_fn)(void);
typedef FfiString* (*directly_to_latex_fn)(const char*);
typedef void (*free_ffi_string_fn)(FfiString*);
typedef const char* (*ffi_string_data_fn)(const FfiString*);
typedef unsigned int (*ffi_string_len_fn)(const FfiString*);

// Function pointers
static tree_sitter_asciimath_fn tree_sitter_asciimath_ptr = NULL;
static directly_to_latex_fn directly_to_latex_ptr = NULL;
static free_ffi_string_fn free_ffi_string_ptr = NULL;
static ffi_string_data_fn ffi_string_data_ptr = NULL;
static ffi_string_len_fn ffi_string_len_ptr = NULL;

// Library handle
static void* rust_lib_handle = NULL;

// Error buffer
static char last_error[256] = {0};

// ============================================================================
// Internal Helper Functions
// ============================================================================

static void set_error(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vsnprintf(last_error, sizeof(last_error), format, args);
    va_end(args);
}

static void clear_error(void) {
    last_error[0] = '\0';
}

static int load_rust_library(void) {
    if (rust_lib_handle != NULL) {
        return 1; // Already loaded
    }
    
    // Try to load the Rust library from various locations
    const char* search_paths[] = {
        "libtree_sitter_asciimath.dylib",  // macOS
        "libtree_sitter_asciimath.so",     // Linux
        "tree_sitter_asciimath.dll",       // Windows
        "./libtree_sitter_asciimath.dylib",
        "./build/Release/libtree_sitter_asciimath.dylib",
        "./build/libtree_sitter_asciimath.dylib",
        "./bindings/node/libtree_sitter_asciimath.dylib",
        "./bindings/rust/target/release/libtree_sitter_asciimath.dylib",
        "./target/release/libtree_sitter_asciimath.dylib",
        NULL
    };
    
    for (int i = 0; search_paths[i] != NULL; i++) {
        rust_lib_handle = dlopen(search_paths[i], RTLD_LAZY | RTLD_LOCAL);
        if (rust_lib_handle != NULL) {
            break;
        }
    }
    
    if (rust_lib_handle == NULL) {
        set_error("Failed to load Rust library: %s", dlerror());
        return 0;
    }
    
    // Clear any previous error
    dlerror();
    
    // Load function pointers
    tree_sitter_asciimath_ptr = (tree_sitter_asciimath_fn)dlsym(rust_lib_handle, "tree_sitter_asciimath");
    if (tree_sitter_asciimath_ptr == NULL) {
        // Try the reexported version
        tree_sitter_asciimath_ptr = (tree_sitter_asciimath_fn)dlsym(rust_lib_handle, "reexport_tree_sitter_asciimath");
    }
    
    directly_to_latex_ptr = (directly_to_latex_fn)dlsym(rust_lib_handle, "directly_to_latex");
    free_ffi_string_ptr = (free_ffi_string_fn)dlsym(rust_lib_handle, "free_ffi_string");
    ffi_string_data_ptr = (ffi_string_data_fn)dlsym(rust_lib_handle, "ffi_string_data");
    ffi_string_len_ptr = (ffi_string_len_fn)dlsym(rust_lib_handle, "ffi_string_len");
    
    // Check if all required functions were loaded
    if (tree_sitter_asciimath_ptr == NULL || directly_to_latex_ptr == NULL ||
        free_ffi_string_ptr == NULL || ffi_string_data_ptr == NULL || ffi_string_len_ptr == NULL) {
        set_error("Failed to load required functions from Rust library");
        dlclose(rust_lib_handle);
        rust_lib_handle = NULL;
        return 0;
    }
    
    return 1;
}

static void ensure_library_loaded(void) {
    static int initialized = 0;
    if (!initialized) {
        load_rust_library();
        initialized = 1;
    }
}

// ============================================================================
// Public API Implementation
// ============================================================================

TSLanguage* tree_sitter_asciimath(void) {
    ensure_library_loaded();
    if (tree_sitter_asciimath_ptr == NULL) {
        return NULL;
    }
    return tree_sitter_asciimath_ptr();
}

FfiString* asciimath_to_latex(const char* input) {
    if (input == NULL) {
        set_error("Input string is NULL");
        return NULL;
    }
    
    ensure_library_loaded();
    if (directly_to_latex_ptr == NULL) {
        set_error("Rust library not properly loaded");
        return NULL;
    }
    
    clear_error();
    return directly_to_latex_ptr(input);
}

const char* asciimath_string_data(const FfiString* str) {
    if (str == NULL) {
        return NULL;
    }
    
    ensure_library_loaded();
    if (ffi_string_data_ptr == NULL) {
        return NULL;
    }
    
    return ffi_string_data_ptr(str);
}

unsigned int asciimath_string_len(const FfiString* str) {
    if (str == NULL) {
        return 0;
    }
    
    ensure_library_loaded();
    if (ffi_string_len_ptr == NULL) {
        return 0;
    }
    
    return ffi_string_len_ptr(str);
}

void asciimath_free_string(FfiString* str) {
    if (str == NULL) {
        return;
    }
    
    ensure_library_loaded();
    if (free_ffi_string_ptr != NULL) {
        free_ffi_string_ptr(str);
    }
}

char* asciimath_convert_to_latex(const char* input) {
    if (input == NULL) {
        set_error("Input string is NULL");
        return NULL;
    }
    
    FfiString* ffi_result = asciimath_to_latex(input);
    if (ffi_result == NULL) {
        return NULL; // Error already set
    }
    
    const char* data = asciimath_string_data(ffi_result);
    unsigned int len = asciimath_string_len(ffi_result);
    
    if (data == NULL || len == 0) {
        asciimath_free_string(ffi_result);
        set_error("Empty result from conversion");
        return NULL;
    }
    
    // Allocate memory for the result (including null terminator)
    char* result = (char*)malloc(len + 1);
    if (result == NULL) {
        asciimath_free_string(ffi_result);
        set_error("Memory allocation failed");
        return NULL;
    }
    
    // Copy the data
    memcpy(result, data, len);
    result[len] = '\0';
    
    asciimath_free_string(ffi_result);
    clear_error();
    return result;
}

unsigned int asciimath_convert_to_latex_buffer(const char* input, char* buffer, unsigned int buffer_size) {
    if (input == NULL) {
        set_error("Input string is NULL");
        return 0;
    }
    
    FfiString* ffi_result = asciimath_to_latex(input);
    if (ffi_result == NULL) {
        return 0; // Error already set
    }
    
    const char* data = asciimath_string_data(ffi_result);
    unsigned int len = asciimath_string_len(ffi_result);
    
    if (data == NULL || len == 0) {
        asciimath_free_string(ffi_result);
        set_error("Empty result from conversion");
        return 0;
    }
    
    // If buffer is NULL or buffer_size is 0, return required size
    if (buffer == NULL || buffer_size == 0) {
        asciimath_free_string(ffi_result);
        clear_error();
        return len;
    }
    
    // Copy as much as will fit
    unsigned int copy_len = len;
    if (copy_len >= buffer_size) {
        copy_len = buffer_size - 1;
    }
    
    memcpy(buffer, data, copy_len);
    buffer[copy_len] = '\0';
    
    asciimath_free_string(ffi_result);
    clear_error();
    return copy_len;
}

// ============================================================================
// Parser Utility Functions
// ============================================================================

char* asciimath_parse_tree_string(const char* input) {
    // This is a placeholder function that returns a simple representation
    // In a full implementation, this would return the actual parse tree
    if (input == NULL) {
        set_error("Input string is NULL");
        return NULL;
    }
    
    // For now, just return a simple message
    const char* prefix = "Parse tree for: ";
    size_t prefix_len = strlen(prefix);
    size_t input_len = strlen(input);
    char* result = malloc(prefix_len + input_len + 1);
    
    if (result == NULL) {
        set_error("Memory allocation failed");
        return NULL;
    }
    
    strcpy(result, prefix);
    strcat(result, input);
    
    clear_error();
    return result;
}

// ============================================================================
// Error Handling
// ============================================================================

const char* asciimath_last_error(void) {
    return last_error[0] != '\0' ? last_error : NULL;
}

void asciimath_clear_error(void) {
    clear_error();
}

// ============================================================================
// Cleanup
// ============================================================================

// Optional cleanup function that can be called at program exit
void asciimath_cleanup(void) {
    if (rust_lib_handle != NULL) {
        dlclose(rust_lib_handle);
        rust_lib_handle = NULL;
        
        // Reset function pointers
        tree_sitter_asciimath_ptr = NULL;
        directly_to_latex_ptr = NULL;
        free_ffi_string_ptr = NULL;
        ffi_string_data_ptr = NULL;
        ffi_string_len_ptr = NULL;
    }
    
    clear_error();
}