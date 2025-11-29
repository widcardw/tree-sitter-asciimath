#include "tree_sitter/tree-sitter-asciimath.h"

// from deepwiki https://deepwiki.com/tree-sitter/tree-sitter-c/3.4-c-bindings-and-other-languages
// however, it cannot read the TSParser struct
int main(int argc, char** argv) {
    TSLanguage *language = tree_sitter_asciimath();
    TSParser *parser = ts_parser_new();
    ts_parser_set_language(parser, language);

    // Parse a string
    TSTree *tree = ts_parser_parse_string(parser, NULL, "x_1^2", 13);

    ts_tree_delete(tree);
    ts_parser_delete(parser);
    ts_language_delete(language);
    return 0;
}
