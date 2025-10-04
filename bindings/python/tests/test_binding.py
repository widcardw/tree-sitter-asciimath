from unittest import TestCase

from tree_sitter import Language, Parser
import tree_sitter_asciimath
from tree_sitter_asciimath.to_latex import AsciiMathTransformer


class TestTransformerToLatex(TestCase):
    def test_can_transform_to_latex(self):
        try:
            parser = Parser(Language(tree_sitter_asciimath.language()))
            transformer = AsciiMathTransformer()

            tree = parser.parse(b"x^2")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "{x}^{2}")

        except Exception as e:
            self.fail(f"Error loading AsciiMath transformer: {e}")
