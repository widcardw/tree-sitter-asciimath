from tree_sitter import Node

class AsciiMathTransformer:

    def __init__(self):
        '''
        现在只是雏形，甚至还没把 tex 加载进来，如果需要 to_latex 还需要将 json 加载进来
        '''
        pass

    def constant_to_latex(self, node: Node):
        if (node.type == 'number_symbol'
            or node.type == 'identifier'
            or node.type == 'literal_string'):
            assert node.text
            return node.text.decode('utf-8')

        if (node.type == 'left_bracket'
            or node.type == 'right_bracket'):
            assert node.text
            return node.text.decode('utf-8')

        if (node.type == 'logicSymbols'
            or node.type == 'greekLetters'
            or node.type == 'mathConstants'
            or node.type == 'setOperators'
            or node.type == 'mathOperators'
            or node.type == 'asciiEscape'
            or node.type == 'miscSymbols'
            or node.type == 'unarySymbols'
            or node.type == 'factorialSymbols'
            or node.type == 'binarySymbols'
            or node.type == 'binaryMidSymbols'
            or node.type == 'differentialSymbols'
        ):
            assert node.children
            assert len(node.children) == 1
            assert node.children[0].text
            return node.children[0].text.decode('utf-8')

        raise ValueError(f"Unknown constant type: {node.type}")

    def superscript_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        base = self.to_latex(node.children[0])
        assert node.children[1].type == '^'
        sub_or_sup = self.to_latex(node.children[2])
        return f"{{{base}}}^{{{sub_or_sup}}}"

    def subscript_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        base = self.to_latex(node.children[0])
        assert node.children[1].type == '_'
        sub_or_sup = self.to_latex(node.children[2])
        return f"{{{base}}}_{{{sub_or_sup}}}"

    def sup_and_sub_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 5
        base = self.to_latex(node.children[0])
        if (node.children[1].type == '^'
            and node.children[3].type == '_'):
            sup = self.to_latex(node.children[2])
            sub = self.to_latex(node.children[4])
            return f"{{{base}}}^{{{sup}}}_{{{sub}}}"
        elif (node.children[1].type == '_'
            and node.children[3].type == '^'):
            sub = self.to_latex(node.children[2])
            sup = self.to_latex(node.children[4])
            return f"{{{base}}}_{{{sub}}}^{{{sup}}}"
        else:
            raise ValueError(f"Unknown superscript and subscript combination: {node.children[1].type} and {node.children[3].type}")

    def bracket_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        left = self.constant_to_latex(node.children[0])
        content = self.to_latex(node.children[1])
        right = self.constant_to_latex(node.children[2])
        return f"{left}{content}{right}"

    def unary_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 2
        op = self.constant_to_latex(node.children[0])
        expr = self.to_latex(node.children[1])
        return f"{op} {expr}"

    def binary_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        left = self.to_latex(node.children[0])
        op = self.constant_to_latex(node.children[1])
        right = self.to_latex(node.children[2])
        return f"{op} {left} {right}"

    def binary_frac_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        left = self.to_latex(node.children[0])
        op = self.constant_to_latex(node.children[1])
        right = self.to_latex(node.children[2])
        return f"{op} {{{left}}} {{{right}}}"

    def factorial_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 2
        expr = self.to_latex(node.children[0])
        factorial = self.constant_to_latex(node.children[1])
        return f"{expr} {factorial}"

    def differential_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3 or len(node.children) == 4
        diff = self.constant_to_latex(node.children[0])
        if len(node.children) == 3:
            sup = None
            up = node.children[1]
            down = node.children[2]
        else:
            sup = self.to_latex(node.children[1])
            up = node.children[2]
            down = node.children[3]
        up = self.to_latex(up)
        down = self.to_latex(down)

        if sup is None:
            return f"\\frac{{ {diff} {up} }} {{ {diff} {down} }}"
        else:
            return f"\\frac{{ {diff}^{{{sup}}} {up} }} {{ {diff} {down}^{{{sup}}} }}"

    def simple_expression_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 1
        return self.to_latex(node.children[0])

    def concat_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 2
        left = self.to_latex(node.children[0])
        right = self.to_latex(node.children[1])
        return f"{left} {right}"

    def matrix_row_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) >= 1
        row = [self.to_latex(child) for child in node.children]
        return " & ".join(row) + " \\\\"

    def matrix_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) >= 3
        lb = self.constant_to_latex(node.children[0])
        rb = self.constant_to_latex(node.children[-1])
        rows = [self.matrix_row_to_latex(child) for child in node.children[1:-1]]
        return f"{lb} \n {rows} \n {rb}"

    def to_latex(self, node: Node):
        if not isinstance(node, Node):
            raise TypeError("Expected a tree_sitter.Node object")

        if node.type == 'source_file':
            return self.to_latex(node.children[0])

        if node.type == 'simple_expression':
            return self.simple_expression_to_latex(node)

        if node.type == 'concat_expression':
            return self.concat_expr_to_latex(node)

        if node.type == 'bracket_expression':
            return self.bracket_expr_to_latex(node)

        if node.type == 'unary_expression':
            return self.unary_expr_to_latex(node)

        if node.type == 'binary_expression':
            return self.binary_expr_to_latex(node)

        if node.type == 'binary_frac':
            return self.binary_frac_to_latex(node)

        if node.type == 'factorial_expression':
            return self.factorial_expr_to_latex(node)

        if node.type == 'differential_expression':
            return self.differential_expr_to_latex(node)

        if node.type == 'intermediate_expression':
            assert node.children
            assert len(node.children) == 1
            child = node.children[0]
            if child.type == 'simple_expression':
                return self.simple_expression_to_latex(child)

            elif child.type == 'subscript_superscript':
                return self.sup_and_sub_to_latex(child)

            elif child.type == 'subscript':
                return self.subscript_to_latex(child)

            elif child.type == 'superscript':
                return self.superscript_to_latex(child)

            else:
                raise ValueError(f"Unknown intermediate_expression type: {child.type}")

        return self.constant_to_latex(node)
