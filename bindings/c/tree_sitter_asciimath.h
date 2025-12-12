#ifndef TREE_SITTER_ASCIIMATH_H
#define TREE_SITTER_ASCIIMATH_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations
typedef struct TSLanguage TSLanguage;

// ============================================================================
// Tree-sitter Language API
// ============================================================================

/**
 * Get the tree-sitter language for AsciiMath.
 * 
 * @return Pointer to the TSLanguage structure
 */
TSLanguage* tree_sitter_asciimath(void);

// ============================================================================
// LaTeX Conversion API
// ============================================================================

/**
 * Opaque handle for a string returned by the conversion functions.
 * This struct is defined in the Rust implementation.
 */
typedef struct FfiString FfiString;

/**
 * Convert AsciiMath expression directly to LaTeX.
 * 
 * @param input Null-terminated AsciiMath string
 * @return Pointer to FfiString containing LaTeX result, or NULL on error
 * 
 * @note The returned string must be freed with asciimath_free_string()
 */
FfiString* asciimath_to_latex(const char* input);

/**
 * Get the data pointer from an FfiString.
 * 
 * @param str Pointer to FfiString
 * @return Pointer to null-terminated string data
 */
const char* asciimath_string_data(const FfiString* str);

/**
 * Get the length of the string in an FfiString (excluding null terminator).
 * 
 * @param str Pointer to FfiString
 * @return Length of the string in bytes
 */
unsigned int asciimath_string_len(const FfiString* str);

/**
 * Free a string returned by asciimath_to_latex().
 * 
 * @param str Pointer to FfiString to free
 */
void asciimath_free_string(FfiString* str);

// ============================================================================
// Convenience Functions
// ============================================================================

/**
 * Convert AsciiMath to LaTeX and return as a newly allocated C string.
 * 
 * @param input Null-terminated AsciiMath string
 * @return Newly allocated null-terminated LaTeX string, or NULL on error
 * 
 * @note The returned string must be freed with free()
 */
char* asciimath_convert_to_latex(const char* input);

/**
 * Convert AsciiMath to LaTeX and write to a buffer.
 * 
 * @param input Null-terminated AsciiMath string
 * @param buffer Buffer to write result to
 * @param buffer_size Size of the buffer in bytes
 * @return Number of bytes written (excluding null terminator),
 *         or required buffer size if buffer is too small
 * 
 * @note If buffer is NULL, returns the required buffer size.
 * @note If buffer_size is 0, returns the required buffer size.
 * @note If the result is truncated, it will still be null-terminated.
 */
unsigned int asciimath_convert_to_latex_buffer(const char* input, char* buffer, unsigned int buffer_size);

// ============================================================================
// Parser Utility Functions
// ============================================================================

/**
 * Parse an AsciiMath string and return the parse tree as a string.
 * This is a convenience function for debugging and testing.
 * 
 * @param input Null-terminated AsciiMath string
 * @return Newly allocated string containing parse tree representation,
 *         or NULL on error
 * 
 * @note The returned string must be freed with free()
 */
char* asciimath_parse_tree_string(const char* input);

// ============================================================================
// Error Handling
// ============================================================================

/**
 * Get the last error message.
 * 
 * @return Null-terminated error message string, or NULL if no error
 * 
 * @note The returned string is valid until the next API call.
 */
const char* asciimath_last_error(void);

/**
 * Clear any stored error message.
 */
void asciimath_clear_error(void);

/**
 * Cleanup library resources.
 * This function should be called before program exit to properly
 * unload the Rust library and free resources.
 */
void asciimath_cleanup(void);

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_ASCIIMATH_H