#!/usr/bin/env python3
"""
Test script for tree-sitter-asciimath Python FFI binding.
"""
import unittest
from unittest import TestCase
from logging import warning

import sys
import os
import yaml
from pathlib import Path

# Add parent directory to path for imports
PROJ_ROOT = Path(__file__).parent.parent.parent.parent
sys.path.insert(0, str(PROJ_ROOT))

from tree_sitter_asciimath import to_latex_ffi, AsciiMathFFI, get_ffi


class TestCases(TestCase):

    def __init__(self, methodName = 'asciimath_ffi_transform'):
        super().__init__(methodName)
        self.test_cases: list[tuple[str, str]] = None  # type:ignore
        self._load_test_cases(PROJ_ROOT / "bindings" / "test_cases" / "common_cases.yml")

    def _load_test_cases(self, yaml_path: str | Path):
        if self.test_cases is not None:
            warning("Test cases already loaded, skipping")
            return

        if not os.path.exists(yaml_path):
            raise FileNotFoundError(f"Test cases file not found at {yaml_path}")

        with open(yaml_path, 'r', encoding='utf-8') as f:
            data = yaml.safe_load(f)
        
        self.test_cases: list[tuple[str, str]] = []
        for item in data:
            if isinstance(item, dict) and 'input' in item and 'expected' in item:
                self.test_cases.append((item['input'], item['expected']))
        
        return self.test_cases

    def test_ffi(self):
        ffi = get_ffi()
        i, e = 'x^2', 'x^{2}'
        self.assertEqual(ffi.to_latex(i), e)

    def test_common_cases_global(self):
        for i, e in self.test_cases:
            res = to_latex_ffi(i)
            self.assertEqual(e, res, f"Input {i!r}, Expected: {e!r}, Got {res!r}")

    def test_common_cases_local(self):
        ffi = AsciiMathFFI()
        for i, e in self.test_cases:
            res = ffi.to_latex(i)
            self.assertEqual(e, res, f"Input {i!r}, Expected: {e!r}, Got {res!r}")

    @unittest.skip("Performance test")
    def test_performance(self, iterations=10):
        import time
        for _ in range(5):
            to_latex_ffi("x^2")
        
        start = time.perf_counter()
        for it in range(iterations):
            for i, e in self.test_cases:
                try:
                    to_latex_ffi(i)
                except:
                    pass
        end = time.perf_counter()
        
        total_time_ms = (end - start) * 1000
        print(f"\nTime to convert all {len(self.test_cases)}*{iterations} test cases: {total_time_ms:.1f} ms")
        print(f"Average per complex expression: {total_time_ms/len(self.test_cases):.2f} ms")

    def test_error_handling(self):
        with self.assertRaises(TypeError):
            to_latex_ffi(None) # type: ignore
        
        res = to_latex_ffi("\xff")
        self.assertEqual(res, "\xff")

    def test_custom_lib_path(self):
        search_paths = [
            PROJ_ROOT / "build" / "libtree_sitter_asciimath.dylib",
            PROJ_ROOT / "target" / "release" / "libtree_sitter_asciimath.dylib",
            PROJ_ROOT / "bindings" / "node" / "libtree_sitter_asciimath.dylib",
        ]
        for lib_path in search_paths:
            if lib_path.exists():
                ffi = AsciiMathFFI(str(lib_path))
                self.assertEqual(ffi.to_latex("x^2"), "x^{2}")
