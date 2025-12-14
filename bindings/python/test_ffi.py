#!/usr/bin/env python3
"""
Test script for tree-sitter-asciimath Python FFI binding.
"""

import sys
import os
import yaml
from pathlib import Path

# Add parent directory to path for imports
sys.path.insert(0, str(Path(__file__).parent.parent))

from tree_sitter_asciimath import to_latex_ffi, AsciiMathFFI, test_ffi


def load_test_cases(yaml_path: str):
    """Load test cases from YAML file."""
    with open(yaml_path, 'r', encoding='utf-8') as f:
        data = yaml.safe_load(f)
    
    test_cases = []
    for item in data:
        if isinstance(item, dict) and 'input' in item and 'expected' in item:
            test_cases.append((item['input'], item['expected']))
    
    return test_cases


def run_ffi_tests(test_cases, ffi_instance=None):
    """Run FFI tests with given test cases."""
    print("=== Running FFI Tests ===")
    
    if ffi_instance:
        print(f"Using FFI instance: {ffi_instance}")
    else:
        print("Using global FFI instance")
    
    passed = 0
    failed = 0
    errors = 0
    
    for i, (input_expr, expected) in enumerate(test_cases, 1):
        print(f"\nTest {i}/{len(test_cases)}:")
        print(f"  Input:    {input_expr!r}")
        print(f"  Expected: {expected!r}")
        
        try:
            if ffi_instance:
                result = ffi_instance.to_latex(input_expr)
            else:
                result = to_latex_ffi(input_expr)
            
            print(f"  Result:   {result!r}")
            
            if result == expected:
                print("  Status:   PASSED ✓")
                passed += 1
            else:
                print("  Status:   FAILED ✗")
                print(f"  Difference: Expected {expected!r} but got {result!r}")
                failed += 1
                
        except Exception as e:
            print(f"  Result:   ERROR - {e}")
            print("  Status:   ERROR ✗")
            errors += 1
    
    return passed, failed, errors


def test_performance(test_cases, iterations=100):
    """Test FFI performance."""
    print("\n=== Performance Test ===")
    
    import time
    
    # Warm up
    for _ in range(10):
        to_latex_ffi("x^2")
    
    # Test a simple expression
    start = time.perf_counter()
    for _ in range(iterations):
        to_latex_ffi("x^2 + y^2 = z^2")
    end = time.perf_counter()
    
    avg_time = (end - start) * 1000 / iterations  # ms per conversion
    print(f"Average time per conversion: {avg_time:.3f} ms")
    print(f"Conversions per second: {1000/avg_time:.0f}")
    
    # Test all expressions once
    if test_cases:
        start = time.perf_counter()
        for input_expr, _ in test_cases:
            try:
                to_latex_ffi(input_expr)
            except:
                pass
        end = time.perf_counter()
        
        total_time = (end - start) * 1000  # ms
        print(f"\nTime to convert all {len(test_cases)} test cases: {total_time:.1f} ms")
        print(f"Average per complex expression: {total_time/len(test_cases):.2f} ms")


def test_error_handling():
    """Test error handling."""
    print("\n=== Error Handling Tests ===")
    
    test_cases = [
        (None, "None input"),
        ("", "Empty string"),
        ("invalid_unicode_\xff", "Invalid UTF-8"),
    ]
    
    for input_val, description in test_cases:
        print(f"\nTesting {description}:")
        try:
            if input_val is None:
                result = to_latex_ffi(input_val)  # type: ignore for error handler
            else:
                result = to_latex_ffi(input_val)
            print(f"  Result: {result!r} (unexpected success)")
        except Exception as e:
            print(f"  Expected error: {type(e).__name__}: {e}")


def test_custom_library_path():
    """Test loading library from custom path."""
    print("\n=== Custom Library Path Test ===")
    
    # Try to find library in common locations
    search_paths = [
        Path(__file__).parent.parent.parent / "build" / "libtree_sitter_asciimath.dylib",
        Path(__file__).parent.parent.parent / "target" / "release" / "libtree_sitter_asciimath.dylib",
        Path(__file__).parent.parent.parent / "bindings" / "node" / "libtree_sitter_asciimath.dylib",
    ]
    
    for lib_path in search_paths:
        if lib_path.exists():
            print(f"Found library at: {lib_path}")
            try:
                ffi = AsciiMathFFI(str(lib_path))
                result = ffi.to_latex("x^2")
                print(f"  Successfully loaded: {result}")
                return ffi
            except Exception as e:
                print(f"  Failed to load: {e}")
    
    print("No library found in common locations")
    return None


def main():
    """Main test function."""
    print("tree-sitter-asciimath Python FFI Test Suite")
    print("=" * 50)
    
    # First, run basic FFI test
    print("\n1. Basic FFI Test:")
    success, message = test_ffi()
    print(f"   {message}")
    if not success:
        print("   Basic test failed, aborting further tests.")
        return 1
    
    # Load test cases
    yaml_path = Path(__file__).parent.parent.parent / "bindings" / "test_cases" / "common_cases.yml"
    if not yaml_path.exists():
        print(f"\nWarning: Test cases file not found at {yaml_path}")
        test_cases = []
    else:
        print(f"\n2. Loading test cases from: {yaml_path}")
        test_cases = load_test_cases(str(yaml_path))
        print(f"   Loaded {len(test_cases)} test cases")
    
    # Run FFI tests
    if test_cases:
        # Test with global instance
        passed, failed, errors = run_ffi_tests(test_cases[:20])  # Test first 20 for speed
        
        print(f"\n=== Test Summary ===")
        print(f"Total:  {len(test_cases[:20])}")
        print(f"Passed: {passed}")
        print(f"Failed: {failed}")
        print(f"Errors: {errors}")
        
        if failed == 0 and errors == 0:
            print("\nAll tests passed! ✓")
        else:
            print(f"\n{failed + errors} tests failed ✗")
    
    # Test custom library path
    custom_ffi = test_custom_library_path()
    if custom_ffi and test_cases:
        print("\n3. Testing with custom FFI instance:")
        run_ffi_tests(test_cases[:5], custom_ffi)  # Test first 5
    
    # Test error handling
    test_error_handling()
    
    # Test performance
    if test_cases:
        test_performance(test_cases[:10], iterations=100)
    
    # Demo some conversions
    print("\n=== Demo Conversions ===")
    demo_cases = [
        "x^2 + y^2 = z^2",
        "sqrt(a^2 + b^2)",
        "sum_(i=1)^n i",
        "int_0^1 f(x) dx",
        "alpha + beta = gamma",
        "frac{1}{2} + frac{1}{3}",
    ]
    
    for expr in demo_cases:
        try:
            result = to_latex_ffi(expr)
            print(f"{expr:30} => {result}")
        except Exception as e:
            print(f"{expr:30} => ERROR: {e}")
    
    print("\n=== Test Suite Complete ===")
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except KeyboardInterrupt:
        print("\n\nTest interrupted by user.")
        sys.exit(1)
    except Exception as e:
        print(f"\nUnexpected error: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)
