#include "tree_sitter_asciimath.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    printf("=== Tree-sitter AsciiMath C Binding Example ===\n\n");
    
    // Example 1: Convert AsciiMath to LaTeX
    printf("1. Converting AsciiMath to LaTeX:\n");
    
    const char* test_expressions[] = {
        "x^2",
        "sqrt(a^2 + b^2)",
        "sum_(i=1)^n i",
        "int_0^1 f(x) dx",
        NULL
    };
    
    for (int i = 0; test_expressions[i] != NULL; i++) {
        char* latex = asciimath_convert_to_latex(test_expressions[i]);
        if (latex) {
            printf("   %-20s => %s\n", test_expressions[i], latex);
            free(latex);
        } else {
            const char* error = asciimath_last_error();
            printf("   Error converting '%s': %s\n", test_expressions[i], 
                   error ? error : "Unknown error");
        }
    }
    
    printf("\n2. Using buffer API:\n");
    
    // Example 2: Convert using buffer API
    const char* expression = "alpha + beta = gamma";
    unsigned int required_size = asciimath_convert_to_latex_buffer(expression, NULL, 0);
    
    if (required_size > 0) {
        char* buffer = malloc(required_size + 1);
        if (buffer) {
            unsigned int written = asciimath_convert_to_latex_buffer(expression, buffer, required_size + 1);
            if (written > 0) {
                printf("   %-20s => %s\n", expression, buffer);
            }
            free(buffer);
        }
    }
    
    printf("\n3. Error handling example:\n");
    
    // Example 3: Error handling
    char* result = asciimath_convert_to_latex(NULL);
    if (result == NULL) {
        const char* error = asciimath_last_error();
        printf("   Expected error for NULL input: %s\n", 
               error ? error : "No error message");
    }
    
    // Clear any previous error
    asciimath_clear_error();
    
    printf("\n4. Getting tree-sitter language:\n");
    
    // Example 4: Get tree-sitter language
    TSLanguage* language = tree_sitter_asciimath();
    if (language) {
        printf("   Successfully obtained tree-sitter language\n");
    } else {
        printf("   Failed to get tree-sitter language\n");
    }
    
    printf("\n=== Example completed ===\n");
    
    // Cleanup
    asciimath_cleanup();
    
    return 0;
}
