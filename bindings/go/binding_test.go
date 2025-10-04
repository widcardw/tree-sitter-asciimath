package tree_sitter_asciimath_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_asciimath "github.com/widcardw/tree-sitter-asciimath/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_asciimath.Language())
	if language == nil {
		t.Errorf("Error loading AsciiMath grammar")
	}
}
