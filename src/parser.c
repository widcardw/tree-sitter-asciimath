#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 63
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_number_symbol = 1,
  anon_sym_alpha = 2,
  anon_sym_beta = 3,
  anon_sym_gamma = 4,
  anon_sym_delta = 5,
  anon_sym_epsilon = 6,
  anon_sym_zeta = 7,
  anon_sym_eta = 8,
  anon_sym_theta = 9,
  anon_sym_iota = 10,
  anon_sym_kappa = 11,
  anon_sym_lambda = 12,
  anon_sym_mu = 13,
  anon_sym_nu = 14,
  anon_sym_xi = 15,
  anon_sym_omicron = 16,
  anon_sym_pi = 17,
  anon_sym_rho = 18,
  anon_sym_sigma = 19,
  anon_sym_tau = 20,
  anon_sym_upsilon = 21,
  anon_sym_phi = 22,
  anon_sym_chi = 23,
  anon_sym_psi = 24,
  anon_sym_omega = 25,
  anon_sym_Alpha = 26,
  anon_sym_Beta = 27,
  anon_sym_Gamma = 28,
  anon_sym_Delta = 29,
  anon_sym_Epsilon = 30,
  anon_sym_Zeta = 31,
  anon_sym_Eta = 32,
  anon_sym_Theta = 33,
  anon_sym_Iota = 34,
  anon_sym_Kappa = 35,
  anon_sym_Lambda = 36,
  anon_sym_Mu = 37,
  anon_sym_Nu = 38,
  anon_sym_Xi = 39,
  anon_sym_Omicron = 40,
  anon_sym_Pi = 41,
  anon_sym_Rho = 42,
  anon_sym_Sigma = 43,
  anon_sym_Tau = 44,
  anon_sym_Upsilon = 45,
  anon_sym_Phi = 46,
  anon_sym_Chi = 47,
  anon_sym_Psi = 48,
  anon_sym_Omega = 49,
  anon_sym_infty = 50,
  anon_sym_hbar = 51,
  anon_sym_ell = 52,
  anon_sym_Re = 53,
  anon_sym_Im = 54,
  anon_sym_aleph = 55,
  anon_sym_nabla = 56,
  anon_sym_partial = 57,
  anon_sym_forall = 58,
  anon_sym_exists = 59,
  anon_sym_emptyset = 60,
  anon_sym_grad = 61,
  anon_sym_del = 62,
  anon_sym_pm = 63,
  anon_sym_mp = 64,
  anon_sym_PLUS = 65,
  anon_sym_DASH = 66,
  anon_sym_STAR = 67,
  anon_sym_EQ = 68,
  anon_sym_LT = 69,
  anon_sym_GT = 70,
  anon_sym_lt = 71,
  anon_sym_gt = 72,
  anon_sym_TILDE_GT = 73,
  anon_sym_AA = 74,
  anon_sym_EE = 75,
  anon_sym__PIPE_ = 76,
  anon_sym_TT = 77,
  anon_sym_PIPE_DASH_DASH = 78,
  anon_sym_PIPE_EQ_EQ = 79,
  aux_sym_constant_symbol_token1 = 80,
  aux_sym_constant_symbol_token2 = 81,
  anon_sym_sqrt = 82,
  anon_sym_text = 83,
  anon_sym_bb = 84,
  anon_sym_cc = 85,
  anon_sym_tt = 86,
  anon_sym_fr = 87,
  anon_sym_sf = 88,
  anon_sym_bold = 89,
  anon_sym_cal = 90,
  anon_sym_frak = 91,
  anon_sym_monospace = 92,
  anon_sym_italic = 93,
  anon_sym_frac = 94,
  anon_sym_root = 95,
  anon_sym_stackrel = 96,
  anon_sym_choose = 97,
  anon_sym_atop = 98,
  anon_sym_over = 99,
  anon_sym_BANG = 100,
  anon_sym_BANG_BANG = 101,
  sym_multi_linebreak = 102,
  sym__whitespace = 103,
  anon_sym_DQUOTE = 104,
  sym_unescaped_double_string_fragment = 105,
  sym_escape_sequence = 106,
  anon_sym_LPAREN = 107,
  anon_sym_LBRACK = 108,
  anon_sym_LBRACE = 109,
  anon_sym_LBRACE_COLON = 110,
  anon_sym_LPAREN_COLON = 111,
  anon_sym_RPAREN = 112,
  anon_sym_RBRACK = 113,
  anon_sym_RBRACE = 114,
  anon_sym_COLON_RBRACE = 115,
  anon_sym_COLON_RPAREN = 116,
  anon_sym_COMMA = 117,
  anon_sym_SLASH = 118,
  anon_sym__ = 119,
  anon_sym_CARET = 120,
  sym_source_file = 121,
  sym__expression = 122,
  sym_italic_symbol = 123,
  sym_constant_symbol = 124,
  sym_unary_symbol = 125,
  sym_binary_symbol = 126,
  sym_literal_string = 127,
  sym_left_bracket = 128,
  sym_right_bracket = 129,
  sym_bracket_expr = 130,
  sym_matrix_row_expr = 131,
  sym_matrix_expr = 132,
  sym_unary_expr = 133,
  sym_binary_expr = 134,
  sym_binary_frac = 135,
  sym_simple_expression = 136,
  sym_subscript = 137,
  sym_superscript = 138,
  sym_subscript_superscript = 139,
  sym_intermediate_expression = 140,
  sym_concatenation = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_literal_string_repeat1 = 143,
  aux_sym_matrix_row_expr_repeat1 = 144,
  aux_sym_matrix_expr_repeat1 = 145,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number_symbol] = "number_symbol",
  [anon_sym_alpha] = "alpha",
  [anon_sym_beta] = "beta",
  [anon_sym_gamma] = "gamma",
  [anon_sym_delta] = "delta",
  [anon_sym_epsilon] = "epsilon",
  [anon_sym_zeta] = "zeta",
  [anon_sym_eta] = "eta",
  [anon_sym_theta] = "theta",
  [anon_sym_iota] = "iota",
  [anon_sym_kappa] = "kappa",
  [anon_sym_lambda] = "lambda",
  [anon_sym_mu] = "mu",
  [anon_sym_nu] = "nu",
  [anon_sym_xi] = "xi",
  [anon_sym_omicron] = "omicron",
  [anon_sym_pi] = "pi",
  [anon_sym_rho] = "rho",
  [anon_sym_sigma] = "sigma",
  [anon_sym_tau] = "tau",
  [anon_sym_upsilon] = "upsilon",
  [anon_sym_phi] = "phi",
  [anon_sym_chi] = "chi",
  [anon_sym_psi] = "psi",
  [anon_sym_omega] = "omega",
  [anon_sym_Alpha] = "Alpha",
  [anon_sym_Beta] = "Beta",
  [anon_sym_Gamma] = "Gamma",
  [anon_sym_Delta] = "Delta",
  [anon_sym_Epsilon] = "Epsilon",
  [anon_sym_Zeta] = "Zeta",
  [anon_sym_Eta] = "Eta",
  [anon_sym_Theta] = "Theta",
  [anon_sym_Iota] = "Iota",
  [anon_sym_Kappa] = "Kappa",
  [anon_sym_Lambda] = "Lambda",
  [anon_sym_Mu] = "Mu",
  [anon_sym_Nu] = "Nu",
  [anon_sym_Xi] = "Xi",
  [anon_sym_Omicron] = "Omicron",
  [anon_sym_Pi] = "Pi",
  [anon_sym_Rho] = "Rho",
  [anon_sym_Sigma] = "Sigma",
  [anon_sym_Tau] = "Tau",
  [anon_sym_Upsilon] = "Upsilon",
  [anon_sym_Phi] = "Phi",
  [anon_sym_Chi] = "Chi",
  [anon_sym_Psi] = "Psi",
  [anon_sym_Omega] = "Omega",
  [anon_sym_infty] = "infty",
  [anon_sym_hbar] = "hbar",
  [anon_sym_ell] = "ell",
  [anon_sym_Re] = "Re",
  [anon_sym_Im] = "Im",
  [anon_sym_aleph] = "aleph",
  [anon_sym_nabla] = "nabla",
  [anon_sym_partial] = "partial",
  [anon_sym_forall] = "forall",
  [anon_sym_exists] = "exists",
  [anon_sym_emptyset] = "emptyset",
  [anon_sym_grad] = "grad",
  [anon_sym_del] = "del",
  [anon_sym_pm] = "pm",
  [anon_sym_mp] = "mp",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_lt] = "lt",
  [anon_sym_gt] = "gt",
  [anon_sym_TILDE_GT] = "~>",
  [anon_sym_AA] = "AA",
  [anon_sym_EE] = "EE",
  [anon_sym__PIPE_] = "_|_",
  [anon_sym_TT] = "TT",
  [anon_sym_PIPE_DASH_DASH] = "|--",
  [anon_sym_PIPE_EQ_EQ] = "|==",
  [aux_sym_constant_symbol_token1] = "constant_symbol_token1",
  [aux_sym_constant_symbol_token2] = "constant_symbol_token2",
  [anon_sym_sqrt] = "sqrt",
  [anon_sym_text] = "text",
  [anon_sym_bb] = "bb",
  [anon_sym_cc] = "cc",
  [anon_sym_tt] = "tt",
  [anon_sym_fr] = "fr",
  [anon_sym_sf] = "sf",
  [anon_sym_bold] = "bold",
  [anon_sym_cal] = "cal",
  [anon_sym_frak] = "frak",
  [anon_sym_monospace] = "monospace",
  [anon_sym_italic] = "italic",
  [anon_sym_frac] = "frac",
  [anon_sym_root] = "root",
  [anon_sym_stackrel] = "stackrel",
  [anon_sym_choose] = "choose",
  [anon_sym_atop] = "atop",
  [anon_sym_over] = "over",
  [anon_sym_BANG] = "!",
  [anon_sym_BANG_BANG] = "!!",
  [sym_multi_linebreak] = "multi_linebreak",
  [sym__whitespace] = "_whitespace",
  [anon_sym_DQUOTE] = "\"",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACE_COLON] = "{:",
  [anon_sym_LPAREN_COLON] = "(:",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_RBRACE] = ":}",
  [anon_sym_COLON_RPAREN] = ":)",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASH] = "/",
  [anon_sym__] = "_",
  [anon_sym_CARET] = "^",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_italic_symbol] = "italic_symbol",
  [sym_constant_symbol] = "constant_symbol",
  [sym_unary_symbol] = "unary_symbol",
  [sym_binary_symbol] = "binary_symbol",
  [sym_literal_string] = "literal_string",
  [sym_left_bracket] = "left_bracket",
  [sym_right_bracket] = "right_bracket",
  [sym_bracket_expr] = "bracket_expr",
  [sym_matrix_row_expr] = "matrix_row_expr",
  [sym_matrix_expr] = "matrix_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_binary_frac] = "binary_frac",
  [sym_simple_expression] = "simple_expression",
  [sym_subscript] = "subscript",
  [sym_superscript] = "superscript",
  [sym_subscript_superscript] = "subscript_superscript",
  [sym_intermediate_expression] = "intermediate_expression",
  [sym_concatenation] = "concatenation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_literal_string_repeat1] = "literal_string_repeat1",
  [aux_sym_matrix_row_expr_repeat1] = "matrix_row_expr_repeat1",
  [aux_sym_matrix_expr_repeat1] = "matrix_expr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number_symbol] = sym_number_symbol,
  [anon_sym_alpha] = anon_sym_alpha,
  [anon_sym_beta] = anon_sym_beta,
  [anon_sym_gamma] = anon_sym_gamma,
  [anon_sym_delta] = anon_sym_delta,
  [anon_sym_epsilon] = anon_sym_epsilon,
  [anon_sym_zeta] = anon_sym_zeta,
  [anon_sym_eta] = anon_sym_eta,
  [anon_sym_theta] = anon_sym_theta,
  [anon_sym_iota] = anon_sym_iota,
  [anon_sym_kappa] = anon_sym_kappa,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_mu] = anon_sym_mu,
  [anon_sym_nu] = anon_sym_nu,
  [anon_sym_xi] = anon_sym_xi,
  [anon_sym_omicron] = anon_sym_omicron,
  [anon_sym_pi] = anon_sym_pi,
  [anon_sym_rho] = anon_sym_rho,
  [anon_sym_sigma] = anon_sym_sigma,
  [anon_sym_tau] = anon_sym_tau,
  [anon_sym_upsilon] = anon_sym_upsilon,
  [anon_sym_phi] = anon_sym_phi,
  [anon_sym_chi] = anon_sym_chi,
  [anon_sym_psi] = anon_sym_psi,
  [anon_sym_omega] = anon_sym_omega,
  [anon_sym_Alpha] = anon_sym_Alpha,
  [anon_sym_Beta] = anon_sym_Beta,
  [anon_sym_Gamma] = anon_sym_Gamma,
  [anon_sym_Delta] = anon_sym_Delta,
  [anon_sym_Epsilon] = anon_sym_Epsilon,
  [anon_sym_Zeta] = anon_sym_Zeta,
  [anon_sym_Eta] = anon_sym_Eta,
  [anon_sym_Theta] = anon_sym_Theta,
  [anon_sym_Iota] = anon_sym_Iota,
  [anon_sym_Kappa] = anon_sym_Kappa,
  [anon_sym_Lambda] = anon_sym_Lambda,
  [anon_sym_Mu] = anon_sym_Mu,
  [anon_sym_Nu] = anon_sym_Nu,
  [anon_sym_Xi] = anon_sym_Xi,
  [anon_sym_Omicron] = anon_sym_Omicron,
  [anon_sym_Pi] = anon_sym_Pi,
  [anon_sym_Rho] = anon_sym_Rho,
  [anon_sym_Sigma] = anon_sym_Sigma,
  [anon_sym_Tau] = anon_sym_Tau,
  [anon_sym_Upsilon] = anon_sym_Upsilon,
  [anon_sym_Phi] = anon_sym_Phi,
  [anon_sym_Chi] = anon_sym_Chi,
  [anon_sym_Psi] = anon_sym_Psi,
  [anon_sym_Omega] = anon_sym_Omega,
  [anon_sym_infty] = anon_sym_infty,
  [anon_sym_hbar] = anon_sym_hbar,
  [anon_sym_ell] = anon_sym_ell,
  [anon_sym_Re] = anon_sym_Re,
  [anon_sym_Im] = anon_sym_Im,
  [anon_sym_aleph] = anon_sym_aleph,
  [anon_sym_nabla] = anon_sym_nabla,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_emptyset] = anon_sym_emptyset,
  [anon_sym_grad] = anon_sym_grad,
  [anon_sym_del] = anon_sym_del,
  [anon_sym_pm] = anon_sym_pm,
  [anon_sym_mp] = anon_sym_mp,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_TILDE_GT] = anon_sym_TILDE_GT,
  [anon_sym_AA] = anon_sym_AA,
  [anon_sym_EE] = anon_sym_EE,
  [anon_sym__PIPE_] = anon_sym__PIPE_,
  [anon_sym_TT] = anon_sym_TT,
  [anon_sym_PIPE_DASH_DASH] = anon_sym_PIPE_DASH_DASH,
  [anon_sym_PIPE_EQ_EQ] = anon_sym_PIPE_EQ_EQ,
  [aux_sym_constant_symbol_token1] = aux_sym_constant_symbol_token1,
  [aux_sym_constant_symbol_token2] = aux_sym_constant_symbol_token2,
  [anon_sym_sqrt] = anon_sym_sqrt,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_bb] = anon_sym_bb,
  [anon_sym_cc] = anon_sym_cc,
  [anon_sym_tt] = anon_sym_tt,
  [anon_sym_fr] = anon_sym_fr,
  [anon_sym_sf] = anon_sym_sf,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_cal] = anon_sym_cal,
  [anon_sym_frak] = anon_sym_frak,
  [anon_sym_monospace] = anon_sym_monospace,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_frac] = anon_sym_frac,
  [anon_sym_root] = anon_sym_root,
  [anon_sym_stackrel] = anon_sym_stackrel,
  [anon_sym_choose] = anon_sym_choose,
  [anon_sym_atop] = anon_sym_atop,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANG_BANG] = anon_sym_BANG_BANG,
  [sym_multi_linebreak] = sym_multi_linebreak,
  [sym__whitespace] = sym__whitespace,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LBRACE_COLON] = anon_sym_LBRACE_COLON,
  [anon_sym_LPAREN_COLON] = anon_sym_LPAREN_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_RBRACE] = anon_sym_COLON_RBRACE,
  [anon_sym_COLON_RPAREN] = anon_sym_COLON_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_italic_symbol] = sym_italic_symbol,
  [sym_constant_symbol] = sym_constant_symbol,
  [sym_unary_symbol] = sym_unary_symbol,
  [sym_binary_symbol] = sym_binary_symbol,
  [sym_literal_string] = sym_literal_string,
  [sym_left_bracket] = sym_left_bracket,
  [sym_right_bracket] = sym_right_bracket,
  [sym_bracket_expr] = sym_bracket_expr,
  [sym_matrix_row_expr] = sym_matrix_row_expr,
  [sym_matrix_expr] = sym_matrix_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_binary_frac] = sym_binary_frac,
  [sym_simple_expression] = sym_simple_expression,
  [sym_subscript] = sym_subscript,
  [sym_superscript] = sym_superscript,
  [sym_subscript_superscript] = sym_subscript_superscript,
  [sym_intermediate_expression] = sym_intermediate_expression,
  [sym_concatenation] = sym_concatenation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_literal_string_repeat1] = aux_sym_literal_string_repeat1,
  [aux_sym_matrix_row_expr_repeat1] = aux_sym_matrix_row_expr_repeat1,
  [aux_sym_matrix_expr_repeat1] = aux_sym_matrix_expr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alpha] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gamma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_epsilon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_theta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iota] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kappa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_omicron] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rho] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sigma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tau] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upsilon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_omega] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Alpha] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Beta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gamma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Delta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Epsilon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Zeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Eta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Theta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Iota] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kappa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Xi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Omicron] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Rho] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sigma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tau] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Upsilon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Phi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Chi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Psi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Omega] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hbar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Re] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Im] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aleph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nabla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emptyset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_del] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__PIPE_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_symbol_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_sqrt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monospace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_root] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stackrel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_multi_linebreak] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_italic_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_left_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_right_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_matrix_row_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_matrix_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_frac] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_intermediate_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matrix_row_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matrix_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 19,
  [23] = 15,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 37,
  [43] = 35,
  [44] = 27,
  [45] = 33,
  [46] = 32,
  [47] = 36,
  [48] = 28,
  [49] = 31,
  [50] = 29,
  [51] = 26,
  [52] = 34,
  [53] = 30,
  [54] = 38,
  [55] = 41,
  [56] = 39,
  [57] = 40,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 58,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 74,
  [80] = 59,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 82,
  [85] = 83,
  [86] = 86,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\t', 314,
        '\n', 308,
        '\r', 307,
        '!', 315,
        '"', 313,
        '(', 320,
        ')', 442,
        '*', 442,
        '+', 442,
        ',', 442,
        '-', 442,
        '/', 442,
        ':', 316,
        '<', 442,
        '=', 442,
        '>', 442,
        'A', 323,
        'B', 358,
        'C', 372,
        'D', 359,
        'E', 324,
        'G', 332,
        'I', 391,
        'K', 338,
        'L', 337,
        'M', 434,
        'N', 434,
        'O', 393,
        'P', 371,
        'R', 356,
        'S', 376,
        'T', 325,
        'U', 409,
        'X', 375,
        'Z', 358,
        '[', 442,
        '\\', 3,
        ']', 442,
        '^', 442,
        '_', 438,
        'a', 384,
        'b', 345,
        'c', 339,
        'd', 359,
        'e', 387,
        'f', 401,
        'g', 331,
        'h', 348,
        'i', 398,
        'k', 338,
        'l', 336,
        'm', 402,
        'n', 333,
        'o', 392,
        'p', 334,
        'r', 370,
        's', 365,
        't', 327,
        'u', 409,
        'x', 375,
        'z', 358,
        '{', 320,
        '|', 318,
        '}', 442,
        '~', 322,
        0x0b, 439,
        '\f', 439,
        ' ', 439,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(441);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(314);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(310);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '}') ADVANCE(455);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead == '\r' ||
          lookahead == '?') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\t', 311,
        '\n', 308,
        '\r', 307,
        '"', 313,
        '(', 447,
        '/', 458,
        'A', 190,
        'B', 137,
        'C', 161,
        'D', 141,
        'E', 233,
        'G', 104,
        'I', 200,
        'K', 111,
        'L', 110,
        'M', 279,
        'N', 280,
        'O', 201,
        'P', 162,
        'R', 138,
        'S', 165,
        'T', 109,
        'U', 242,
        'X', 166,
        'Z', 149,
        '[', 448,
        '^', 460,
        '_', 459,
        'a', 182,
        'b', 122,
        'c', 113,
        'd', 144,
        'e', 191,
        'f', 219,
        'g', 119,
        'h', 124,
        'i', 211,
        'k', 120,
        'l', 121,
        'm', 220,
        'n', 105,
        'o', 209,
        'p', 106,
        'r', 160,
        's', 153,
        't', 114,
        'u', 244,
        'x', 167,
        'z', 150,
        '{', 449,
        0x0b, 312,
        '\f', 312,
        ' ', 312,
      );
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(286);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\t', 311,
        '\n', 312,
        '\r', 310,
        '"', 313,
        '(', 447,
        ')', 452,
        ',', 457,
        '/', 458,
        ':', 2,
        'A', 190,
        'B', 137,
        'C', 161,
        'D', 141,
        'E', 233,
        'G', 104,
        'I', 200,
        'K', 111,
        'L', 110,
        'M', 279,
        'N', 280,
        'O', 201,
        'P', 162,
        'R', 138,
        'S', 165,
        'T', 109,
        'U', 242,
        'X', 166,
        'Z', 149,
        '[', 448,
        ']', 453,
        '^', 460,
        '_', 459,
        'a', 182,
        'b', 122,
        'c', 113,
        'd', 144,
        'e', 191,
        'f', 219,
        'g', 119,
        'h', 124,
        'i', 211,
        'k', 120,
        'l', 121,
        'm', 220,
        'n', 105,
        'o', 209,
        'p', 106,
        'r', 160,
        's', 153,
        't', 114,
        'u', 244,
        'x', 167,
        'z', 150,
        '{', 449,
        '}', 454,
        0x0b, 312,
        '\f', 312,
        ' ', 312,
      );
      if (('*' <= lookahead && lookahead <= '-') ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(286);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number_symbol);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_Alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_infty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_hbar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ell);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Re);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Im);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_aleph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_nabla);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_partial);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_forall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_exists);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_emptyset);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_grad);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_del);
      if (lookahead == 't') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_pm);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_mp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 's') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'h') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'h') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(152);
      if (lookahead == 't') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'q') ADVANCE(248);
      if (lookahead == 't') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'f') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 's') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'k') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 't') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 't') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 't') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'x') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'y') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'y') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_sqrt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_bb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_cc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_tt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_fr);
      if (lookahead == 'a') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_sf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_bold);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_cal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_frak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_monospace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_italic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_frac);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_root);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_stackrel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_choose);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_atop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_over);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_multi_linebreak);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(308);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '\r') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(306);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(312);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ' ') ADVANCE(312);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '}') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(317);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '=') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '>') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(410);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'E') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'T') ADVANCE(441);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'h') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '_') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'h') ADVANCE(358);
      if (lookahead == 't') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == 't') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == 's') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 't') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(395);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'h') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'k') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'h') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'q') ADVANCE(419);
      if (lookahead == 't') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 's') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'k') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 't') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 'm') ADVANCE(411);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == 'x') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 't') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 'u') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'x') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '|') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(443);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LPAREN_COLON);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_COLON_RPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number_symbol] = ACTIONS(1),
    [anon_sym_alpha] = ACTIONS(1),
    [anon_sym_beta] = ACTIONS(1),
    [anon_sym_gamma] = ACTIONS(1),
    [anon_sym_delta] = ACTIONS(1),
    [anon_sym_epsilon] = ACTIONS(1),
    [anon_sym_zeta] = ACTIONS(1),
    [anon_sym_eta] = ACTIONS(1),
    [anon_sym_theta] = ACTIONS(1),
    [anon_sym_iota] = ACTIONS(1),
    [anon_sym_kappa] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_mu] = ACTIONS(1),
    [anon_sym_nu] = ACTIONS(1),
    [anon_sym_xi] = ACTIONS(1),
    [anon_sym_omicron] = ACTIONS(1),
    [anon_sym_pi] = ACTIONS(1),
    [anon_sym_rho] = ACTIONS(1),
    [anon_sym_sigma] = ACTIONS(1),
    [anon_sym_tau] = ACTIONS(1),
    [anon_sym_upsilon] = ACTIONS(1),
    [anon_sym_phi] = ACTIONS(1),
    [anon_sym_chi] = ACTIONS(1),
    [anon_sym_psi] = ACTIONS(1),
    [anon_sym_omega] = ACTIONS(1),
    [anon_sym_Alpha] = ACTIONS(1),
    [anon_sym_Beta] = ACTIONS(1),
    [anon_sym_Gamma] = ACTIONS(1),
    [anon_sym_Delta] = ACTIONS(1),
    [anon_sym_Epsilon] = ACTIONS(1),
    [anon_sym_Zeta] = ACTIONS(1),
    [anon_sym_Eta] = ACTIONS(1),
    [anon_sym_Theta] = ACTIONS(1),
    [anon_sym_Iota] = ACTIONS(1),
    [anon_sym_Kappa] = ACTIONS(1),
    [anon_sym_Lambda] = ACTIONS(1),
    [anon_sym_Mu] = ACTIONS(1),
    [anon_sym_Nu] = ACTIONS(1),
    [anon_sym_Xi] = ACTIONS(1),
    [anon_sym_Omicron] = ACTIONS(1),
    [anon_sym_Pi] = ACTIONS(1),
    [anon_sym_Rho] = ACTIONS(1),
    [anon_sym_Sigma] = ACTIONS(1),
    [anon_sym_Tau] = ACTIONS(1),
    [anon_sym_Upsilon] = ACTIONS(1),
    [anon_sym_Phi] = ACTIONS(1),
    [anon_sym_Chi] = ACTIONS(1),
    [anon_sym_Psi] = ACTIONS(1),
    [anon_sym_Omega] = ACTIONS(1),
    [anon_sym_infty] = ACTIONS(1),
    [anon_sym_hbar] = ACTIONS(1),
    [anon_sym_ell] = ACTIONS(1),
    [anon_sym_Re] = ACTIONS(1),
    [anon_sym_Im] = ACTIONS(1),
    [anon_sym_aleph] = ACTIONS(1),
    [anon_sym_nabla] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_emptyset] = ACTIONS(1),
    [anon_sym_grad] = ACTIONS(1),
    [anon_sym_del] = ACTIONS(1),
    [anon_sym_pm] = ACTIONS(1),
    [anon_sym_mp] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_TILDE_GT] = ACTIONS(1),
    [anon_sym_AA] = ACTIONS(1),
    [anon_sym_EE] = ACTIONS(1),
    [anon_sym__PIPE_] = ACTIONS(1),
    [anon_sym_TT] = ACTIONS(1),
    [anon_sym_PIPE_DASH_DASH] = ACTIONS(1),
    [anon_sym_PIPE_EQ_EQ] = ACTIONS(1),
    [aux_sym_constant_symbol_token1] = ACTIONS(1),
    [aux_sym_constant_symbol_token2] = ACTIONS(1),
    [anon_sym_sqrt] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_bb] = ACTIONS(1),
    [anon_sym_cc] = ACTIONS(1),
    [anon_sym_tt] = ACTIONS(1),
    [anon_sym_fr] = ACTIONS(1),
    [anon_sym_sf] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_cal] = ACTIONS(1),
    [anon_sym_frak] = ACTIONS(1),
    [anon_sym_monospace] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_frac] = ACTIONS(1),
    [anon_sym_root] = ACTIONS(1),
    [anon_sym_stackrel] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
    [anon_sym_atop] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANG_BANG] = ACTIONS(1),
    [sym_multi_linebreak] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_unescaped_double_string_fragment] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_COLON] = ACTIONS(1),
    [anon_sym_LPAREN_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym__expression] = STATE(4),
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(4),
    [sym_simple_expression] = STATE(52),
    [sym_subscript] = STATE(57),
    [sym_superscript] = STATE(57),
    [sym_subscript_superscript] = STATE(57),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym_multi_linebreak] = ACTIONS(17),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [2] = {
    [sym__expression] = STATE(80),
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_binary_frac] = STATE(80),
    [sym_simple_expression] = STATE(34),
    [sym_subscript] = STATE(40),
    [sym_superscript] = STATE(40),
    [sym_subscript_superscript] = STATE(40),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(80),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_COLON_RBRACE] = ACTIONS(35),
    [anon_sym_COLON_RPAREN] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
  },
  [3] = {
    [sym__expression] = STATE(3),
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(3),
    [sym_simple_expression] = STATE(52),
    [sym_subscript] = STATE(57),
    [sym_superscript] = STATE(57),
    [sym_subscript_superscript] = STATE(57),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_number_symbol] = ACTIONS(41),
    [anon_sym_alpha] = ACTIONS(44),
    [anon_sym_beta] = ACTIONS(44),
    [anon_sym_gamma] = ACTIONS(44),
    [anon_sym_delta] = ACTIONS(44),
    [anon_sym_epsilon] = ACTIONS(44),
    [anon_sym_zeta] = ACTIONS(44),
    [anon_sym_eta] = ACTIONS(44),
    [anon_sym_theta] = ACTIONS(44),
    [anon_sym_iota] = ACTIONS(44),
    [anon_sym_kappa] = ACTIONS(44),
    [anon_sym_lambda] = ACTIONS(44),
    [anon_sym_mu] = ACTIONS(44),
    [anon_sym_nu] = ACTIONS(44),
    [anon_sym_xi] = ACTIONS(44),
    [anon_sym_omicron] = ACTIONS(44),
    [anon_sym_pi] = ACTIONS(44),
    [anon_sym_rho] = ACTIONS(44),
    [anon_sym_sigma] = ACTIONS(44),
    [anon_sym_tau] = ACTIONS(44),
    [anon_sym_upsilon] = ACTIONS(44),
    [anon_sym_phi] = ACTIONS(44),
    [anon_sym_chi] = ACTIONS(44),
    [anon_sym_psi] = ACTIONS(44),
    [anon_sym_omega] = ACTIONS(44),
    [anon_sym_Alpha] = ACTIONS(44),
    [anon_sym_Beta] = ACTIONS(44),
    [anon_sym_Gamma] = ACTIONS(44),
    [anon_sym_Delta] = ACTIONS(44),
    [anon_sym_Epsilon] = ACTIONS(44),
    [anon_sym_Zeta] = ACTIONS(44),
    [anon_sym_Eta] = ACTIONS(44),
    [anon_sym_Theta] = ACTIONS(44),
    [anon_sym_Iota] = ACTIONS(44),
    [anon_sym_Kappa] = ACTIONS(44),
    [anon_sym_Lambda] = ACTIONS(44),
    [anon_sym_Mu] = ACTIONS(44),
    [anon_sym_Nu] = ACTIONS(44),
    [anon_sym_Xi] = ACTIONS(44),
    [anon_sym_Omicron] = ACTIONS(44),
    [anon_sym_Pi] = ACTIONS(44),
    [anon_sym_Rho] = ACTIONS(44),
    [anon_sym_Sigma] = ACTIONS(44),
    [anon_sym_Tau] = ACTIONS(44),
    [anon_sym_Upsilon] = ACTIONS(44),
    [anon_sym_Phi] = ACTIONS(44),
    [anon_sym_Chi] = ACTIONS(44),
    [anon_sym_Psi] = ACTIONS(44),
    [anon_sym_Omega] = ACTIONS(44),
    [anon_sym_infty] = ACTIONS(44),
    [anon_sym_hbar] = ACTIONS(44),
    [anon_sym_ell] = ACTIONS(44),
    [anon_sym_Re] = ACTIONS(44),
    [anon_sym_Im] = ACTIONS(44),
    [anon_sym_aleph] = ACTIONS(44),
    [anon_sym_nabla] = ACTIONS(44),
    [anon_sym_partial] = ACTIONS(44),
    [anon_sym_forall] = ACTIONS(44),
    [anon_sym_exists] = ACTIONS(44),
    [anon_sym_emptyset] = ACTIONS(44),
    [anon_sym_grad] = ACTIONS(44),
    [anon_sym_del] = ACTIONS(44),
    [anon_sym_pm] = ACTIONS(44),
    [anon_sym_mp] = ACTIONS(44),
    [aux_sym_constant_symbol_token1] = ACTIONS(47),
    [aux_sym_constant_symbol_token2] = ACTIONS(41),
    [anon_sym_sqrt] = ACTIONS(50),
    [anon_sym_text] = ACTIONS(50),
    [anon_sym_bb] = ACTIONS(50),
    [anon_sym_cc] = ACTIONS(50),
    [anon_sym_tt] = ACTIONS(50),
    [anon_sym_fr] = ACTIONS(50),
    [anon_sym_sf] = ACTIONS(50),
    [anon_sym_bold] = ACTIONS(50),
    [anon_sym_cal] = ACTIONS(50),
    [anon_sym_frak] = ACTIONS(50),
    [anon_sym_monospace] = ACTIONS(50),
    [anon_sym_italic] = ACTIONS(50),
    [anon_sym_frac] = ACTIONS(53),
    [anon_sym_root] = ACTIONS(53),
    [anon_sym_stackrel] = ACTIONS(53),
    [anon_sym_choose] = ACTIONS(53),
    [anon_sym_atop] = ACTIONS(53),
    [anon_sym_over] = ACTIONS(53),
    [sym_multi_linebreak] = ACTIONS(56),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_LBRACE_COLON] = ACTIONS(65),
    [anon_sym_LPAREN_COLON] = ACTIONS(65),
  },
  [4] = {
    [sym__expression] = STATE(3),
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(3),
    [sym_simple_expression] = STATE(52),
    [sym_subscript] = STATE(57),
    [sym_superscript] = STATE(57),
    [sym_subscript_superscript] = STATE(57),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym_multi_linebreak] = ACTIONS(70),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [5] = {
    [sym__expression] = STATE(59),
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(59),
    [sym_simple_expression] = STATE(52),
    [sym_subscript] = STATE(57),
    [sym_superscript] = STATE(57),
    [sym_subscript_superscript] = STATE(57),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym_multi_linebreak] = ACTIONS(72),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(74),
  },
  [6] = {
    [sym__expression] = STATE(74),
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_row_expr] = STATE(69),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_binary_frac] = STATE(74),
    [sym_simple_expression] = STATE(34),
    [sym_subscript] = STATE(40),
    [sym_superscript] = STATE(40),
    [sym_subscript_superscript] = STATE(40),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(74),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [7] = {
    [sym__expression] = STATE(79),
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_row_expr] = STATE(67),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_binary_frac] = STATE(79),
    [sym_simple_expression] = STATE(34),
    [sym_subscript] = STATE(40),
    [sym_superscript] = STATE(40),
    [sym_subscript_superscript] = STATE(40),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(79),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [8] = {
    [sym__expression] = STATE(68),
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_row_expr] = STATE(67),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_binary_frac] = STATE(68),
    [sym_simple_expression] = STATE(34),
    [sym_subscript] = STATE(40),
    [sym_superscript] = STATE(40),
    [sym_subscript_superscript] = STATE(40),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(68),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [9] = {
    [sym__expression] = STATE(77),
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_binary_frac] = STATE(77),
    [sym_simple_expression] = STATE(34),
    [sym_subscript] = STATE(40),
    [sym_superscript] = STATE(40),
    [sym_subscript_superscript] = STATE(40),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(77),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [10] = {
    [sym__expression] = STATE(64),
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_binary_frac] = STATE(64),
    [sym_simple_expression] = STATE(34),
    [sym_subscript] = STATE(40),
    [sym_superscript] = STATE(40),
    [sym_subscript_superscript] = STATE(40),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(64),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [11] = {
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(52),
    [sym_subscript] = STATE(57),
    [sym_superscript] = STATE(57),
    [sym_subscript_superscript] = STATE(57),
    [sym_intermediate_expression] = STATE(58),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [12] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(34),
    [sym_subscript] = STATE(40),
    [sym_superscript] = STATE(40),
    [sym_subscript_superscript] = STATE(40),
    [sym_intermediate_expression] = STATE(75),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [13] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(21),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [14] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(32),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [15] = {
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(56),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [16] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(18),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [17] = {
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(46),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [18] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(30),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [19] = {
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(55),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [20] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(38),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [21] = {
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(53),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [22] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(41),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [23] = {
    [sym_italic_symbol] = STATE(37),
    [sym_constant_symbol] = STATE(35),
    [sym_unary_symbol] = STATE(14),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(35),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(35),
    [sym_matrix_expr] = STATE(35),
    [sym_unary_expr] = STATE(35),
    [sym_binary_expr] = STATE(35),
    [sym_simple_expression] = STATE(39),
    [sym_number_symbol] = ACTIONS(25),
    [anon_sym_alpha] = ACTIONS(27),
    [anon_sym_beta] = ACTIONS(27),
    [anon_sym_gamma] = ACTIONS(27),
    [anon_sym_delta] = ACTIONS(27),
    [anon_sym_epsilon] = ACTIONS(27),
    [anon_sym_zeta] = ACTIONS(27),
    [anon_sym_eta] = ACTIONS(27),
    [anon_sym_theta] = ACTIONS(27),
    [anon_sym_iota] = ACTIONS(27),
    [anon_sym_kappa] = ACTIONS(27),
    [anon_sym_lambda] = ACTIONS(27),
    [anon_sym_mu] = ACTIONS(27),
    [anon_sym_nu] = ACTIONS(27),
    [anon_sym_xi] = ACTIONS(27),
    [anon_sym_omicron] = ACTIONS(27),
    [anon_sym_pi] = ACTIONS(27),
    [anon_sym_rho] = ACTIONS(27),
    [anon_sym_sigma] = ACTIONS(27),
    [anon_sym_tau] = ACTIONS(27),
    [anon_sym_upsilon] = ACTIONS(27),
    [anon_sym_phi] = ACTIONS(27),
    [anon_sym_chi] = ACTIONS(27),
    [anon_sym_psi] = ACTIONS(27),
    [anon_sym_omega] = ACTIONS(27),
    [anon_sym_Alpha] = ACTIONS(27),
    [anon_sym_Beta] = ACTIONS(27),
    [anon_sym_Gamma] = ACTIONS(27),
    [anon_sym_Delta] = ACTIONS(27),
    [anon_sym_Epsilon] = ACTIONS(27),
    [anon_sym_Zeta] = ACTIONS(27),
    [anon_sym_Eta] = ACTIONS(27),
    [anon_sym_Theta] = ACTIONS(27),
    [anon_sym_Iota] = ACTIONS(27),
    [anon_sym_Kappa] = ACTIONS(27),
    [anon_sym_Lambda] = ACTIONS(27),
    [anon_sym_Mu] = ACTIONS(27),
    [anon_sym_Nu] = ACTIONS(27),
    [anon_sym_Xi] = ACTIONS(27),
    [anon_sym_Omicron] = ACTIONS(27),
    [anon_sym_Pi] = ACTIONS(27),
    [anon_sym_Rho] = ACTIONS(27),
    [anon_sym_Sigma] = ACTIONS(27),
    [anon_sym_Tau] = ACTIONS(27),
    [anon_sym_Upsilon] = ACTIONS(27),
    [anon_sym_Phi] = ACTIONS(27),
    [anon_sym_Chi] = ACTIONS(27),
    [anon_sym_Psi] = ACTIONS(27),
    [anon_sym_Omega] = ACTIONS(27),
    [anon_sym_infty] = ACTIONS(27),
    [anon_sym_hbar] = ACTIONS(27),
    [anon_sym_ell] = ACTIONS(27),
    [anon_sym_Re] = ACTIONS(27),
    [anon_sym_Im] = ACTIONS(27),
    [anon_sym_aleph] = ACTIONS(27),
    [anon_sym_nabla] = ACTIONS(27),
    [anon_sym_partial] = ACTIONS(27),
    [anon_sym_forall] = ACTIONS(27),
    [anon_sym_exists] = ACTIONS(27),
    [anon_sym_emptyset] = ACTIONS(27),
    [anon_sym_grad] = ACTIONS(27),
    [anon_sym_del] = ACTIONS(27),
    [anon_sym_pm] = ACTIONS(27),
    [anon_sym_mp] = ACTIONS(27),
    [aux_sym_constant_symbol_token1] = ACTIONS(29),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [24] = {
    [sym_italic_symbol] = STATE(42),
    [sym_constant_symbol] = STATE(43),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(13),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(54),
    [sym_number_symbol] = ACTIONS(7),
    [anon_sym_alpha] = ACTIONS(9),
    [anon_sym_beta] = ACTIONS(9),
    [anon_sym_gamma] = ACTIONS(9),
    [anon_sym_delta] = ACTIONS(9),
    [anon_sym_epsilon] = ACTIONS(9),
    [anon_sym_zeta] = ACTIONS(9),
    [anon_sym_eta] = ACTIONS(9),
    [anon_sym_theta] = ACTIONS(9),
    [anon_sym_iota] = ACTIONS(9),
    [anon_sym_kappa] = ACTIONS(9),
    [anon_sym_lambda] = ACTIONS(9),
    [anon_sym_mu] = ACTIONS(9),
    [anon_sym_nu] = ACTIONS(9),
    [anon_sym_xi] = ACTIONS(9),
    [anon_sym_omicron] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_rho] = ACTIONS(9),
    [anon_sym_sigma] = ACTIONS(9),
    [anon_sym_tau] = ACTIONS(9),
    [anon_sym_upsilon] = ACTIONS(9),
    [anon_sym_phi] = ACTIONS(9),
    [anon_sym_chi] = ACTIONS(9),
    [anon_sym_psi] = ACTIONS(9),
    [anon_sym_omega] = ACTIONS(9),
    [anon_sym_Alpha] = ACTIONS(9),
    [anon_sym_Beta] = ACTIONS(9),
    [anon_sym_Gamma] = ACTIONS(9),
    [anon_sym_Delta] = ACTIONS(9),
    [anon_sym_Epsilon] = ACTIONS(9),
    [anon_sym_Zeta] = ACTIONS(9),
    [anon_sym_Eta] = ACTIONS(9),
    [anon_sym_Theta] = ACTIONS(9),
    [anon_sym_Iota] = ACTIONS(9),
    [anon_sym_Kappa] = ACTIONS(9),
    [anon_sym_Lambda] = ACTIONS(9),
    [anon_sym_Mu] = ACTIONS(9),
    [anon_sym_Nu] = ACTIONS(9),
    [anon_sym_Xi] = ACTIONS(9),
    [anon_sym_Omicron] = ACTIONS(9),
    [anon_sym_Pi] = ACTIONS(9),
    [anon_sym_Rho] = ACTIONS(9),
    [anon_sym_Sigma] = ACTIONS(9),
    [anon_sym_Tau] = ACTIONS(9),
    [anon_sym_Upsilon] = ACTIONS(9),
    [anon_sym_Phi] = ACTIONS(9),
    [anon_sym_Chi] = ACTIONS(9),
    [anon_sym_Psi] = ACTIONS(9),
    [anon_sym_Omega] = ACTIONS(9),
    [anon_sym_infty] = ACTIONS(9),
    [anon_sym_hbar] = ACTIONS(9),
    [anon_sym_ell] = ACTIONS(9),
    [anon_sym_Re] = ACTIONS(9),
    [anon_sym_Im] = ACTIONS(9),
    [anon_sym_aleph] = ACTIONS(9),
    [anon_sym_nabla] = ACTIONS(9),
    [anon_sym_partial] = ACTIONS(9),
    [anon_sym_forall] = ACTIONS(9),
    [anon_sym_exists] = ACTIONS(9),
    [anon_sym_emptyset] = ACTIONS(9),
    [anon_sym_grad] = ACTIONS(9),
    [anon_sym_del] = ACTIONS(9),
    [anon_sym_pm] = ACTIONS(9),
    [anon_sym_mp] = ACTIONS(9),
    [aux_sym_constant_symbol_token1] = ACTIONS(11),
    [aux_sym_constant_symbol_token2] = ACTIONS(7),
    [anon_sym_sqrt] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_bb] = ACTIONS(13),
    [anon_sym_cc] = ACTIONS(13),
    [anon_sym_tt] = ACTIONS(13),
    [anon_sym_fr] = ACTIONS(13),
    [anon_sym_sf] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_cal] = ACTIONS(13),
    [anon_sym_frak] = ACTIONS(13),
    [anon_sym_monospace] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_frac] = ACTIONS(15),
    [anon_sym_root] = ACTIONS(15),
    [anon_sym_stackrel] = ACTIONS(15),
    [anon_sym_choose] = ACTIONS(15),
    [anon_sym_atop] = ACTIONS(15),
    [anon_sym_over] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_COLON] = ACTIONS(23),
    [anon_sym_LPAREN_COLON] = ACTIONS(23),
  },
  [25] = {
    [sym_number_symbol] = ACTIONS(76),
    [anon_sym_alpha] = ACTIONS(78),
    [anon_sym_beta] = ACTIONS(78),
    [anon_sym_gamma] = ACTIONS(78),
    [anon_sym_delta] = ACTIONS(78),
    [anon_sym_epsilon] = ACTIONS(78),
    [anon_sym_zeta] = ACTIONS(78),
    [anon_sym_eta] = ACTIONS(78),
    [anon_sym_theta] = ACTIONS(78),
    [anon_sym_iota] = ACTIONS(78),
    [anon_sym_kappa] = ACTIONS(78),
    [anon_sym_lambda] = ACTIONS(78),
    [anon_sym_mu] = ACTIONS(78),
    [anon_sym_nu] = ACTIONS(78),
    [anon_sym_xi] = ACTIONS(78),
    [anon_sym_omicron] = ACTIONS(78),
    [anon_sym_pi] = ACTIONS(78),
    [anon_sym_rho] = ACTIONS(78),
    [anon_sym_sigma] = ACTIONS(78),
    [anon_sym_tau] = ACTIONS(78),
    [anon_sym_upsilon] = ACTIONS(78),
    [anon_sym_phi] = ACTIONS(78),
    [anon_sym_chi] = ACTIONS(78),
    [anon_sym_psi] = ACTIONS(78),
    [anon_sym_omega] = ACTIONS(78),
    [anon_sym_Alpha] = ACTIONS(78),
    [anon_sym_Beta] = ACTIONS(78),
    [anon_sym_Gamma] = ACTIONS(78),
    [anon_sym_Delta] = ACTIONS(78),
    [anon_sym_Epsilon] = ACTIONS(78),
    [anon_sym_Zeta] = ACTIONS(78),
    [anon_sym_Eta] = ACTIONS(78),
    [anon_sym_Theta] = ACTIONS(78),
    [anon_sym_Iota] = ACTIONS(78),
    [anon_sym_Kappa] = ACTIONS(78),
    [anon_sym_Lambda] = ACTIONS(78),
    [anon_sym_Mu] = ACTIONS(78),
    [anon_sym_Nu] = ACTIONS(78),
    [anon_sym_Xi] = ACTIONS(78),
    [anon_sym_Omicron] = ACTIONS(78),
    [anon_sym_Pi] = ACTIONS(78),
    [anon_sym_Rho] = ACTIONS(78),
    [anon_sym_Sigma] = ACTIONS(78),
    [anon_sym_Tau] = ACTIONS(78),
    [anon_sym_Upsilon] = ACTIONS(78),
    [anon_sym_Phi] = ACTIONS(78),
    [anon_sym_Chi] = ACTIONS(78),
    [anon_sym_Psi] = ACTIONS(78),
    [anon_sym_Omega] = ACTIONS(78),
    [anon_sym_infty] = ACTIONS(78),
    [anon_sym_hbar] = ACTIONS(78),
    [anon_sym_ell] = ACTIONS(78),
    [anon_sym_Re] = ACTIONS(78),
    [anon_sym_Im] = ACTIONS(78),
    [anon_sym_aleph] = ACTIONS(78),
    [anon_sym_nabla] = ACTIONS(78),
    [anon_sym_partial] = ACTIONS(78),
    [anon_sym_forall] = ACTIONS(78),
    [anon_sym_exists] = ACTIONS(78),
    [anon_sym_emptyset] = ACTIONS(78),
    [anon_sym_grad] = ACTIONS(78),
    [anon_sym_del] = ACTIONS(78),
    [anon_sym_pm] = ACTIONS(78),
    [anon_sym_mp] = ACTIONS(78),
    [aux_sym_constant_symbol_token1] = ACTIONS(78),
    [aux_sym_constant_symbol_token2] = ACTIONS(76),
    [anon_sym_sqrt] = ACTIONS(78),
    [anon_sym_text] = ACTIONS(78),
    [anon_sym_bb] = ACTIONS(78),
    [anon_sym_cc] = ACTIONS(78),
    [anon_sym_tt] = ACTIONS(78),
    [anon_sym_fr] = ACTIONS(78),
    [anon_sym_sf] = ACTIONS(78),
    [anon_sym_bold] = ACTIONS(78),
    [anon_sym_cal] = ACTIONS(78),
    [anon_sym_frak] = ACTIONS(78),
    [anon_sym_monospace] = ACTIONS(78),
    [anon_sym_italic] = ACTIONS(78),
    [anon_sym_frac] = ACTIONS(78),
    [anon_sym_root] = ACTIONS(78),
    [anon_sym_stackrel] = ACTIONS(78),
    [anon_sym_choose] = ACTIONS(78),
    [anon_sym_atop] = ACTIONS(78),
    [anon_sym_over] = ACTIONS(78),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LBRACE_COLON] = ACTIONS(76),
    [anon_sym_LPAREN_COLON] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_COLON_RBRACE] = ACTIONS(80),
    [anon_sym_COLON_RPAREN] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
  },
  [26] = {
    [sym_number_symbol] = ACTIONS(82),
    [anon_sym_alpha] = ACTIONS(84),
    [anon_sym_beta] = ACTIONS(84),
    [anon_sym_gamma] = ACTIONS(84),
    [anon_sym_delta] = ACTIONS(84),
    [anon_sym_epsilon] = ACTIONS(84),
    [anon_sym_zeta] = ACTIONS(84),
    [anon_sym_eta] = ACTIONS(84),
    [anon_sym_theta] = ACTIONS(84),
    [anon_sym_iota] = ACTIONS(84),
    [anon_sym_kappa] = ACTIONS(84),
    [anon_sym_lambda] = ACTIONS(84),
    [anon_sym_mu] = ACTIONS(84),
    [anon_sym_nu] = ACTIONS(84),
    [anon_sym_xi] = ACTIONS(84),
    [anon_sym_omicron] = ACTIONS(84),
    [anon_sym_pi] = ACTIONS(84),
    [anon_sym_rho] = ACTIONS(84),
    [anon_sym_sigma] = ACTIONS(84),
    [anon_sym_tau] = ACTIONS(84),
    [anon_sym_upsilon] = ACTIONS(84),
    [anon_sym_phi] = ACTIONS(84),
    [anon_sym_chi] = ACTIONS(84),
    [anon_sym_psi] = ACTIONS(84),
    [anon_sym_omega] = ACTIONS(84),
    [anon_sym_Alpha] = ACTIONS(84),
    [anon_sym_Beta] = ACTIONS(84),
    [anon_sym_Gamma] = ACTIONS(84),
    [anon_sym_Delta] = ACTIONS(84),
    [anon_sym_Epsilon] = ACTIONS(84),
    [anon_sym_Zeta] = ACTIONS(84),
    [anon_sym_Eta] = ACTIONS(84),
    [anon_sym_Theta] = ACTIONS(84),
    [anon_sym_Iota] = ACTIONS(84),
    [anon_sym_Kappa] = ACTIONS(84),
    [anon_sym_Lambda] = ACTIONS(84),
    [anon_sym_Mu] = ACTIONS(84),
    [anon_sym_Nu] = ACTIONS(84),
    [anon_sym_Xi] = ACTIONS(84),
    [anon_sym_Omicron] = ACTIONS(84),
    [anon_sym_Pi] = ACTIONS(84),
    [anon_sym_Rho] = ACTIONS(84),
    [anon_sym_Sigma] = ACTIONS(84),
    [anon_sym_Tau] = ACTIONS(84),
    [anon_sym_Upsilon] = ACTIONS(84),
    [anon_sym_Phi] = ACTIONS(84),
    [anon_sym_Chi] = ACTIONS(84),
    [anon_sym_Psi] = ACTIONS(84),
    [anon_sym_Omega] = ACTIONS(84),
    [anon_sym_infty] = ACTIONS(84),
    [anon_sym_hbar] = ACTIONS(84),
    [anon_sym_ell] = ACTIONS(84),
    [anon_sym_Re] = ACTIONS(84),
    [anon_sym_Im] = ACTIONS(84),
    [anon_sym_aleph] = ACTIONS(84),
    [anon_sym_nabla] = ACTIONS(84),
    [anon_sym_partial] = ACTIONS(84),
    [anon_sym_forall] = ACTIONS(84),
    [anon_sym_exists] = ACTIONS(84),
    [anon_sym_emptyset] = ACTIONS(84),
    [anon_sym_grad] = ACTIONS(84),
    [anon_sym_del] = ACTIONS(84),
    [anon_sym_pm] = ACTIONS(84),
    [anon_sym_mp] = ACTIONS(84),
    [aux_sym_constant_symbol_token1] = ACTIONS(84),
    [aux_sym_constant_symbol_token2] = ACTIONS(82),
    [anon_sym_sqrt] = ACTIONS(84),
    [anon_sym_text] = ACTIONS(84),
    [anon_sym_bb] = ACTIONS(84),
    [anon_sym_cc] = ACTIONS(84),
    [anon_sym_tt] = ACTIONS(84),
    [anon_sym_fr] = ACTIONS(84),
    [anon_sym_sf] = ACTIONS(84),
    [anon_sym_bold] = ACTIONS(84),
    [anon_sym_cal] = ACTIONS(84),
    [anon_sym_frak] = ACTIONS(84),
    [anon_sym_monospace] = ACTIONS(84),
    [anon_sym_italic] = ACTIONS(84),
    [anon_sym_frac] = ACTIONS(84),
    [anon_sym_root] = ACTIONS(84),
    [anon_sym_stackrel] = ACTIONS(84),
    [anon_sym_choose] = ACTIONS(84),
    [anon_sym_atop] = ACTIONS(84),
    [anon_sym_over] = ACTIONS(84),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_LBRACE_COLON] = ACTIONS(82),
    [anon_sym_LPAREN_COLON] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_COLON_RBRACE] = ACTIONS(82),
    [anon_sym_COLON_RPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
  },
  [27] = {
    [sym_number_symbol] = ACTIONS(86),
    [anon_sym_alpha] = ACTIONS(88),
    [anon_sym_beta] = ACTIONS(88),
    [anon_sym_gamma] = ACTIONS(88),
    [anon_sym_delta] = ACTIONS(88),
    [anon_sym_epsilon] = ACTIONS(88),
    [anon_sym_zeta] = ACTIONS(88),
    [anon_sym_eta] = ACTIONS(88),
    [anon_sym_theta] = ACTIONS(88),
    [anon_sym_iota] = ACTIONS(88),
    [anon_sym_kappa] = ACTIONS(88),
    [anon_sym_lambda] = ACTIONS(88),
    [anon_sym_mu] = ACTIONS(88),
    [anon_sym_nu] = ACTIONS(88),
    [anon_sym_xi] = ACTIONS(88),
    [anon_sym_omicron] = ACTIONS(88),
    [anon_sym_pi] = ACTIONS(88),
    [anon_sym_rho] = ACTIONS(88),
    [anon_sym_sigma] = ACTIONS(88),
    [anon_sym_tau] = ACTIONS(88),
    [anon_sym_upsilon] = ACTIONS(88),
    [anon_sym_phi] = ACTIONS(88),
    [anon_sym_chi] = ACTIONS(88),
    [anon_sym_psi] = ACTIONS(88),
    [anon_sym_omega] = ACTIONS(88),
    [anon_sym_Alpha] = ACTIONS(88),
    [anon_sym_Beta] = ACTIONS(88),
    [anon_sym_Gamma] = ACTIONS(88),
    [anon_sym_Delta] = ACTIONS(88),
    [anon_sym_Epsilon] = ACTIONS(88),
    [anon_sym_Zeta] = ACTIONS(88),
    [anon_sym_Eta] = ACTIONS(88),
    [anon_sym_Theta] = ACTIONS(88),
    [anon_sym_Iota] = ACTIONS(88),
    [anon_sym_Kappa] = ACTIONS(88),
    [anon_sym_Lambda] = ACTIONS(88),
    [anon_sym_Mu] = ACTIONS(88),
    [anon_sym_Nu] = ACTIONS(88),
    [anon_sym_Xi] = ACTIONS(88),
    [anon_sym_Omicron] = ACTIONS(88),
    [anon_sym_Pi] = ACTIONS(88),
    [anon_sym_Rho] = ACTIONS(88),
    [anon_sym_Sigma] = ACTIONS(88),
    [anon_sym_Tau] = ACTIONS(88),
    [anon_sym_Upsilon] = ACTIONS(88),
    [anon_sym_Phi] = ACTIONS(88),
    [anon_sym_Chi] = ACTIONS(88),
    [anon_sym_Psi] = ACTIONS(88),
    [anon_sym_Omega] = ACTIONS(88),
    [anon_sym_infty] = ACTIONS(88),
    [anon_sym_hbar] = ACTIONS(88),
    [anon_sym_ell] = ACTIONS(88),
    [anon_sym_Re] = ACTIONS(88),
    [anon_sym_Im] = ACTIONS(88),
    [anon_sym_aleph] = ACTIONS(88),
    [anon_sym_nabla] = ACTIONS(88),
    [anon_sym_partial] = ACTIONS(88),
    [anon_sym_forall] = ACTIONS(88),
    [anon_sym_exists] = ACTIONS(88),
    [anon_sym_emptyset] = ACTIONS(88),
    [anon_sym_grad] = ACTIONS(88),
    [anon_sym_del] = ACTIONS(88),
    [anon_sym_pm] = ACTIONS(88),
    [anon_sym_mp] = ACTIONS(88),
    [aux_sym_constant_symbol_token1] = ACTIONS(88),
    [aux_sym_constant_symbol_token2] = ACTIONS(86),
    [anon_sym_sqrt] = ACTIONS(88),
    [anon_sym_text] = ACTIONS(88),
    [anon_sym_bb] = ACTIONS(88),
    [anon_sym_cc] = ACTIONS(88),
    [anon_sym_tt] = ACTIONS(88),
    [anon_sym_fr] = ACTIONS(88),
    [anon_sym_sf] = ACTIONS(88),
    [anon_sym_bold] = ACTIONS(88),
    [anon_sym_cal] = ACTIONS(88),
    [anon_sym_frak] = ACTIONS(88),
    [anon_sym_monospace] = ACTIONS(88),
    [anon_sym_italic] = ACTIONS(88),
    [anon_sym_frac] = ACTIONS(88),
    [anon_sym_root] = ACTIONS(88),
    [anon_sym_stackrel] = ACTIONS(88),
    [anon_sym_choose] = ACTIONS(88),
    [anon_sym_atop] = ACTIONS(88),
    [anon_sym_over] = ACTIONS(88),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_COLON] = ACTIONS(86),
    [anon_sym_LPAREN_COLON] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_COLON_RBRACE] = ACTIONS(86),
    [anon_sym_COLON_RPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym__] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
  },
  [28] = {
    [sym_number_symbol] = ACTIONS(90),
    [anon_sym_alpha] = ACTIONS(92),
    [anon_sym_beta] = ACTIONS(92),
    [anon_sym_gamma] = ACTIONS(92),
    [anon_sym_delta] = ACTIONS(92),
    [anon_sym_epsilon] = ACTIONS(92),
    [anon_sym_zeta] = ACTIONS(92),
    [anon_sym_eta] = ACTIONS(92),
    [anon_sym_theta] = ACTIONS(92),
    [anon_sym_iota] = ACTIONS(92),
    [anon_sym_kappa] = ACTIONS(92),
    [anon_sym_lambda] = ACTIONS(92),
    [anon_sym_mu] = ACTIONS(92),
    [anon_sym_nu] = ACTIONS(92),
    [anon_sym_xi] = ACTIONS(92),
    [anon_sym_omicron] = ACTIONS(92),
    [anon_sym_pi] = ACTIONS(92),
    [anon_sym_rho] = ACTIONS(92),
    [anon_sym_sigma] = ACTIONS(92),
    [anon_sym_tau] = ACTIONS(92),
    [anon_sym_upsilon] = ACTIONS(92),
    [anon_sym_phi] = ACTIONS(92),
    [anon_sym_chi] = ACTIONS(92),
    [anon_sym_psi] = ACTIONS(92),
    [anon_sym_omega] = ACTIONS(92),
    [anon_sym_Alpha] = ACTIONS(92),
    [anon_sym_Beta] = ACTIONS(92),
    [anon_sym_Gamma] = ACTIONS(92),
    [anon_sym_Delta] = ACTIONS(92),
    [anon_sym_Epsilon] = ACTIONS(92),
    [anon_sym_Zeta] = ACTIONS(92),
    [anon_sym_Eta] = ACTIONS(92),
    [anon_sym_Theta] = ACTIONS(92),
    [anon_sym_Iota] = ACTIONS(92),
    [anon_sym_Kappa] = ACTIONS(92),
    [anon_sym_Lambda] = ACTIONS(92),
    [anon_sym_Mu] = ACTIONS(92),
    [anon_sym_Nu] = ACTIONS(92),
    [anon_sym_Xi] = ACTIONS(92),
    [anon_sym_Omicron] = ACTIONS(92),
    [anon_sym_Pi] = ACTIONS(92),
    [anon_sym_Rho] = ACTIONS(92),
    [anon_sym_Sigma] = ACTIONS(92),
    [anon_sym_Tau] = ACTIONS(92),
    [anon_sym_Upsilon] = ACTIONS(92),
    [anon_sym_Phi] = ACTIONS(92),
    [anon_sym_Chi] = ACTIONS(92),
    [anon_sym_Psi] = ACTIONS(92),
    [anon_sym_Omega] = ACTIONS(92),
    [anon_sym_infty] = ACTIONS(92),
    [anon_sym_hbar] = ACTIONS(92),
    [anon_sym_ell] = ACTIONS(92),
    [anon_sym_Re] = ACTIONS(92),
    [anon_sym_Im] = ACTIONS(92),
    [anon_sym_aleph] = ACTIONS(92),
    [anon_sym_nabla] = ACTIONS(92),
    [anon_sym_partial] = ACTIONS(92),
    [anon_sym_forall] = ACTIONS(92),
    [anon_sym_exists] = ACTIONS(92),
    [anon_sym_emptyset] = ACTIONS(92),
    [anon_sym_grad] = ACTIONS(92),
    [anon_sym_del] = ACTIONS(92),
    [anon_sym_pm] = ACTIONS(92),
    [anon_sym_mp] = ACTIONS(92),
    [aux_sym_constant_symbol_token1] = ACTIONS(92),
    [aux_sym_constant_symbol_token2] = ACTIONS(90),
    [anon_sym_sqrt] = ACTIONS(92),
    [anon_sym_text] = ACTIONS(92),
    [anon_sym_bb] = ACTIONS(92),
    [anon_sym_cc] = ACTIONS(92),
    [anon_sym_tt] = ACTIONS(92),
    [anon_sym_fr] = ACTIONS(92),
    [anon_sym_sf] = ACTIONS(92),
    [anon_sym_bold] = ACTIONS(92),
    [anon_sym_cal] = ACTIONS(92),
    [anon_sym_frak] = ACTIONS(92),
    [anon_sym_monospace] = ACTIONS(92),
    [anon_sym_italic] = ACTIONS(92),
    [anon_sym_frac] = ACTIONS(92),
    [anon_sym_root] = ACTIONS(92),
    [anon_sym_stackrel] = ACTIONS(92),
    [anon_sym_choose] = ACTIONS(92),
    [anon_sym_atop] = ACTIONS(92),
    [anon_sym_over] = ACTIONS(92),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LBRACE_COLON] = ACTIONS(90),
    [anon_sym_LPAREN_COLON] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_COLON_RBRACE] = ACTIONS(90),
    [anon_sym_COLON_RPAREN] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
  },
  [29] = {
    [sym_number_symbol] = ACTIONS(76),
    [anon_sym_alpha] = ACTIONS(78),
    [anon_sym_beta] = ACTIONS(78),
    [anon_sym_gamma] = ACTIONS(78),
    [anon_sym_delta] = ACTIONS(78),
    [anon_sym_epsilon] = ACTIONS(78),
    [anon_sym_zeta] = ACTIONS(78),
    [anon_sym_eta] = ACTIONS(78),
    [anon_sym_theta] = ACTIONS(78),
    [anon_sym_iota] = ACTIONS(78),
    [anon_sym_kappa] = ACTIONS(78),
    [anon_sym_lambda] = ACTIONS(78),
    [anon_sym_mu] = ACTIONS(78),
    [anon_sym_nu] = ACTIONS(78),
    [anon_sym_xi] = ACTIONS(78),
    [anon_sym_omicron] = ACTIONS(78),
    [anon_sym_pi] = ACTIONS(78),
    [anon_sym_rho] = ACTIONS(78),
    [anon_sym_sigma] = ACTIONS(78),
    [anon_sym_tau] = ACTIONS(78),
    [anon_sym_upsilon] = ACTIONS(78),
    [anon_sym_phi] = ACTIONS(78),
    [anon_sym_chi] = ACTIONS(78),
    [anon_sym_psi] = ACTIONS(78),
    [anon_sym_omega] = ACTIONS(78),
    [anon_sym_Alpha] = ACTIONS(78),
    [anon_sym_Beta] = ACTIONS(78),
    [anon_sym_Gamma] = ACTIONS(78),
    [anon_sym_Delta] = ACTIONS(78),
    [anon_sym_Epsilon] = ACTIONS(78),
    [anon_sym_Zeta] = ACTIONS(78),
    [anon_sym_Eta] = ACTIONS(78),
    [anon_sym_Theta] = ACTIONS(78),
    [anon_sym_Iota] = ACTIONS(78),
    [anon_sym_Kappa] = ACTIONS(78),
    [anon_sym_Lambda] = ACTIONS(78),
    [anon_sym_Mu] = ACTIONS(78),
    [anon_sym_Nu] = ACTIONS(78),
    [anon_sym_Xi] = ACTIONS(78),
    [anon_sym_Omicron] = ACTIONS(78),
    [anon_sym_Pi] = ACTIONS(78),
    [anon_sym_Rho] = ACTIONS(78),
    [anon_sym_Sigma] = ACTIONS(78),
    [anon_sym_Tau] = ACTIONS(78),
    [anon_sym_Upsilon] = ACTIONS(78),
    [anon_sym_Phi] = ACTIONS(78),
    [anon_sym_Chi] = ACTIONS(78),
    [anon_sym_Psi] = ACTIONS(78),
    [anon_sym_Omega] = ACTIONS(78),
    [anon_sym_infty] = ACTIONS(78),
    [anon_sym_hbar] = ACTIONS(78),
    [anon_sym_ell] = ACTIONS(78),
    [anon_sym_Re] = ACTIONS(78),
    [anon_sym_Im] = ACTIONS(78),
    [anon_sym_aleph] = ACTIONS(78),
    [anon_sym_nabla] = ACTIONS(78),
    [anon_sym_partial] = ACTIONS(78),
    [anon_sym_forall] = ACTIONS(78),
    [anon_sym_exists] = ACTIONS(78),
    [anon_sym_emptyset] = ACTIONS(78),
    [anon_sym_grad] = ACTIONS(78),
    [anon_sym_del] = ACTIONS(78),
    [anon_sym_pm] = ACTIONS(78),
    [anon_sym_mp] = ACTIONS(78),
    [aux_sym_constant_symbol_token1] = ACTIONS(78),
    [aux_sym_constant_symbol_token2] = ACTIONS(76),
    [anon_sym_sqrt] = ACTIONS(78),
    [anon_sym_text] = ACTIONS(78),
    [anon_sym_bb] = ACTIONS(78),
    [anon_sym_cc] = ACTIONS(78),
    [anon_sym_tt] = ACTIONS(78),
    [anon_sym_fr] = ACTIONS(78),
    [anon_sym_sf] = ACTIONS(78),
    [anon_sym_bold] = ACTIONS(78),
    [anon_sym_cal] = ACTIONS(78),
    [anon_sym_frak] = ACTIONS(78),
    [anon_sym_monospace] = ACTIONS(78),
    [anon_sym_italic] = ACTIONS(78),
    [anon_sym_frac] = ACTIONS(78),
    [anon_sym_root] = ACTIONS(78),
    [anon_sym_stackrel] = ACTIONS(78),
    [anon_sym_choose] = ACTIONS(78),
    [anon_sym_atop] = ACTIONS(78),
    [anon_sym_over] = ACTIONS(78),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LBRACE_COLON] = ACTIONS(76),
    [anon_sym_LPAREN_COLON] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_COLON_RBRACE] = ACTIONS(76),
    [anon_sym_COLON_RPAREN] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
  },
  [30] = {
    [sym_number_symbol] = ACTIONS(94),
    [anon_sym_alpha] = ACTIONS(96),
    [anon_sym_beta] = ACTIONS(96),
    [anon_sym_gamma] = ACTIONS(96),
    [anon_sym_delta] = ACTIONS(96),
    [anon_sym_epsilon] = ACTIONS(96),
    [anon_sym_zeta] = ACTIONS(96),
    [anon_sym_eta] = ACTIONS(96),
    [anon_sym_theta] = ACTIONS(96),
    [anon_sym_iota] = ACTIONS(96),
    [anon_sym_kappa] = ACTIONS(96),
    [anon_sym_lambda] = ACTIONS(96),
    [anon_sym_mu] = ACTIONS(96),
    [anon_sym_nu] = ACTIONS(96),
    [anon_sym_xi] = ACTIONS(96),
    [anon_sym_omicron] = ACTIONS(96),
    [anon_sym_pi] = ACTIONS(96),
    [anon_sym_rho] = ACTIONS(96),
    [anon_sym_sigma] = ACTIONS(96),
    [anon_sym_tau] = ACTIONS(96),
    [anon_sym_upsilon] = ACTIONS(96),
    [anon_sym_phi] = ACTIONS(96),
    [anon_sym_chi] = ACTIONS(96),
    [anon_sym_psi] = ACTIONS(96),
    [anon_sym_omega] = ACTIONS(96),
    [anon_sym_Alpha] = ACTIONS(96),
    [anon_sym_Beta] = ACTIONS(96),
    [anon_sym_Gamma] = ACTIONS(96),
    [anon_sym_Delta] = ACTIONS(96),
    [anon_sym_Epsilon] = ACTIONS(96),
    [anon_sym_Zeta] = ACTIONS(96),
    [anon_sym_Eta] = ACTIONS(96),
    [anon_sym_Theta] = ACTIONS(96),
    [anon_sym_Iota] = ACTIONS(96),
    [anon_sym_Kappa] = ACTIONS(96),
    [anon_sym_Lambda] = ACTIONS(96),
    [anon_sym_Mu] = ACTIONS(96),
    [anon_sym_Nu] = ACTIONS(96),
    [anon_sym_Xi] = ACTIONS(96),
    [anon_sym_Omicron] = ACTIONS(96),
    [anon_sym_Pi] = ACTIONS(96),
    [anon_sym_Rho] = ACTIONS(96),
    [anon_sym_Sigma] = ACTIONS(96),
    [anon_sym_Tau] = ACTIONS(96),
    [anon_sym_Upsilon] = ACTIONS(96),
    [anon_sym_Phi] = ACTIONS(96),
    [anon_sym_Chi] = ACTIONS(96),
    [anon_sym_Psi] = ACTIONS(96),
    [anon_sym_Omega] = ACTIONS(96),
    [anon_sym_infty] = ACTIONS(96),
    [anon_sym_hbar] = ACTIONS(96),
    [anon_sym_ell] = ACTIONS(96),
    [anon_sym_Re] = ACTIONS(96),
    [anon_sym_Im] = ACTIONS(96),
    [anon_sym_aleph] = ACTIONS(96),
    [anon_sym_nabla] = ACTIONS(96),
    [anon_sym_partial] = ACTIONS(96),
    [anon_sym_forall] = ACTIONS(96),
    [anon_sym_exists] = ACTIONS(96),
    [anon_sym_emptyset] = ACTIONS(96),
    [anon_sym_grad] = ACTIONS(96),
    [anon_sym_del] = ACTIONS(96),
    [anon_sym_pm] = ACTIONS(96),
    [anon_sym_mp] = ACTIONS(96),
    [aux_sym_constant_symbol_token1] = ACTIONS(96),
    [aux_sym_constant_symbol_token2] = ACTIONS(94),
    [anon_sym_sqrt] = ACTIONS(96),
    [anon_sym_text] = ACTIONS(96),
    [anon_sym_bb] = ACTIONS(96),
    [anon_sym_cc] = ACTIONS(96),
    [anon_sym_tt] = ACTIONS(96),
    [anon_sym_fr] = ACTIONS(96),
    [anon_sym_sf] = ACTIONS(96),
    [anon_sym_bold] = ACTIONS(96),
    [anon_sym_cal] = ACTIONS(96),
    [anon_sym_frak] = ACTIONS(96),
    [anon_sym_monospace] = ACTIONS(96),
    [anon_sym_italic] = ACTIONS(96),
    [anon_sym_frac] = ACTIONS(96),
    [anon_sym_root] = ACTIONS(96),
    [anon_sym_stackrel] = ACTIONS(96),
    [anon_sym_choose] = ACTIONS(96),
    [anon_sym_atop] = ACTIONS(96),
    [anon_sym_over] = ACTIONS(96),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_COLON] = ACTIONS(94),
    [anon_sym_LPAREN_COLON] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_COLON_RBRACE] = ACTIONS(94),
    [anon_sym_COLON_RPAREN] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
  },
  [31] = {
    [sym_number_symbol] = ACTIONS(98),
    [anon_sym_alpha] = ACTIONS(100),
    [anon_sym_beta] = ACTIONS(100),
    [anon_sym_gamma] = ACTIONS(100),
    [anon_sym_delta] = ACTIONS(100),
    [anon_sym_epsilon] = ACTIONS(100),
    [anon_sym_zeta] = ACTIONS(100),
    [anon_sym_eta] = ACTIONS(100),
    [anon_sym_theta] = ACTIONS(100),
    [anon_sym_iota] = ACTIONS(100),
    [anon_sym_kappa] = ACTIONS(100),
    [anon_sym_lambda] = ACTIONS(100),
    [anon_sym_mu] = ACTIONS(100),
    [anon_sym_nu] = ACTIONS(100),
    [anon_sym_xi] = ACTIONS(100),
    [anon_sym_omicron] = ACTIONS(100),
    [anon_sym_pi] = ACTIONS(100),
    [anon_sym_rho] = ACTIONS(100),
    [anon_sym_sigma] = ACTIONS(100),
    [anon_sym_tau] = ACTIONS(100),
    [anon_sym_upsilon] = ACTIONS(100),
    [anon_sym_phi] = ACTIONS(100),
    [anon_sym_chi] = ACTIONS(100),
    [anon_sym_psi] = ACTIONS(100),
    [anon_sym_omega] = ACTIONS(100),
    [anon_sym_Alpha] = ACTIONS(100),
    [anon_sym_Beta] = ACTIONS(100),
    [anon_sym_Gamma] = ACTIONS(100),
    [anon_sym_Delta] = ACTIONS(100),
    [anon_sym_Epsilon] = ACTIONS(100),
    [anon_sym_Zeta] = ACTIONS(100),
    [anon_sym_Eta] = ACTIONS(100),
    [anon_sym_Theta] = ACTIONS(100),
    [anon_sym_Iota] = ACTIONS(100),
    [anon_sym_Kappa] = ACTIONS(100),
    [anon_sym_Lambda] = ACTIONS(100),
    [anon_sym_Mu] = ACTIONS(100),
    [anon_sym_Nu] = ACTIONS(100),
    [anon_sym_Xi] = ACTIONS(100),
    [anon_sym_Omicron] = ACTIONS(100),
    [anon_sym_Pi] = ACTIONS(100),
    [anon_sym_Rho] = ACTIONS(100),
    [anon_sym_Sigma] = ACTIONS(100),
    [anon_sym_Tau] = ACTIONS(100),
    [anon_sym_Upsilon] = ACTIONS(100),
    [anon_sym_Phi] = ACTIONS(100),
    [anon_sym_Chi] = ACTIONS(100),
    [anon_sym_Psi] = ACTIONS(100),
    [anon_sym_Omega] = ACTIONS(100),
    [anon_sym_infty] = ACTIONS(100),
    [anon_sym_hbar] = ACTIONS(100),
    [anon_sym_ell] = ACTIONS(100),
    [anon_sym_Re] = ACTIONS(100),
    [anon_sym_Im] = ACTIONS(100),
    [anon_sym_aleph] = ACTIONS(100),
    [anon_sym_nabla] = ACTIONS(100),
    [anon_sym_partial] = ACTIONS(100),
    [anon_sym_forall] = ACTIONS(100),
    [anon_sym_exists] = ACTIONS(100),
    [anon_sym_emptyset] = ACTIONS(100),
    [anon_sym_grad] = ACTIONS(100),
    [anon_sym_del] = ACTIONS(100),
    [anon_sym_pm] = ACTIONS(100),
    [anon_sym_mp] = ACTIONS(100),
    [aux_sym_constant_symbol_token1] = ACTIONS(100),
    [aux_sym_constant_symbol_token2] = ACTIONS(98),
    [anon_sym_sqrt] = ACTIONS(100),
    [anon_sym_text] = ACTIONS(100),
    [anon_sym_bb] = ACTIONS(100),
    [anon_sym_cc] = ACTIONS(100),
    [anon_sym_tt] = ACTIONS(100),
    [anon_sym_fr] = ACTIONS(100),
    [anon_sym_sf] = ACTIONS(100),
    [anon_sym_bold] = ACTIONS(100),
    [anon_sym_cal] = ACTIONS(100),
    [anon_sym_frak] = ACTIONS(100),
    [anon_sym_monospace] = ACTIONS(100),
    [anon_sym_italic] = ACTIONS(100),
    [anon_sym_frac] = ACTIONS(100),
    [anon_sym_root] = ACTIONS(100),
    [anon_sym_stackrel] = ACTIONS(100),
    [anon_sym_choose] = ACTIONS(100),
    [anon_sym_atop] = ACTIONS(100),
    [anon_sym_over] = ACTIONS(100),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_LBRACE_COLON] = ACTIONS(98),
    [anon_sym_LPAREN_COLON] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_COLON_RBRACE] = ACTIONS(98),
    [anon_sym_COLON_RPAREN] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
  },
  [32] = {
    [sym_number_symbol] = ACTIONS(102),
    [anon_sym_alpha] = ACTIONS(104),
    [anon_sym_beta] = ACTIONS(104),
    [anon_sym_gamma] = ACTIONS(104),
    [anon_sym_delta] = ACTIONS(104),
    [anon_sym_epsilon] = ACTIONS(104),
    [anon_sym_zeta] = ACTIONS(104),
    [anon_sym_eta] = ACTIONS(104),
    [anon_sym_theta] = ACTIONS(104),
    [anon_sym_iota] = ACTIONS(104),
    [anon_sym_kappa] = ACTIONS(104),
    [anon_sym_lambda] = ACTIONS(104),
    [anon_sym_mu] = ACTIONS(104),
    [anon_sym_nu] = ACTIONS(104),
    [anon_sym_xi] = ACTIONS(104),
    [anon_sym_omicron] = ACTIONS(104),
    [anon_sym_pi] = ACTIONS(104),
    [anon_sym_rho] = ACTIONS(104),
    [anon_sym_sigma] = ACTIONS(104),
    [anon_sym_tau] = ACTIONS(104),
    [anon_sym_upsilon] = ACTIONS(104),
    [anon_sym_phi] = ACTIONS(104),
    [anon_sym_chi] = ACTIONS(104),
    [anon_sym_psi] = ACTIONS(104),
    [anon_sym_omega] = ACTIONS(104),
    [anon_sym_Alpha] = ACTIONS(104),
    [anon_sym_Beta] = ACTIONS(104),
    [anon_sym_Gamma] = ACTIONS(104),
    [anon_sym_Delta] = ACTIONS(104),
    [anon_sym_Epsilon] = ACTIONS(104),
    [anon_sym_Zeta] = ACTIONS(104),
    [anon_sym_Eta] = ACTIONS(104),
    [anon_sym_Theta] = ACTIONS(104),
    [anon_sym_Iota] = ACTIONS(104),
    [anon_sym_Kappa] = ACTIONS(104),
    [anon_sym_Lambda] = ACTIONS(104),
    [anon_sym_Mu] = ACTIONS(104),
    [anon_sym_Nu] = ACTIONS(104),
    [anon_sym_Xi] = ACTIONS(104),
    [anon_sym_Omicron] = ACTIONS(104),
    [anon_sym_Pi] = ACTIONS(104),
    [anon_sym_Rho] = ACTIONS(104),
    [anon_sym_Sigma] = ACTIONS(104),
    [anon_sym_Tau] = ACTIONS(104),
    [anon_sym_Upsilon] = ACTIONS(104),
    [anon_sym_Phi] = ACTIONS(104),
    [anon_sym_Chi] = ACTIONS(104),
    [anon_sym_Psi] = ACTIONS(104),
    [anon_sym_Omega] = ACTIONS(104),
    [anon_sym_infty] = ACTIONS(104),
    [anon_sym_hbar] = ACTIONS(104),
    [anon_sym_ell] = ACTIONS(104),
    [anon_sym_Re] = ACTIONS(104),
    [anon_sym_Im] = ACTIONS(104),
    [anon_sym_aleph] = ACTIONS(104),
    [anon_sym_nabla] = ACTIONS(104),
    [anon_sym_partial] = ACTIONS(104),
    [anon_sym_forall] = ACTIONS(104),
    [anon_sym_exists] = ACTIONS(104),
    [anon_sym_emptyset] = ACTIONS(104),
    [anon_sym_grad] = ACTIONS(104),
    [anon_sym_del] = ACTIONS(104),
    [anon_sym_pm] = ACTIONS(104),
    [anon_sym_mp] = ACTIONS(104),
    [aux_sym_constant_symbol_token1] = ACTIONS(104),
    [aux_sym_constant_symbol_token2] = ACTIONS(102),
    [anon_sym_sqrt] = ACTIONS(104),
    [anon_sym_text] = ACTIONS(104),
    [anon_sym_bb] = ACTIONS(104),
    [anon_sym_cc] = ACTIONS(104),
    [anon_sym_tt] = ACTIONS(104),
    [anon_sym_fr] = ACTIONS(104),
    [anon_sym_sf] = ACTIONS(104),
    [anon_sym_bold] = ACTIONS(104),
    [anon_sym_cal] = ACTIONS(104),
    [anon_sym_frak] = ACTIONS(104),
    [anon_sym_monospace] = ACTIONS(104),
    [anon_sym_italic] = ACTIONS(104),
    [anon_sym_frac] = ACTIONS(104),
    [anon_sym_root] = ACTIONS(104),
    [anon_sym_stackrel] = ACTIONS(104),
    [anon_sym_choose] = ACTIONS(104),
    [anon_sym_atop] = ACTIONS(104),
    [anon_sym_over] = ACTIONS(104),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_LBRACE_COLON] = ACTIONS(102),
    [anon_sym_LPAREN_COLON] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_COLON_RBRACE] = ACTIONS(102),
    [anon_sym_COLON_RPAREN] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
  },
  [33] = {
    [sym_number_symbol] = ACTIONS(106),
    [anon_sym_alpha] = ACTIONS(108),
    [anon_sym_beta] = ACTIONS(108),
    [anon_sym_gamma] = ACTIONS(108),
    [anon_sym_delta] = ACTIONS(108),
    [anon_sym_epsilon] = ACTIONS(108),
    [anon_sym_zeta] = ACTIONS(108),
    [anon_sym_eta] = ACTIONS(108),
    [anon_sym_theta] = ACTIONS(108),
    [anon_sym_iota] = ACTIONS(108),
    [anon_sym_kappa] = ACTIONS(108),
    [anon_sym_lambda] = ACTIONS(108),
    [anon_sym_mu] = ACTIONS(108),
    [anon_sym_nu] = ACTIONS(108),
    [anon_sym_xi] = ACTIONS(108),
    [anon_sym_omicron] = ACTIONS(108),
    [anon_sym_pi] = ACTIONS(108),
    [anon_sym_rho] = ACTIONS(108),
    [anon_sym_sigma] = ACTIONS(108),
    [anon_sym_tau] = ACTIONS(108),
    [anon_sym_upsilon] = ACTIONS(108),
    [anon_sym_phi] = ACTIONS(108),
    [anon_sym_chi] = ACTIONS(108),
    [anon_sym_psi] = ACTIONS(108),
    [anon_sym_omega] = ACTIONS(108),
    [anon_sym_Alpha] = ACTIONS(108),
    [anon_sym_Beta] = ACTIONS(108),
    [anon_sym_Gamma] = ACTIONS(108),
    [anon_sym_Delta] = ACTIONS(108),
    [anon_sym_Epsilon] = ACTIONS(108),
    [anon_sym_Zeta] = ACTIONS(108),
    [anon_sym_Eta] = ACTIONS(108),
    [anon_sym_Theta] = ACTIONS(108),
    [anon_sym_Iota] = ACTIONS(108),
    [anon_sym_Kappa] = ACTIONS(108),
    [anon_sym_Lambda] = ACTIONS(108),
    [anon_sym_Mu] = ACTIONS(108),
    [anon_sym_Nu] = ACTIONS(108),
    [anon_sym_Xi] = ACTIONS(108),
    [anon_sym_Omicron] = ACTIONS(108),
    [anon_sym_Pi] = ACTIONS(108),
    [anon_sym_Rho] = ACTIONS(108),
    [anon_sym_Sigma] = ACTIONS(108),
    [anon_sym_Tau] = ACTIONS(108),
    [anon_sym_Upsilon] = ACTIONS(108),
    [anon_sym_Phi] = ACTIONS(108),
    [anon_sym_Chi] = ACTIONS(108),
    [anon_sym_Psi] = ACTIONS(108),
    [anon_sym_Omega] = ACTIONS(108),
    [anon_sym_infty] = ACTIONS(108),
    [anon_sym_hbar] = ACTIONS(108),
    [anon_sym_ell] = ACTIONS(108),
    [anon_sym_Re] = ACTIONS(108),
    [anon_sym_Im] = ACTIONS(108),
    [anon_sym_aleph] = ACTIONS(108),
    [anon_sym_nabla] = ACTIONS(108),
    [anon_sym_partial] = ACTIONS(108),
    [anon_sym_forall] = ACTIONS(108),
    [anon_sym_exists] = ACTIONS(108),
    [anon_sym_emptyset] = ACTIONS(108),
    [anon_sym_grad] = ACTIONS(108),
    [anon_sym_del] = ACTIONS(108),
    [anon_sym_pm] = ACTIONS(108),
    [anon_sym_mp] = ACTIONS(108),
    [aux_sym_constant_symbol_token1] = ACTIONS(108),
    [aux_sym_constant_symbol_token2] = ACTIONS(106),
    [anon_sym_sqrt] = ACTIONS(108),
    [anon_sym_text] = ACTIONS(108),
    [anon_sym_bb] = ACTIONS(108),
    [anon_sym_cc] = ACTIONS(108),
    [anon_sym_tt] = ACTIONS(108),
    [anon_sym_fr] = ACTIONS(108),
    [anon_sym_sf] = ACTIONS(108),
    [anon_sym_bold] = ACTIONS(108),
    [anon_sym_cal] = ACTIONS(108),
    [anon_sym_frak] = ACTIONS(108),
    [anon_sym_monospace] = ACTIONS(108),
    [anon_sym_italic] = ACTIONS(108),
    [anon_sym_frac] = ACTIONS(108),
    [anon_sym_root] = ACTIONS(108),
    [anon_sym_stackrel] = ACTIONS(108),
    [anon_sym_choose] = ACTIONS(108),
    [anon_sym_atop] = ACTIONS(108),
    [anon_sym_over] = ACTIONS(108),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_LBRACE_COLON] = ACTIONS(106),
    [anon_sym_LPAREN_COLON] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_COLON_RBRACE] = ACTIONS(106),
    [anon_sym_COLON_RPAREN] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
  },
  [34] = {
    [sym_number_symbol] = ACTIONS(110),
    [anon_sym_alpha] = ACTIONS(112),
    [anon_sym_beta] = ACTIONS(112),
    [anon_sym_gamma] = ACTIONS(112),
    [anon_sym_delta] = ACTIONS(112),
    [anon_sym_epsilon] = ACTIONS(112),
    [anon_sym_zeta] = ACTIONS(112),
    [anon_sym_eta] = ACTIONS(112),
    [anon_sym_theta] = ACTIONS(112),
    [anon_sym_iota] = ACTIONS(112),
    [anon_sym_kappa] = ACTIONS(112),
    [anon_sym_lambda] = ACTIONS(112),
    [anon_sym_mu] = ACTIONS(112),
    [anon_sym_nu] = ACTIONS(112),
    [anon_sym_xi] = ACTIONS(112),
    [anon_sym_omicron] = ACTIONS(112),
    [anon_sym_pi] = ACTIONS(112),
    [anon_sym_rho] = ACTIONS(112),
    [anon_sym_sigma] = ACTIONS(112),
    [anon_sym_tau] = ACTIONS(112),
    [anon_sym_upsilon] = ACTIONS(112),
    [anon_sym_phi] = ACTIONS(112),
    [anon_sym_chi] = ACTIONS(112),
    [anon_sym_psi] = ACTIONS(112),
    [anon_sym_omega] = ACTIONS(112),
    [anon_sym_Alpha] = ACTIONS(112),
    [anon_sym_Beta] = ACTIONS(112),
    [anon_sym_Gamma] = ACTIONS(112),
    [anon_sym_Delta] = ACTIONS(112),
    [anon_sym_Epsilon] = ACTIONS(112),
    [anon_sym_Zeta] = ACTIONS(112),
    [anon_sym_Eta] = ACTIONS(112),
    [anon_sym_Theta] = ACTIONS(112),
    [anon_sym_Iota] = ACTIONS(112),
    [anon_sym_Kappa] = ACTIONS(112),
    [anon_sym_Lambda] = ACTIONS(112),
    [anon_sym_Mu] = ACTIONS(112),
    [anon_sym_Nu] = ACTIONS(112),
    [anon_sym_Xi] = ACTIONS(112),
    [anon_sym_Omicron] = ACTIONS(112),
    [anon_sym_Pi] = ACTIONS(112),
    [anon_sym_Rho] = ACTIONS(112),
    [anon_sym_Sigma] = ACTIONS(112),
    [anon_sym_Tau] = ACTIONS(112),
    [anon_sym_Upsilon] = ACTIONS(112),
    [anon_sym_Phi] = ACTIONS(112),
    [anon_sym_Chi] = ACTIONS(112),
    [anon_sym_Psi] = ACTIONS(112),
    [anon_sym_Omega] = ACTIONS(112),
    [anon_sym_infty] = ACTIONS(112),
    [anon_sym_hbar] = ACTIONS(112),
    [anon_sym_ell] = ACTIONS(112),
    [anon_sym_Re] = ACTIONS(112),
    [anon_sym_Im] = ACTIONS(112),
    [anon_sym_aleph] = ACTIONS(112),
    [anon_sym_nabla] = ACTIONS(112),
    [anon_sym_partial] = ACTIONS(112),
    [anon_sym_forall] = ACTIONS(112),
    [anon_sym_exists] = ACTIONS(112),
    [anon_sym_emptyset] = ACTIONS(112),
    [anon_sym_grad] = ACTIONS(112),
    [anon_sym_del] = ACTIONS(112),
    [anon_sym_pm] = ACTIONS(112),
    [anon_sym_mp] = ACTIONS(112),
    [aux_sym_constant_symbol_token1] = ACTIONS(112),
    [aux_sym_constant_symbol_token2] = ACTIONS(110),
    [anon_sym_sqrt] = ACTIONS(112),
    [anon_sym_text] = ACTIONS(112),
    [anon_sym_bb] = ACTIONS(112),
    [anon_sym_cc] = ACTIONS(112),
    [anon_sym_tt] = ACTIONS(112),
    [anon_sym_fr] = ACTIONS(112),
    [anon_sym_sf] = ACTIONS(112),
    [anon_sym_bold] = ACTIONS(112),
    [anon_sym_cal] = ACTIONS(112),
    [anon_sym_frak] = ACTIONS(112),
    [anon_sym_monospace] = ACTIONS(112),
    [anon_sym_italic] = ACTIONS(112),
    [anon_sym_frac] = ACTIONS(112),
    [anon_sym_root] = ACTIONS(112),
    [anon_sym_stackrel] = ACTIONS(112),
    [anon_sym_choose] = ACTIONS(112),
    [anon_sym_atop] = ACTIONS(112),
    [anon_sym_over] = ACTIONS(112),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LBRACE_COLON] = ACTIONS(110),
    [anon_sym_LPAREN_COLON] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_COLON_RBRACE] = ACTIONS(110),
    [anon_sym_COLON_RPAREN] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(116),
  },
  [35] = {
    [sym_number_symbol] = ACTIONS(118),
    [anon_sym_alpha] = ACTIONS(120),
    [anon_sym_beta] = ACTIONS(120),
    [anon_sym_gamma] = ACTIONS(120),
    [anon_sym_delta] = ACTIONS(120),
    [anon_sym_epsilon] = ACTIONS(120),
    [anon_sym_zeta] = ACTIONS(120),
    [anon_sym_eta] = ACTIONS(120),
    [anon_sym_theta] = ACTIONS(120),
    [anon_sym_iota] = ACTIONS(120),
    [anon_sym_kappa] = ACTIONS(120),
    [anon_sym_lambda] = ACTIONS(120),
    [anon_sym_mu] = ACTIONS(120),
    [anon_sym_nu] = ACTIONS(120),
    [anon_sym_xi] = ACTIONS(120),
    [anon_sym_omicron] = ACTIONS(120),
    [anon_sym_pi] = ACTIONS(120),
    [anon_sym_rho] = ACTIONS(120),
    [anon_sym_sigma] = ACTIONS(120),
    [anon_sym_tau] = ACTIONS(120),
    [anon_sym_upsilon] = ACTIONS(120),
    [anon_sym_phi] = ACTIONS(120),
    [anon_sym_chi] = ACTIONS(120),
    [anon_sym_psi] = ACTIONS(120),
    [anon_sym_omega] = ACTIONS(120),
    [anon_sym_Alpha] = ACTIONS(120),
    [anon_sym_Beta] = ACTIONS(120),
    [anon_sym_Gamma] = ACTIONS(120),
    [anon_sym_Delta] = ACTIONS(120),
    [anon_sym_Epsilon] = ACTIONS(120),
    [anon_sym_Zeta] = ACTIONS(120),
    [anon_sym_Eta] = ACTIONS(120),
    [anon_sym_Theta] = ACTIONS(120),
    [anon_sym_Iota] = ACTIONS(120),
    [anon_sym_Kappa] = ACTIONS(120),
    [anon_sym_Lambda] = ACTIONS(120),
    [anon_sym_Mu] = ACTIONS(120),
    [anon_sym_Nu] = ACTIONS(120),
    [anon_sym_Xi] = ACTIONS(120),
    [anon_sym_Omicron] = ACTIONS(120),
    [anon_sym_Pi] = ACTIONS(120),
    [anon_sym_Rho] = ACTIONS(120),
    [anon_sym_Sigma] = ACTIONS(120),
    [anon_sym_Tau] = ACTIONS(120),
    [anon_sym_Upsilon] = ACTIONS(120),
    [anon_sym_Phi] = ACTIONS(120),
    [anon_sym_Chi] = ACTIONS(120),
    [anon_sym_Psi] = ACTIONS(120),
    [anon_sym_Omega] = ACTIONS(120),
    [anon_sym_infty] = ACTIONS(120),
    [anon_sym_hbar] = ACTIONS(120),
    [anon_sym_ell] = ACTIONS(120),
    [anon_sym_Re] = ACTIONS(120),
    [anon_sym_Im] = ACTIONS(120),
    [anon_sym_aleph] = ACTIONS(120),
    [anon_sym_nabla] = ACTIONS(120),
    [anon_sym_partial] = ACTIONS(120),
    [anon_sym_forall] = ACTIONS(120),
    [anon_sym_exists] = ACTIONS(120),
    [anon_sym_emptyset] = ACTIONS(120),
    [anon_sym_grad] = ACTIONS(120),
    [anon_sym_del] = ACTIONS(120),
    [anon_sym_pm] = ACTIONS(120),
    [anon_sym_mp] = ACTIONS(120),
    [aux_sym_constant_symbol_token1] = ACTIONS(120),
    [aux_sym_constant_symbol_token2] = ACTIONS(118),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_text] = ACTIONS(120),
    [anon_sym_bb] = ACTIONS(120),
    [anon_sym_cc] = ACTIONS(120),
    [anon_sym_tt] = ACTIONS(120),
    [anon_sym_fr] = ACTIONS(120),
    [anon_sym_sf] = ACTIONS(120),
    [anon_sym_bold] = ACTIONS(120),
    [anon_sym_cal] = ACTIONS(120),
    [anon_sym_frak] = ACTIONS(120),
    [anon_sym_monospace] = ACTIONS(120),
    [anon_sym_italic] = ACTIONS(120),
    [anon_sym_frac] = ACTIONS(120),
    [anon_sym_root] = ACTIONS(120),
    [anon_sym_stackrel] = ACTIONS(120),
    [anon_sym_choose] = ACTIONS(120),
    [anon_sym_atop] = ACTIONS(120),
    [anon_sym_over] = ACTIONS(120),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_LBRACE_COLON] = ACTIONS(118),
    [anon_sym_LPAREN_COLON] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_COLON_RBRACE] = ACTIONS(118),
    [anon_sym_COLON_RPAREN] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(118),
  },
  [36] = {
    [sym_number_symbol] = ACTIONS(122),
    [anon_sym_alpha] = ACTIONS(124),
    [anon_sym_beta] = ACTIONS(124),
    [anon_sym_gamma] = ACTIONS(124),
    [anon_sym_delta] = ACTIONS(124),
    [anon_sym_epsilon] = ACTIONS(124),
    [anon_sym_zeta] = ACTIONS(124),
    [anon_sym_eta] = ACTIONS(124),
    [anon_sym_theta] = ACTIONS(124),
    [anon_sym_iota] = ACTIONS(124),
    [anon_sym_kappa] = ACTIONS(124),
    [anon_sym_lambda] = ACTIONS(124),
    [anon_sym_mu] = ACTIONS(124),
    [anon_sym_nu] = ACTIONS(124),
    [anon_sym_xi] = ACTIONS(124),
    [anon_sym_omicron] = ACTIONS(124),
    [anon_sym_pi] = ACTIONS(124),
    [anon_sym_rho] = ACTIONS(124),
    [anon_sym_sigma] = ACTIONS(124),
    [anon_sym_tau] = ACTIONS(124),
    [anon_sym_upsilon] = ACTIONS(124),
    [anon_sym_phi] = ACTIONS(124),
    [anon_sym_chi] = ACTIONS(124),
    [anon_sym_psi] = ACTIONS(124),
    [anon_sym_omega] = ACTIONS(124),
    [anon_sym_Alpha] = ACTIONS(124),
    [anon_sym_Beta] = ACTIONS(124),
    [anon_sym_Gamma] = ACTIONS(124),
    [anon_sym_Delta] = ACTIONS(124),
    [anon_sym_Epsilon] = ACTIONS(124),
    [anon_sym_Zeta] = ACTIONS(124),
    [anon_sym_Eta] = ACTIONS(124),
    [anon_sym_Theta] = ACTIONS(124),
    [anon_sym_Iota] = ACTIONS(124),
    [anon_sym_Kappa] = ACTIONS(124),
    [anon_sym_Lambda] = ACTIONS(124),
    [anon_sym_Mu] = ACTIONS(124),
    [anon_sym_Nu] = ACTIONS(124),
    [anon_sym_Xi] = ACTIONS(124),
    [anon_sym_Omicron] = ACTIONS(124),
    [anon_sym_Pi] = ACTIONS(124),
    [anon_sym_Rho] = ACTIONS(124),
    [anon_sym_Sigma] = ACTIONS(124),
    [anon_sym_Tau] = ACTIONS(124),
    [anon_sym_Upsilon] = ACTIONS(124),
    [anon_sym_Phi] = ACTIONS(124),
    [anon_sym_Chi] = ACTIONS(124),
    [anon_sym_Psi] = ACTIONS(124),
    [anon_sym_Omega] = ACTIONS(124),
    [anon_sym_infty] = ACTIONS(124),
    [anon_sym_hbar] = ACTIONS(124),
    [anon_sym_ell] = ACTIONS(124),
    [anon_sym_Re] = ACTIONS(124),
    [anon_sym_Im] = ACTIONS(124),
    [anon_sym_aleph] = ACTIONS(124),
    [anon_sym_nabla] = ACTIONS(124),
    [anon_sym_partial] = ACTIONS(124),
    [anon_sym_forall] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_emptyset] = ACTIONS(124),
    [anon_sym_grad] = ACTIONS(124),
    [anon_sym_del] = ACTIONS(124),
    [anon_sym_pm] = ACTIONS(124),
    [anon_sym_mp] = ACTIONS(124),
    [aux_sym_constant_symbol_token1] = ACTIONS(124),
    [aux_sym_constant_symbol_token2] = ACTIONS(122),
    [anon_sym_sqrt] = ACTIONS(124),
    [anon_sym_text] = ACTIONS(124),
    [anon_sym_bb] = ACTIONS(124),
    [anon_sym_cc] = ACTIONS(124),
    [anon_sym_tt] = ACTIONS(124),
    [anon_sym_fr] = ACTIONS(124),
    [anon_sym_sf] = ACTIONS(124),
    [anon_sym_bold] = ACTIONS(124),
    [anon_sym_cal] = ACTIONS(124),
    [anon_sym_frak] = ACTIONS(124),
    [anon_sym_monospace] = ACTIONS(124),
    [anon_sym_italic] = ACTIONS(124),
    [anon_sym_frac] = ACTIONS(124),
    [anon_sym_root] = ACTIONS(124),
    [anon_sym_stackrel] = ACTIONS(124),
    [anon_sym_choose] = ACTIONS(124),
    [anon_sym_atop] = ACTIONS(124),
    [anon_sym_over] = ACTIONS(124),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_LBRACE_COLON] = ACTIONS(122),
    [anon_sym_LPAREN_COLON] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_COLON_RBRACE] = ACTIONS(122),
    [anon_sym_COLON_RPAREN] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
  },
  [37] = {
    [sym_number_symbol] = ACTIONS(126),
    [anon_sym_alpha] = ACTIONS(128),
    [anon_sym_beta] = ACTIONS(128),
    [anon_sym_gamma] = ACTIONS(128),
    [anon_sym_delta] = ACTIONS(128),
    [anon_sym_epsilon] = ACTIONS(128),
    [anon_sym_zeta] = ACTIONS(128),
    [anon_sym_eta] = ACTIONS(128),
    [anon_sym_theta] = ACTIONS(128),
    [anon_sym_iota] = ACTIONS(128),
    [anon_sym_kappa] = ACTIONS(128),
    [anon_sym_lambda] = ACTIONS(128),
    [anon_sym_mu] = ACTIONS(128),
    [anon_sym_nu] = ACTIONS(128),
    [anon_sym_xi] = ACTIONS(128),
    [anon_sym_omicron] = ACTIONS(128),
    [anon_sym_pi] = ACTIONS(128),
    [anon_sym_rho] = ACTIONS(128),
    [anon_sym_sigma] = ACTIONS(128),
    [anon_sym_tau] = ACTIONS(128),
    [anon_sym_upsilon] = ACTIONS(128),
    [anon_sym_phi] = ACTIONS(128),
    [anon_sym_chi] = ACTIONS(128),
    [anon_sym_psi] = ACTIONS(128),
    [anon_sym_omega] = ACTIONS(128),
    [anon_sym_Alpha] = ACTIONS(128),
    [anon_sym_Beta] = ACTIONS(128),
    [anon_sym_Gamma] = ACTIONS(128),
    [anon_sym_Delta] = ACTIONS(128),
    [anon_sym_Epsilon] = ACTIONS(128),
    [anon_sym_Zeta] = ACTIONS(128),
    [anon_sym_Eta] = ACTIONS(128),
    [anon_sym_Theta] = ACTIONS(128),
    [anon_sym_Iota] = ACTIONS(128),
    [anon_sym_Kappa] = ACTIONS(128),
    [anon_sym_Lambda] = ACTIONS(128),
    [anon_sym_Mu] = ACTIONS(128),
    [anon_sym_Nu] = ACTIONS(128),
    [anon_sym_Xi] = ACTIONS(128),
    [anon_sym_Omicron] = ACTIONS(128),
    [anon_sym_Pi] = ACTIONS(128),
    [anon_sym_Rho] = ACTIONS(128),
    [anon_sym_Sigma] = ACTIONS(128),
    [anon_sym_Tau] = ACTIONS(128),
    [anon_sym_Upsilon] = ACTIONS(128),
    [anon_sym_Phi] = ACTIONS(128),
    [anon_sym_Chi] = ACTIONS(128),
    [anon_sym_Psi] = ACTIONS(128),
    [anon_sym_Omega] = ACTIONS(128),
    [anon_sym_infty] = ACTIONS(128),
    [anon_sym_hbar] = ACTIONS(128),
    [anon_sym_ell] = ACTIONS(128),
    [anon_sym_Re] = ACTIONS(128),
    [anon_sym_Im] = ACTIONS(128),
    [anon_sym_aleph] = ACTIONS(128),
    [anon_sym_nabla] = ACTIONS(128),
    [anon_sym_partial] = ACTIONS(128),
    [anon_sym_forall] = ACTIONS(128),
    [anon_sym_exists] = ACTIONS(128),
    [anon_sym_emptyset] = ACTIONS(128),
    [anon_sym_grad] = ACTIONS(128),
    [anon_sym_del] = ACTIONS(128),
    [anon_sym_pm] = ACTIONS(128),
    [anon_sym_mp] = ACTIONS(128),
    [aux_sym_constant_symbol_token1] = ACTIONS(128),
    [aux_sym_constant_symbol_token2] = ACTIONS(126),
    [anon_sym_sqrt] = ACTIONS(128),
    [anon_sym_text] = ACTIONS(128),
    [anon_sym_bb] = ACTIONS(128),
    [anon_sym_cc] = ACTIONS(128),
    [anon_sym_tt] = ACTIONS(128),
    [anon_sym_fr] = ACTIONS(128),
    [anon_sym_sf] = ACTIONS(128),
    [anon_sym_bold] = ACTIONS(128),
    [anon_sym_cal] = ACTIONS(128),
    [anon_sym_frak] = ACTIONS(128),
    [anon_sym_monospace] = ACTIONS(128),
    [anon_sym_italic] = ACTIONS(128),
    [anon_sym_frac] = ACTIONS(128),
    [anon_sym_root] = ACTIONS(128),
    [anon_sym_stackrel] = ACTIONS(128),
    [anon_sym_choose] = ACTIONS(128),
    [anon_sym_atop] = ACTIONS(128),
    [anon_sym_over] = ACTIONS(128),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_LBRACE_COLON] = ACTIONS(126),
    [anon_sym_LPAREN_COLON] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_COLON_RBRACE] = ACTIONS(126),
    [anon_sym_COLON_RPAREN] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(126),
  },
  [38] = {
    [sym_number_symbol] = ACTIONS(130),
    [anon_sym_alpha] = ACTIONS(132),
    [anon_sym_beta] = ACTIONS(132),
    [anon_sym_gamma] = ACTIONS(132),
    [anon_sym_delta] = ACTIONS(132),
    [anon_sym_epsilon] = ACTIONS(132),
    [anon_sym_zeta] = ACTIONS(132),
    [anon_sym_eta] = ACTIONS(132),
    [anon_sym_theta] = ACTIONS(132),
    [anon_sym_iota] = ACTIONS(132),
    [anon_sym_kappa] = ACTIONS(132),
    [anon_sym_lambda] = ACTIONS(132),
    [anon_sym_mu] = ACTIONS(132),
    [anon_sym_nu] = ACTIONS(132),
    [anon_sym_xi] = ACTIONS(132),
    [anon_sym_omicron] = ACTIONS(132),
    [anon_sym_pi] = ACTIONS(132),
    [anon_sym_rho] = ACTIONS(132),
    [anon_sym_sigma] = ACTIONS(132),
    [anon_sym_tau] = ACTIONS(132),
    [anon_sym_upsilon] = ACTIONS(132),
    [anon_sym_phi] = ACTIONS(132),
    [anon_sym_chi] = ACTIONS(132),
    [anon_sym_psi] = ACTIONS(132),
    [anon_sym_omega] = ACTIONS(132),
    [anon_sym_Alpha] = ACTIONS(132),
    [anon_sym_Beta] = ACTIONS(132),
    [anon_sym_Gamma] = ACTIONS(132),
    [anon_sym_Delta] = ACTIONS(132),
    [anon_sym_Epsilon] = ACTIONS(132),
    [anon_sym_Zeta] = ACTIONS(132),
    [anon_sym_Eta] = ACTIONS(132),
    [anon_sym_Theta] = ACTIONS(132),
    [anon_sym_Iota] = ACTIONS(132),
    [anon_sym_Kappa] = ACTIONS(132),
    [anon_sym_Lambda] = ACTIONS(132),
    [anon_sym_Mu] = ACTIONS(132),
    [anon_sym_Nu] = ACTIONS(132),
    [anon_sym_Xi] = ACTIONS(132),
    [anon_sym_Omicron] = ACTIONS(132),
    [anon_sym_Pi] = ACTIONS(132),
    [anon_sym_Rho] = ACTIONS(132),
    [anon_sym_Sigma] = ACTIONS(132),
    [anon_sym_Tau] = ACTIONS(132),
    [anon_sym_Upsilon] = ACTIONS(132),
    [anon_sym_Phi] = ACTIONS(132),
    [anon_sym_Chi] = ACTIONS(132),
    [anon_sym_Psi] = ACTIONS(132),
    [anon_sym_Omega] = ACTIONS(132),
    [anon_sym_infty] = ACTIONS(132),
    [anon_sym_hbar] = ACTIONS(132),
    [anon_sym_ell] = ACTIONS(132),
    [anon_sym_Re] = ACTIONS(132),
    [anon_sym_Im] = ACTIONS(132),
    [anon_sym_aleph] = ACTIONS(132),
    [anon_sym_nabla] = ACTIONS(132),
    [anon_sym_partial] = ACTIONS(132),
    [anon_sym_forall] = ACTIONS(132),
    [anon_sym_exists] = ACTIONS(132),
    [anon_sym_emptyset] = ACTIONS(132),
    [anon_sym_grad] = ACTIONS(132),
    [anon_sym_del] = ACTIONS(132),
    [anon_sym_pm] = ACTIONS(132),
    [anon_sym_mp] = ACTIONS(132),
    [aux_sym_constant_symbol_token1] = ACTIONS(132),
    [aux_sym_constant_symbol_token2] = ACTIONS(130),
    [anon_sym_sqrt] = ACTIONS(132),
    [anon_sym_text] = ACTIONS(132),
    [anon_sym_bb] = ACTIONS(132),
    [anon_sym_cc] = ACTIONS(132),
    [anon_sym_tt] = ACTIONS(132),
    [anon_sym_fr] = ACTIONS(132),
    [anon_sym_sf] = ACTIONS(132),
    [anon_sym_bold] = ACTIONS(132),
    [anon_sym_cal] = ACTIONS(132),
    [anon_sym_frak] = ACTIONS(132),
    [anon_sym_monospace] = ACTIONS(132),
    [anon_sym_italic] = ACTIONS(132),
    [anon_sym_frac] = ACTIONS(132),
    [anon_sym_root] = ACTIONS(132),
    [anon_sym_stackrel] = ACTIONS(132),
    [anon_sym_choose] = ACTIONS(132),
    [anon_sym_atop] = ACTIONS(132),
    [anon_sym_over] = ACTIONS(132),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_LBRACE_COLON] = ACTIONS(130),
    [anon_sym_LPAREN_COLON] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_COLON_RBRACE] = ACTIONS(130),
    [anon_sym_COLON_RPAREN] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(134),
  },
  [39] = {
    [sym_number_symbol] = ACTIONS(136),
    [anon_sym_alpha] = ACTIONS(138),
    [anon_sym_beta] = ACTIONS(138),
    [anon_sym_gamma] = ACTIONS(138),
    [anon_sym_delta] = ACTIONS(138),
    [anon_sym_epsilon] = ACTIONS(138),
    [anon_sym_zeta] = ACTIONS(138),
    [anon_sym_eta] = ACTIONS(138),
    [anon_sym_theta] = ACTIONS(138),
    [anon_sym_iota] = ACTIONS(138),
    [anon_sym_kappa] = ACTIONS(138),
    [anon_sym_lambda] = ACTIONS(138),
    [anon_sym_mu] = ACTIONS(138),
    [anon_sym_nu] = ACTIONS(138),
    [anon_sym_xi] = ACTIONS(138),
    [anon_sym_omicron] = ACTIONS(138),
    [anon_sym_pi] = ACTIONS(138),
    [anon_sym_rho] = ACTIONS(138),
    [anon_sym_sigma] = ACTIONS(138),
    [anon_sym_tau] = ACTIONS(138),
    [anon_sym_upsilon] = ACTIONS(138),
    [anon_sym_phi] = ACTIONS(138),
    [anon_sym_chi] = ACTIONS(138),
    [anon_sym_psi] = ACTIONS(138),
    [anon_sym_omega] = ACTIONS(138),
    [anon_sym_Alpha] = ACTIONS(138),
    [anon_sym_Beta] = ACTIONS(138),
    [anon_sym_Gamma] = ACTIONS(138),
    [anon_sym_Delta] = ACTIONS(138),
    [anon_sym_Epsilon] = ACTIONS(138),
    [anon_sym_Zeta] = ACTIONS(138),
    [anon_sym_Eta] = ACTIONS(138),
    [anon_sym_Theta] = ACTIONS(138),
    [anon_sym_Iota] = ACTIONS(138),
    [anon_sym_Kappa] = ACTIONS(138),
    [anon_sym_Lambda] = ACTIONS(138),
    [anon_sym_Mu] = ACTIONS(138),
    [anon_sym_Nu] = ACTIONS(138),
    [anon_sym_Xi] = ACTIONS(138),
    [anon_sym_Omicron] = ACTIONS(138),
    [anon_sym_Pi] = ACTIONS(138),
    [anon_sym_Rho] = ACTIONS(138),
    [anon_sym_Sigma] = ACTIONS(138),
    [anon_sym_Tau] = ACTIONS(138),
    [anon_sym_Upsilon] = ACTIONS(138),
    [anon_sym_Phi] = ACTIONS(138),
    [anon_sym_Chi] = ACTIONS(138),
    [anon_sym_Psi] = ACTIONS(138),
    [anon_sym_Omega] = ACTIONS(138),
    [anon_sym_infty] = ACTIONS(138),
    [anon_sym_hbar] = ACTIONS(138),
    [anon_sym_ell] = ACTIONS(138),
    [anon_sym_Re] = ACTIONS(138),
    [anon_sym_Im] = ACTIONS(138),
    [anon_sym_aleph] = ACTIONS(138),
    [anon_sym_nabla] = ACTIONS(138),
    [anon_sym_partial] = ACTIONS(138),
    [anon_sym_forall] = ACTIONS(138),
    [anon_sym_exists] = ACTIONS(138),
    [anon_sym_emptyset] = ACTIONS(138),
    [anon_sym_grad] = ACTIONS(138),
    [anon_sym_del] = ACTIONS(138),
    [anon_sym_pm] = ACTIONS(138),
    [anon_sym_mp] = ACTIONS(138),
    [aux_sym_constant_symbol_token1] = ACTIONS(138),
    [aux_sym_constant_symbol_token2] = ACTIONS(136),
    [anon_sym_sqrt] = ACTIONS(138),
    [anon_sym_text] = ACTIONS(138),
    [anon_sym_bb] = ACTIONS(138),
    [anon_sym_cc] = ACTIONS(138),
    [anon_sym_tt] = ACTIONS(138),
    [anon_sym_fr] = ACTIONS(138),
    [anon_sym_sf] = ACTIONS(138),
    [anon_sym_bold] = ACTIONS(138),
    [anon_sym_cal] = ACTIONS(138),
    [anon_sym_frak] = ACTIONS(138),
    [anon_sym_monospace] = ACTIONS(138),
    [anon_sym_italic] = ACTIONS(138),
    [anon_sym_frac] = ACTIONS(138),
    [anon_sym_root] = ACTIONS(138),
    [anon_sym_stackrel] = ACTIONS(138),
    [anon_sym_choose] = ACTIONS(138),
    [anon_sym_atop] = ACTIONS(138),
    [anon_sym_over] = ACTIONS(138),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_LBRACE_COLON] = ACTIONS(136),
    [anon_sym_LPAREN_COLON] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_COLON_RBRACE] = ACTIONS(136),
    [anon_sym_COLON_RPAREN] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
  },
  [40] = {
    [sym_number_symbol] = ACTIONS(110),
    [anon_sym_alpha] = ACTIONS(112),
    [anon_sym_beta] = ACTIONS(112),
    [anon_sym_gamma] = ACTIONS(112),
    [anon_sym_delta] = ACTIONS(112),
    [anon_sym_epsilon] = ACTIONS(112),
    [anon_sym_zeta] = ACTIONS(112),
    [anon_sym_eta] = ACTIONS(112),
    [anon_sym_theta] = ACTIONS(112),
    [anon_sym_iota] = ACTIONS(112),
    [anon_sym_kappa] = ACTIONS(112),
    [anon_sym_lambda] = ACTIONS(112),
    [anon_sym_mu] = ACTIONS(112),
    [anon_sym_nu] = ACTIONS(112),
    [anon_sym_xi] = ACTIONS(112),
    [anon_sym_omicron] = ACTIONS(112),
    [anon_sym_pi] = ACTIONS(112),
    [anon_sym_rho] = ACTIONS(112),
    [anon_sym_sigma] = ACTIONS(112),
    [anon_sym_tau] = ACTIONS(112),
    [anon_sym_upsilon] = ACTIONS(112),
    [anon_sym_phi] = ACTIONS(112),
    [anon_sym_chi] = ACTIONS(112),
    [anon_sym_psi] = ACTIONS(112),
    [anon_sym_omega] = ACTIONS(112),
    [anon_sym_Alpha] = ACTIONS(112),
    [anon_sym_Beta] = ACTIONS(112),
    [anon_sym_Gamma] = ACTIONS(112),
    [anon_sym_Delta] = ACTIONS(112),
    [anon_sym_Epsilon] = ACTIONS(112),
    [anon_sym_Zeta] = ACTIONS(112),
    [anon_sym_Eta] = ACTIONS(112),
    [anon_sym_Theta] = ACTIONS(112),
    [anon_sym_Iota] = ACTIONS(112),
    [anon_sym_Kappa] = ACTIONS(112),
    [anon_sym_Lambda] = ACTIONS(112),
    [anon_sym_Mu] = ACTIONS(112),
    [anon_sym_Nu] = ACTIONS(112),
    [anon_sym_Xi] = ACTIONS(112),
    [anon_sym_Omicron] = ACTIONS(112),
    [anon_sym_Pi] = ACTIONS(112),
    [anon_sym_Rho] = ACTIONS(112),
    [anon_sym_Sigma] = ACTIONS(112),
    [anon_sym_Tau] = ACTIONS(112),
    [anon_sym_Upsilon] = ACTIONS(112),
    [anon_sym_Phi] = ACTIONS(112),
    [anon_sym_Chi] = ACTIONS(112),
    [anon_sym_Psi] = ACTIONS(112),
    [anon_sym_Omega] = ACTIONS(112),
    [anon_sym_infty] = ACTIONS(112),
    [anon_sym_hbar] = ACTIONS(112),
    [anon_sym_ell] = ACTIONS(112),
    [anon_sym_Re] = ACTIONS(112),
    [anon_sym_Im] = ACTIONS(112),
    [anon_sym_aleph] = ACTIONS(112),
    [anon_sym_nabla] = ACTIONS(112),
    [anon_sym_partial] = ACTIONS(112),
    [anon_sym_forall] = ACTIONS(112),
    [anon_sym_exists] = ACTIONS(112),
    [anon_sym_emptyset] = ACTIONS(112),
    [anon_sym_grad] = ACTIONS(112),
    [anon_sym_del] = ACTIONS(112),
    [anon_sym_pm] = ACTIONS(112),
    [anon_sym_mp] = ACTIONS(112),
    [aux_sym_constant_symbol_token1] = ACTIONS(112),
    [aux_sym_constant_symbol_token2] = ACTIONS(110),
    [anon_sym_sqrt] = ACTIONS(112),
    [anon_sym_text] = ACTIONS(112),
    [anon_sym_bb] = ACTIONS(112),
    [anon_sym_cc] = ACTIONS(112),
    [anon_sym_tt] = ACTIONS(112),
    [anon_sym_fr] = ACTIONS(112),
    [anon_sym_sf] = ACTIONS(112),
    [anon_sym_bold] = ACTIONS(112),
    [anon_sym_cal] = ACTIONS(112),
    [anon_sym_frak] = ACTIONS(112),
    [anon_sym_monospace] = ACTIONS(112),
    [anon_sym_italic] = ACTIONS(112),
    [anon_sym_frac] = ACTIONS(112),
    [anon_sym_root] = ACTIONS(112),
    [anon_sym_stackrel] = ACTIONS(112),
    [anon_sym_choose] = ACTIONS(112),
    [anon_sym_atop] = ACTIONS(112),
    [anon_sym_over] = ACTIONS(112),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LBRACE_COLON] = ACTIONS(110),
    [anon_sym_LPAREN_COLON] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_COLON_RBRACE] = ACTIONS(110),
    [anon_sym_COLON_RPAREN] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
  },
  [41] = {
    [sym_number_symbol] = ACTIONS(140),
    [anon_sym_alpha] = ACTIONS(142),
    [anon_sym_beta] = ACTIONS(142),
    [anon_sym_gamma] = ACTIONS(142),
    [anon_sym_delta] = ACTIONS(142),
    [anon_sym_epsilon] = ACTIONS(142),
    [anon_sym_zeta] = ACTIONS(142),
    [anon_sym_eta] = ACTIONS(142),
    [anon_sym_theta] = ACTIONS(142),
    [anon_sym_iota] = ACTIONS(142),
    [anon_sym_kappa] = ACTIONS(142),
    [anon_sym_lambda] = ACTIONS(142),
    [anon_sym_mu] = ACTIONS(142),
    [anon_sym_nu] = ACTIONS(142),
    [anon_sym_xi] = ACTIONS(142),
    [anon_sym_omicron] = ACTIONS(142),
    [anon_sym_pi] = ACTIONS(142),
    [anon_sym_rho] = ACTIONS(142),
    [anon_sym_sigma] = ACTIONS(142),
    [anon_sym_tau] = ACTIONS(142),
    [anon_sym_upsilon] = ACTIONS(142),
    [anon_sym_phi] = ACTIONS(142),
    [anon_sym_chi] = ACTIONS(142),
    [anon_sym_psi] = ACTIONS(142),
    [anon_sym_omega] = ACTIONS(142),
    [anon_sym_Alpha] = ACTIONS(142),
    [anon_sym_Beta] = ACTIONS(142),
    [anon_sym_Gamma] = ACTIONS(142),
    [anon_sym_Delta] = ACTIONS(142),
    [anon_sym_Epsilon] = ACTIONS(142),
    [anon_sym_Zeta] = ACTIONS(142),
    [anon_sym_Eta] = ACTIONS(142),
    [anon_sym_Theta] = ACTIONS(142),
    [anon_sym_Iota] = ACTIONS(142),
    [anon_sym_Kappa] = ACTIONS(142),
    [anon_sym_Lambda] = ACTIONS(142),
    [anon_sym_Mu] = ACTIONS(142),
    [anon_sym_Nu] = ACTIONS(142),
    [anon_sym_Xi] = ACTIONS(142),
    [anon_sym_Omicron] = ACTIONS(142),
    [anon_sym_Pi] = ACTIONS(142),
    [anon_sym_Rho] = ACTIONS(142),
    [anon_sym_Sigma] = ACTIONS(142),
    [anon_sym_Tau] = ACTIONS(142),
    [anon_sym_Upsilon] = ACTIONS(142),
    [anon_sym_Phi] = ACTIONS(142),
    [anon_sym_Chi] = ACTIONS(142),
    [anon_sym_Psi] = ACTIONS(142),
    [anon_sym_Omega] = ACTIONS(142),
    [anon_sym_infty] = ACTIONS(142),
    [anon_sym_hbar] = ACTIONS(142),
    [anon_sym_ell] = ACTIONS(142),
    [anon_sym_Re] = ACTIONS(142),
    [anon_sym_Im] = ACTIONS(142),
    [anon_sym_aleph] = ACTIONS(142),
    [anon_sym_nabla] = ACTIONS(142),
    [anon_sym_partial] = ACTIONS(142),
    [anon_sym_forall] = ACTIONS(142),
    [anon_sym_exists] = ACTIONS(142),
    [anon_sym_emptyset] = ACTIONS(142),
    [anon_sym_grad] = ACTIONS(142),
    [anon_sym_del] = ACTIONS(142),
    [anon_sym_pm] = ACTIONS(142),
    [anon_sym_mp] = ACTIONS(142),
    [aux_sym_constant_symbol_token1] = ACTIONS(142),
    [aux_sym_constant_symbol_token2] = ACTIONS(140),
    [anon_sym_sqrt] = ACTIONS(142),
    [anon_sym_text] = ACTIONS(142),
    [anon_sym_bb] = ACTIONS(142),
    [anon_sym_cc] = ACTIONS(142),
    [anon_sym_tt] = ACTIONS(142),
    [anon_sym_fr] = ACTIONS(142),
    [anon_sym_sf] = ACTIONS(142),
    [anon_sym_bold] = ACTIONS(142),
    [anon_sym_cal] = ACTIONS(142),
    [anon_sym_frak] = ACTIONS(142),
    [anon_sym_monospace] = ACTIONS(142),
    [anon_sym_italic] = ACTIONS(142),
    [anon_sym_frac] = ACTIONS(142),
    [anon_sym_root] = ACTIONS(142),
    [anon_sym_stackrel] = ACTIONS(142),
    [anon_sym_choose] = ACTIONS(142),
    [anon_sym_atop] = ACTIONS(142),
    [anon_sym_over] = ACTIONS(142),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_COLON] = ACTIONS(140),
    [anon_sym_LPAREN_COLON] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_COLON_RBRACE] = ACTIONS(140),
    [anon_sym_COLON_RPAREN] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_number_symbol] = ACTIONS(126),
    [anon_sym_alpha] = ACTIONS(128),
    [anon_sym_beta] = ACTIONS(128),
    [anon_sym_gamma] = ACTIONS(128),
    [anon_sym_delta] = ACTIONS(128),
    [anon_sym_epsilon] = ACTIONS(128),
    [anon_sym_zeta] = ACTIONS(128),
    [anon_sym_eta] = ACTIONS(128),
    [anon_sym_theta] = ACTIONS(128),
    [anon_sym_iota] = ACTIONS(128),
    [anon_sym_kappa] = ACTIONS(128),
    [anon_sym_lambda] = ACTIONS(128),
    [anon_sym_mu] = ACTIONS(128),
    [anon_sym_nu] = ACTIONS(128),
    [anon_sym_xi] = ACTIONS(128),
    [anon_sym_omicron] = ACTIONS(128),
    [anon_sym_pi] = ACTIONS(128),
    [anon_sym_rho] = ACTIONS(128),
    [anon_sym_sigma] = ACTIONS(128),
    [anon_sym_tau] = ACTIONS(128),
    [anon_sym_upsilon] = ACTIONS(128),
    [anon_sym_phi] = ACTIONS(128),
    [anon_sym_chi] = ACTIONS(128),
    [anon_sym_psi] = ACTIONS(128),
    [anon_sym_omega] = ACTIONS(128),
    [anon_sym_Alpha] = ACTIONS(128),
    [anon_sym_Beta] = ACTIONS(128),
    [anon_sym_Gamma] = ACTIONS(128),
    [anon_sym_Delta] = ACTIONS(128),
    [anon_sym_Epsilon] = ACTIONS(128),
    [anon_sym_Zeta] = ACTIONS(128),
    [anon_sym_Eta] = ACTIONS(128),
    [anon_sym_Theta] = ACTIONS(128),
    [anon_sym_Iota] = ACTIONS(128),
    [anon_sym_Kappa] = ACTIONS(128),
    [anon_sym_Lambda] = ACTIONS(128),
    [anon_sym_Mu] = ACTIONS(128),
    [anon_sym_Nu] = ACTIONS(128),
    [anon_sym_Xi] = ACTIONS(128),
    [anon_sym_Omicron] = ACTIONS(128),
    [anon_sym_Pi] = ACTIONS(128),
    [anon_sym_Rho] = ACTIONS(128),
    [anon_sym_Sigma] = ACTIONS(128),
    [anon_sym_Tau] = ACTIONS(128),
    [anon_sym_Upsilon] = ACTIONS(128),
    [anon_sym_Phi] = ACTIONS(128),
    [anon_sym_Chi] = ACTIONS(128),
    [anon_sym_Psi] = ACTIONS(128),
    [anon_sym_Omega] = ACTIONS(128),
    [anon_sym_infty] = ACTIONS(128),
    [anon_sym_hbar] = ACTIONS(128),
    [anon_sym_ell] = ACTIONS(128),
    [anon_sym_Re] = ACTIONS(128),
    [anon_sym_Im] = ACTIONS(128),
    [anon_sym_aleph] = ACTIONS(128),
    [anon_sym_nabla] = ACTIONS(128),
    [anon_sym_partial] = ACTIONS(128),
    [anon_sym_forall] = ACTIONS(128),
    [anon_sym_exists] = ACTIONS(128),
    [anon_sym_emptyset] = ACTIONS(128),
    [anon_sym_grad] = ACTIONS(128),
    [anon_sym_del] = ACTIONS(128),
    [anon_sym_pm] = ACTIONS(128),
    [anon_sym_mp] = ACTIONS(128),
    [aux_sym_constant_symbol_token1] = ACTIONS(128),
    [aux_sym_constant_symbol_token2] = ACTIONS(126),
    [anon_sym_sqrt] = ACTIONS(128),
    [anon_sym_text] = ACTIONS(128),
    [anon_sym_bb] = ACTIONS(128),
    [anon_sym_cc] = ACTIONS(128),
    [anon_sym_tt] = ACTIONS(128),
    [anon_sym_fr] = ACTIONS(128),
    [anon_sym_sf] = ACTIONS(128),
    [anon_sym_bold] = ACTIONS(128),
    [anon_sym_cal] = ACTIONS(128),
    [anon_sym_frak] = ACTIONS(128),
    [anon_sym_monospace] = ACTIONS(128),
    [anon_sym_italic] = ACTIONS(128),
    [anon_sym_frac] = ACTIONS(128),
    [anon_sym_root] = ACTIONS(128),
    [anon_sym_stackrel] = ACTIONS(128),
    [anon_sym_choose] = ACTIONS(128),
    [anon_sym_atop] = ACTIONS(128),
    [anon_sym_over] = ACTIONS(128),
    [sym_multi_linebreak] = ACTIONS(128),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_LBRACE_COLON] = ACTIONS(126),
    [anon_sym_LPAREN_COLON] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(126),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_number_symbol] = ACTIONS(118),
    [anon_sym_alpha] = ACTIONS(120),
    [anon_sym_beta] = ACTIONS(120),
    [anon_sym_gamma] = ACTIONS(120),
    [anon_sym_delta] = ACTIONS(120),
    [anon_sym_epsilon] = ACTIONS(120),
    [anon_sym_zeta] = ACTIONS(120),
    [anon_sym_eta] = ACTIONS(120),
    [anon_sym_theta] = ACTIONS(120),
    [anon_sym_iota] = ACTIONS(120),
    [anon_sym_kappa] = ACTIONS(120),
    [anon_sym_lambda] = ACTIONS(120),
    [anon_sym_mu] = ACTIONS(120),
    [anon_sym_nu] = ACTIONS(120),
    [anon_sym_xi] = ACTIONS(120),
    [anon_sym_omicron] = ACTIONS(120),
    [anon_sym_pi] = ACTIONS(120),
    [anon_sym_rho] = ACTIONS(120),
    [anon_sym_sigma] = ACTIONS(120),
    [anon_sym_tau] = ACTIONS(120),
    [anon_sym_upsilon] = ACTIONS(120),
    [anon_sym_phi] = ACTIONS(120),
    [anon_sym_chi] = ACTIONS(120),
    [anon_sym_psi] = ACTIONS(120),
    [anon_sym_omega] = ACTIONS(120),
    [anon_sym_Alpha] = ACTIONS(120),
    [anon_sym_Beta] = ACTIONS(120),
    [anon_sym_Gamma] = ACTIONS(120),
    [anon_sym_Delta] = ACTIONS(120),
    [anon_sym_Epsilon] = ACTIONS(120),
    [anon_sym_Zeta] = ACTIONS(120),
    [anon_sym_Eta] = ACTIONS(120),
    [anon_sym_Theta] = ACTIONS(120),
    [anon_sym_Iota] = ACTIONS(120),
    [anon_sym_Kappa] = ACTIONS(120),
    [anon_sym_Lambda] = ACTIONS(120),
    [anon_sym_Mu] = ACTIONS(120),
    [anon_sym_Nu] = ACTIONS(120),
    [anon_sym_Xi] = ACTIONS(120),
    [anon_sym_Omicron] = ACTIONS(120),
    [anon_sym_Pi] = ACTIONS(120),
    [anon_sym_Rho] = ACTIONS(120),
    [anon_sym_Sigma] = ACTIONS(120),
    [anon_sym_Tau] = ACTIONS(120),
    [anon_sym_Upsilon] = ACTIONS(120),
    [anon_sym_Phi] = ACTIONS(120),
    [anon_sym_Chi] = ACTIONS(120),
    [anon_sym_Psi] = ACTIONS(120),
    [anon_sym_Omega] = ACTIONS(120),
    [anon_sym_infty] = ACTIONS(120),
    [anon_sym_hbar] = ACTIONS(120),
    [anon_sym_ell] = ACTIONS(120),
    [anon_sym_Re] = ACTIONS(120),
    [anon_sym_Im] = ACTIONS(120),
    [anon_sym_aleph] = ACTIONS(120),
    [anon_sym_nabla] = ACTIONS(120),
    [anon_sym_partial] = ACTIONS(120),
    [anon_sym_forall] = ACTIONS(120),
    [anon_sym_exists] = ACTIONS(120),
    [anon_sym_emptyset] = ACTIONS(120),
    [anon_sym_grad] = ACTIONS(120),
    [anon_sym_del] = ACTIONS(120),
    [anon_sym_pm] = ACTIONS(120),
    [anon_sym_mp] = ACTIONS(120),
    [aux_sym_constant_symbol_token1] = ACTIONS(120),
    [aux_sym_constant_symbol_token2] = ACTIONS(118),
    [anon_sym_sqrt] = ACTIONS(120),
    [anon_sym_text] = ACTIONS(120),
    [anon_sym_bb] = ACTIONS(120),
    [anon_sym_cc] = ACTIONS(120),
    [anon_sym_tt] = ACTIONS(120),
    [anon_sym_fr] = ACTIONS(120),
    [anon_sym_sf] = ACTIONS(120),
    [anon_sym_bold] = ACTIONS(120),
    [anon_sym_cal] = ACTIONS(120),
    [anon_sym_frak] = ACTIONS(120),
    [anon_sym_monospace] = ACTIONS(120),
    [anon_sym_italic] = ACTIONS(120),
    [anon_sym_frac] = ACTIONS(120),
    [anon_sym_root] = ACTIONS(120),
    [anon_sym_stackrel] = ACTIONS(120),
    [anon_sym_choose] = ACTIONS(120),
    [anon_sym_atop] = ACTIONS(120),
    [anon_sym_over] = ACTIONS(120),
    [sym_multi_linebreak] = ACTIONS(120),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_LBRACE_COLON] = ACTIONS(118),
    [anon_sym_LPAREN_COLON] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(118),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_number_symbol] = ACTIONS(86),
    [anon_sym_alpha] = ACTIONS(88),
    [anon_sym_beta] = ACTIONS(88),
    [anon_sym_gamma] = ACTIONS(88),
    [anon_sym_delta] = ACTIONS(88),
    [anon_sym_epsilon] = ACTIONS(88),
    [anon_sym_zeta] = ACTIONS(88),
    [anon_sym_eta] = ACTIONS(88),
    [anon_sym_theta] = ACTIONS(88),
    [anon_sym_iota] = ACTIONS(88),
    [anon_sym_kappa] = ACTIONS(88),
    [anon_sym_lambda] = ACTIONS(88),
    [anon_sym_mu] = ACTIONS(88),
    [anon_sym_nu] = ACTIONS(88),
    [anon_sym_xi] = ACTIONS(88),
    [anon_sym_omicron] = ACTIONS(88),
    [anon_sym_pi] = ACTIONS(88),
    [anon_sym_rho] = ACTIONS(88),
    [anon_sym_sigma] = ACTIONS(88),
    [anon_sym_tau] = ACTIONS(88),
    [anon_sym_upsilon] = ACTIONS(88),
    [anon_sym_phi] = ACTIONS(88),
    [anon_sym_chi] = ACTIONS(88),
    [anon_sym_psi] = ACTIONS(88),
    [anon_sym_omega] = ACTIONS(88),
    [anon_sym_Alpha] = ACTIONS(88),
    [anon_sym_Beta] = ACTIONS(88),
    [anon_sym_Gamma] = ACTIONS(88),
    [anon_sym_Delta] = ACTIONS(88),
    [anon_sym_Epsilon] = ACTIONS(88),
    [anon_sym_Zeta] = ACTIONS(88),
    [anon_sym_Eta] = ACTIONS(88),
    [anon_sym_Theta] = ACTIONS(88),
    [anon_sym_Iota] = ACTIONS(88),
    [anon_sym_Kappa] = ACTIONS(88),
    [anon_sym_Lambda] = ACTIONS(88),
    [anon_sym_Mu] = ACTIONS(88),
    [anon_sym_Nu] = ACTIONS(88),
    [anon_sym_Xi] = ACTIONS(88),
    [anon_sym_Omicron] = ACTIONS(88),
    [anon_sym_Pi] = ACTIONS(88),
    [anon_sym_Rho] = ACTIONS(88),
    [anon_sym_Sigma] = ACTIONS(88),
    [anon_sym_Tau] = ACTIONS(88),
    [anon_sym_Upsilon] = ACTIONS(88),
    [anon_sym_Phi] = ACTIONS(88),
    [anon_sym_Chi] = ACTIONS(88),
    [anon_sym_Psi] = ACTIONS(88),
    [anon_sym_Omega] = ACTIONS(88),
    [anon_sym_infty] = ACTIONS(88),
    [anon_sym_hbar] = ACTIONS(88),
    [anon_sym_ell] = ACTIONS(88),
    [anon_sym_Re] = ACTIONS(88),
    [anon_sym_Im] = ACTIONS(88),
    [anon_sym_aleph] = ACTIONS(88),
    [anon_sym_nabla] = ACTIONS(88),
    [anon_sym_partial] = ACTIONS(88),
    [anon_sym_forall] = ACTIONS(88),
    [anon_sym_exists] = ACTIONS(88),
    [anon_sym_emptyset] = ACTIONS(88),
    [anon_sym_grad] = ACTIONS(88),
    [anon_sym_del] = ACTIONS(88),
    [anon_sym_pm] = ACTIONS(88),
    [anon_sym_mp] = ACTIONS(88),
    [aux_sym_constant_symbol_token1] = ACTIONS(88),
    [aux_sym_constant_symbol_token2] = ACTIONS(86),
    [anon_sym_sqrt] = ACTIONS(88),
    [anon_sym_text] = ACTIONS(88),
    [anon_sym_bb] = ACTIONS(88),
    [anon_sym_cc] = ACTIONS(88),
    [anon_sym_tt] = ACTIONS(88),
    [anon_sym_fr] = ACTIONS(88),
    [anon_sym_sf] = ACTIONS(88),
    [anon_sym_bold] = ACTIONS(88),
    [anon_sym_cal] = ACTIONS(88),
    [anon_sym_frak] = ACTIONS(88),
    [anon_sym_monospace] = ACTIONS(88),
    [anon_sym_italic] = ACTIONS(88),
    [anon_sym_frac] = ACTIONS(88),
    [anon_sym_root] = ACTIONS(88),
    [anon_sym_stackrel] = ACTIONS(88),
    [anon_sym_choose] = ACTIONS(88),
    [anon_sym_atop] = ACTIONS(88),
    [anon_sym_over] = ACTIONS(88),
    [sym_multi_linebreak] = ACTIONS(88),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_COLON] = ACTIONS(86),
    [anon_sym_LPAREN_COLON] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym__] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_number_symbol] = ACTIONS(106),
    [anon_sym_alpha] = ACTIONS(108),
    [anon_sym_beta] = ACTIONS(108),
    [anon_sym_gamma] = ACTIONS(108),
    [anon_sym_delta] = ACTIONS(108),
    [anon_sym_epsilon] = ACTIONS(108),
    [anon_sym_zeta] = ACTIONS(108),
    [anon_sym_eta] = ACTIONS(108),
    [anon_sym_theta] = ACTIONS(108),
    [anon_sym_iota] = ACTIONS(108),
    [anon_sym_kappa] = ACTIONS(108),
    [anon_sym_lambda] = ACTIONS(108),
    [anon_sym_mu] = ACTIONS(108),
    [anon_sym_nu] = ACTIONS(108),
    [anon_sym_xi] = ACTIONS(108),
    [anon_sym_omicron] = ACTIONS(108),
    [anon_sym_pi] = ACTIONS(108),
    [anon_sym_rho] = ACTIONS(108),
    [anon_sym_sigma] = ACTIONS(108),
    [anon_sym_tau] = ACTIONS(108),
    [anon_sym_upsilon] = ACTIONS(108),
    [anon_sym_phi] = ACTIONS(108),
    [anon_sym_chi] = ACTIONS(108),
    [anon_sym_psi] = ACTIONS(108),
    [anon_sym_omega] = ACTIONS(108),
    [anon_sym_Alpha] = ACTIONS(108),
    [anon_sym_Beta] = ACTIONS(108),
    [anon_sym_Gamma] = ACTIONS(108),
    [anon_sym_Delta] = ACTIONS(108),
    [anon_sym_Epsilon] = ACTIONS(108),
    [anon_sym_Zeta] = ACTIONS(108),
    [anon_sym_Eta] = ACTIONS(108),
    [anon_sym_Theta] = ACTIONS(108),
    [anon_sym_Iota] = ACTIONS(108),
    [anon_sym_Kappa] = ACTIONS(108),
    [anon_sym_Lambda] = ACTIONS(108),
    [anon_sym_Mu] = ACTIONS(108),
    [anon_sym_Nu] = ACTIONS(108),
    [anon_sym_Xi] = ACTIONS(108),
    [anon_sym_Omicron] = ACTIONS(108),
    [anon_sym_Pi] = ACTIONS(108),
    [anon_sym_Rho] = ACTIONS(108),
    [anon_sym_Sigma] = ACTIONS(108),
    [anon_sym_Tau] = ACTIONS(108),
    [anon_sym_Upsilon] = ACTIONS(108),
    [anon_sym_Phi] = ACTIONS(108),
    [anon_sym_Chi] = ACTIONS(108),
    [anon_sym_Psi] = ACTIONS(108),
    [anon_sym_Omega] = ACTIONS(108),
    [anon_sym_infty] = ACTIONS(108),
    [anon_sym_hbar] = ACTIONS(108),
    [anon_sym_ell] = ACTIONS(108),
    [anon_sym_Re] = ACTIONS(108),
    [anon_sym_Im] = ACTIONS(108),
    [anon_sym_aleph] = ACTIONS(108),
    [anon_sym_nabla] = ACTIONS(108),
    [anon_sym_partial] = ACTIONS(108),
    [anon_sym_forall] = ACTIONS(108),
    [anon_sym_exists] = ACTIONS(108),
    [anon_sym_emptyset] = ACTIONS(108),
    [anon_sym_grad] = ACTIONS(108),
    [anon_sym_del] = ACTIONS(108),
    [anon_sym_pm] = ACTIONS(108),
    [anon_sym_mp] = ACTIONS(108),
    [aux_sym_constant_symbol_token1] = ACTIONS(108),
    [aux_sym_constant_symbol_token2] = ACTIONS(106),
    [anon_sym_sqrt] = ACTIONS(108),
    [anon_sym_text] = ACTIONS(108),
    [anon_sym_bb] = ACTIONS(108),
    [anon_sym_cc] = ACTIONS(108),
    [anon_sym_tt] = ACTIONS(108),
    [anon_sym_fr] = ACTIONS(108),
    [anon_sym_sf] = ACTIONS(108),
    [anon_sym_bold] = ACTIONS(108),
    [anon_sym_cal] = ACTIONS(108),
    [anon_sym_frak] = ACTIONS(108),
    [anon_sym_monospace] = ACTIONS(108),
    [anon_sym_italic] = ACTIONS(108),
    [anon_sym_frac] = ACTIONS(108),
    [anon_sym_root] = ACTIONS(108),
    [anon_sym_stackrel] = ACTIONS(108),
    [anon_sym_choose] = ACTIONS(108),
    [anon_sym_atop] = ACTIONS(108),
    [anon_sym_over] = ACTIONS(108),
    [sym_multi_linebreak] = ACTIONS(108),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_LBRACE_COLON] = ACTIONS(106),
    [anon_sym_LPAREN_COLON] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_number_symbol] = ACTIONS(102),
    [anon_sym_alpha] = ACTIONS(104),
    [anon_sym_beta] = ACTIONS(104),
    [anon_sym_gamma] = ACTIONS(104),
    [anon_sym_delta] = ACTIONS(104),
    [anon_sym_epsilon] = ACTIONS(104),
    [anon_sym_zeta] = ACTIONS(104),
    [anon_sym_eta] = ACTIONS(104),
    [anon_sym_theta] = ACTIONS(104),
    [anon_sym_iota] = ACTIONS(104),
    [anon_sym_kappa] = ACTIONS(104),
    [anon_sym_lambda] = ACTIONS(104),
    [anon_sym_mu] = ACTIONS(104),
    [anon_sym_nu] = ACTIONS(104),
    [anon_sym_xi] = ACTIONS(104),
    [anon_sym_omicron] = ACTIONS(104),
    [anon_sym_pi] = ACTIONS(104),
    [anon_sym_rho] = ACTIONS(104),
    [anon_sym_sigma] = ACTIONS(104),
    [anon_sym_tau] = ACTIONS(104),
    [anon_sym_upsilon] = ACTIONS(104),
    [anon_sym_phi] = ACTIONS(104),
    [anon_sym_chi] = ACTIONS(104),
    [anon_sym_psi] = ACTIONS(104),
    [anon_sym_omega] = ACTIONS(104),
    [anon_sym_Alpha] = ACTIONS(104),
    [anon_sym_Beta] = ACTIONS(104),
    [anon_sym_Gamma] = ACTIONS(104),
    [anon_sym_Delta] = ACTIONS(104),
    [anon_sym_Epsilon] = ACTIONS(104),
    [anon_sym_Zeta] = ACTIONS(104),
    [anon_sym_Eta] = ACTIONS(104),
    [anon_sym_Theta] = ACTIONS(104),
    [anon_sym_Iota] = ACTIONS(104),
    [anon_sym_Kappa] = ACTIONS(104),
    [anon_sym_Lambda] = ACTIONS(104),
    [anon_sym_Mu] = ACTIONS(104),
    [anon_sym_Nu] = ACTIONS(104),
    [anon_sym_Xi] = ACTIONS(104),
    [anon_sym_Omicron] = ACTIONS(104),
    [anon_sym_Pi] = ACTIONS(104),
    [anon_sym_Rho] = ACTIONS(104),
    [anon_sym_Sigma] = ACTIONS(104),
    [anon_sym_Tau] = ACTIONS(104),
    [anon_sym_Upsilon] = ACTIONS(104),
    [anon_sym_Phi] = ACTIONS(104),
    [anon_sym_Chi] = ACTIONS(104),
    [anon_sym_Psi] = ACTIONS(104),
    [anon_sym_Omega] = ACTIONS(104),
    [anon_sym_infty] = ACTIONS(104),
    [anon_sym_hbar] = ACTIONS(104),
    [anon_sym_ell] = ACTIONS(104),
    [anon_sym_Re] = ACTIONS(104),
    [anon_sym_Im] = ACTIONS(104),
    [anon_sym_aleph] = ACTIONS(104),
    [anon_sym_nabla] = ACTIONS(104),
    [anon_sym_partial] = ACTIONS(104),
    [anon_sym_forall] = ACTIONS(104),
    [anon_sym_exists] = ACTIONS(104),
    [anon_sym_emptyset] = ACTIONS(104),
    [anon_sym_grad] = ACTIONS(104),
    [anon_sym_del] = ACTIONS(104),
    [anon_sym_pm] = ACTIONS(104),
    [anon_sym_mp] = ACTIONS(104),
    [aux_sym_constant_symbol_token1] = ACTIONS(104),
    [aux_sym_constant_symbol_token2] = ACTIONS(102),
    [anon_sym_sqrt] = ACTIONS(104),
    [anon_sym_text] = ACTIONS(104),
    [anon_sym_bb] = ACTIONS(104),
    [anon_sym_cc] = ACTIONS(104),
    [anon_sym_tt] = ACTIONS(104),
    [anon_sym_fr] = ACTIONS(104),
    [anon_sym_sf] = ACTIONS(104),
    [anon_sym_bold] = ACTIONS(104),
    [anon_sym_cal] = ACTIONS(104),
    [anon_sym_frak] = ACTIONS(104),
    [anon_sym_monospace] = ACTIONS(104),
    [anon_sym_italic] = ACTIONS(104),
    [anon_sym_frac] = ACTIONS(104),
    [anon_sym_root] = ACTIONS(104),
    [anon_sym_stackrel] = ACTIONS(104),
    [anon_sym_choose] = ACTIONS(104),
    [anon_sym_atop] = ACTIONS(104),
    [anon_sym_over] = ACTIONS(104),
    [sym_multi_linebreak] = ACTIONS(104),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_LBRACE_COLON] = ACTIONS(102),
    [anon_sym_LPAREN_COLON] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_number_symbol] = ACTIONS(122),
    [anon_sym_alpha] = ACTIONS(124),
    [anon_sym_beta] = ACTIONS(124),
    [anon_sym_gamma] = ACTIONS(124),
    [anon_sym_delta] = ACTIONS(124),
    [anon_sym_epsilon] = ACTIONS(124),
    [anon_sym_zeta] = ACTIONS(124),
    [anon_sym_eta] = ACTIONS(124),
    [anon_sym_theta] = ACTIONS(124),
    [anon_sym_iota] = ACTIONS(124),
    [anon_sym_kappa] = ACTIONS(124),
    [anon_sym_lambda] = ACTIONS(124),
    [anon_sym_mu] = ACTIONS(124),
    [anon_sym_nu] = ACTIONS(124),
    [anon_sym_xi] = ACTIONS(124),
    [anon_sym_omicron] = ACTIONS(124),
    [anon_sym_pi] = ACTIONS(124),
    [anon_sym_rho] = ACTIONS(124),
    [anon_sym_sigma] = ACTIONS(124),
    [anon_sym_tau] = ACTIONS(124),
    [anon_sym_upsilon] = ACTIONS(124),
    [anon_sym_phi] = ACTIONS(124),
    [anon_sym_chi] = ACTIONS(124),
    [anon_sym_psi] = ACTIONS(124),
    [anon_sym_omega] = ACTIONS(124),
    [anon_sym_Alpha] = ACTIONS(124),
    [anon_sym_Beta] = ACTIONS(124),
    [anon_sym_Gamma] = ACTIONS(124),
    [anon_sym_Delta] = ACTIONS(124),
    [anon_sym_Epsilon] = ACTIONS(124),
    [anon_sym_Zeta] = ACTIONS(124),
    [anon_sym_Eta] = ACTIONS(124),
    [anon_sym_Theta] = ACTIONS(124),
    [anon_sym_Iota] = ACTIONS(124),
    [anon_sym_Kappa] = ACTIONS(124),
    [anon_sym_Lambda] = ACTIONS(124),
    [anon_sym_Mu] = ACTIONS(124),
    [anon_sym_Nu] = ACTIONS(124),
    [anon_sym_Xi] = ACTIONS(124),
    [anon_sym_Omicron] = ACTIONS(124),
    [anon_sym_Pi] = ACTIONS(124),
    [anon_sym_Rho] = ACTIONS(124),
    [anon_sym_Sigma] = ACTIONS(124),
    [anon_sym_Tau] = ACTIONS(124),
    [anon_sym_Upsilon] = ACTIONS(124),
    [anon_sym_Phi] = ACTIONS(124),
    [anon_sym_Chi] = ACTIONS(124),
    [anon_sym_Psi] = ACTIONS(124),
    [anon_sym_Omega] = ACTIONS(124),
    [anon_sym_infty] = ACTIONS(124),
    [anon_sym_hbar] = ACTIONS(124),
    [anon_sym_ell] = ACTIONS(124),
    [anon_sym_Re] = ACTIONS(124),
    [anon_sym_Im] = ACTIONS(124),
    [anon_sym_aleph] = ACTIONS(124),
    [anon_sym_nabla] = ACTIONS(124),
    [anon_sym_partial] = ACTIONS(124),
    [anon_sym_forall] = ACTIONS(124),
    [anon_sym_exists] = ACTIONS(124),
    [anon_sym_emptyset] = ACTIONS(124),
    [anon_sym_grad] = ACTIONS(124),
    [anon_sym_del] = ACTIONS(124),
    [anon_sym_pm] = ACTIONS(124),
    [anon_sym_mp] = ACTIONS(124),
    [aux_sym_constant_symbol_token1] = ACTIONS(124),
    [aux_sym_constant_symbol_token2] = ACTIONS(122),
    [anon_sym_sqrt] = ACTIONS(124),
    [anon_sym_text] = ACTIONS(124),
    [anon_sym_bb] = ACTIONS(124),
    [anon_sym_cc] = ACTIONS(124),
    [anon_sym_tt] = ACTIONS(124),
    [anon_sym_fr] = ACTIONS(124),
    [anon_sym_sf] = ACTIONS(124),
    [anon_sym_bold] = ACTIONS(124),
    [anon_sym_cal] = ACTIONS(124),
    [anon_sym_frak] = ACTIONS(124),
    [anon_sym_monospace] = ACTIONS(124),
    [anon_sym_italic] = ACTIONS(124),
    [anon_sym_frac] = ACTIONS(124),
    [anon_sym_root] = ACTIONS(124),
    [anon_sym_stackrel] = ACTIONS(124),
    [anon_sym_choose] = ACTIONS(124),
    [anon_sym_atop] = ACTIONS(124),
    [anon_sym_over] = ACTIONS(124),
    [sym_multi_linebreak] = ACTIONS(124),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_LBRACE_COLON] = ACTIONS(122),
    [anon_sym_LPAREN_COLON] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_number_symbol] = ACTIONS(90),
    [anon_sym_alpha] = ACTIONS(92),
    [anon_sym_beta] = ACTIONS(92),
    [anon_sym_gamma] = ACTIONS(92),
    [anon_sym_delta] = ACTIONS(92),
    [anon_sym_epsilon] = ACTIONS(92),
    [anon_sym_zeta] = ACTIONS(92),
    [anon_sym_eta] = ACTIONS(92),
    [anon_sym_theta] = ACTIONS(92),
    [anon_sym_iota] = ACTIONS(92),
    [anon_sym_kappa] = ACTIONS(92),
    [anon_sym_lambda] = ACTIONS(92),
    [anon_sym_mu] = ACTIONS(92),
    [anon_sym_nu] = ACTIONS(92),
    [anon_sym_xi] = ACTIONS(92),
    [anon_sym_omicron] = ACTIONS(92),
    [anon_sym_pi] = ACTIONS(92),
    [anon_sym_rho] = ACTIONS(92),
    [anon_sym_sigma] = ACTIONS(92),
    [anon_sym_tau] = ACTIONS(92),
    [anon_sym_upsilon] = ACTIONS(92),
    [anon_sym_phi] = ACTIONS(92),
    [anon_sym_chi] = ACTIONS(92),
    [anon_sym_psi] = ACTIONS(92),
    [anon_sym_omega] = ACTIONS(92),
    [anon_sym_Alpha] = ACTIONS(92),
    [anon_sym_Beta] = ACTIONS(92),
    [anon_sym_Gamma] = ACTIONS(92),
    [anon_sym_Delta] = ACTIONS(92),
    [anon_sym_Epsilon] = ACTIONS(92),
    [anon_sym_Zeta] = ACTIONS(92),
    [anon_sym_Eta] = ACTIONS(92),
    [anon_sym_Theta] = ACTIONS(92),
    [anon_sym_Iota] = ACTIONS(92),
    [anon_sym_Kappa] = ACTIONS(92),
    [anon_sym_Lambda] = ACTIONS(92),
    [anon_sym_Mu] = ACTIONS(92),
    [anon_sym_Nu] = ACTIONS(92),
    [anon_sym_Xi] = ACTIONS(92),
    [anon_sym_Omicron] = ACTIONS(92),
    [anon_sym_Pi] = ACTIONS(92),
    [anon_sym_Rho] = ACTIONS(92),
    [anon_sym_Sigma] = ACTIONS(92),
    [anon_sym_Tau] = ACTIONS(92),
    [anon_sym_Upsilon] = ACTIONS(92),
    [anon_sym_Phi] = ACTIONS(92),
    [anon_sym_Chi] = ACTIONS(92),
    [anon_sym_Psi] = ACTIONS(92),
    [anon_sym_Omega] = ACTIONS(92),
    [anon_sym_infty] = ACTIONS(92),
    [anon_sym_hbar] = ACTIONS(92),
    [anon_sym_ell] = ACTIONS(92),
    [anon_sym_Re] = ACTIONS(92),
    [anon_sym_Im] = ACTIONS(92),
    [anon_sym_aleph] = ACTIONS(92),
    [anon_sym_nabla] = ACTIONS(92),
    [anon_sym_partial] = ACTIONS(92),
    [anon_sym_forall] = ACTIONS(92),
    [anon_sym_exists] = ACTIONS(92),
    [anon_sym_emptyset] = ACTIONS(92),
    [anon_sym_grad] = ACTIONS(92),
    [anon_sym_del] = ACTIONS(92),
    [anon_sym_pm] = ACTIONS(92),
    [anon_sym_mp] = ACTIONS(92),
    [aux_sym_constant_symbol_token1] = ACTIONS(92),
    [aux_sym_constant_symbol_token2] = ACTIONS(90),
    [anon_sym_sqrt] = ACTIONS(92),
    [anon_sym_text] = ACTIONS(92),
    [anon_sym_bb] = ACTIONS(92),
    [anon_sym_cc] = ACTIONS(92),
    [anon_sym_tt] = ACTIONS(92),
    [anon_sym_fr] = ACTIONS(92),
    [anon_sym_sf] = ACTIONS(92),
    [anon_sym_bold] = ACTIONS(92),
    [anon_sym_cal] = ACTIONS(92),
    [anon_sym_frak] = ACTIONS(92),
    [anon_sym_monospace] = ACTIONS(92),
    [anon_sym_italic] = ACTIONS(92),
    [anon_sym_frac] = ACTIONS(92),
    [anon_sym_root] = ACTIONS(92),
    [anon_sym_stackrel] = ACTIONS(92),
    [anon_sym_choose] = ACTIONS(92),
    [anon_sym_atop] = ACTIONS(92),
    [anon_sym_over] = ACTIONS(92),
    [sym_multi_linebreak] = ACTIONS(92),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_LBRACE_COLON] = ACTIONS(90),
    [anon_sym_LPAREN_COLON] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_number_symbol] = ACTIONS(98),
    [anon_sym_alpha] = ACTIONS(100),
    [anon_sym_beta] = ACTIONS(100),
    [anon_sym_gamma] = ACTIONS(100),
    [anon_sym_delta] = ACTIONS(100),
    [anon_sym_epsilon] = ACTIONS(100),
    [anon_sym_zeta] = ACTIONS(100),
    [anon_sym_eta] = ACTIONS(100),
    [anon_sym_theta] = ACTIONS(100),
    [anon_sym_iota] = ACTIONS(100),
    [anon_sym_kappa] = ACTIONS(100),
    [anon_sym_lambda] = ACTIONS(100),
    [anon_sym_mu] = ACTIONS(100),
    [anon_sym_nu] = ACTIONS(100),
    [anon_sym_xi] = ACTIONS(100),
    [anon_sym_omicron] = ACTIONS(100),
    [anon_sym_pi] = ACTIONS(100),
    [anon_sym_rho] = ACTIONS(100),
    [anon_sym_sigma] = ACTIONS(100),
    [anon_sym_tau] = ACTIONS(100),
    [anon_sym_upsilon] = ACTIONS(100),
    [anon_sym_phi] = ACTIONS(100),
    [anon_sym_chi] = ACTIONS(100),
    [anon_sym_psi] = ACTIONS(100),
    [anon_sym_omega] = ACTIONS(100),
    [anon_sym_Alpha] = ACTIONS(100),
    [anon_sym_Beta] = ACTIONS(100),
    [anon_sym_Gamma] = ACTIONS(100),
    [anon_sym_Delta] = ACTIONS(100),
    [anon_sym_Epsilon] = ACTIONS(100),
    [anon_sym_Zeta] = ACTIONS(100),
    [anon_sym_Eta] = ACTIONS(100),
    [anon_sym_Theta] = ACTIONS(100),
    [anon_sym_Iota] = ACTIONS(100),
    [anon_sym_Kappa] = ACTIONS(100),
    [anon_sym_Lambda] = ACTIONS(100),
    [anon_sym_Mu] = ACTIONS(100),
    [anon_sym_Nu] = ACTIONS(100),
    [anon_sym_Xi] = ACTIONS(100),
    [anon_sym_Omicron] = ACTIONS(100),
    [anon_sym_Pi] = ACTIONS(100),
    [anon_sym_Rho] = ACTIONS(100),
    [anon_sym_Sigma] = ACTIONS(100),
    [anon_sym_Tau] = ACTIONS(100),
    [anon_sym_Upsilon] = ACTIONS(100),
    [anon_sym_Phi] = ACTIONS(100),
    [anon_sym_Chi] = ACTIONS(100),
    [anon_sym_Psi] = ACTIONS(100),
    [anon_sym_Omega] = ACTIONS(100),
    [anon_sym_infty] = ACTIONS(100),
    [anon_sym_hbar] = ACTIONS(100),
    [anon_sym_ell] = ACTIONS(100),
    [anon_sym_Re] = ACTIONS(100),
    [anon_sym_Im] = ACTIONS(100),
    [anon_sym_aleph] = ACTIONS(100),
    [anon_sym_nabla] = ACTIONS(100),
    [anon_sym_partial] = ACTIONS(100),
    [anon_sym_forall] = ACTIONS(100),
    [anon_sym_exists] = ACTIONS(100),
    [anon_sym_emptyset] = ACTIONS(100),
    [anon_sym_grad] = ACTIONS(100),
    [anon_sym_del] = ACTIONS(100),
    [anon_sym_pm] = ACTIONS(100),
    [anon_sym_mp] = ACTIONS(100),
    [aux_sym_constant_symbol_token1] = ACTIONS(100),
    [aux_sym_constant_symbol_token2] = ACTIONS(98),
    [anon_sym_sqrt] = ACTIONS(100),
    [anon_sym_text] = ACTIONS(100),
    [anon_sym_bb] = ACTIONS(100),
    [anon_sym_cc] = ACTIONS(100),
    [anon_sym_tt] = ACTIONS(100),
    [anon_sym_fr] = ACTIONS(100),
    [anon_sym_sf] = ACTIONS(100),
    [anon_sym_bold] = ACTIONS(100),
    [anon_sym_cal] = ACTIONS(100),
    [anon_sym_frak] = ACTIONS(100),
    [anon_sym_monospace] = ACTIONS(100),
    [anon_sym_italic] = ACTIONS(100),
    [anon_sym_frac] = ACTIONS(100),
    [anon_sym_root] = ACTIONS(100),
    [anon_sym_stackrel] = ACTIONS(100),
    [anon_sym_choose] = ACTIONS(100),
    [anon_sym_atop] = ACTIONS(100),
    [anon_sym_over] = ACTIONS(100),
    [sym_multi_linebreak] = ACTIONS(100),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_LBRACE_COLON] = ACTIONS(98),
    [anon_sym_LPAREN_COLON] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_number_symbol] = ACTIONS(76),
    [anon_sym_alpha] = ACTIONS(78),
    [anon_sym_beta] = ACTIONS(78),
    [anon_sym_gamma] = ACTIONS(78),
    [anon_sym_delta] = ACTIONS(78),
    [anon_sym_epsilon] = ACTIONS(78),
    [anon_sym_zeta] = ACTIONS(78),
    [anon_sym_eta] = ACTIONS(78),
    [anon_sym_theta] = ACTIONS(78),
    [anon_sym_iota] = ACTIONS(78),
    [anon_sym_kappa] = ACTIONS(78),
    [anon_sym_lambda] = ACTIONS(78),
    [anon_sym_mu] = ACTIONS(78),
    [anon_sym_nu] = ACTIONS(78),
    [anon_sym_xi] = ACTIONS(78),
    [anon_sym_omicron] = ACTIONS(78),
    [anon_sym_pi] = ACTIONS(78),
    [anon_sym_rho] = ACTIONS(78),
    [anon_sym_sigma] = ACTIONS(78),
    [anon_sym_tau] = ACTIONS(78),
    [anon_sym_upsilon] = ACTIONS(78),
    [anon_sym_phi] = ACTIONS(78),
    [anon_sym_chi] = ACTIONS(78),
    [anon_sym_psi] = ACTIONS(78),
    [anon_sym_omega] = ACTIONS(78),
    [anon_sym_Alpha] = ACTIONS(78),
    [anon_sym_Beta] = ACTIONS(78),
    [anon_sym_Gamma] = ACTIONS(78),
    [anon_sym_Delta] = ACTIONS(78),
    [anon_sym_Epsilon] = ACTIONS(78),
    [anon_sym_Zeta] = ACTIONS(78),
    [anon_sym_Eta] = ACTIONS(78),
    [anon_sym_Theta] = ACTIONS(78),
    [anon_sym_Iota] = ACTIONS(78),
    [anon_sym_Kappa] = ACTIONS(78),
    [anon_sym_Lambda] = ACTIONS(78),
    [anon_sym_Mu] = ACTIONS(78),
    [anon_sym_Nu] = ACTIONS(78),
    [anon_sym_Xi] = ACTIONS(78),
    [anon_sym_Omicron] = ACTIONS(78),
    [anon_sym_Pi] = ACTIONS(78),
    [anon_sym_Rho] = ACTIONS(78),
    [anon_sym_Sigma] = ACTIONS(78),
    [anon_sym_Tau] = ACTIONS(78),
    [anon_sym_Upsilon] = ACTIONS(78),
    [anon_sym_Phi] = ACTIONS(78),
    [anon_sym_Chi] = ACTIONS(78),
    [anon_sym_Psi] = ACTIONS(78),
    [anon_sym_Omega] = ACTIONS(78),
    [anon_sym_infty] = ACTIONS(78),
    [anon_sym_hbar] = ACTIONS(78),
    [anon_sym_ell] = ACTIONS(78),
    [anon_sym_Re] = ACTIONS(78),
    [anon_sym_Im] = ACTIONS(78),
    [anon_sym_aleph] = ACTIONS(78),
    [anon_sym_nabla] = ACTIONS(78),
    [anon_sym_partial] = ACTIONS(78),
    [anon_sym_forall] = ACTIONS(78),
    [anon_sym_exists] = ACTIONS(78),
    [anon_sym_emptyset] = ACTIONS(78),
    [anon_sym_grad] = ACTIONS(78),
    [anon_sym_del] = ACTIONS(78),
    [anon_sym_pm] = ACTIONS(78),
    [anon_sym_mp] = ACTIONS(78),
    [aux_sym_constant_symbol_token1] = ACTIONS(78),
    [aux_sym_constant_symbol_token2] = ACTIONS(76),
    [anon_sym_sqrt] = ACTIONS(78),
    [anon_sym_text] = ACTIONS(78),
    [anon_sym_bb] = ACTIONS(78),
    [anon_sym_cc] = ACTIONS(78),
    [anon_sym_tt] = ACTIONS(78),
    [anon_sym_fr] = ACTIONS(78),
    [anon_sym_sf] = ACTIONS(78),
    [anon_sym_bold] = ACTIONS(78),
    [anon_sym_cal] = ACTIONS(78),
    [anon_sym_frak] = ACTIONS(78),
    [anon_sym_monospace] = ACTIONS(78),
    [anon_sym_italic] = ACTIONS(78),
    [anon_sym_frac] = ACTIONS(78),
    [anon_sym_root] = ACTIONS(78),
    [anon_sym_stackrel] = ACTIONS(78),
    [anon_sym_choose] = ACTIONS(78),
    [anon_sym_atop] = ACTIONS(78),
    [anon_sym_over] = ACTIONS(78),
    [sym_multi_linebreak] = ACTIONS(78),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LBRACE_COLON] = ACTIONS(76),
    [anon_sym_LPAREN_COLON] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_number_symbol] = ACTIONS(82),
    [anon_sym_alpha] = ACTIONS(84),
    [anon_sym_beta] = ACTIONS(84),
    [anon_sym_gamma] = ACTIONS(84),
    [anon_sym_delta] = ACTIONS(84),
    [anon_sym_epsilon] = ACTIONS(84),
    [anon_sym_zeta] = ACTIONS(84),
    [anon_sym_eta] = ACTIONS(84),
    [anon_sym_theta] = ACTIONS(84),
    [anon_sym_iota] = ACTIONS(84),
    [anon_sym_kappa] = ACTIONS(84),
    [anon_sym_lambda] = ACTIONS(84),
    [anon_sym_mu] = ACTIONS(84),
    [anon_sym_nu] = ACTIONS(84),
    [anon_sym_xi] = ACTIONS(84),
    [anon_sym_omicron] = ACTIONS(84),
    [anon_sym_pi] = ACTIONS(84),
    [anon_sym_rho] = ACTIONS(84),
    [anon_sym_sigma] = ACTIONS(84),
    [anon_sym_tau] = ACTIONS(84),
    [anon_sym_upsilon] = ACTIONS(84),
    [anon_sym_phi] = ACTIONS(84),
    [anon_sym_chi] = ACTIONS(84),
    [anon_sym_psi] = ACTIONS(84),
    [anon_sym_omega] = ACTIONS(84),
    [anon_sym_Alpha] = ACTIONS(84),
    [anon_sym_Beta] = ACTIONS(84),
    [anon_sym_Gamma] = ACTIONS(84),
    [anon_sym_Delta] = ACTIONS(84),
    [anon_sym_Epsilon] = ACTIONS(84),
    [anon_sym_Zeta] = ACTIONS(84),
    [anon_sym_Eta] = ACTIONS(84),
    [anon_sym_Theta] = ACTIONS(84),
    [anon_sym_Iota] = ACTIONS(84),
    [anon_sym_Kappa] = ACTIONS(84),
    [anon_sym_Lambda] = ACTIONS(84),
    [anon_sym_Mu] = ACTIONS(84),
    [anon_sym_Nu] = ACTIONS(84),
    [anon_sym_Xi] = ACTIONS(84),
    [anon_sym_Omicron] = ACTIONS(84),
    [anon_sym_Pi] = ACTIONS(84),
    [anon_sym_Rho] = ACTIONS(84),
    [anon_sym_Sigma] = ACTIONS(84),
    [anon_sym_Tau] = ACTIONS(84),
    [anon_sym_Upsilon] = ACTIONS(84),
    [anon_sym_Phi] = ACTIONS(84),
    [anon_sym_Chi] = ACTIONS(84),
    [anon_sym_Psi] = ACTIONS(84),
    [anon_sym_Omega] = ACTIONS(84),
    [anon_sym_infty] = ACTIONS(84),
    [anon_sym_hbar] = ACTIONS(84),
    [anon_sym_ell] = ACTIONS(84),
    [anon_sym_Re] = ACTIONS(84),
    [anon_sym_Im] = ACTIONS(84),
    [anon_sym_aleph] = ACTIONS(84),
    [anon_sym_nabla] = ACTIONS(84),
    [anon_sym_partial] = ACTIONS(84),
    [anon_sym_forall] = ACTIONS(84),
    [anon_sym_exists] = ACTIONS(84),
    [anon_sym_emptyset] = ACTIONS(84),
    [anon_sym_grad] = ACTIONS(84),
    [anon_sym_del] = ACTIONS(84),
    [anon_sym_pm] = ACTIONS(84),
    [anon_sym_mp] = ACTIONS(84),
    [aux_sym_constant_symbol_token1] = ACTIONS(84),
    [aux_sym_constant_symbol_token2] = ACTIONS(82),
    [anon_sym_sqrt] = ACTIONS(84),
    [anon_sym_text] = ACTIONS(84),
    [anon_sym_bb] = ACTIONS(84),
    [anon_sym_cc] = ACTIONS(84),
    [anon_sym_tt] = ACTIONS(84),
    [anon_sym_fr] = ACTIONS(84),
    [anon_sym_sf] = ACTIONS(84),
    [anon_sym_bold] = ACTIONS(84),
    [anon_sym_cal] = ACTIONS(84),
    [anon_sym_frak] = ACTIONS(84),
    [anon_sym_monospace] = ACTIONS(84),
    [anon_sym_italic] = ACTIONS(84),
    [anon_sym_frac] = ACTIONS(84),
    [anon_sym_root] = ACTIONS(84),
    [anon_sym_stackrel] = ACTIONS(84),
    [anon_sym_choose] = ACTIONS(84),
    [anon_sym_atop] = ACTIONS(84),
    [anon_sym_over] = ACTIONS(84),
    [sym_multi_linebreak] = ACTIONS(84),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_LBRACE_COLON] = ACTIONS(82),
    [anon_sym_LPAREN_COLON] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_number_symbol] = ACTIONS(110),
    [anon_sym_alpha] = ACTIONS(112),
    [anon_sym_beta] = ACTIONS(112),
    [anon_sym_gamma] = ACTIONS(112),
    [anon_sym_delta] = ACTIONS(112),
    [anon_sym_epsilon] = ACTIONS(112),
    [anon_sym_zeta] = ACTIONS(112),
    [anon_sym_eta] = ACTIONS(112),
    [anon_sym_theta] = ACTIONS(112),
    [anon_sym_iota] = ACTIONS(112),
    [anon_sym_kappa] = ACTIONS(112),
    [anon_sym_lambda] = ACTIONS(112),
    [anon_sym_mu] = ACTIONS(112),
    [anon_sym_nu] = ACTIONS(112),
    [anon_sym_xi] = ACTIONS(112),
    [anon_sym_omicron] = ACTIONS(112),
    [anon_sym_pi] = ACTIONS(112),
    [anon_sym_rho] = ACTIONS(112),
    [anon_sym_sigma] = ACTIONS(112),
    [anon_sym_tau] = ACTIONS(112),
    [anon_sym_upsilon] = ACTIONS(112),
    [anon_sym_phi] = ACTIONS(112),
    [anon_sym_chi] = ACTIONS(112),
    [anon_sym_psi] = ACTIONS(112),
    [anon_sym_omega] = ACTIONS(112),
    [anon_sym_Alpha] = ACTIONS(112),
    [anon_sym_Beta] = ACTIONS(112),
    [anon_sym_Gamma] = ACTIONS(112),
    [anon_sym_Delta] = ACTIONS(112),
    [anon_sym_Epsilon] = ACTIONS(112),
    [anon_sym_Zeta] = ACTIONS(112),
    [anon_sym_Eta] = ACTIONS(112),
    [anon_sym_Theta] = ACTIONS(112),
    [anon_sym_Iota] = ACTIONS(112),
    [anon_sym_Kappa] = ACTIONS(112),
    [anon_sym_Lambda] = ACTIONS(112),
    [anon_sym_Mu] = ACTIONS(112),
    [anon_sym_Nu] = ACTIONS(112),
    [anon_sym_Xi] = ACTIONS(112),
    [anon_sym_Omicron] = ACTIONS(112),
    [anon_sym_Pi] = ACTIONS(112),
    [anon_sym_Rho] = ACTIONS(112),
    [anon_sym_Sigma] = ACTIONS(112),
    [anon_sym_Tau] = ACTIONS(112),
    [anon_sym_Upsilon] = ACTIONS(112),
    [anon_sym_Phi] = ACTIONS(112),
    [anon_sym_Chi] = ACTIONS(112),
    [anon_sym_Psi] = ACTIONS(112),
    [anon_sym_Omega] = ACTIONS(112),
    [anon_sym_infty] = ACTIONS(112),
    [anon_sym_hbar] = ACTIONS(112),
    [anon_sym_ell] = ACTIONS(112),
    [anon_sym_Re] = ACTIONS(112),
    [anon_sym_Im] = ACTIONS(112),
    [anon_sym_aleph] = ACTIONS(112),
    [anon_sym_nabla] = ACTIONS(112),
    [anon_sym_partial] = ACTIONS(112),
    [anon_sym_forall] = ACTIONS(112),
    [anon_sym_exists] = ACTIONS(112),
    [anon_sym_emptyset] = ACTIONS(112),
    [anon_sym_grad] = ACTIONS(112),
    [anon_sym_del] = ACTIONS(112),
    [anon_sym_pm] = ACTIONS(112),
    [anon_sym_mp] = ACTIONS(112),
    [aux_sym_constant_symbol_token1] = ACTIONS(112),
    [aux_sym_constant_symbol_token2] = ACTIONS(110),
    [anon_sym_sqrt] = ACTIONS(112),
    [anon_sym_text] = ACTIONS(112),
    [anon_sym_bb] = ACTIONS(112),
    [anon_sym_cc] = ACTIONS(112),
    [anon_sym_tt] = ACTIONS(112),
    [anon_sym_fr] = ACTIONS(112),
    [anon_sym_sf] = ACTIONS(112),
    [anon_sym_bold] = ACTIONS(112),
    [anon_sym_cal] = ACTIONS(112),
    [anon_sym_frak] = ACTIONS(112),
    [anon_sym_monospace] = ACTIONS(112),
    [anon_sym_italic] = ACTIONS(112),
    [anon_sym_frac] = ACTIONS(112),
    [anon_sym_root] = ACTIONS(112),
    [anon_sym_stackrel] = ACTIONS(112),
    [anon_sym_choose] = ACTIONS(112),
    [anon_sym_atop] = ACTIONS(112),
    [anon_sym_over] = ACTIONS(112),
    [sym_multi_linebreak] = ACTIONS(112),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LBRACE_COLON] = ACTIONS(110),
    [anon_sym_LPAREN_COLON] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym__] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(146),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_number_symbol] = ACTIONS(94),
    [anon_sym_alpha] = ACTIONS(96),
    [anon_sym_beta] = ACTIONS(96),
    [anon_sym_gamma] = ACTIONS(96),
    [anon_sym_delta] = ACTIONS(96),
    [anon_sym_epsilon] = ACTIONS(96),
    [anon_sym_zeta] = ACTIONS(96),
    [anon_sym_eta] = ACTIONS(96),
    [anon_sym_theta] = ACTIONS(96),
    [anon_sym_iota] = ACTIONS(96),
    [anon_sym_kappa] = ACTIONS(96),
    [anon_sym_lambda] = ACTIONS(96),
    [anon_sym_mu] = ACTIONS(96),
    [anon_sym_nu] = ACTIONS(96),
    [anon_sym_xi] = ACTIONS(96),
    [anon_sym_omicron] = ACTIONS(96),
    [anon_sym_pi] = ACTIONS(96),
    [anon_sym_rho] = ACTIONS(96),
    [anon_sym_sigma] = ACTIONS(96),
    [anon_sym_tau] = ACTIONS(96),
    [anon_sym_upsilon] = ACTIONS(96),
    [anon_sym_phi] = ACTIONS(96),
    [anon_sym_chi] = ACTIONS(96),
    [anon_sym_psi] = ACTIONS(96),
    [anon_sym_omega] = ACTIONS(96),
    [anon_sym_Alpha] = ACTIONS(96),
    [anon_sym_Beta] = ACTIONS(96),
    [anon_sym_Gamma] = ACTIONS(96),
    [anon_sym_Delta] = ACTIONS(96),
    [anon_sym_Epsilon] = ACTIONS(96),
    [anon_sym_Zeta] = ACTIONS(96),
    [anon_sym_Eta] = ACTIONS(96),
    [anon_sym_Theta] = ACTIONS(96),
    [anon_sym_Iota] = ACTIONS(96),
    [anon_sym_Kappa] = ACTIONS(96),
    [anon_sym_Lambda] = ACTIONS(96),
    [anon_sym_Mu] = ACTIONS(96),
    [anon_sym_Nu] = ACTIONS(96),
    [anon_sym_Xi] = ACTIONS(96),
    [anon_sym_Omicron] = ACTIONS(96),
    [anon_sym_Pi] = ACTIONS(96),
    [anon_sym_Rho] = ACTIONS(96),
    [anon_sym_Sigma] = ACTIONS(96),
    [anon_sym_Tau] = ACTIONS(96),
    [anon_sym_Upsilon] = ACTIONS(96),
    [anon_sym_Phi] = ACTIONS(96),
    [anon_sym_Chi] = ACTIONS(96),
    [anon_sym_Psi] = ACTIONS(96),
    [anon_sym_Omega] = ACTIONS(96),
    [anon_sym_infty] = ACTIONS(96),
    [anon_sym_hbar] = ACTIONS(96),
    [anon_sym_ell] = ACTIONS(96),
    [anon_sym_Re] = ACTIONS(96),
    [anon_sym_Im] = ACTIONS(96),
    [anon_sym_aleph] = ACTIONS(96),
    [anon_sym_nabla] = ACTIONS(96),
    [anon_sym_partial] = ACTIONS(96),
    [anon_sym_forall] = ACTIONS(96),
    [anon_sym_exists] = ACTIONS(96),
    [anon_sym_emptyset] = ACTIONS(96),
    [anon_sym_grad] = ACTIONS(96),
    [anon_sym_del] = ACTIONS(96),
    [anon_sym_pm] = ACTIONS(96),
    [anon_sym_mp] = ACTIONS(96),
    [aux_sym_constant_symbol_token1] = ACTIONS(96),
    [aux_sym_constant_symbol_token2] = ACTIONS(94),
    [anon_sym_sqrt] = ACTIONS(96),
    [anon_sym_text] = ACTIONS(96),
    [anon_sym_bb] = ACTIONS(96),
    [anon_sym_cc] = ACTIONS(96),
    [anon_sym_tt] = ACTIONS(96),
    [anon_sym_fr] = ACTIONS(96),
    [anon_sym_sf] = ACTIONS(96),
    [anon_sym_bold] = ACTIONS(96),
    [anon_sym_cal] = ACTIONS(96),
    [anon_sym_frak] = ACTIONS(96),
    [anon_sym_monospace] = ACTIONS(96),
    [anon_sym_italic] = ACTIONS(96),
    [anon_sym_frac] = ACTIONS(96),
    [anon_sym_root] = ACTIONS(96),
    [anon_sym_stackrel] = ACTIONS(96),
    [anon_sym_choose] = ACTIONS(96),
    [anon_sym_atop] = ACTIONS(96),
    [anon_sym_over] = ACTIONS(96),
    [sym_multi_linebreak] = ACTIONS(96),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_COLON] = ACTIONS(94),
    [anon_sym_LPAREN_COLON] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_number_symbol] = ACTIONS(130),
    [anon_sym_alpha] = ACTIONS(132),
    [anon_sym_beta] = ACTIONS(132),
    [anon_sym_gamma] = ACTIONS(132),
    [anon_sym_delta] = ACTIONS(132),
    [anon_sym_epsilon] = ACTIONS(132),
    [anon_sym_zeta] = ACTIONS(132),
    [anon_sym_eta] = ACTIONS(132),
    [anon_sym_theta] = ACTIONS(132),
    [anon_sym_iota] = ACTIONS(132),
    [anon_sym_kappa] = ACTIONS(132),
    [anon_sym_lambda] = ACTIONS(132),
    [anon_sym_mu] = ACTIONS(132),
    [anon_sym_nu] = ACTIONS(132),
    [anon_sym_xi] = ACTIONS(132),
    [anon_sym_omicron] = ACTIONS(132),
    [anon_sym_pi] = ACTIONS(132),
    [anon_sym_rho] = ACTIONS(132),
    [anon_sym_sigma] = ACTIONS(132),
    [anon_sym_tau] = ACTIONS(132),
    [anon_sym_upsilon] = ACTIONS(132),
    [anon_sym_phi] = ACTIONS(132),
    [anon_sym_chi] = ACTIONS(132),
    [anon_sym_psi] = ACTIONS(132),
    [anon_sym_omega] = ACTIONS(132),
    [anon_sym_Alpha] = ACTIONS(132),
    [anon_sym_Beta] = ACTIONS(132),
    [anon_sym_Gamma] = ACTIONS(132),
    [anon_sym_Delta] = ACTIONS(132),
    [anon_sym_Epsilon] = ACTIONS(132),
    [anon_sym_Zeta] = ACTIONS(132),
    [anon_sym_Eta] = ACTIONS(132),
    [anon_sym_Theta] = ACTIONS(132),
    [anon_sym_Iota] = ACTIONS(132),
    [anon_sym_Kappa] = ACTIONS(132),
    [anon_sym_Lambda] = ACTIONS(132),
    [anon_sym_Mu] = ACTIONS(132),
    [anon_sym_Nu] = ACTIONS(132),
    [anon_sym_Xi] = ACTIONS(132),
    [anon_sym_Omicron] = ACTIONS(132),
    [anon_sym_Pi] = ACTIONS(132),
    [anon_sym_Rho] = ACTIONS(132),
    [anon_sym_Sigma] = ACTIONS(132),
    [anon_sym_Tau] = ACTIONS(132),
    [anon_sym_Upsilon] = ACTIONS(132),
    [anon_sym_Phi] = ACTIONS(132),
    [anon_sym_Chi] = ACTIONS(132),
    [anon_sym_Psi] = ACTIONS(132),
    [anon_sym_Omega] = ACTIONS(132),
    [anon_sym_infty] = ACTIONS(132),
    [anon_sym_hbar] = ACTIONS(132),
    [anon_sym_ell] = ACTIONS(132),
    [anon_sym_Re] = ACTIONS(132),
    [anon_sym_Im] = ACTIONS(132),
    [anon_sym_aleph] = ACTIONS(132),
    [anon_sym_nabla] = ACTIONS(132),
    [anon_sym_partial] = ACTIONS(132),
    [anon_sym_forall] = ACTIONS(132),
    [anon_sym_exists] = ACTIONS(132),
    [anon_sym_emptyset] = ACTIONS(132),
    [anon_sym_grad] = ACTIONS(132),
    [anon_sym_del] = ACTIONS(132),
    [anon_sym_pm] = ACTIONS(132),
    [anon_sym_mp] = ACTIONS(132),
    [aux_sym_constant_symbol_token1] = ACTIONS(132),
    [aux_sym_constant_symbol_token2] = ACTIONS(130),
    [anon_sym_sqrt] = ACTIONS(132),
    [anon_sym_text] = ACTIONS(132),
    [anon_sym_bb] = ACTIONS(132),
    [anon_sym_cc] = ACTIONS(132),
    [anon_sym_tt] = ACTIONS(132),
    [anon_sym_fr] = ACTIONS(132),
    [anon_sym_sf] = ACTIONS(132),
    [anon_sym_bold] = ACTIONS(132),
    [anon_sym_cal] = ACTIONS(132),
    [anon_sym_frak] = ACTIONS(132),
    [anon_sym_monospace] = ACTIONS(132),
    [anon_sym_italic] = ACTIONS(132),
    [anon_sym_frac] = ACTIONS(132),
    [anon_sym_root] = ACTIONS(132),
    [anon_sym_stackrel] = ACTIONS(132),
    [anon_sym_choose] = ACTIONS(132),
    [anon_sym_atop] = ACTIONS(132),
    [anon_sym_over] = ACTIONS(132),
    [sym_multi_linebreak] = ACTIONS(132),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_LBRACE_COLON] = ACTIONS(130),
    [anon_sym_LPAREN_COLON] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(148),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_number_symbol] = ACTIONS(140),
    [anon_sym_alpha] = ACTIONS(142),
    [anon_sym_beta] = ACTIONS(142),
    [anon_sym_gamma] = ACTIONS(142),
    [anon_sym_delta] = ACTIONS(142),
    [anon_sym_epsilon] = ACTIONS(142),
    [anon_sym_zeta] = ACTIONS(142),
    [anon_sym_eta] = ACTIONS(142),
    [anon_sym_theta] = ACTIONS(142),
    [anon_sym_iota] = ACTIONS(142),
    [anon_sym_kappa] = ACTIONS(142),
    [anon_sym_lambda] = ACTIONS(142),
    [anon_sym_mu] = ACTIONS(142),
    [anon_sym_nu] = ACTIONS(142),
    [anon_sym_xi] = ACTIONS(142),
    [anon_sym_omicron] = ACTIONS(142),
    [anon_sym_pi] = ACTIONS(142),
    [anon_sym_rho] = ACTIONS(142),
    [anon_sym_sigma] = ACTIONS(142),
    [anon_sym_tau] = ACTIONS(142),
    [anon_sym_upsilon] = ACTIONS(142),
    [anon_sym_phi] = ACTIONS(142),
    [anon_sym_chi] = ACTIONS(142),
    [anon_sym_psi] = ACTIONS(142),
    [anon_sym_omega] = ACTIONS(142),
    [anon_sym_Alpha] = ACTIONS(142),
    [anon_sym_Beta] = ACTIONS(142),
    [anon_sym_Gamma] = ACTIONS(142),
    [anon_sym_Delta] = ACTIONS(142),
    [anon_sym_Epsilon] = ACTIONS(142),
    [anon_sym_Zeta] = ACTIONS(142),
    [anon_sym_Eta] = ACTIONS(142),
    [anon_sym_Theta] = ACTIONS(142),
    [anon_sym_Iota] = ACTIONS(142),
    [anon_sym_Kappa] = ACTIONS(142),
    [anon_sym_Lambda] = ACTIONS(142),
    [anon_sym_Mu] = ACTIONS(142),
    [anon_sym_Nu] = ACTIONS(142),
    [anon_sym_Xi] = ACTIONS(142),
    [anon_sym_Omicron] = ACTIONS(142),
    [anon_sym_Pi] = ACTIONS(142),
    [anon_sym_Rho] = ACTIONS(142),
    [anon_sym_Sigma] = ACTIONS(142),
    [anon_sym_Tau] = ACTIONS(142),
    [anon_sym_Upsilon] = ACTIONS(142),
    [anon_sym_Phi] = ACTIONS(142),
    [anon_sym_Chi] = ACTIONS(142),
    [anon_sym_Psi] = ACTIONS(142),
    [anon_sym_Omega] = ACTIONS(142),
    [anon_sym_infty] = ACTIONS(142),
    [anon_sym_hbar] = ACTIONS(142),
    [anon_sym_ell] = ACTIONS(142),
    [anon_sym_Re] = ACTIONS(142),
    [anon_sym_Im] = ACTIONS(142),
    [anon_sym_aleph] = ACTIONS(142),
    [anon_sym_nabla] = ACTIONS(142),
    [anon_sym_partial] = ACTIONS(142),
    [anon_sym_forall] = ACTIONS(142),
    [anon_sym_exists] = ACTIONS(142),
    [anon_sym_emptyset] = ACTIONS(142),
    [anon_sym_grad] = ACTIONS(142),
    [anon_sym_del] = ACTIONS(142),
    [anon_sym_pm] = ACTIONS(142),
    [anon_sym_mp] = ACTIONS(142),
    [aux_sym_constant_symbol_token1] = ACTIONS(142),
    [aux_sym_constant_symbol_token2] = ACTIONS(140),
    [anon_sym_sqrt] = ACTIONS(142),
    [anon_sym_text] = ACTIONS(142),
    [anon_sym_bb] = ACTIONS(142),
    [anon_sym_cc] = ACTIONS(142),
    [anon_sym_tt] = ACTIONS(142),
    [anon_sym_fr] = ACTIONS(142),
    [anon_sym_sf] = ACTIONS(142),
    [anon_sym_bold] = ACTIONS(142),
    [anon_sym_cal] = ACTIONS(142),
    [anon_sym_frak] = ACTIONS(142),
    [anon_sym_monospace] = ACTIONS(142),
    [anon_sym_italic] = ACTIONS(142),
    [anon_sym_frac] = ACTIONS(142),
    [anon_sym_root] = ACTIONS(142),
    [anon_sym_stackrel] = ACTIONS(142),
    [anon_sym_choose] = ACTIONS(142),
    [anon_sym_atop] = ACTIONS(142),
    [anon_sym_over] = ACTIONS(142),
    [sym_multi_linebreak] = ACTIONS(142),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_COLON] = ACTIONS(140),
    [anon_sym_LPAREN_COLON] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_number_symbol] = ACTIONS(136),
    [anon_sym_alpha] = ACTIONS(138),
    [anon_sym_beta] = ACTIONS(138),
    [anon_sym_gamma] = ACTIONS(138),
    [anon_sym_delta] = ACTIONS(138),
    [anon_sym_epsilon] = ACTIONS(138),
    [anon_sym_zeta] = ACTIONS(138),
    [anon_sym_eta] = ACTIONS(138),
    [anon_sym_theta] = ACTIONS(138),
    [anon_sym_iota] = ACTIONS(138),
    [anon_sym_kappa] = ACTIONS(138),
    [anon_sym_lambda] = ACTIONS(138),
    [anon_sym_mu] = ACTIONS(138),
    [anon_sym_nu] = ACTIONS(138),
    [anon_sym_xi] = ACTIONS(138),
    [anon_sym_omicron] = ACTIONS(138),
    [anon_sym_pi] = ACTIONS(138),
    [anon_sym_rho] = ACTIONS(138),
    [anon_sym_sigma] = ACTIONS(138),
    [anon_sym_tau] = ACTIONS(138),
    [anon_sym_upsilon] = ACTIONS(138),
    [anon_sym_phi] = ACTIONS(138),
    [anon_sym_chi] = ACTIONS(138),
    [anon_sym_psi] = ACTIONS(138),
    [anon_sym_omega] = ACTIONS(138),
    [anon_sym_Alpha] = ACTIONS(138),
    [anon_sym_Beta] = ACTIONS(138),
    [anon_sym_Gamma] = ACTIONS(138),
    [anon_sym_Delta] = ACTIONS(138),
    [anon_sym_Epsilon] = ACTIONS(138),
    [anon_sym_Zeta] = ACTIONS(138),
    [anon_sym_Eta] = ACTIONS(138),
    [anon_sym_Theta] = ACTIONS(138),
    [anon_sym_Iota] = ACTIONS(138),
    [anon_sym_Kappa] = ACTIONS(138),
    [anon_sym_Lambda] = ACTIONS(138),
    [anon_sym_Mu] = ACTIONS(138),
    [anon_sym_Nu] = ACTIONS(138),
    [anon_sym_Xi] = ACTIONS(138),
    [anon_sym_Omicron] = ACTIONS(138),
    [anon_sym_Pi] = ACTIONS(138),
    [anon_sym_Rho] = ACTIONS(138),
    [anon_sym_Sigma] = ACTIONS(138),
    [anon_sym_Tau] = ACTIONS(138),
    [anon_sym_Upsilon] = ACTIONS(138),
    [anon_sym_Phi] = ACTIONS(138),
    [anon_sym_Chi] = ACTIONS(138),
    [anon_sym_Psi] = ACTIONS(138),
    [anon_sym_Omega] = ACTIONS(138),
    [anon_sym_infty] = ACTIONS(138),
    [anon_sym_hbar] = ACTIONS(138),
    [anon_sym_ell] = ACTIONS(138),
    [anon_sym_Re] = ACTIONS(138),
    [anon_sym_Im] = ACTIONS(138),
    [anon_sym_aleph] = ACTIONS(138),
    [anon_sym_nabla] = ACTIONS(138),
    [anon_sym_partial] = ACTIONS(138),
    [anon_sym_forall] = ACTIONS(138),
    [anon_sym_exists] = ACTIONS(138),
    [anon_sym_emptyset] = ACTIONS(138),
    [anon_sym_grad] = ACTIONS(138),
    [anon_sym_del] = ACTIONS(138),
    [anon_sym_pm] = ACTIONS(138),
    [anon_sym_mp] = ACTIONS(138),
    [aux_sym_constant_symbol_token1] = ACTIONS(138),
    [aux_sym_constant_symbol_token2] = ACTIONS(136),
    [anon_sym_sqrt] = ACTIONS(138),
    [anon_sym_text] = ACTIONS(138),
    [anon_sym_bb] = ACTIONS(138),
    [anon_sym_cc] = ACTIONS(138),
    [anon_sym_tt] = ACTIONS(138),
    [anon_sym_fr] = ACTIONS(138),
    [anon_sym_sf] = ACTIONS(138),
    [anon_sym_bold] = ACTIONS(138),
    [anon_sym_cal] = ACTIONS(138),
    [anon_sym_frak] = ACTIONS(138),
    [anon_sym_monospace] = ACTIONS(138),
    [anon_sym_italic] = ACTIONS(138),
    [anon_sym_frac] = ACTIONS(138),
    [anon_sym_root] = ACTIONS(138),
    [anon_sym_stackrel] = ACTIONS(138),
    [anon_sym_choose] = ACTIONS(138),
    [anon_sym_atop] = ACTIONS(138),
    [anon_sym_over] = ACTIONS(138),
    [sym_multi_linebreak] = ACTIONS(138),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_LBRACE_COLON] = ACTIONS(136),
    [anon_sym_LPAREN_COLON] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_number_symbol] = ACTIONS(110),
    [anon_sym_alpha] = ACTIONS(112),
    [anon_sym_beta] = ACTIONS(112),
    [anon_sym_gamma] = ACTIONS(112),
    [anon_sym_delta] = ACTIONS(112),
    [anon_sym_epsilon] = ACTIONS(112),
    [anon_sym_zeta] = ACTIONS(112),
    [anon_sym_eta] = ACTIONS(112),
    [anon_sym_theta] = ACTIONS(112),
    [anon_sym_iota] = ACTIONS(112),
    [anon_sym_kappa] = ACTIONS(112),
    [anon_sym_lambda] = ACTIONS(112),
    [anon_sym_mu] = ACTIONS(112),
    [anon_sym_nu] = ACTIONS(112),
    [anon_sym_xi] = ACTIONS(112),
    [anon_sym_omicron] = ACTIONS(112),
    [anon_sym_pi] = ACTIONS(112),
    [anon_sym_rho] = ACTIONS(112),
    [anon_sym_sigma] = ACTIONS(112),
    [anon_sym_tau] = ACTIONS(112),
    [anon_sym_upsilon] = ACTIONS(112),
    [anon_sym_phi] = ACTIONS(112),
    [anon_sym_chi] = ACTIONS(112),
    [anon_sym_psi] = ACTIONS(112),
    [anon_sym_omega] = ACTIONS(112),
    [anon_sym_Alpha] = ACTIONS(112),
    [anon_sym_Beta] = ACTIONS(112),
    [anon_sym_Gamma] = ACTIONS(112),
    [anon_sym_Delta] = ACTIONS(112),
    [anon_sym_Epsilon] = ACTIONS(112),
    [anon_sym_Zeta] = ACTIONS(112),
    [anon_sym_Eta] = ACTIONS(112),
    [anon_sym_Theta] = ACTIONS(112),
    [anon_sym_Iota] = ACTIONS(112),
    [anon_sym_Kappa] = ACTIONS(112),
    [anon_sym_Lambda] = ACTIONS(112),
    [anon_sym_Mu] = ACTIONS(112),
    [anon_sym_Nu] = ACTIONS(112),
    [anon_sym_Xi] = ACTIONS(112),
    [anon_sym_Omicron] = ACTIONS(112),
    [anon_sym_Pi] = ACTIONS(112),
    [anon_sym_Rho] = ACTIONS(112),
    [anon_sym_Sigma] = ACTIONS(112),
    [anon_sym_Tau] = ACTIONS(112),
    [anon_sym_Upsilon] = ACTIONS(112),
    [anon_sym_Phi] = ACTIONS(112),
    [anon_sym_Chi] = ACTIONS(112),
    [anon_sym_Psi] = ACTIONS(112),
    [anon_sym_Omega] = ACTIONS(112),
    [anon_sym_infty] = ACTIONS(112),
    [anon_sym_hbar] = ACTIONS(112),
    [anon_sym_ell] = ACTIONS(112),
    [anon_sym_Re] = ACTIONS(112),
    [anon_sym_Im] = ACTIONS(112),
    [anon_sym_aleph] = ACTIONS(112),
    [anon_sym_nabla] = ACTIONS(112),
    [anon_sym_partial] = ACTIONS(112),
    [anon_sym_forall] = ACTIONS(112),
    [anon_sym_exists] = ACTIONS(112),
    [anon_sym_emptyset] = ACTIONS(112),
    [anon_sym_grad] = ACTIONS(112),
    [anon_sym_del] = ACTIONS(112),
    [anon_sym_pm] = ACTIONS(112),
    [anon_sym_mp] = ACTIONS(112),
    [aux_sym_constant_symbol_token1] = ACTIONS(112),
    [aux_sym_constant_symbol_token2] = ACTIONS(110),
    [anon_sym_sqrt] = ACTIONS(112),
    [anon_sym_text] = ACTIONS(112),
    [anon_sym_bb] = ACTIONS(112),
    [anon_sym_cc] = ACTIONS(112),
    [anon_sym_tt] = ACTIONS(112),
    [anon_sym_fr] = ACTIONS(112),
    [anon_sym_sf] = ACTIONS(112),
    [anon_sym_bold] = ACTIONS(112),
    [anon_sym_cal] = ACTIONS(112),
    [anon_sym_frak] = ACTIONS(112),
    [anon_sym_monospace] = ACTIONS(112),
    [anon_sym_italic] = ACTIONS(112),
    [anon_sym_frac] = ACTIONS(112),
    [anon_sym_root] = ACTIONS(112),
    [anon_sym_stackrel] = ACTIONS(112),
    [anon_sym_choose] = ACTIONS(112),
    [anon_sym_atop] = ACTIONS(112),
    [anon_sym_over] = ACTIONS(112),
    [sym_multi_linebreak] = ACTIONS(112),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_LBRACE_COLON] = ACTIONS(110),
    [anon_sym_LPAREN_COLON] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_number_symbol] = ACTIONS(150),
    [anon_sym_alpha] = ACTIONS(152),
    [anon_sym_beta] = ACTIONS(152),
    [anon_sym_gamma] = ACTIONS(152),
    [anon_sym_delta] = ACTIONS(152),
    [anon_sym_epsilon] = ACTIONS(152),
    [anon_sym_zeta] = ACTIONS(152),
    [anon_sym_eta] = ACTIONS(152),
    [anon_sym_theta] = ACTIONS(152),
    [anon_sym_iota] = ACTIONS(152),
    [anon_sym_kappa] = ACTIONS(152),
    [anon_sym_lambda] = ACTIONS(152),
    [anon_sym_mu] = ACTIONS(152),
    [anon_sym_nu] = ACTIONS(152),
    [anon_sym_xi] = ACTIONS(152),
    [anon_sym_omicron] = ACTIONS(152),
    [anon_sym_pi] = ACTIONS(152),
    [anon_sym_rho] = ACTIONS(152),
    [anon_sym_sigma] = ACTIONS(152),
    [anon_sym_tau] = ACTIONS(152),
    [anon_sym_upsilon] = ACTIONS(152),
    [anon_sym_phi] = ACTIONS(152),
    [anon_sym_chi] = ACTIONS(152),
    [anon_sym_psi] = ACTIONS(152),
    [anon_sym_omega] = ACTIONS(152),
    [anon_sym_Alpha] = ACTIONS(152),
    [anon_sym_Beta] = ACTIONS(152),
    [anon_sym_Gamma] = ACTIONS(152),
    [anon_sym_Delta] = ACTIONS(152),
    [anon_sym_Epsilon] = ACTIONS(152),
    [anon_sym_Zeta] = ACTIONS(152),
    [anon_sym_Eta] = ACTIONS(152),
    [anon_sym_Theta] = ACTIONS(152),
    [anon_sym_Iota] = ACTIONS(152),
    [anon_sym_Kappa] = ACTIONS(152),
    [anon_sym_Lambda] = ACTIONS(152),
    [anon_sym_Mu] = ACTIONS(152),
    [anon_sym_Nu] = ACTIONS(152),
    [anon_sym_Xi] = ACTIONS(152),
    [anon_sym_Omicron] = ACTIONS(152),
    [anon_sym_Pi] = ACTIONS(152),
    [anon_sym_Rho] = ACTIONS(152),
    [anon_sym_Sigma] = ACTIONS(152),
    [anon_sym_Tau] = ACTIONS(152),
    [anon_sym_Upsilon] = ACTIONS(152),
    [anon_sym_Phi] = ACTIONS(152),
    [anon_sym_Chi] = ACTIONS(152),
    [anon_sym_Psi] = ACTIONS(152),
    [anon_sym_Omega] = ACTIONS(152),
    [anon_sym_infty] = ACTIONS(152),
    [anon_sym_hbar] = ACTIONS(152),
    [anon_sym_ell] = ACTIONS(152),
    [anon_sym_Re] = ACTIONS(152),
    [anon_sym_Im] = ACTIONS(152),
    [anon_sym_aleph] = ACTIONS(152),
    [anon_sym_nabla] = ACTIONS(152),
    [anon_sym_partial] = ACTIONS(152),
    [anon_sym_forall] = ACTIONS(152),
    [anon_sym_exists] = ACTIONS(152),
    [anon_sym_emptyset] = ACTIONS(152),
    [anon_sym_grad] = ACTIONS(152),
    [anon_sym_del] = ACTIONS(152),
    [anon_sym_pm] = ACTIONS(152),
    [anon_sym_mp] = ACTIONS(152),
    [aux_sym_constant_symbol_token1] = ACTIONS(152),
    [aux_sym_constant_symbol_token2] = ACTIONS(150),
    [anon_sym_sqrt] = ACTIONS(152),
    [anon_sym_text] = ACTIONS(152),
    [anon_sym_bb] = ACTIONS(152),
    [anon_sym_cc] = ACTIONS(152),
    [anon_sym_tt] = ACTIONS(152),
    [anon_sym_fr] = ACTIONS(152),
    [anon_sym_sf] = ACTIONS(152),
    [anon_sym_bold] = ACTIONS(152),
    [anon_sym_cal] = ACTIONS(152),
    [anon_sym_frak] = ACTIONS(152),
    [anon_sym_monospace] = ACTIONS(152),
    [anon_sym_italic] = ACTIONS(152),
    [anon_sym_frac] = ACTIONS(152),
    [anon_sym_root] = ACTIONS(152),
    [anon_sym_stackrel] = ACTIONS(152),
    [anon_sym_choose] = ACTIONS(152),
    [anon_sym_atop] = ACTIONS(152),
    [anon_sym_over] = ACTIONS(152),
    [sym_multi_linebreak] = ACTIONS(152),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_COLON] = ACTIONS(150),
    [anon_sym_LPAREN_COLON] = ACTIONS(150),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_number_symbol] = ACTIONS(154),
    [anon_sym_alpha] = ACTIONS(156),
    [anon_sym_beta] = ACTIONS(156),
    [anon_sym_gamma] = ACTIONS(156),
    [anon_sym_delta] = ACTIONS(156),
    [anon_sym_epsilon] = ACTIONS(156),
    [anon_sym_zeta] = ACTIONS(156),
    [anon_sym_eta] = ACTIONS(156),
    [anon_sym_theta] = ACTIONS(156),
    [anon_sym_iota] = ACTIONS(156),
    [anon_sym_kappa] = ACTIONS(156),
    [anon_sym_lambda] = ACTIONS(156),
    [anon_sym_mu] = ACTIONS(156),
    [anon_sym_nu] = ACTIONS(156),
    [anon_sym_xi] = ACTIONS(156),
    [anon_sym_omicron] = ACTIONS(156),
    [anon_sym_pi] = ACTIONS(156),
    [anon_sym_rho] = ACTIONS(156),
    [anon_sym_sigma] = ACTIONS(156),
    [anon_sym_tau] = ACTIONS(156),
    [anon_sym_upsilon] = ACTIONS(156),
    [anon_sym_phi] = ACTIONS(156),
    [anon_sym_chi] = ACTIONS(156),
    [anon_sym_psi] = ACTIONS(156),
    [anon_sym_omega] = ACTIONS(156),
    [anon_sym_Alpha] = ACTIONS(156),
    [anon_sym_Beta] = ACTIONS(156),
    [anon_sym_Gamma] = ACTIONS(156),
    [anon_sym_Delta] = ACTIONS(156),
    [anon_sym_Epsilon] = ACTIONS(156),
    [anon_sym_Zeta] = ACTIONS(156),
    [anon_sym_Eta] = ACTIONS(156),
    [anon_sym_Theta] = ACTIONS(156),
    [anon_sym_Iota] = ACTIONS(156),
    [anon_sym_Kappa] = ACTIONS(156),
    [anon_sym_Lambda] = ACTIONS(156),
    [anon_sym_Mu] = ACTIONS(156),
    [anon_sym_Nu] = ACTIONS(156),
    [anon_sym_Xi] = ACTIONS(156),
    [anon_sym_Omicron] = ACTIONS(156),
    [anon_sym_Pi] = ACTIONS(156),
    [anon_sym_Rho] = ACTIONS(156),
    [anon_sym_Sigma] = ACTIONS(156),
    [anon_sym_Tau] = ACTIONS(156),
    [anon_sym_Upsilon] = ACTIONS(156),
    [anon_sym_Phi] = ACTIONS(156),
    [anon_sym_Chi] = ACTIONS(156),
    [anon_sym_Psi] = ACTIONS(156),
    [anon_sym_Omega] = ACTIONS(156),
    [anon_sym_infty] = ACTIONS(156),
    [anon_sym_hbar] = ACTIONS(156),
    [anon_sym_ell] = ACTIONS(156),
    [anon_sym_Re] = ACTIONS(156),
    [anon_sym_Im] = ACTIONS(156),
    [anon_sym_aleph] = ACTIONS(156),
    [anon_sym_nabla] = ACTIONS(156),
    [anon_sym_partial] = ACTIONS(156),
    [anon_sym_forall] = ACTIONS(156),
    [anon_sym_exists] = ACTIONS(156),
    [anon_sym_emptyset] = ACTIONS(156),
    [anon_sym_grad] = ACTIONS(156),
    [anon_sym_del] = ACTIONS(156),
    [anon_sym_pm] = ACTIONS(156),
    [anon_sym_mp] = ACTIONS(156),
    [aux_sym_constant_symbol_token1] = ACTIONS(156),
    [aux_sym_constant_symbol_token2] = ACTIONS(154),
    [anon_sym_sqrt] = ACTIONS(156),
    [anon_sym_text] = ACTIONS(156),
    [anon_sym_bb] = ACTIONS(156),
    [anon_sym_cc] = ACTIONS(156),
    [anon_sym_tt] = ACTIONS(156),
    [anon_sym_fr] = ACTIONS(156),
    [anon_sym_sf] = ACTIONS(156),
    [anon_sym_bold] = ACTIONS(156),
    [anon_sym_cal] = ACTIONS(156),
    [anon_sym_frak] = ACTIONS(156),
    [anon_sym_monospace] = ACTIONS(156),
    [anon_sym_italic] = ACTIONS(156),
    [anon_sym_frac] = ACTIONS(156),
    [anon_sym_root] = ACTIONS(156),
    [anon_sym_stackrel] = ACTIONS(156),
    [anon_sym_choose] = ACTIONS(156),
    [anon_sym_atop] = ACTIONS(156),
    [anon_sym_over] = ACTIONS(156),
    [sym_multi_linebreak] = ACTIONS(156),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_LBRACE_COLON] = ACTIONS(154),
    [anon_sym_LPAREN_COLON] = ACTIONS(154),
  },
  [60] = {
    [sym_number_symbol] = ACTIONS(158),
    [anon_sym_alpha] = ACTIONS(160),
    [anon_sym_beta] = ACTIONS(160),
    [anon_sym_gamma] = ACTIONS(160),
    [anon_sym_delta] = ACTIONS(160),
    [anon_sym_epsilon] = ACTIONS(160),
    [anon_sym_zeta] = ACTIONS(160),
    [anon_sym_eta] = ACTIONS(160),
    [anon_sym_theta] = ACTIONS(160),
    [anon_sym_iota] = ACTIONS(160),
    [anon_sym_kappa] = ACTIONS(160),
    [anon_sym_lambda] = ACTIONS(160),
    [anon_sym_mu] = ACTIONS(160),
    [anon_sym_nu] = ACTIONS(160),
    [anon_sym_xi] = ACTIONS(160),
    [anon_sym_omicron] = ACTIONS(160),
    [anon_sym_pi] = ACTIONS(160),
    [anon_sym_rho] = ACTIONS(160),
    [anon_sym_sigma] = ACTIONS(160),
    [anon_sym_tau] = ACTIONS(160),
    [anon_sym_upsilon] = ACTIONS(160),
    [anon_sym_phi] = ACTIONS(160),
    [anon_sym_chi] = ACTIONS(160),
    [anon_sym_psi] = ACTIONS(160),
    [anon_sym_omega] = ACTIONS(160),
    [anon_sym_Alpha] = ACTIONS(160),
    [anon_sym_Beta] = ACTIONS(160),
    [anon_sym_Gamma] = ACTIONS(160),
    [anon_sym_Delta] = ACTIONS(160),
    [anon_sym_Epsilon] = ACTIONS(160),
    [anon_sym_Zeta] = ACTIONS(160),
    [anon_sym_Eta] = ACTIONS(160),
    [anon_sym_Theta] = ACTIONS(160),
    [anon_sym_Iota] = ACTIONS(160),
    [anon_sym_Kappa] = ACTIONS(160),
    [anon_sym_Lambda] = ACTIONS(160),
    [anon_sym_Mu] = ACTIONS(160),
    [anon_sym_Nu] = ACTIONS(160),
    [anon_sym_Xi] = ACTIONS(160),
    [anon_sym_Omicron] = ACTIONS(160),
    [anon_sym_Pi] = ACTIONS(160),
    [anon_sym_Rho] = ACTIONS(160),
    [anon_sym_Sigma] = ACTIONS(160),
    [anon_sym_Tau] = ACTIONS(160),
    [anon_sym_Upsilon] = ACTIONS(160),
    [anon_sym_Phi] = ACTIONS(160),
    [anon_sym_Chi] = ACTIONS(160),
    [anon_sym_Psi] = ACTIONS(160),
    [anon_sym_Omega] = ACTIONS(160),
    [anon_sym_infty] = ACTIONS(160),
    [anon_sym_hbar] = ACTIONS(160),
    [anon_sym_ell] = ACTIONS(160),
    [anon_sym_Re] = ACTIONS(160),
    [anon_sym_Im] = ACTIONS(160),
    [anon_sym_aleph] = ACTIONS(160),
    [anon_sym_nabla] = ACTIONS(160),
    [anon_sym_partial] = ACTIONS(160),
    [anon_sym_forall] = ACTIONS(160),
    [anon_sym_exists] = ACTIONS(160),
    [anon_sym_emptyset] = ACTIONS(160),
    [anon_sym_grad] = ACTIONS(160),
    [anon_sym_del] = ACTIONS(160),
    [anon_sym_pm] = ACTIONS(160),
    [anon_sym_mp] = ACTIONS(160),
    [aux_sym_constant_symbol_token1] = ACTIONS(160),
    [aux_sym_constant_symbol_token2] = ACTIONS(158),
    [anon_sym_sqrt] = ACTIONS(160),
    [anon_sym_text] = ACTIONS(160),
    [anon_sym_bb] = ACTIONS(160),
    [anon_sym_cc] = ACTIONS(160),
    [anon_sym_tt] = ACTIONS(160),
    [anon_sym_fr] = ACTIONS(160),
    [anon_sym_sf] = ACTIONS(160),
    [anon_sym_bold] = ACTIONS(160),
    [anon_sym_cal] = ACTIONS(160),
    [anon_sym_frak] = ACTIONS(160),
    [anon_sym_monospace] = ACTIONS(160),
    [anon_sym_italic] = ACTIONS(160),
    [anon_sym_frac] = ACTIONS(160),
    [anon_sym_root] = ACTIONS(160),
    [anon_sym_stackrel] = ACTIONS(160),
    [anon_sym_choose] = ACTIONS(160),
    [anon_sym_atop] = ACTIONS(160),
    [anon_sym_over] = ACTIONS(160),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_COLON] = ACTIONS(158),
    [anon_sym_LPAREN_COLON] = ACTIONS(158),
  },
  [61] = {
    [sym_number_symbol] = ACTIONS(162),
    [anon_sym_alpha] = ACTIONS(164),
    [anon_sym_beta] = ACTIONS(164),
    [anon_sym_gamma] = ACTIONS(164),
    [anon_sym_delta] = ACTIONS(164),
    [anon_sym_epsilon] = ACTIONS(164),
    [anon_sym_zeta] = ACTIONS(164),
    [anon_sym_eta] = ACTIONS(164),
    [anon_sym_theta] = ACTIONS(164),
    [anon_sym_iota] = ACTIONS(164),
    [anon_sym_kappa] = ACTIONS(164),
    [anon_sym_lambda] = ACTIONS(164),
    [anon_sym_mu] = ACTIONS(164),
    [anon_sym_nu] = ACTIONS(164),
    [anon_sym_xi] = ACTIONS(164),
    [anon_sym_omicron] = ACTIONS(164),
    [anon_sym_pi] = ACTIONS(164),
    [anon_sym_rho] = ACTIONS(164),
    [anon_sym_sigma] = ACTIONS(164),
    [anon_sym_tau] = ACTIONS(164),
    [anon_sym_upsilon] = ACTIONS(164),
    [anon_sym_phi] = ACTIONS(164),
    [anon_sym_chi] = ACTIONS(164),
    [anon_sym_psi] = ACTIONS(164),
    [anon_sym_omega] = ACTIONS(164),
    [anon_sym_Alpha] = ACTIONS(164),
    [anon_sym_Beta] = ACTIONS(164),
    [anon_sym_Gamma] = ACTIONS(164),
    [anon_sym_Delta] = ACTIONS(164),
    [anon_sym_Epsilon] = ACTIONS(164),
    [anon_sym_Zeta] = ACTIONS(164),
    [anon_sym_Eta] = ACTIONS(164),
    [anon_sym_Theta] = ACTIONS(164),
    [anon_sym_Iota] = ACTIONS(164),
    [anon_sym_Kappa] = ACTIONS(164),
    [anon_sym_Lambda] = ACTIONS(164),
    [anon_sym_Mu] = ACTIONS(164),
    [anon_sym_Nu] = ACTIONS(164),
    [anon_sym_Xi] = ACTIONS(164),
    [anon_sym_Omicron] = ACTIONS(164),
    [anon_sym_Pi] = ACTIONS(164),
    [anon_sym_Rho] = ACTIONS(164),
    [anon_sym_Sigma] = ACTIONS(164),
    [anon_sym_Tau] = ACTIONS(164),
    [anon_sym_Upsilon] = ACTIONS(164),
    [anon_sym_Phi] = ACTIONS(164),
    [anon_sym_Chi] = ACTIONS(164),
    [anon_sym_Psi] = ACTIONS(164),
    [anon_sym_Omega] = ACTIONS(164),
    [anon_sym_infty] = ACTIONS(164),
    [anon_sym_hbar] = ACTIONS(164),
    [anon_sym_ell] = ACTIONS(164),
    [anon_sym_Re] = ACTIONS(164),
    [anon_sym_Im] = ACTIONS(164),
    [anon_sym_aleph] = ACTIONS(164),
    [anon_sym_nabla] = ACTIONS(164),
    [anon_sym_partial] = ACTIONS(164),
    [anon_sym_forall] = ACTIONS(164),
    [anon_sym_exists] = ACTIONS(164),
    [anon_sym_emptyset] = ACTIONS(164),
    [anon_sym_grad] = ACTIONS(164),
    [anon_sym_del] = ACTIONS(164),
    [anon_sym_pm] = ACTIONS(164),
    [anon_sym_mp] = ACTIONS(164),
    [aux_sym_constant_symbol_token1] = ACTIONS(164),
    [aux_sym_constant_symbol_token2] = ACTIONS(162),
    [anon_sym_sqrt] = ACTIONS(164),
    [anon_sym_text] = ACTIONS(164),
    [anon_sym_bb] = ACTIONS(164),
    [anon_sym_cc] = ACTIONS(164),
    [anon_sym_tt] = ACTIONS(164),
    [anon_sym_fr] = ACTIONS(164),
    [anon_sym_sf] = ACTIONS(164),
    [anon_sym_bold] = ACTIONS(164),
    [anon_sym_cal] = ACTIONS(164),
    [anon_sym_frak] = ACTIONS(164),
    [anon_sym_monospace] = ACTIONS(164),
    [anon_sym_italic] = ACTIONS(164),
    [anon_sym_frac] = ACTIONS(164),
    [anon_sym_root] = ACTIONS(164),
    [anon_sym_stackrel] = ACTIONS(164),
    [anon_sym_choose] = ACTIONS(164),
    [anon_sym_atop] = ACTIONS(164),
    [anon_sym_over] = ACTIONS(164),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_LBRACE_COLON] = ACTIONS(162),
    [anon_sym_LPAREN_COLON] = ACTIONS(162),
  },
  [62] = {
    [sym_number_symbol] = ACTIONS(166),
    [anon_sym_alpha] = ACTIONS(168),
    [anon_sym_beta] = ACTIONS(168),
    [anon_sym_gamma] = ACTIONS(168),
    [anon_sym_delta] = ACTIONS(168),
    [anon_sym_epsilon] = ACTIONS(168),
    [anon_sym_zeta] = ACTIONS(168),
    [anon_sym_eta] = ACTIONS(168),
    [anon_sym_theta] = ACTIONS(168),
    [anon_sym_iota] = ACTIONS(168),
    [anon_sym_kappa] = ACTIONS(168),
    [anon_sym_lambda] = ACTIONS(168),
    [anon_sym_mu] = ACTIONS(168),
    [anon_sym_nu] = ACTIONS(168),
    [anon_sym_xi] = ACTIONS(168),
    [anon_sym_omicron] = ACTIONS(168),
    [anon_sym_pi] = ACTIONS(168),
    [anon_sym_rho] = ACTIONS(168),
    [anon_sym_sigma] = ACTIONS(168),
    [anon_sym_tau] = ACTIONS(168),
    [anon_sym_upsilon] = ACTIONS(168),
    [anon_sym_phi] = ACTIONS(168),
    [anon_sym_chi] = ACTIONS(168),
    [anon_sym_psi] = ACTIONS(168),
    [anon_sym_omega] = ACTIONS(168),
    [anon_sym_Alpha] = ACTIONS(168),
    [anon_sym_Beta] = ACTIONS(168),
    [anon_sym_Gamma] = ACTIONS(168),
    [anon_sym_Delta] = ACTIONS(168),
    [anon_sym_Epsilon] = ACTIONS(168),
    [anon_sym_Zeta] = ACTIONS(168),
    [anon_sym_Eta] = ACTIONS(168),
    [anon_sym_Theta] = ACTIONS(168),
    [anon_sym_Iota] = ACTIONS(168),
    [anon_sym_Kappa] = ACTIONS(168),
    [anon_sym_Lambda] = ACTIONS(168),
    [anon_sym_Mu] = ACTIONS(168),
    [anon_sym_Nu] = ACTIONS(168),
    [anon_sym_Xi] = ACTIONS(168),
    [anon_sym_Omicron] = ACTIONS(168),
    [anon_sym_Pi] = ACTIONS(168),
    [anon_sym_Rho] = ACTIONS(168),
    [anon_sym_Sigma] = ACTIONS(168),
    [anon_sym_Tau] = ACTIONS(168),
    [anon_sym_Upsilon] = ACTIONS(168),
    [anon_sym_Phi] = ACTIONS(168),
    [anon_sym_Chi] = ACTIONS(168),
    [anon_sym_Psi] = ACTIONS(168),
    [anon_sym_Omega] = ACTIONS(168),
    [anon_sym_infty] = ACTIONS(168),
    [anon_sym_hbar] = ACTIONS(168),
    [anon_sym_ell] = ACTIONS(168),
    [anon_sym_Re] = ACTIONS(168),
    [anon_sym_Im] = ACTIONS(168),
    [anon_sym_aleph] = ACTIONS(168),
    [anon_sym_nabla] = ACTIONS(168),
    [anon_sym_partial] = ACTIONS(168),
    [anon_sym_forall] = ACTIONS(168),
    [anon_sym_exists] = ACTIONS(168),
    [anon_sym_emptyset] = ACTIONS(168),
    [anon_sym_grad] = ACTIONS(168),
    [anon_sym_del] = ACTIONS(168),
    [anon_sym_pm] = ACTIONS(168),
    [anon_sym_mp] = ACTIONS(168),
    [aux_sym_constant_symbol_token1] = ACTIONS(168),
    [aux_sym_constant_symbol_token2] = ACTIONS(166),
    [anon_sym_sqrt] = ACTIONS(168),
    [anon_sym_text] = ACTIONS(168),
    [anon_sym_bb] = ACTIONS(168),
    [anon_sym_cc] = ACTIONS(168),
    [anon_sym_tt] = ACTIONS(168),
    [anon_sym_fr] = ACTIONS(168),
    [anon_sym_sf] = ACTIONS(168),
    [anon_sym_bold] = ACTIONS(168),
    [anon_sym_cal] = ACTIONS(168),
    [anon_sym_frak] = ACTIONS(168),
    [anon_sym_monospace] = ACTIONS(168),
    [anon_sym_italic] = ACTIONS(168),
    [anon_sym_frac] = ACTIONS(168),
    [anon_sym_root] = ACTIONS(168),
    [anon_sym_stackrel] = ACTIONS(168),
    [anon_sym_choose] = ACTIONS(168),
    [anon_sym_atop] = ACTIONS(168),
    [anon_sym_over] = ACTIONS(168),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_LBRACE_COLON] = ACTIONS(166),
    [anon_sym_LPAREN_COLON] = ACTIONS(166),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_right_bracket,
    STATE(70), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(170), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [20] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(73), 1,
      sym_right_bracket,
    ACTIONS(170), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [40] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(76), 1,
      sym_right_bracket,
    ACTIONS(170), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [60] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      sym_right_bracket,
    STATE(70), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(176), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [80] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_right_bracket,
    STATE(63), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(170), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [100] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_right_bracket,
    STATE(65), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(170), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [120] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      sym_right_bracket,
    STATE(66), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(176), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [140] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(178), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [157] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(10), 1,
      sym_left_bracket,
    STATE(78), 1,
      sym_matrix_row_expr,
    ACTIONS(21), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(23), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE_COLON,
      anon_sym_LPAREN_COLON,
  [176] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(183), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [193] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(80), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [205] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(50), 1,
      sym_right_bracket,
    ACTIONS(176), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [219] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(150), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [231] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(188), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [243] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(183), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [255] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(178), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [267] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(29), 1,
      sym_right_bracket,
    ACTIONS(170), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [281] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(154), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [293] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(192), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [307] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(197), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [321] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(201), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [335] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(197), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [349] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(207), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [363] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(63)] = 0,
  [SMALL_STATE(64)] = 20,
  [SMALL_STATE(65)] = 40,
  [SMALL_STATE(66)] = 60,
  [SMALL_STATE(67)] = 80,
  [SMALL_STATE(68)] = 100,
  [SMALL_STATE(69)] = 120,
  [SMALL_STATE(70)] = 140,
  [SMALL_STATE(71)] = 157,
  [SMALL_STATE(72)] = 176,
  [SMALL_STATE(73)] = 193,
  [SMALL_STATE(74)] = 205,
  [SMALL_STATE(75)] = 219,
  [SMALL_STATE(76)] = 231,
  [SMALL_STATE(77)] = 243,
  [SMALL_STATE(78)] = 255,
  [SMALL_STATE(79)] = 267,
  [SMALL_STATE(80)] = 281,
  [SMALL_STATE(81)] = 293,
  [SMALL_STATE(82)] = 307,
  [SMALL_STATE(83)] = 321,
  [SMALL_STATE(84)] = 335,
  [SMALL_STATE(85)] = 349,
  [SMALL_STATE(86)] = 363,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic_symbol, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic_symbol, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_symbol, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_symbol, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superscript, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superscript, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_symbol, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_symbol, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_symbol, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_symbol, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asciimath(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
