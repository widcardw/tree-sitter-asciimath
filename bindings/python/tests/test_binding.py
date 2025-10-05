from unittest import TestCase

from tree_sitter import Language, Parser
import tree_sitter_asciimath
from tree_sitter_asciimath.to_latex import AsciiMathTransformer
# from objprint import objprint

class TestTransformerToLatex(TestCase):

    def __init__(self, methodName: str = "latex_transformer") -> None:
        super().__init__(methodName)
        self.parser = Parser(Language(tree_sitter_asciimath.language()))
        self.transformer = AsciiMathTransformer()

    def test_can_transform_to_latex(self):
        try:
            parser = self.parser
            transformer = self.transformer

            tree = parser.parse(b"x^2")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "{x}^{2}")

            tree = parser.parse(b"root(3)(4)")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "\\sqrt[3]{4}")

            tree = parser.parse(b"[[a, b], [c, d]]")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "\\left[\\begin{array}{cc}a & b \\\\ c & d\\end{array}\\right]")

            tree = parser.parse(b"Q ==_a^b")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "Q \\xlongequal[a]{b}")

            tree = parser.parse(b"-->^1")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "\\xrightarrow[]{1}")

            tree = parser.parse(b"color(#ff0000)(x)")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "{\\color{#ff0000}x}")

            tree = parser.parse(b'tex"\\LaTeX"')
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "\\LaTeX")

        except Exception as e:
            self.fail(f"Error loading AsciiMath transformer: {e}")
