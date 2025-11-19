from unittest import TestCase

import json
import os
from tree_sitter import Language, Parser
import tree_sitter_asciimath
from tree_sitter_asciimath.to_latex import AsciiMathTransformer


class TestTransformerToLatex(TestCase):

    def __init__(self, methodName: str = "latex_transformer") -> None:
        super().__init__(methodName)
        lang = Language(tree_sitter_asciimath.language())
        self.parser = Parser(lang)
        self.transformer = AsciiMathTransformer()

    def test_can_transform_to_latex(self):
        """Basic test to ensure transformer works"""
        try:
            parser = self.parser
            transformer = self.transformer

            # Test a simple case to ensure transformer is working
            tree = parser.parse(b"x^2")
            root = tree.root_node
            latex = transformer.to_latex(root)
            self.assertEqual(latex, "x^{2}")
        except Exception as e:
            self.fail(f"Error loading AsciiMath transformer: {e}")


class TestAsciiMathExamples(TestCase):

    def __init__(self, methodName: str = "test_examples") -> None:
        super().__init__(methodName)
        lang = Language(tree_sitter_asciimath.language())
        self.parser = Parser(lang)
        self.transformer = AsciiMathTransformer()
        
        # Read test cases from common_cases.jsonc
        self.examples = self.load_examples()

    def load_examples(self):
        """Load test cases from common_cases.jsonc file"""
        # Get path to common_cases.jsonc
        current_dir = os.path.dirname(os.path.abspath(__file__))
        test_cases_path = os.path.join(
            current_dir, 
            '..', 
            '..',
            'test_cases',
            'common_cases.jsonc'
        )
        
        with open(test_cases_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # Remove comments from JSONC
        lines = content.split('\n')
        filtered_lines = []
        for line in lines:
            line = line.strip()
            if not line or line.startswith('//'):
                continue
            filtered_lines.append(line)
        
        # Join back and parse as JSON
        json_content = '\n'.join(filtered_lines)
        return json.loads(json_content)

    def test_examples(self):
        """Test all examples from the common test cases file"""
        parser = self.parser
        transformer = self.transformer

        for example in self.examples:
            with self.subTest(input_str=example['input']):
                try:
                    tree = parser.parse(example['input'].encode('utf-8'))
                    root = tree.root_node
                    latex = transformer.to_latex(root)
                    self.assertEqual(latex, example['expected'],
                                   f"Input: {example['input']!r}, Expected: {example['expected']!r}, Got: {latex!r}")
                except Exception as e:
                    self.fail(f"Error processing example '{example['input']}': {e}")
