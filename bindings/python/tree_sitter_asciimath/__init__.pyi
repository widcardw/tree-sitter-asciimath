from typing import Final, Optional

# NOTE: uncomment these to include any queries that this grammar contains:

# HIGHLIGHTS_QUERY: Final[str]
# INJECTIONS_QUERY: Final[str]
# LOCALS_QUERY: Final[str]
# TAGS_QUERY: Final[str]

class AsciiMathFFI:
    
    def __init__(self, lib_path: Optional[str] = None): ...
    
    def to_latex(self, asciimath: str) -> str: ...
    
    def get_language_ptr(self) -> int: ...
    
    @property
    def lib_path(self) -> str: ...
    
    def get_loaded_functions(self) -> list: ...

def language() -> object: ...

def to_latex_ffi(asciimath: str,
   lib_path: str | None = None
) -> str: ...

def get_ffi() -> AsciiMathFFI: ...

def test_ffi() -> tuple[bool, str]: ...
