from tree_sitter import Node
import json
from typing import TypedDict, NotRequired
# from objprint import objprint

class PatternSymbol(TypedDict):
    pattern: str
    type: str


class CommonSymbol(TypedDict):
    token: str
    alias: list[str]
    tex: str
    template: NotRequired[str]


class AsciiMathTransformer:

    def __init__(self):
        '''
        Load symbol config from symbols-config.json
        '''
        self.symbol_config: dict[str, dict[str, CommonSymbol]]
        with open('symbols-config.json', 'r') as f:
            self.symbol_config = json.load(f)

    def get_tex(self, typ: str, token: str):
        if typ not in self.symbol_config:
            raise ValueError(f"Unknown type: {typ}")
        target_category = self.symbol_config[typ]
        if token not in target_category:
            raise ValueError(f"Unknown token: {token}")
        return target_category[token]['tex']
        
    def constant_to_latex(self, node: Node):
        if (node.type == 'number_symbol'
            or node.type == 'identifier'):
            assert node.text
            return node.text.decode('utf-8')
        
        if node.type == 'literal_string':
            assert node.text
            return '\\text{%s}' % node.text.decode('utf-8')[1:-1]

        if (node.type == 'left_bracket'
            or node.type == 'right_bracket'):
            assert node.text
            token = node.children[0].type  # .text.decode('utf-8')
            return self.get_tex(node.type, token)

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
            or node.type == 'separatorSymbols'
            or node.type == 'bigEqualSymbols'
            or node.type == 'unaryFrozenSymbols'
            # special cases
            or node.type == 'color'
        ):
            assert node.children
            assert len(node.children) == 1
            assert node.children[0].text
            token = node.children[0].type # text.decode('utf-8')
            return self.get_tex(node.type, token)

        return node.type
        # raise ValueError(f"Unknown constant type: {node.type}")

    def superscript_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        base = self.to_latex(node.children[0])
        assert node.children[1].type == '^'
        sup = self._trim_paren(node.children[2])
        return "%s^{%s}" % (base, sup) # f"{{{base}}}^{{{sup}}}"

    def subscript_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        base = self.to_latex(node.children[0])
        assert node.children[1].type == '_'
        sub = self._trim_paren(node.children[2])
        return "%s_{%s}" % (base, sub) # f"{{{base}}}_{{{sub_or_sup}}}"

    def sup_and_sub_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 5
        base = self.to_latex(node.children[0])
        if (node.children[1].type == '^'
            and node.children[3].type == '_'):
            sup = self._trim_paren(node.children[2])
            sub = self._trim_paren(node.children[4])
            return "%s_{%s}^{%s}" % (base, sub, sup) # f"{{{base}}}^{{{sup}}}_{{{sub}}}"
        elif (node.children[1].type == '_'
            and node.children[3].type == '^'):
            sub = self._trim_paren(node.children[2])
            sup = self._trim_paren(node.children[4])
            return "%s_{%s}^{%s}" % (base, sub, sup) # f"{{{base}}}_{{{sub}}}^{{{sup}}}"
        else:
            raise ValueError(f"Unknown superscript and subscript combination: {node.children[1].type} and {node.children[3].type}")

    def bracket_expr_to_latex(self, node: Node):
        # objprint(node, node.children[1].text)
        assert node.children
        assert len(node.children) >= 2
        left, right = node.children[0], node.children[-1]
        assert left.children and right.children
        contents = node.children[1:-1]
        contents_str = " ".join([self.to_latex(child) for child in contents])

        if left.children[0].type == 'ltransparent' and right.children[0].type == 'rtransparent':
            return '{%s}' % contents_str

        left_str = self.constant_to_latex(left)
        right_str = self.constant_to_latex(right)
        return f"\\left{left_str}{contents_str}\\right{right_str}"
    
    def bracket_expr_to_obj(self, node: Node):
        assert node.children
        assert len(node.children) >= 2
        left = self.constant_to_latex(node.children[0])
        contents = node.children[1:-1]
        right = self.constant_to_latex(node.children[-1])
        return {
            'left': left,
            'right': right,
            'contents': " ".join([self.to_latex(child) for child in contents])
        }
    
    def __process_bracket_only(self, node: Node):
        expr_obj = self.bracket_expr_to_obj(node)
        left = expr_obj['left']
        right = expr_obj['right']
        contents_str = expr_obj['contents']
        if left.strip() == '(' and right.strip() == ')':
            return contents_str
        elif left.strip() == '.' and right.strip() == '.':  # ltransparent and rtransparent
            return '{%s}' % contents_str
        else:
            return f"\\left{left}{contents_str}\\right{right}"
    
    def _trim_paren(self, expr_node: Node):
        if ( # simple_expression for unary and binary
            expr_node.type == 'simple_expression'
            and expr_node.children[0].type == 'bracket_expr'
        ):
            return self.__process_bracket_only(expr_node.children[0])
        elif (  # fractions with bracket_expr
            expr_node.type == 'intermediate_expression'
            and expr_node.children[0].type == 'simple_expression'
            and expr_node.children[0].children[0].type == 'bracket_expr'
        ):
            return self.__process_bracket_only(expr_node.children[0].children[0])
        # elif (expr_node.type == 'intermediate_expression'):
        #     # the child can be sup/sub/sup_and_sub/bigEqual, 
        #     # but to_latex has `intermediate_expression` processor, just skip
        #     return self.to_latex(expr_node)
        else:
            return self.to_latex(expr_node)
    
    def unary_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 2
        op = self.constant_to_latex(node.children[0])

        # node.children[0] is the category
        # node.children[0].children[0] is the symbol token
        token = node.children[0].children[0].type
        
        expr_node = node.children[1]  # simple_expression
        expr = self._trim_paren(expr_node)

        tpl = self.symbol_config["unarySymbols"][token].get('template')
        if tpl is not None:
            return (tpl.replace('$0', op)
                       .replace('$1', expr))

        return '%s{%s}' % (op, expr)
    
    def unary_frozen_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 2 or len(node.children) == 4
        op = self.constant_to_latex(node.children[0])
        # node.children[0] is the category
        # node.children[0].children[0] is the symbol token
        token = node.children[0].children[0].type
        if len(node.children) == 2:  # literal string
            expr_node = node.children[1]
            assert expr_node.text
            expr = expr_node.text.decode('utf-8')[1:-1]  # remove the surrounding quotes
        else:
            expr_node = node.children[2]
            assert expr_node.text
            expr = expr_node.text.decode('utf-8')

        tpl = self.symbol_config["unaryFrozenSymbols"][token].get('template')
        if tpl is not None:
            return (tpl.replace('$0', op)
                       .replace('$1', expr))
        
        return '%s{%s}' % (op, expr)
    
    def color_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3 or len(node.children) == 5
        if len(node.children) == 3:  # literal string
            color_node = node.children[1]
            assert color_node.text
            color = color_node.text.decode('utf-8')[1:-1]  # remove the surrounding quotes
        else:
            color_node = node.children[2]  # using the exact color string
            assert color_node.text
            color = color_node.text.decode('utf-8')

        expr_node = node.children[-1]
        expr = self._trim_paren(expr_node)
        return '{\\color{%s}%s}' % (color, expr)

    def binary_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        op = self.constant_to_latex(node.children[0])

        token = node.children[0].children[0].type
        left = self._trim_paren(node.children[1])
        right = self._trim_paren(node.children[2])
        
        if tpl := self.symbol_config["binarySymbols"][token].get('template'):
            return (tpl.replace('$0', op)
                       .replace('$1', left)
                       .replace('$2', right))

        return '%s{%s}{%s}' % (op, left, right)

    def binary_frac_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        # op = self.constant_to_latex(node.children[1])

        lnode = node.children[0]
        rnode = node.children[2]
            
        left = self._trim_paren(lnode)
        right = self._trim_paren(rnode)
        return '\\frac{%s}{%s}' % (left, right)

    def factorial_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 2
        expr = self.to_latex(node.children[0])
        factorial = self.constant_to_latex(node.children[1])
        return f"{expr}{factorial}"
    
    def __grab_variables_for_diff_lower(self, node: Node):
        if node.type == 'bracket_expr':
            # _left = node.children[0]
            # _right = node.children[-1]
            contents = node.children[1:-1]
            return [self.to_latex(child) for child in contents]
        else:
            raise ValueError(f"Unsupported type {node.type} for differential variable grabbing")

    def differential_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3 or len(node.children) == 5
        diff = self.constant_to_latex(node.children[0])
        copy_supper = True
        if len(node.children) == 3:
            sup = None
            up = node.children[1]
            down = node.children[2]
            up_str = self._trim_paren(up)
            down_str = self._trim_paren(down)
        else:   # with superscripts
            # if superscripts only exists on the upper and lower only has one variable, 
            #   then automatically copy the superscript to lower
            # otherwise, do not copy, but copy the `diff operator` to the front of each variable of the lower
            sup = self._trim_paren(node.children[2])
            up = node.children[3]
            up_str = self._trim_paren(up)
            down = node.children[4]  # simple_expression
            # walk the down node to check if it has multiple variables
            if (down.children[0].type == 'bracket_expr'
                and len(down.children[0].children) > 3):  # TODO
                # down.children[0] ==> bracker_expr
                # ==> [lbracket E rbracket], E => I{2,}
                copy_supper = False
                _d = self.__grab_variables_for_diff_lower(down.children[0])
                down_str = ' '.join([f'{diff} {d}' for d in _d])
            else:
                down_str = self._trim_paren(down)

        if sup is None:
            return '\\frac{%s}{%s}' % (f'{diff} {up_str}', f'{diff} {down_str}')
        elif copy_supper:
            return '\\frac{%s}{%s}' % (f'{diff}^{{{sup}}} {up_str}', f'{diff} {down_str}^{{{sup}}}')
        else:
            return '\\frac{%s}{%s}' % (f'{diff}^{{{sup}}} {up_str}', down_str)

    def simple_expression_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 1
        return self.to_latex(node.children[0])

    def matrix_row_to_list(self, node: Node):
        assert node.children
        assert len(node.children) >= 3
        # _lb = self.constant_to_latex(node.children[0])
        # _rb = self.constant_to_latex(node.children[-1])
        row = []
        temp_cell = []
        for child in node.children[1:-1]:
            if child.type == ',':
                if len(temp_cell) == 0:
                    row.append(None)
                else:
                    row.append(' '.join(temp_cell))
                temp_cell = []
            else:
                temp_cell.append(self.to_latex(child))
        else:
            if len(temp_cell) == 0:
                row.append(None)
            else:
                row.append(' '.join(temp_cell))
        return row

    def matrix_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) >= 3
        lb = self.constant_to_latex(node.children[0])
        rb = self.constant_to_latex(node.children[-1])
        if lb.strip() == '\\lbrace' and rb.strip() == '.':
            align = 'l'
        else:
            align = 'c'
        rows = [self.matrix_row_to_list(child) 
                for child in node.children[1:-1]   # strip left and right parens
                if child.type == 'matrix_row_expr']
        return (
            f'\\left{lb}\\begin{{array}}{{{len(rows[0])*align}}} '
            + " \\\\ ".join([" & ".join(row) for row in rows])
            + f' \\end{{array}}\\right{rb}'
        )
    
    def det_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) >= 3
        bar = self.constant_to_latex(node.children[0])  # left bar and right bar are the same
        rows = [self.matrix_row_to_list(child) 
                for child in node.children[1:-1]    # strip left and right parens
                if child.type == 'matrix_row_expr']
        return (
            f'\\left{bar}\\begin{{array}}{{{len(rows[0])*"c"}}} '
            + " \\\\ ".join([" & ".join(row) for row in rows])
            + f' \\end{{array}}\\right{bar}'
        )
    
    def bigEqual_expr_to_latex(self, node: Node):
        assert node.children
        op = self.constant_to_latex(node.children[0])
        if len(node.children) == 1:
            return f"{op}"
        
        if len(node.children) == 3:
            # operator    sub/sup    expr
            # ^.child(0)  ^child(1)  ^child2
            sub_or_sub = node.children[1].type  # _ or ^
            if sub_or_sub == '_':
                sub = self._trim_paren(node.children[2])
                sup = None
            elif sub_or_sub == '^':
                sub = None
                sup = self._trim_paren(node.children[2])
            else:
                raise ValueError(f'Met unexpected sub_or_sub in bigEqual_expr: {sub_or_sub}. '
                                 f'The node is {node.text}')
        elif len(node.children) == 5:
            # 2 cases
            # 1. operator    sub        expr_sub  sup        expr_sup
            #    ^.child(0)  ^child(1)  ^child2   ^child(3)  ^child4
            # 2. operator    sup        expr_sup  sub        expr_sub
            #    ^.child(0)  ^child(1)  ^child2   ^child(3)  ^child4
            sup, sub = None, None
            second_node = node.children[1].type
            fourth_node = node.children[3].type
            if second_node == '_' and fourth_node == '^':
                sub = self._trim_paren(node.children[2])
                sup = self._trim_paren(node.children[4])
            elif second_node == '^' and fourth_node == '_':
                sub = self._trim_paren(node.children[4])
                sup = self._trim_paren(node.children[2])
            else:
                raise ValueError(f'Met unexpected second_node or fourth_node in bigEqual_expr: {second_node} {fourth_node}. '
                                 f'The node is {node.text}')
        else:
            raise ValueError(f'Met unexpected number of children in bigEqual_expr: {len(node.children)}, expect 3 or 5. '
                             f'The node is {node.text}')
        
        token = node.children[0].children[0].type
        tpl = self.symbol_config["bigEqualSymbols"][token].get('template')  # $0[$2]{$1}

        if tpl is None:
            raise ValueError(f'Met unexpected token in bigEqual_expr {token} or cannot find template for {token}. '
                             f'The node is {node.text}')

        if sub is None and sup is not None:
            return tpl.replace('$0', op).replace("$1", sup).replace('$2', '')
        elif sub is not None and sup is None:
            return tpl.replace('$0', op).replace("$1", '').replace('$2', sub)
        elif sub is not None and sup is not None:
            return tpl.replace('$0', op).replace("$1", sup).replace('$2', sub)
        else:
            raise ValueError(f'Met unexpected case in bigEqual_expr: {sup} {sub}. '
                             f'The node is {node.text}')

    def to_latex(self, node: Node) -> str:
        if not isinstance(node, Node):
            raise TypeError("Expected a tree_sitter.Node object")

        if node.type == 'source_file':
            return " ".join([
                self.to_latex(child)
                for child in node.children
            ])

        if node.type == 'simple_expression':
            return self.simple_expression_to_latex(node)

        if node.type == 'bracket_expr':
            return self.bracket_expr_to_latex(node)

        if node.type == 'unary_expr':
            # 需要将小括号替换成 latex 中的大括号
            return self.unary_expr_to_latex(node)

        if node.type == 'binary_expr':
            # 需要将小括号替换成 latex 中的大括号
            return self.binary_expr_to_latex(node)

        if node.type == 'binary_frac':
            # 可能需要将小括号删除
            return self.binary_frac_to_latex(node)

        if node.type == 'factorial_expr':
            return self.factorial_expr_to_latex(node)

        if node.type == 'differential_expr':
            # 可能需要将小括号删除
            return self.differential_expr_to_latex(node)
        
        if node.type == 'matrix_expr':
            return self.matrix_expr_to_latex(node)
        
        if node.type == 'det_expr':
            return self.det_expr_to_latex(node)
        
        if node.type == 'color_expr':
            return self.color_expr_to_latex(node)
        
        if node.type == 'unaryFrozen_expr':
            return self.unary_frozen_expr_to_latex(node)

        if node.type == 'intermediate_expression':
            assert node.children
            assert len(node.children) == 1
            child = node.children[0]
            if child.type == 'simple_expression':
                return self.simple_expression_to_latex(child)

            elif child.type == 'subscript_superscript':
                # 可能需要将小括号删除
                return self.sup_and_sub_to_latex(child)

            elif child.type == 'subscript':
                # 可能需要将小括号删除
                return self.subscript_to_latex(child)

            elif child.type == 'superscript':
                # 可能需要将小括号删除
                return self.superscript_to_latex(child)
            
            elif child.type == 'bigEqual_expr':
                return self.bigEqual_expr_to_latex(child)

            else:
                raise ValueError(f"Unknown intermediate_expression type: {child.type}")

        return self.constant_to_latex(node)
