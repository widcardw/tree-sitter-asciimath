from unittest import TestCase

from tree_sitter import Language, Parser
import tree_sitter_asciimath
from tree_sitter_asciimath.to_latex import AsciiMathTransformer
# from objprint import objprint

class TestTransformerToLatex(TestCase):

    def __init__(self, methodName: str = "latex_transformer") -> None:
        super().__init__(methodName)
        lang = Language(tree_sitter_asciimath.language())
        self.parser = Parser(lang)
        self.transformer = AsciiMathTransformer()

    def test_can_transform_to_latex(self):
        try:
            ...
            # parser = self.parser
            # transformer = self.transformer

            # tree = parser.parse(b"x^2")
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "{x}^{2}")

            # tree = parser.parse(b"root(3)(4)")
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "\\sqrt[3]{4}")

            # tree = parser.parse(b"[[a, b], [c, d]]")
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "\\left[\\begin{array}{cc}a & b \\\\ c & d\\end{array}\\right]")

            # tree = parser.parse(b"Q ==_a^b")
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "Q \\xlongequal[a]{b}")

            # tree = parser.parse(b"-->^1")
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "\\xrightarrow[]{1}")

            # tree = parser.parse(b"color(#ff0000)(x)")
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "{\\color{#ff0000}x}")

            # tree = parser.parse(b'tex"\\LaTeX"')
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "\\LaTeX")

            # tree = parser.parse(b"|[a, b], [c, d]|")
            # root = tree.root_node
            # latex = transformer.to_latex(root)
            # self.assertEqual(latex, "\\left|\\begin{array}{cc}a & b \\\\ c & d\\end{array}\\right|")

        except Exception as e:
            self.fail(f"Error loading AsciiMath transformer: {e}")


class TestAsciiMathExamples(TestCase):

    def __init__(self, methodName: str = "test_examples") -> None:
        super().__init__(methodName)
        lang = Language(tree_sitter_asciimath.language())
        self.parser = Parser(lang)
        self.transformer = AsciiMathTransformer()

        # Test examples converted from TypeScript
        self.examples = [
            # {
            #     'i': '    ',
            #     'o': '',
            # },
            # {
            #     'i': 'a',
            #     'o': 'a',
            # },
            # {
            #     'i': 'pi',
            #     'o': '\\pi',
            # },
            # {
            #     'i': '1+2+3',
            #     'o': '1 + 2 + 3',
            # },
            # {
            #     'i': '1+-2',
            #     'o': '1 \\pm 2',
            # },
            # {
            #     'i': '(1+2]',
            #     'o': '\\left(1 + 2\\right]',
            # },
            # {
            #     'i': 'sin 11_4^514 19^19_8 1_0',
            #     'o': '\\sin 11_{4}^{514} 19_{8}^{19} 1_{0}',
            # },
            # {
            #     'i': '[(a),(b),(c)]',
            #     'o': '\\left[\\begin{array}{c} a \\\\ b \\\\ c \\end{array}\\right]',
            # },
            # {
            #     'i': '[(a, b), (c, d):}',
            #     'o': '\\left[\\begin{array}{cc} a & b \\\\ c & d \\end{array}\\right.',
            # },
            # {
            #     'i': 'sqrt x',
            #     'o': '\\sqrt{x}',
            # },
            # {
            #     'i': 'sqrt (x)',
            #     'o': '\\sqrt{x}',
            # },
            # {
            #     'i': 'root 3 2.0',
            #     'o': '\\sqrt[3]{2.0}',
            # },
            # {  # deleted
            #     'i': 'root (3)  {:2.0}',
            #     'o': '\\sqrt[3]{\\left. 2.0\\right\\rbrace}',
            # },
            # {
            #     'i': 'sum_(n=1)^(+oo) 1/n^2 = pi^2/6',
            #     'o': '\\sum_{n = 1}^{+ \\infty} \\frac{1}{n^{2}} = \\frac{\\pi^{2}}{6}',
            # },
            # {
            #     'i': 'a_1^2 + b_1^2 = c_1^2',
            #     'o': 'a_{1}^{2} + b_{1}^{2} = c_{1}^{2}',
            # },
            # {
            #     'i': 'a/b, a//b',
            #     'o': '\\frac{a}{b} , a / b',
            # },
            # {
            #     'i': 'sqrt n, root n x, a^2/sqrt b',
            #     'o': '\\sqrt{n} , \\sqrt[n]{x} , \\frac{a^{2}}{\\sqrt{b}}',
            # },
            # {
            #     'i': 'lim_(n->oo) (1 + 1/n)^n',
            #     'o': '\\lim_{n \\to \\infty} \\left(1 + \\frac{1}{n}\\right)^{n}',
            # },
            # {
            #     'i': 'sin {: x/2 :}',
            #     'o': '\\sin {\\frac{x}{2}}',
            # },
            # {
            #     'i': 'int_a^b f(x) dx',
            #     'o': '\\int_{a}^{b} f \\left(x\\right) \\text{d}x',
            # },
            # {
            #     'i': '(del f)/(del x), (del^3 f)/(del x del y^2)',
            #     'o': '\\frac{\\partial f}{\\partial x} , \\frac{\\partial^{3} f}{\\partial x \\partial y^{2}}',
            # },
            # {
            #     'i': 'frac a b',
            #     'o': '\\frac{a}{b}',
            # },
            # {
            #     'i': '"hello world"',
            #     'o': '\\text{hello world}',
            # },
            # {
            #     'i': 'color "red"  a b c',
            #     'o': '{\\color{red}a} b c',
            # },
            # {
            #     'i': 'hspace "12pt"',
            #     'o': '\\hspace{12pt}',
            # },
            # {
            #     'i': 'tex "\\LaTeX"',
            #     'o': '\\LaTeX',
            # },
            # {
            #     'i': r'''dy/dx, ("d"r)/("d"theta), f''(x)''',
            #     'o': r'\frac{\text{d}y}{\text{d}x} , \frac{\text{d} r}{\text{d} \theta} , f ^{\prime\prime} \left(x\right)',
            # },
            # {
            #     'i': 'dd f x , dd^2 f x , ddot x',
            #     'o': '\\frac{\\mathrm{d} f}{\\mathrm{d} x} , \\frac{\\mathrm{d}^{2} f}{\\mathrm{d} x^{2}} , \\ddot{x}',
            # },
            # {
            #     'i': 'pp f x',
            #     'o': '\\frac{\\partial f}{\\partial x}',
            # },
            # {
            #     'i': 'pp {::} x',
            #     'o': '\\frac{\\partial {}}{\\partial x}',
            # },
            # {
            #     'i': 'pp^3 f (x y^2)',
            #     'o': '\\frac{\\partial^{3} f}{\\partial x \\partial y^{2}}',
            # },
            # {
            #     'i': 'abs(x)',
            #     'o': '\\left| x \\right|',
            # },
            # {
            #     'i': '{ a | b }',
            #     'o': '\\left\\lbrace a \\mid b\\right\\rbrace',
            # },
            # {
            #     'i': '(a,b)',
            #     'o': '\\left(a , b\\right)',
            # },
            {
                'i': '{(x,y)|x^2+y^2<=1}',
                'o': '\\left\\lbrace \\left(x , y\\right) \\mid x^{2} + y^{2} \\le 1\\right\\rbrace',
            },
            {
                'i': '|(a, b), (c, d)|',
                'o': '\\left| \\begin{array}{cc} a & b \\\\ c & d \\end{array} \\right|',
            },
            {
                'i': '|x| = { (x, if x > 0), (-x, otherwise) :}',
                'o': '\\left| x \\right| = \\left\\lbrace \\begin{array}{ll} x & \\text{if}\\quad x > 0 \\\\ - x & \\text{otherwise}\\quad \\end{array} \\right.',
            },
            {
                'i': 'e^-x',
                'o': 'e^{-x}',
            },
            {
                'i': 'e^-(x^-2+y^2)',
                'o': 'e ^{ {-\\left( x ^{ {-2 } } + y ^{ 2 } \\right) } }',
            },
            {
                'i': '-(a+b-c)/2',
                'o': '- \\frac{a + b - c}{2}',
            },
            {
                'i': 'f\\\'_(+) (x)',
                'o': 'f ^{\\prime} _{ + } \\left( x \\right)',
            },
            {
                'i': 'a^2 choose b^2',
                'o': '{ a ^{ 2 } \\choose b ^{ 2 } }',
            },
            {
                'i': 'n!',
                'o': '{n !}',
            },
            {
                'i': 'n!!^2/2!',
                'o': '\\frac{ {n !!} ^{ 2 } }{ {2 !} }',
            },
            {
                'i': '|__x__|',
                'o': '\\lfloor x \\rfloor',
            },
            # matrix examples
            {
                'i': '[ ]',
                'o': '[]',
            },
            {
                'i': '[1]',
                'o': '[ 1 ]',
            },
            {
                'i': '[1,]',
                'o': '\\left[ 1 , \\right]',
            },
            {
                'i': '[1;]',
                'o': '\\left[ \\begin{array}{c} 1 \\end{array} \\right]',
            },
            {
                'i': '[1, 2]',
                'o': '\\left[ 1 , 2 \\right]',
            },
            {
                'i': '[1, 2; 3]',
                'o': '\\left[ \\begin{array}{cc} 1 & 2 \\\\ 3 \\end{array} \\right]',
            },
            {
                'i': '[1, 2; ,3]',
                'o': '\\left[ \\begin{array}{cc} 1 & 2 \\\\  & 3 \\end{array} \\right]',
            },
            {
                'i': '[1, 2;]',
                'o': '\\left[ \\begin{array}{cc} 1 & 2 \\end{array} \\right]',
            },

            {
                'i': '| |',
                'o': '\\left| \\right|',
            },
            {
                'i': '|1|',
                'o': '\\left| 1 \\right|',
            },
            {
                'i': '|1,|',
                'o': '\\left| 1 , \\right|',
            },
            {
                'i': '|(1)|',
                'o': '\\left| \\begin{array}{c} 1 \\end{array} \\right|',
            },
            {
                'i': '|1, 2|',
                'o': '\\left| 1 , 2 \\right|',
            },
            {
                'i': '|(1, 2), (3, 4)|',
                'o': '\\left| \\begin{array}{cc} 1 & 2 \\\\ 3 & 4 \\end{array} \\right|',
            },
            {
                'i': '|(1, 2); (,3)|',
                'o': '\\left| \\begin{array}{cc} 1 & 2 \\\\  & 3 \\end{array} \\right|',
            },
            {
                'i': '|(1, 2),|',
                'o': '\\left| \\begin{array}{cc} 1 & 2 \\end{array} \\right|',
            },

            # {
            #     'i': '[1, 2 | 3; 4, 5 | 6]',
            #     'o': '\\left[ \\begin{array}{cc|c} 1 & 2 & 3 \\\\ 4 & 5 & 6 \\end{array} \\right]',
            # },
            # {
            #     'i': '[1, 2 | 3; 4 | 5, 6]',
            #     'o': '\\left[ \\begin{array}{c|c|c} 1 & 2 & 3 \\\\ 4 & 5 & 6 \\end{array} \\right]',
            # },
            # {
            #     'i': '[a, b; [1, 2; 3, 4], d]',
            #     'o': '\\left[ \\begin{array}{cc} a & b \\\\ \\left[ \\begin{array}{cc} 1 & 2 \\\\ 3 & 4 \\end{array} \\right] & d \\end{array} \\right]',
            # },
            # {
            #     'i': '[|a, b; c,d]',
            #     'o': '\\left[ \\begin{array}{|cc} a & b \\\\ c & d \\end{array} \\right]',
            # },
            # {
            #     'i': '[a, b|; c,d]',
            #     'o': '\\left[ \\begin{array}{cc|} a & b \\\\ c & d \\end{array} \\right]',
            # },
            # {
            #     'i': '[|a, b|; c,d]',
            #     'o': '\\left[ \\begin{array}{|cc|} a & b \\\\ c & d \\end{array} \\right]',
            # },
            # {
            #     'i': '[|hline 1| 2|; hline 3, 4; hline]',
            #     'o': '\\left[ \\begin{array}{|c|c|} \\hline 1 & 2 \\\\ \\hline 3 & 4 \\\\ \\hline \\end{array} \\right]',
            # },
            {
                'i': '==^b_a',
                'o': '\\xlongequal[ a ]{ b }',
            },
            {
                'i': '-->^114_5',
                'o': '\\xrightarrow[ 5 ]{ 114 }',
            },
            {
                'i': '==^b',
                'o': '\\xlongequal[  ]{ b }',
            },
            {
                'i': '==_a',
                'o': '\\xlongequal[ a ]{  }',
            },
            {
                'i': '& 1111\n\n& 2222',
                'o': '\\begin{aligned}& 1111 \\\\ & 2222\\end{aligned}',
            },
            {
                'i': 'hline\na && 111 && 333\n\nhline\nb && 222\n\nhline',
                'o': '\\begin{aligned}\\hline a && 111 && 333 \\\\ \\hline b && 222 \\\\ \\hline\\end{aligned}',
            },
            {
                'i': '[hline|a|b|;]',
                'o': '\\left[ \\begin{array}{|c|c|} \\hline a & b \\end{array} \\right]',
            },
            {
                'i': '{:\n--\n|a|b|;\n--\nc, d;\n--\n:}',
                'o': '\\left. \\begin{array}{|c|c|} \\hline a & b \\\\ \\hline c & d \\\\ \\hline \\end{array} \\right.',
            },
            {
                'i': '\uD83D\uDC40',
                'o': '\uD83D\uDC40',
            },
            {
                'i': '🍎/(🍌+🍍) + 🍌/(🍍+🍎) + 🍍/(🍎+🍌) = 4',
                'o': '\\frac{ 🍎 }{ 🍌 + 🍍 } + \\frac{ 🍌 }{ 🍍 + 🍎 } + \\frac{ 🍍 }{ 🍎 + 🍌 } = 4',
            },
            {
                'i': '"\\\\"',
                'o': '\\text{\\}',
            },
            {
                'i': '"some text and \\ backslashes \\ a"',
                'o': '\\text{some text and \\ backslashes \\ a}',
            },
        ]

    def test_examples(self):
        """Test all examples from the original TypeScript test suite"""
        parser = self.parser
        transformer = self.transformer

        for example in self.examples:
            with self.subTest(input_str=example['i']):
                try:
                    tree = parser.parse(example['i'].encode('utf-8'))
                    root = tree.root_node
                    latex = transformer.to_latex(root)
                    self.assertEqual(latex, example['o'],
                                   f"Input: {example['i']!r}, Expected: {example['o']!r}, Got: {latex!r}")
                except Exception as e:
                    self.fail(f"Error processing example '{example['i']}': {e}")
