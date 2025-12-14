"""
Python FFI binding for tree-sitter-asciimath using ctypes.
This module provides direct access to the Rust FFI library for LaTeX conversion.
"""

import ctypes
import ctypes.util
import sys
import os
from pathlib import Path
from typing import Optional, Tuple

# Platform-specific library names
if sys.platform == "darwin":
    LIB_NAME = "libtree_sitter_asciimath.dylib"
elif sys.platform == "linux":
    LIB_NAME = "libtree_sitter_asciimath.so"
elif sys.platform == "win32":
    LIB_NAME = "tree_sitter_asciimath.dll"
else:
    LIB_NAME = None


class FfiString(ctypes.Structure):
    """C-compatible string structure returned by Rust FFI."""
    _fields_ = [
        ("data", ctypes.POINTER(ctypes.c_char)),
        ("len", ctypes.c_size_t),
        ("capacity", ctypes.c_size_t),
    ]


class AsciiMathFFI:
    """Python wrapper for the Rust FFI library."""
    
    def __init__(self, lib_path: Optional[str] = None):
        """
        Initialize the FFI binding.
        
        Args:
            lib_path: Optional path to the Rust library. If not provided,
                     the library will be searched in common locations.
        
        Raises:
            OSError: If the Rust library cannot be loaded.
        """
        self._lib: ctypes.CDLL = None
        self._lib_path = lib_path or self._find_library()
        self._load_library()
    
    def _find_library(self) -> str:
        """Find the Rust library in common locations."""
        search_paths = []
        
        # Add paths relative to this file
        current_dir = Path(__file__).parent
        project_root = current_dir.parent.parent.parent
        
        # Common library locations
        search_paths.extend([
            # In bindings/node directory (copied by npm run node:copy-lib)
            current_dir.parent.parent / "node" / LIB_NAME,
            # In build directory
            project_root / "build" / LIB_NAME,
            project_root / "build" / "Release" / LIB_NAME,
            # In target/release directory
            project_root / "target" / "release" / LIB_NAME,
            # In current directory
            current_dir / LIB_NAME,
            # System library paths
            Path(ctypes.util.find_library("tree_sitter_asciimath") or ""),
        ])
        
        # Also try without extension for ctypes.util.find_library
        if LIB_NAME:
            base_name = LIB_NAME.split('.')[0]
            system_lib = ctypes.util.find_library(base_name)
            if system_lib:
                search_paths.append(Path(system_lib))
        
        for path in search_paths:
            if path and path.exists():
                return str(path)
        
        # If not found, try to load by name only (let system find it)
        return LIB_NAME
    
    def _load_library(self):
        """Load the Rust library and bind functions."""
        try:
            self._lib = ctypes.CDLL(self._lib_path)
        except OSError as e:
            raise OSError(
                f"Failed to load Rust library from '{self._lib_path}'. "
                f"Please ensure the library is built and available. "
                f"Original error: {e}"
            )
        
        # Bind function signatures
        self._bind_functions()
    
    def _bind_functions(self):
        """Bind the Rust FFI functions with correct signatures."""
        # directly_to_latex - try to bind both with and without underscore
        try:
            self._lib.directly_to_latex.argtypes = [ctypes.c_char_p]
            self._lib.directly_to_latex.restype = ctypes.POINTER(FfiString)
        except AttributeError:
            try:
                self._lib._directly_to_latex.argtypes = [ctypes.c_char_p]
                self._lib._directly_to_latex.restype = ctypes.POINTER(FfiString)
                # Create alias
                self._lib.directly_to_latex = self._lib._directly_to_latex
            except AttributeError:
                pass
        
        # free_ffi_string
        try:
            self._lib.free_ffi_string.argtypes = [ctypes.POINTER(FfiString)]
            self._lib.free_ffi_string.restype = None
        except AttributeError:
            try:
                self._lib._free_ffi_string.argtypes = [ctypes.POINTER(FfiString)]
                self._lib._free_ffi_string.restype = None
                self._lib.free_ffi_string = self._lib._free_ffi_string
            except AttributeError:
                pass
        
        # ffi_string_data
        try:
            self._lib.ffi_string_data.argtypes = [ctypes.POINTER(FfiString)]
            self._lib.ffi_string_data.restype = ctypes.c_char_p
        except AttributeError:
            try:
                self._lib._ffi_string_data.argtypes = [ctypes.POINTER(FfiString)]
                self._lib._ffi_string_data.restype = ctypes.c_char_p
                self._lib.ffi_string_data = self._lib._ffi_string_data
            except AttributeError:
                pass
        
        # ffi_string_len
        try:
            self._lib.ffi_string_len.argtypes = [ctypes.POINTER(FfiString)]
            self._lib.ffi_string_len.restype = ctypes.c_uint
        except AttributeError:
            try:
                self._lib._ffi_string_len.argtypes = [ctypes.POINTER(FfiString)]
                self._lib._ffi_string_len.restype = ctypes.c_uint
                self._lib.ffi_string_len = self._lib._ffi_string_len
            except AttributeError:
                pass
        
        # tree_sitter_asciimath - try with underscore prefix first
        try:
            self._lib.tree_sitter_asciimath.argtypes = []
            self._lib.tree_sitter_asciimath.restype = ctypes.c_void_p
        except AttributeError:
            # Try with underscore prefix (macOS/Linux)
            try:
                self._lib._tree_sitter_asciimath.argtypes = []
                self._lib._tree_sitter_asciimath.restype = ctypes.c_void_p
                # Create alias
                self._lib.tree_sitter_asciimath = self._lib._tree_sitter_asciimath
            except AttributeError:
                pass  # Symbol not found
        
        # reexport_tree_sitter_asciimath (alternative)
        try:
            self._lib.reexport_tree_sitter_asciimath.argtypes = []
            self._lib.reexport_tree_sitter_asciimath.restype = ctypes.c_void_p
        except AttributeError:
            # Try with underscore prefix
            try:
                self._lib._reexport_tree_sitter_asciimath.argtypes = []
                self._lib._reexport_tree_sitter_asciimath.restype = ctypes.c_void_p
                # Create alias
                self._lib.reexport_tree_sitter_asciimath = self._lib._reexport_tree_sitter_asciimath
            except AttributeError:
                pass  # Not all libraries have this function
        
        # Check if required functions are loaded
        self._check_loaded_functions()
    
    def _check_loaded_functions(self):
        """Check if all required functions are loaded."""
        required_functions = [
            'directly_to_latex',
            'free_ffi_string', 
            'ffi_string_data',
            'ffi_string_len'
        ]
        
        missing = []
        for func_name in required_functions:
            if not hasattr(self._lib, func_name):
                missing.append(func_name)
        
        if missing:
            raise RuntimeError(
                f"Missing required functions in library: {', '.join(missing)}. "
                f"Please ensure the Rust library is properly built and contains these symbols."
            )
    
    def to_latex(self, asciimath: str) -> str:
        """
        Convert AsciiMath expression to LaTeX.
        
        Args:
            asciimath: AsciiMath expression string
            
        Returns:
            LaTeX string
            
        Raises:
            ValueError: If conversion fails
        """
        if not isinstance(asciimath, str):
            raise TypeError(f"Expected string, got {type(asciimath).__name__}")
        
        # Convert string to bytes for C
        input_bytes = asciimath.encode('utf-8')
        
        # Call Rust function - try with underscore prefix first
        try:
            ffi_result = self._lib.directly_to_latex(input_bytes)
        except AttributeError:
            # Try with underscore prefix
            ffi_result = self._lib._directly_to_latex(input_bytes)
        
        if not ffi_result:
            raise ValueError("Failed to convert AsciiMath to LaTeX")
        
        try:
            # Get data and length - try with underscore prefix first
            try:
                data_ptr = self._lib.ffi_string_data(ffi_result)
            except AttributeError:
                data_ptr = self._lib._ffi_string_data(ffi_result)
            
            try:
                length = self._lib.ffi_string_len(ffi_result)
            except AttributeError:
                length = self._lib._ffi_string_len(ffi_result)
            
            if not data_ptr or length == 0:
                raise ValueError("Empty result from conversion")
            
            # Convert bytes to string
            result_bytes = ctypes.string_at(data_ptr, length)
            return result_bytes.decode('utf-8')
        
        finally:
            # Always free the memory - try with underscore prefix first
            try:
                self._lib.free_ffi_string(ffi_result)
            except AttributeError:
                self._lib._free_ffi_string(ffi_result)
    
    def get_language_ptr(self) -> int:
        """
        Get the tree-sitter language pointer.
        
        Returns:
            Integer pointer to TSLanguage structure
        """
        # Try reexported function first
        try:
            ptr = self._lib.reexport_tree_sitter_asciimath()
        except AttributeError:
            # Fall back to original function
            ptr = self._lib.tree_sitter_asciimath()
        
        if not ptr:
            raise RuntimeError("Failed to get tree-sitter language pointer")
        
        return ptr
    
    @property
    def lib_path(self) -> str:
        """Get the path to the loaded library."""
        return self._lib_path
    
    def __repr__(self) -> str:
        return f"AsciiMathFFI(lib_path={self._lib_path!r})"
    
    def get_loaded_functions(self) -> list:
        """Get list of successfully loaded functions."""
        loaded = []
        all_funcs = [
            'directly_to_latex',
            'free_ffi_string',
            'ffi_string_data',
            'ffi_string_len',
            'tree_sitter_asciimath',
            'reexport_tree_sitter_asciimath'
        ]
        
        for func_name in all_funcs:
            if hasattr(self._lib, func_name):
                loaded.append(func_name)
        
        return loaded


# Global instance for convenience
_ffi_instance = None


def get_ffi() -> AsciiMathFFI:
    """
    Get or create the global FFI instance.
    
    Returns:
        AsciiMathFFI instance
    """
    global _ffi_instance
    if _ffi_instance is None:
        _ffi_instance = AsciiMathFFI()
    return _ffi_instance


def to_latex_ffi(asciimath: str, lib_path: Optional[str] = None) -> str:
    """
    Convert AsciiMath to LaTeX using Rust FFI.
    
    Args:
        asciimath: AsciiMath expression string
        lib_path: Optional path to Rust library
        
    Returns:
        LaTeX string
    """
    if lib_path:
        # Create a new instance with specified library path
        ffi = AsciiMathFFI(lib_path)
    else:
        # Use global instance
        ffi = get_ffi()
    
    return ffi.to_latex(asciimath)


def test_ffi() -> Tuple[bool, str]:
    """
    Test the FFI binding.
    
    Returns:
        Tuple of (success, message)
    """
    try:
        ffi = get_ffi()
        
        # Test simple conversion
        result = ffi.to_latex("x^2")
        expected = "x^{2}"
        
        if result != expected:
            return False, f"Test failed: expected {expected!r}, got {result!r}"
        
        # Test error handling
        try:
            ffi.to_latex("")
            return False, "Empty string should raise error"
        except ValueError:
            pass
        
        return True, f"FFI test passed using library: {ffi.lib_path}"
    
    except Exception as e:
        return False, f"FFI test failed: {e}"


if __name__ == "__main__":
    # Simple test when run directly
    success, message = test_ffi()
    print(f"FFI Test: {message}")
    if not success:
        sys.exit(1)
    
    # Demo some conversions
    ffi = get_ffi()
    test_cases = [
        "x^2",
        "sqrt(a^2 + b^2)",
        "sum_(i=1)^n i",
        "int_0^1 f(x) dx",
    ]
    
    print("\nDemo conversions:")
    for expr in test_cases:
        try:
            result = ffi.to_latex(expr)
            print(f"  {expr:20} => {result}")
        except Exception as e:
            print(f"  {expr:20} => ERROR: {e}")
