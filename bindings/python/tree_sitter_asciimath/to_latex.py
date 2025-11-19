from tree_sitter import Node
import json
from typing import TypedDict, NotRequired, Callable

class PatternSymbol(TypedDict):
    pattern: str
    type: str


class CommonSymbol(TypedDict):
    token: str
    alias: list[str]
    tex: str
    template: NotRequired[str]


# 定义装饰器用于注册处理方法
def handler(node_types: str | list[str]):
    """
    装饰器，用于将方法注册为特定 node_type 的处理器
    
    Args:
        node_types: 单个字符串或字符串列表，表示此方法处理的节点类型
    """
    def decorator(func: Callable[['AsciiMathTransformer', Node], str]):
        if not hasattr(handler, 'registry'):
            handler.registry = {}
            
        types = node_types if isinstance(node_types, list) else [node_types]
        for node_type in types:
            handler.registry[node_type] = func
            
        return func
    return decorator


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

    @handler(['number_symbol', 'identifier'])
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
            or node.type == 'rightAssociativeOperators'
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

    @handler('superscript')
    def superscript_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        base = self.to_latex(node.children[0])
        assert node.children[1].type == '^'
        sup = self._trim_paren(node.children[2])
        return "%s^{%s}" % (base, sup) # f"{{{base}}}^{{{sup}}}"

    @handler('subscript')
    def subscript_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        base = self.to_latex(node.children[0])
        assert node.children[1].type == '_'
        sub = self._trim_paren(node.children[2])
        return "%s_{%s}" % (base, sub) # f"{{{base}}}_{{{sub_or_sup}}}"

    @handler('subscript_superscript')
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

    @handler('bracket_expr')
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
        #     # but to_latex will automatically process `intermediate_expression`, just skip
        #     return self.to_latex(expr_node)
        else:
            return self.to_latex(expr_node)

    @handler('unary_expr')
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

    @handler('unaryFrozen_expr')
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

    @handler('color_expr')
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

    @handler('binary_expr')
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

    @handler('binary_frac')
    def binary_frac_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) == 3
        # op = self.constant_to_latex(node.children[1])

        lnode = node.children[0]
        rnode = node.children[2]

        left = self._trim_paren(lnode)
        right = self._trim_paren(rnode)
        return '\\frac{%s}{%s}' % (left, right)

    @handler('factorial_expr')
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

    @handler('differential_expr')
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
            # if superscripts only exists on the upper and lower has *only one* variable,
            #   then automatically copy the superscript to lower
            # otherwise, do not copy, but copy the `diff operator` to the front of each variable of the lower
            sup = self._trim_paren(node.children[2])
            up = node.children[3]
            up_str = self._trim_paren(up)
            down = node.children[4]  # simple_expression
            # walk the down node to check if it has multiple variables
            if (down.children[0].type == 'bracket_expr'
                and len(down.children[0].children) > 3):  # there must be >1 variables at lower
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

    @handler('simple_expression')
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
                # a matrix cell should be ready
                if len(temp_cell) == 0:
                    row.append(None)  # in fact each cell should not be empty
                else:
                    row.append(' '.join(temp_cell))
                temp_cell = []
            else:
                temp_cell.append(self.to_latex(child))
        else:
            # the final cell, not ended with comma
            # instead, it should be the end of `matrix_row_expr`
            if len(temp_cell) == 0:
                row.append(None)
            else:
                row.append(' '.join(temp_cell))
        return row

    def matrix_row_to_list_with_bar_detection(self, node: Node):
        """
        Enhanced matrix row parser that detects vertical bars and records their positions.
        Returns a tuple: (row_cells, bar_positions)
        - row_cells: list of cell contents (bars are included as separate cells)
        - bar_positions: list of column indices where vertical bars should be placed
        """
        assert node.children
        assert len(node.children) >= 3
        
        row: list[str] = []
        temp_cell: list[str] = []
        bar_positions: list[int] = []
        current_col = 0
        
        for child in node.children[1:-1]:
            if child.type == ',':
                # a matrix cell should be ready
                if temp_cell:  # only add if there's content
                    row.append(' '.join(temp_cell))
                    current_col += 1
                temp_cell = []
            else:
                # Check if this child is a vertical bar
                # objprint(child)
                cc = child.child(0)
                assert cc
                if (cc.type == 'mathOperators' and 
                    len(cc.children) == 1 and 
                    cc.children[0].type == 'vbar'):
                    # Record the position where vertical bar should appear (after current cell)
                    # We record the current column before incrementing
                    bar_positions.append(current_col)
                    # Skip adding this as a cell content and continue
                #     continue
                # else:
                temp_cell.append(self.to_latex(child))
        else:
            # final cell, not ended with comma
            # Check if the last child is a vertical bar
            cc = child.child(0)
            assert cc
            if (cc.type == 'mathOperators' and 
                len(cc.children) == 1 and 
                cc.children[0].type == 'vbar'):
                # Record the position where vertical bar should appear (after current cell)
                bar_positions.append(current_col)
                temp_cell.append(self.to_latex(cc))
            # else:
            if temp_cell:  # only add if there's content
                row.append(' '.join(temp_cell))
        
        # objprint(row)
        return row, bar_positions

    @handler('matrix_single_row_expr')
    def matrix_single_row_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) >= 3
        lb = self.constant_to_latex(node.children[0])
        rb = self.constant_to_latex(node.children[-1])
        row_node = node.children[1]
        assert row_node.type == 'matrix_row_expr'

        rows_data = []
        max_cols = 0
        all_bar_positions = []
        row_cells, bar_positions = self.matrix_row_to_list_with_bar_detection(row_node)
        rows_data.append(row_cells)
        all_bar_positions.extend(bar_positions)
        max_cols = max(max_cols, len(row_cells))

        if lb.strip() == '\\lbrace' and rb.strip() == '.':
            # { (a, b), (c, d) :}, in latex it should look like `cases` env
            align = 'l'
        else:
            align = 'c'

        rows_data, real_bar_pos = self.__check_is_separated_matrix(rows_data, all_bar_positions)
        if len(real_bar_pos) > 0:
            col_spec = []
            for i in range(max_cols):
                if i in real_bar_pos:
                    col_spec.append(f'{align}|')
                else:
                    col_spec.append(align)
            col_spec_str = ''.join(col_spec)
        else:
            # No vertical bars, use traditional format
            col_spec_str = max_cols * align
        
        return (
            f'\\left{lb}\\begin{{array}}{{{col_spec_str}}} '
            + " \\\\ ".join([" & ".join(row) for row in rows_data])
            + f' \\end{{array}}\\right{rb}'
        )

    def __check_is_separated_matrix(self, rows_data: list[list[str]], all_bar_positions: list[int]):
        if len(all_bar_positions) == 0:
            return rows_data, []
        unique_bar_positions = sorted(set(all_bar_positions), reverse=True)
        real_bar_pos = []
        for bar_pos in unique_bar_positions:
            flag = True
            for row in rows_data:
                if row[bar_pos] != '|':
                    flag = False
                    break
            if flag:
                # This is a separated matrix
                # Remove the vertical bars from each row
                for row in rows_data:
                    row.pop(bar_pos)
                real_bar_pos.append(bar_pos)
        
        return rows_data, sorted(real_bar_pos)

    @handler('matrix_expr')
    def matrix_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) >= 3
        lb = self.constant_to_latex(node.children[0])
        rb = self.constant_to_latex(node.children[-1])
        
        # Check if this is a cases environment
        if lb.strip() == '\\lbrace' and rb.strip() == '.':
            # { (a, b), (c, d) :}, in latex it should look like `cases` env
            # Shall we just treat it as the cases environment?
            align = 'l'
        else:
            align = 'c'
        
        # Process all rows and detect vertical bars
        rows_data = []
        max_cols = 0
        all_bar_positions = []
        
        for child in node.children[1:-1]:
            if child.type == 'matrix_row_expr':
                row_cells, bar_positions = self.matrix_row_to_list_with_bar_detection(child)
                rows_data.append(row_cells)
                all_bar_positions.extend(bar_positions)
        
        rows_data, real_bar_pos = self.__check_is_separated_matrix(rows_data, all_bar_positions)
        max_cols = max([len(row) for row in rows_data])
        if len(real_bar_pos) > 0:
            col_spec = []
            for i in range(max_cols):
                if i in real_bar_pos:
                    col_spec.append(f'|{align}')
                else:
                    col_spec.append(align)
            col_spec_str = ''.join(col_spec)
        else:
            # No vertical bars, use traditional format
            col_spec_str = max_cols * align
        
        return (
            f'\\left{lb}\\begin{{array}}{{{col_spec_str}}} '
            + " \\\\ ".join([" & ".join(row) for row in rows_data])
            + f' \\end{{array}}\\right{rb}'
        )

    @handler('det_expr')
    def det_expr_to_latex(self, node: Node):
        assert node.children
        assert len(node.children) >= 3
        lbar = self.constant_to_latex(node.children[0])
        rbar = self.constant_to_latex(node.children[-1])
        rows = [self.matrix_row_to_list(child)
                for child in node.children[1:-1]    # strip left and right bars
                if child.type == 'matrix_row_expr']
        return (
            f'\\left{lbar}\\begin{{array}}{{{len(rows[0])*"c"}}} '
            + " \\\\ ".join([" & ".join(row) for row in rows])
            + f' \\end{{array}}\\right{rbar}'
        )

    @handler('bigEqual_expr')
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
            # two cases
            # 1. operator   sub        expr_sub    sup        expr_sup
            #    ^child(0)  ^child(1)  ^child(2)   ^child(3)  ^child(4)
            # 2. operator   sup        expr_sup    sub        expr_sub
            #    ^child(0)  ^child(1)  ^child(2)   ^child(3)  ^child(4)
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

    @handler('right_associative_expr')
    def right_associative_expr_to_latex_supsub(self, node: Node):
        '''
        Only exists in super and subscripts
        '''
        assert node.children
        assert len(node.children) == 2
        op = self.constant_to_latex(node.children[0])
        expr = self.to_latex(node.children[1])
        return '%s %s' % (op, expr)   # the braces will be added by supsubscripts

    @handler('multiline_expr')
    def multiline_expr_to_latex(self, node: Node):
        assert node.children
        tmp_row = []
        all_rows = []
        for i, child in enumerate(node.children):
            if child.type == 'multi_linebreak':
                all_rows.append(' '.join(tmp_row))
                tmp_row = []
            else:
                expr = self.to_latex(child)
                tmp_row.append(expr)
        else:
            if len(tmp_row):
                all_rows.append(' '.join(tmp_row))
        return '\\begin{aligned} %s \\end{aligned}' % (' \\\\ '.join(all_rows))

    @handler('source_file')
    def source_file_to_latex(self, node: Node) -> str:
        return " ".join([
            self.to_latex(child)
            for child in node.children
        ])

    def to_latex(self, node: Node) -> str:
        if not isinstance(node, Node):
            raise TypeError("Expected a tree_sitter.Node object")

        # 使用字典查找方式替代原来的多个if判断
        if node.type in handler.registry:
            method = handler.registry[node.type]
            return method(self, node)
        else:
            # 默认情况，处理常量类型
            return self.constant_to_latex(node)
