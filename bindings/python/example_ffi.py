#!/usr/bin/env python3
"""
Example usage of tree-sitter-asciimath Python FFI binding.

This example demonstrates how to use the FFI binding for high-performance
AsciiMath to LaTeX conversion in Python.
"""

import sys
import os
from pathlib import Path

# Add parent directory to path for imports
sys.path.insert(0, str(Path(__file__).parent.parent))

from tree_sitter_asciimath import to_latex_ffi, AsciiMathFFI, get_ffi, test_ffi


def basic_usage():
    """Demonstrate basic FFI usage."""
    print("=== Basic FFI Usage ===")
    
    # Simplest way: use the global FFI instance
    result = to_latex_ffi("x^2 + y^2 = z^2")
    print(f"to_latex_ffi('x^2 + y^2 = z^2') = {result!r}")
    
    # Get the global FFI instance for more control
    ffi = get_ffi()
    print(f"\nUsing FFI instance from: {ffi.lib_path}")
    
    # Convert multiple expressions
    expressions = [
        "sqrt(a^2 + b^2)",
        "sum_(i=1)^n i",
        "int_0^1 f(x) dx",
        "alpha + beta = gamma",
        "frac{1}{2} + frac{1}{3}",
    ]
    
    print("\nConverting multiple expressions:")
    for expr in expressions:
        try:
            result = ffi.to_latex(expr)
            print(f"  {expr:30} => {result}")
        except Exception as e:
            print(f"  {expr:30} => ERROR: {e}")


def custom_library_path():
    """Demonstrate using a custom library path."""
    print("\n=== Custom Library Path ===")
    
    # Try to find library in common locations
    search_paths = [
        Path(__file__).parent.parent.parent / "bindings" / "node" / "libtree_sitter_asciimath.dylib",
        Path(__file__).parent.parent.parent / "build" / "libtree_sitter_asciimath.dylib",
        Path(__file__).parent.parent.parent / "target" / "release" / "libtree_sitter_asciimath.dylib",
    ]
    
    for lib_path in search_paths:
        if lib_path.exists():
            print(f"Found library at: {lib_path}")
            try:
                # Create FFI instance with custom path
                ffi = AsciiMathFFI(str(lib_path))
                print(f"Successfully loaded library")
                print(f"Loaded functions: {ffi.get_loaded_functions()}")
                
                # Test conversion
                result = ffi.to_latex("x^2")
                print(f"Test conversion: x^2 => {result}")
                return ffi
            except Exception as e:
                print(f"Failed to load: {e}")
    
    print("No library found in common locations")
    return None


def performance_demo():
    """Demonstrate FFI performance."""
    print("\n=== Performance Demo ===")
    
    import time
    
    # Test expression
    expression = "sum_(i=1)^n sqrt(i^2 + 1)/i"
    
    # Warm up
    for _ in range(10):
        to_latex_ffi("x^2")
    
    # Time single conversion
    start = time.perf_counter()
    result = to_latex_ffi(expression)
    end = time.perf_counter()
    
    single_time = (end - start) * 1000  # ms
    print(f"Single conversion: {single_time:.3f} ms")
    print(f"Result: {result}")
    
    # Time multiple conversions
    iterations = 1000
    start = time.perf_counter()
    for _ in range(iterations):
        to_latex_ffi(expression)
    end = time.perf_counter()
    
    total_time = (end - start) * 1000  # ms
    avg_time = total_time / iterations
    print(f"\n{iterations} conversions: {total_time:.1f} ms total")
    print(f"Average per conversion: {avg_time:.3f} ms")
    print(f"Conversions per second: {1000/avg_time:.0f}")


def error_handling():
    """Demonstrate error handling."""
    print("\n=== Error Handling ===")
    
    test_cases = [
        (None, "None input"),
        (123, "Non-string input"),
        ("", "Empty string"),
        ("x" * 10000, "Very long string"),
    ]
    
    for input_val, description in test_cases:
        print(f"\nTesting {description}:")
        try:
            if input_val is None:
                result = to_latex_ffi(input_val)  # type: ignore for error handler
            else:
                result = to_latex_ffi(input_val)  # type: ignore for error handler
            print(f"  Result: {result!r}")
        except Exception as e:
            print(f"  Caught {type(e).__name__}: {e}")


def integration_example():
    """Example of integrating FFI binding into a larger application."""
    print("\n=== Integration Example ===")
    
    class MathDocumentProcessor:
        """Example class that uses FFI binding for math processing."""
        
        def __init__(self, lib_path=None):
            """Initialize processor with optional custom library path."""
            if lib_path:
                self.ffi = AsciiMathFFI(lib_path)
            else:
                self.ffi = get_ffi()
            
            print(f"MathDocumentProcessor initialized with library: {self.ffi.lib_path}")
        
        def process_document(self, text):
            """Process document text, converting AsciiMath to LaTeX."""
            # In a real application, you would parse the document to find math expressions
            # For this example, we'll just convert if the entire text is math
            try:
                return self.ffi.to_latex(text)
            except Exception as e:
                return f"ERROR: {e}"
        
        def batch_process(self, expressions):
            """Process multiple expressions."""
            results = []
            for expr in expressions:
                try:
                    results.append(self.ffi.to_latex(expr))
                except Exception as e:
                    results.append(f"ERROR: {e}")
            return results
    
    # Create processor
    processor = MathDocumentProcessor()
    
    # Process single expression
    result = processor.process_document("int_0^pi sin(x) dx")
    print(f"Processed: int_0^pi sin(x) dx => {result}")
    
    # Batch process
    expressions = [
        "x^2 + y^2",
        "sqrt(1 - x^2)",
        "lim_(n->oo) (1 + 1/n)^n",
    ]
    
    print("\nBatch processing:")
    results = processor.batch_process(expressions)
    for expr, result in zip(expressions, results):
        print(f"  {expr:30} => {result}")


def main():
    """Main example function."""
    print("tree-sitter-asciimath Python FFI Example")
    print("=" * 60)
    
    # First, test if FFI is working
    print("\n1. Testing FFI functionality:")
    success, message = test_ffi()
    print(f"   {message}")
    
    if not success:
        print("\nFFI test failed. Please ensure:")
        print("  1. Rust library is built: npm run rust:build")
        print("  2. Library is copied: npm run node:copy-lib")
        print("  3. Library is in a searchable location")
        return 1
    
    # Run demos
    basic_usage()
    
    custom_ffi = custom_library_path()
    if custom_ffi:
        print(f"\nCustom FFI instance works: {custom_ffi.to_latex('a^2 + b^2 = c^2')}")
    
    performance_demo()
    error_handling()
    integration_example()
    
    print("\n" + "=" * 60)
    print("Example completed successfully!")
    print("\nTo use FFI binding in your project:")
    print("  1. Ensure Rust library is available")
    print("  2. Import: from tree_sitter_asciimath import to_latex_ffi")
    print("  3. Call: result = to_latex_ffi('your_asciimath_expression')")
    
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except KeyboardInterrupt:
        print("\n\nExample interrupted by user.")
        sys.exit(1)
    except Exception as e:
        print(f"\nUnexpected error: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)
