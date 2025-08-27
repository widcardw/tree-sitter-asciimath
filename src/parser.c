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
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 66
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_alpha = 1,
  anon_sym_beta = 2,
  anon_sym_gamma = 3,
  anon_sym_delta = 4,
  anon_sym_epsilon = 5,
  anon_sym_zeta = 6,
  anon_sym_eta = 7,
  anon_sym_theta = 8,
  anon_sym_iota = 9,
  anon_sym_kappa = 10,
  anon_sym_lambda = 11,
  anon_sym_mu = 12,
  anon_sym_nu = 13,
  anon_sym_xi = 14,
  anon_sym_omicron = 15,
  anon_sym_pi = 16,
  anon_sym_rho = 17,
  anon_sym_sigma = 18,
  anon_sym_tau = 19,
  anon_sym_upsilon = 20,
  anon_sym_phi = 21,
  anon_sym_chi = 22,
  anon_sym_psi = 23,
  anon_sym_omega = 24,
  anon_sym_Alpha = 25,
  anon_sym_Beta = 26,
  anon_sym_Gamma = 27,
  anon_sym_Delta = 28,
  anon_sym_Epsilon = 29,
  anon_sym_Zeta = 30,
  anon_sym_Eta = 31,
  anon_sym_Theta = 32,
  anon_sym_Iota = 33,
  anon_sym_Kappa = 34,
  anon_sym_Lambda = 35,
  anon_sym_Mu = 36,
  anon_sym_Nu = 37,
  anon_sym_Xi = 38,
  anon_sym_Omicron = 39,
  anon_sym_Pi = 40,
  anon_sym_Rho = 41,
  anon_sym_Sigma = 42,
  anon_sym_Tau = 43,
  anon_sym_Upsilon = 44,
  anon_sym_Phi = 45,
  anon_sym_Chi = 46,
  anon_sym_Psi = 47,
  anon_sym_Omega = 48,
  anon_sym_infty = 49,
  anon_sym_hbar = 50,
  anon_sym_ell = 51,
  anon_sym_Re = 52,
  anon_sym_Im = 53,
  anon_sym_aleph = 54,
  anon_sym_nabla = 55,
  anon_sym_partial = 56,
  anon_sym_forall = 57,
  anon_sym_exists = 58,
  anon_sym_emptyset = 59,
  anon_sym_grad = 60,
  anon_sym_del = 61,
  anon_sym_pm = 62,
  anon_sym_mp = 63,
  aux_sym_constant_symbol_token1 = 64,
  aux_sym_constant_symbol_token2 = 65,
  aux_sym_constant_symbol_token3 = 66,
  anon_sym_sqrt = 67,
  anon_sym_text = 68,
  anon_sym_bb = 69,
  anon_sym_cc = 70,
  anon_sym_tt = 71,
  anon_sym_fr = 72,
  anon_sym_sf = 73,
  anon_sym_bold = 74,
  anon_sym_cal = 75,
  anon_sym_frak = 76,
  anon_sym_monospace = 77,
  anon_sym_italic = 78,
  anon_sym_frac = 79,
  anon_sym_root = 80,
  anon_sym_stackrel = 81,
  anon_sym_choose = 82,
  anon_sym_atop = 83,
  anon_sym_over = 84,
  anon_sym_BANG = 85,
  anon_sym_BANG_BANG = 86,
  sym_multi_linebreak = 87,
  sym__whitespace = 88,
  anon_sym_DQUOTE = 89,
  sym_unescaped_double_string_fragment = 90,
  sym_escape_sequence = 91,
  anon_sym_LPAREN = 92,
  anon_sym_LBRACK = 93,
  anon_sym_LBRACE = 94,
  anon_sym_LBRACE_COLON = 95,
  anon_sym_LPAREN_COLON = 96,
  anon_sym_RPAREN = 97,
  anon_sym_RBRACK = 98,
  anon_sym_RBRACE = 99,
  anon_sym_COLON_RBRACE = 100,
  anon_sym_COLON_RPAREN = 101,
  anon_sym_COMMA = 102,
  anon_sym_SEMI = 103,
  anon_sym_SLASH = 104,
  anon_sym__ = 105,
  anon_sym_CARET = 106,
  sym_source_file = 107,
  sym__expression = 108,
  sym_constant_symbol = 109,
  sym_unary_symbol = 110,
  sym_binary_symbol = 111,
  sym_literal_string = 112,
  sym_left_bracket = 113,
  sym_right_bracket = 114,
  sym_bracket_expr = 115,
  sym_matrix_row_expr = 116,
  sym_matrix_expr = 117,
  sym_other_matrix_row_expr = 118,
  sym_other_matrix_expr = 119,
  sym_unary_expr = 120,
  sym_binary_expr = 121,
  sym_binary_frac = 122,
  sym_simple_expression = 123,
  sym_subscript = 124,
  sym_superscript = 125,
  sym_subscript_superscript = 126,
  sym_intermediate_expression = 127,
  sym_concatenation = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_literal_string_repeat1 = 130,
  aux_sym_matrix_row_expr_repeat1 = 131,
  aux_sym_matrix_expr_repeat1 = 132,
  aux_sym_other_matrix_expr_repeat1 = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_constant_symbol_token1] = "constant_symbol_token1",
  [aux_sym_constant_symbol_token2] = "constant_symbol_token2",
  [aux_sym_constant_symbol_token3] = "constant_symbol_token3",
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
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASH] = "/",
  [anon_sym__] = "_",
  [anon_sym_CARET] = "^",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_constant_symbol] = "constant_symbol",
  [sym_unary_symbol] = "unary_symbol",
  [sym_binary_symbol] = "binary_symbol",
  [sym_literal_string] = "literal_string",
  [sym_left_bracket] = "left_bracket",
  [sym_right_bracket] = "right_bracket",
  [sym_bracket_expr] = "bracket_expr",
  [sym_matrix_row_expr] = "matrix_row_expr",
  [sym_matrix_expr] = "matrix_expr",
  [sym_other_matrix_row_expr] = "other_matrix_row_expr",
  [sym_other_matrix_expr] = "other_matrix_expr",
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
  [aux_sym_other_matrix_expr_repeat1] = "other_matrix_expr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym_constant_symbol_token1] = aux_sym_constant_symbol_token1,
  [aux_sym_constant_symbol_token2] = aux_sym_constant_symbol_token2,
  [aux_sym_constant_symbol_token3] = aux_sym_constant_symbol_token3,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_constant_symbol] = sym_constant_symbol,
  [sym_unary_symbol] = sym_unary_symbol,
  [sym_binary_symbol] = sym_binary_symbol,
  [sym_literal_string] = sym_literal_string,
  [sym_left_bracket] = sym_left_bracket,
  [sym_right_bracket] = sym_right_bracket,
  [sym_bracket_expr] = sym_bracket_expr,
  [sym_matrix_row_expr] = sym_matrix_row_expr,
  [sym_matrix_expr] = sym_matrix_expr,
  [sym_other_matrix_row_expr] = sym_other_matrix_row_expr,
  [sym_other_matrix_expr] = sym_other_matrix_expr,
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
  [aux_sym_other_matrix_expr_repeat1] = aux_sym_other_matrix_expr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym_constant_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_symbol_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_symbol_token3] = {
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
  [anon_sym_SEMI] = {
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
  [sym_other_matrix_row_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_other_matrix_expr] = {
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
  [aux_sym_other_matrix_expr_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 19,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 23,
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
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 30,
  [46] = 28,
  [47] = 29,
  [48] = 27,
  [49] = 31,
  [50] = 38,
  [51] = 35,
  [52] = 26,
  [53] = 32,
  [54] = 34,
  [55] = 33,
  [56] = 37,
  [57] = 40,
  [58] = 42,
  [59] = 43,
  [60] = 41,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 66,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 71,
  [77] = 70,
  [78] = 78,
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 75,
  [83] = 83,
  [84] = 84,
  [85] = 62,
  [86] = 86,
  [87] = 61,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 95,
  [98] = 98,
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
        '(', 318,
        ')', 435,
        ',', 435,
        '/', 435,
        ':', 316,
        ';', 435,
        'A', 378,
        'B', 350,
        'C', 364,
        'D', 351,
        'E', 402,
        'G', 325,
        'I', 384,
        'K', 330,
        'L', 329,
        'M', 428,
        'N', 428,
        'O', 386,
        'P', 363,
        'R', 348,
        'S', 368,
        'T', 320,
        'U', 403,
        'X', 367,
        'Z', 350,
        '[', 435,
        '\\', 3,
        ']', 435,
        '^', 435,
        '_', 435,
        'a', 376,
        'b', 337,
        'c', 332,
        'd', 351,
        'e', 380,
        'f', 394,
        'g', 324,
        'h', 340,
        'i', 391,
        'k', 330,
        'l', 329,
        'm', 395,
        'n', 326,
        'o', 385,
        'p', 327,
        'r', 362,
        's', 357,
        't', 319,
        'u', 403,
        'x', 367,
        'z', 350,
        '{', 318,
        '}', 435,
        0x0b, 432,
        '\f', 432,
        ' ', 432,
      );
      if (('*' <= lookahead && lookahead <= '-') ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(434);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(314);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(310);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(432);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '}') ADVANCE(448);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead == '\r' ||
          lookahead == '?') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(439);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
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
        '(', 440,
        '/', 452,
        'A', 188,
        'B', 135,
        'C', 159,
        'D', 139,
        'E', 231,
        'G', 102,
        'I', 198,
        'K', 109,
        'L', 108,
        'M', 277,
        'N', 278,
        'O', 199,
        'P', 160,
        'R', 136,
        'S', 163,
        'T', 107,
        'U', 240,
        'X', 164,
        'Z', 147,
        '[', 441,
        '^', 454,
        '_', 453,
        'a', 180,
        'b', 120,
        'c', 111,
        'd', 142,
        'e', 189,
        'f', 217,
        'g', 117,
        'h', 122,
        'i', 209,
        'k', 118,
        'l', 119,
        'm', 218,
        'n', 103,
        'o', 207,
        'p', 104,
        'r', 158,
        's', 151,
        't', 112,
        'u', 242,
        'x', 165,
        'z', 148,
        '{', 442,
        0x0b, 312,
        '\f', 312,
        ' ', 312,
      );
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\t', 311,
        '\n', 312,
        '\r', 310,
        '"', 313,
        '(', 440,
        ')', 445,
        ',', 450,
        '/', 452,
        ':', 2,
        ';', 451,
        'A', 188,
        'B', 135,
        'C', 159,
        'D', 139,
        'E', 231,
        'G', 102,
        'I', 198,
        'K', 109,
        'L', 108,
        'M', 277,
        'N', 278,
        'O', 199,
        'P', 160,
        'R', 136,
        'S', 163,
        'T', 107,
        'U', 240,
        'X', 164,
        'Z', 147,
        '[', 441,
        ']', 446,
        '^', 454,
        '_', 453,
        'a', 180,
        'b', 120,
        'c', 111,
        'd', 142,
        'e', 189,
        'f', 217,
        'g', 117,
        'h', 122,
        'i', 209,
        'k', 118,
        'l', 119,
        'm', 218,
        'n', 103,
        'o', 207,
        'p', 104,
        'r', 158,
        's', 151,
        't', 112,
        'u', 242,
        'x', 165,
        'z', 148,
        '{', 442,
        '}', 447,
        0x0b, 312,
        '\f', 312,
        ' ', 312,
      );
      if (('*' <= lookahead && lookahead <= '-') ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(284);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_Alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_Gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_infty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_hbar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ell);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Re);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Im);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_aleph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_nabla);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_partial);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_forall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_exists);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_emptyset);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_grad);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_del);
      if (lookahead == 't') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_pm);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_mp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 's') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'h') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'h') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'h') ADVANCE(150);
      if (lookahead == 't') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'a') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'b') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'c') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'd') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'h') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'q') ADVANCE(246);
      if (lookahead == 't') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'f') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'g') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 's') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'h') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'i') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'k') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 't') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'l') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'm') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 't') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'n') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'o') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 't') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'p') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'r') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 's') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 't') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'u') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'x') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'y') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (lookahead == 'y') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token2);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_constant_symbol_token3);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_sqrt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_bb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_cc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_tt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_fr);
      if (lookahead == 'a') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_sf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_bold);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_cal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_frak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_monospace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_italic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_frac);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_root);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_stackrel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_choose);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_atop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_over);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
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
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '!') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ')') ADVANCE(435);
      if (lookahead == '}') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'h') ADVANCE(350);
      if (lookahead == 't') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'h') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'u') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 's') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == 'h') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == 'k') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'h') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == 'p') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'q') ADVANCE(413);
      if (lookahead == 't') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 's') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'k') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 't') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(418);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'x') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'o') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead == 'v') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 't') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(418);
      if (lookahead == 't') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'x') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(436);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_LPAREN_COLON);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_COLON_RPAREN);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 454:
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
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
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
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
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
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [aux_sym_constant_symbol_token1] = ACTIONS(1),
    [aux_sym_constant_symbol_token2] = ACTIONS(1),
    [aux_sym_constant_symbol_token3] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(98),
    [sym__expression] = STATE(4),
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_binary_frac] = STATE(4),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(59),
    [sym_superscript] = STATE(59),
    [sym_subscript_superscript] = STATE(59),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym_multi_linebreak] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [2] = {
    [sym__expression] = STATE(87),
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_binary_frac] = STATE(87),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(87),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_COLON_RBRACE] = ACTIONS(31),
    [anon_sym_COLON_RPAREN] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(33),
  },
  [3] = {
    [sym__expression] = STATE(61),
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_binary_frac] = STATE(61),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(59),
    [sym_superscript] = STATE(59),
    [sym_subscript_superscript] = STATE(59),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym_multi_linebreak] = ACTIONS(35),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(37),
  },
  [4] = {
    [sym__expression] = STATE(5),
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_binary_frac] = STATE(5),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(59),
    [sym_superscript] = STATE(59),
    [sym_subscript_superscript] = STATE(59),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym_multi_linebreak] = ACTIONS(41),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [5] = {
    [sym__expression] = STATE(5),
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_binary_frac] = STATE(5),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(59),
    [sym_superscript] = STATE(59),
    [sym_subscript_superscript] = STATE(59),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_alpha] = ACTIONS(45),
    [anon_sym_beta] = ACTIONS(45),
    [anon_sym_gamma] = ACTIONS(45),
    [anon_sym_delta] = ACTIONS(45),
    [anon_sym_epsilon] = ACTIONS(45),
    [anon_sym_zeta] = ACTIONS(45),
    [anon_sym_eta] = ACTIONS(45),
    [anon_sym_theta] = ACTIONS(45),
    [anon_sym_iota] = ACTIONS(45),
    [anon_sym_kappa] = ACTIONS(45),
    [anon_sym_lambda] = ACTIONS(45),
    [anon_sym_mu] = ACTIONS(45),
    [anon_sym_nu] = ACTIONS(45),
    [anon_sym_xi] = ACTIONS(45),
    [anon_sym_omicron] = ACTIONS(45),
    [anon_sym_pi] = ACTIONS(45),
    [anon_sym_rho] = ACTIONS(45),
    [anon_sym_sigma] = ACTIONS(45),
    [anon_sym_tau] = ACTIONS(45),
    [anon_sym_upsilon] = ACTIONS(45),
    [anon_sym_phi] = ACTIONS(45),
    [anon_sym_chi] = ACTIONS(45),
    [anon_sym_psi] = ACTIONS(45),
    [anon_sym_omega] = ACTIONS(45),
    [anon_sym_Alpha] = ACTIONS(45),
    [anon_sym_Beta] = ACTIONS(45),
    [anon_sym_Gamma] = ACTIONS(45),
    [anon_sym_Delta] = ACTIONS(45),
    [anon_sym_Epsilon] = ACTIONS(45),
    [anon_sym_Zeta] = ACTIONS(45),
    [anon_sym_Eta] = ACTIONS(45),
    [anon_sym_Theta] = ACTIONS(45),
    [anon_sym_Iota] = ACTIONS(45),
    [anon_sym_Kappa] = ACTIONS(45),
    [anon_sym_Lambda] = ACTIONS(45),
    [anon_sym_Mu] = ACTIONS(45),
    [anon_sym_Nu] = ACTIONS(45),
    [anon_sym_Xi] = ACTIONS(45),
    [anon_sym_Omicron] = ACTIONS(45),
    [anon_sym_Pi] = ACTIONS(45),
    [anon_sym_Rho] = ACTIONS(45),
    [anon_sym_Sigma] = ACTIONS(45),
    [anon_sym_Tau] = ACTIONS(45),
    [anon_sym_Upsilon] = ACTIONS(45),
    [anon_sym_Phi] = ACTIONS(45),
    [anon_sym_Chi] = ACTIONS(45),
    [anon_sym_Psi] = ACTIONS(45),
    [anon_sym_Omega] = ACTIONS(45),
    [anon_sym_infty] = ACTIONS(45),
    [anon_sym_hbar] = ACTIONS(45),
    [anon_sym_ell] = ACTIONS(45),
    [anon_sym_Re] = ACTIONS(45),
    [anon_sym_Im] = ACTIONS(45),
    [anon_sym_aleph] = ACTIONS(45),
    [anon_sym_nabla] = ACTIONS(45),
    [anon_sym_partial] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(45),
    [anon_sym_exists] = ACTIONS(45),
    [anon_sym_emptyset] = ACTIONS(45),
    [anon_sym_grad] = ACTIONS(45),
    [anon_sym_del] = ACTIONS(45),
    [anon_sym_pm] = ACTIONS(45),
    [anon_sym_mp] = ACTIONS(45),
    [aux_sym_constant_symbol_token1] = ACTIONS(45),
    [aux_sym_constant_symbol_token2] = ACTIONS(48),
    [aux_sym_constant_symbol_token3] = ACTIONS(48),
    [anon_sym_sqrt] = ACTIONS(51),
    [anon_sym_text] = ACTIONS(51),
    [anon_sym_bb] = ACTIONS(51),
    [anon_sym_cc] = ACTIONS(51),
    [anon_sym_tt] = ACTIONS(51),
    [anon_sym_fr] = ACTIONS(51),
    [anon_sym_sf] = ACTIONS(51),
    [anon_sym_bold] = ACTIONS(51),
    [anon_sym_cal] = ACTIONS(51),
    [anon_sym_frak] = ACTIONS(51),
    [anon_sym_monospace] = ACTIONS(51),
    [anon_sym_italic] = ACTIONS(51),
    [anon_sym_frac] = ACTIONS(54),
    [anon_sym_root] = ACTIONS(54),
    [anon_sym_stackrel] = ACTIONS(54),
    [anon_sym_choose] = ACTIONS(54),
    [anon_sym_atop] = ACTIONS(54),
    [anon_sym_over] = ACTIONS(54),
    [sym_multi_linebreak] = ACTIONS(57),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_COLON] = ACTIONS(66),
    [anon_sym_LPAREN_COLON] = ACTIONS(66),
  },
  [6] = {
    [sym__expression] = STATE(69),
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_row_expr] = STATE(76),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_row_expr] = STATE(74),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_binary_frac] = STATE(69),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(69),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [7] = {
    [sym__expression] = STATE(68),
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_row_expr] = STATE(76),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_row_expr] = STATE(74),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_binary_frac] = STATE(68),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(68),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [8] = {
    [sym__expression] = STATE(66),
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_row_expr] = STATE(71),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_row_expr] = STATE(80),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_binary_frac] = STATE(66),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(66),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [9] = {
    [sym__expression] = STATE(79),
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_row_expr] = STATE(91),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_binary_frac] = STATE(79),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(79),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [10] = {
    [sym__expression] = STATE(81),
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_binary_frac] = STATE(81),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(81),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [11] = {
    [sym__expression] = STATE(88),
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_binary_frac] = STATE(88),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(88),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [12] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(35),
    [sym_subscript] = STATE(43),
    [sym_superscript] = STATE(43),
    [sym_subscript_superscript] = STATE(43),
    [sym_intermediate_expression] = STATE(85),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [13] = {
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(59),
    [sym_superscript] = STATE(59),
    [sym_subscript_superscript] = STATE(59),
    [sym_intermediate_expression] = STATE(62),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [14] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(40),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [15] = {
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_simple_expression] = STATE(57),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [16] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(22),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [17] = {
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_simple_expression] = STATE(55),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [18] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(24),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [19] = {
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_simple_expression] = STATE(60),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [20] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(41),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [21] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(33),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [22] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(31),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [23] = {
    [sym_constant_symbol] = STATE(37),
    [sym_unary_symbol] = STATE(21),
    [sym_binary_symbol] = STATE(16),
    [sym_literal_string] = STATE(37),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(37),
    [sym_matrix_expr] = STATE(37),
    [sym_other_matrix_expr] = STATE(37),
    [sym_unary_expr] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_simple_expression] = STATE(42),
    [anon_sym_alpha] = ACTIONS(23),
    [anon_sym_beta] = ACTIONS(23),
    [anon_sym_gamma] = ACTIONS(23),
    [anon_sym_delta] = ACTIONS(23),
    [anon_sym_epsilon] = ACTIONS(23),
    [anon_sym_zeta] = ACTIONS(23),
    [anon_sym_eta] = ACTIONS(23),
    [anon_sym_theta] = ACTIONS(23),
    [anon_sym_iota] = ACTIONS(23),
    [anon_sym_kappa] = ACTIONS(23),
    [anon_sym_lambda] = ACTIONS(23),
    [anon_sym_mu] = ACTIONS(23),
    [anon_sym_nu] = ACTIONS(23),
    [anon_sym_xi] = ACTIONS(23),
    [anon_sym_omicron] = ACTIONS(23),
    [anon_sym_pi] = ACTIONS(23),
    [anon_sym_rho] = ACTIONS(23),
    [anon_sym_sigma] = ACTIONS(23),
    [anon_sym_tau] = ACTIONS(23),
    [anon_sym_upsilon] = ACTIONS(23),
    [anon_sym_phi] = ACTIONS(23),
    [anon_sym_chi] = ACTIONS(23),
    [anon_sym_psi] = ACTIONS(23),
    [anon_sym_omega] = ACTIONS(23),
    [anon_sym_Alpha] = ACTIONS(23),
    [anon_sym_Beta] = ACTIONS(23),
    [anon_sym_Gamma] = ACTIONS(23),
    [anon_sym_Delta] = ACTIONS(23),
    [anon_sym_Epsilon] = ACTIONS(23),
    [anon_sym_Zeta] = ACTIONS(23),
    [anon_sym_Eta] = ACTIONS(23),
    [anon_sym_Theta] = ACTIONS(23),
    [anon_sym_Iota] = ACTIONS(23),
    [anon_sym_Kappa] = ACTIONS(23),
    [anon_sym_Lambda] = ACTIONS(23),
    [anon_sym_Mu] = ACTIONS(23),
    [anon_sym_Nu] = ACTIONS(23),
    [anon_sym_Xi] = ACTIONS(23),
    [anon_sym_Omicron] = ACTIONS(23),
    [anon_sym_Pi] = ACTIONS(23),
    [anon_sym_Rho] = ACTIONS(23),
    [anon_sym_Sigma] = ACTIONS(23),
    [anon_sym_Tau] = ACTIONS(23),
    [anon_sym_Upsilon] = ACTIONS(23),
    [anon_sym_Phi] = ACTIONS(23),
    [anon_sym_Chi] = ACTIONS(23),
    [anon_sym_Psi] = ACTIONS(23),
    [anon_sym_Omega] = ACTIONS(23),
    [anon_sym_infty] = ACTIONS(23),
    [anon_sym_hbar] = ACTIONS(23),
    [anon_sym_ell] = ACTIONS(23),
    [anon_sym_Re] = ACTIONS(23),
    [anon_sym_Im] = ACTIONS(23),
    [anon_sym_aleph] = ACTIONS(23),
    [anon_sym_nabla] = ACTIONS(23),
    [anon_sym_partial] = ACTIONS(23),
    [anon_sym_forall] = ACTIONS(23),
    [anon_sym_exists] = ACTIONS(23),
    [anon_sym_emptyset] = ACTIONS(23),
    [anon_sym_grad] = ACTIONS(23),
    [anon_sym_del] = ACTIONS(23),
    [anon_sym_pm] = ACTIONS(23),
    [anon_sym_mp] = ACTIONS(23),
    [aux_sym_constant_symbol_token1] = ACTIONS(23),
    [aux_sym_constant_symbol_token2] = ACTIONS(25),
    [aux_sym_constant_symbol_token3] = ACTIONS(25),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [24] = {
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_simple_expression] = STATE(49),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [25] = {
    [sym_constant_symbol] = STATE(56),
    [sym_unary_symbol] = STATE(17),
    [sym_binary_symbol] = STATE(18),
    [sym_literal_string] = STATE(56),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(56),
    [sym_matrix_expr] = STATE(56),
    [sym_other_matrix_expr] = STATE(56),
    [sym_unary_expr] = STATE(56),
    [sym_binary_expr] = STATE(56),
    [sym_simple_expression] = STATE(58),
    [anon_sym_alpha] = ACTIONS(7),
    [anon_sym_beta] = ACTIONS(7),
    [anon_sym_gamma] = ACTIONS(7),
    [anon_sym_delta] = ACTIONS(7),
    [anon_sym_epsilon] = ACTIONS(7),
    [anon_sym_zeta] = ACTIONS(7),
    [anon_sym_eta] = ACTIONS(7),
    [anon_sym_theta] = ACTIONS(7),
    [anon_sym_iota] = ACTIONS(7),
    [anon_sym_kappa] = ACTIONS(7),
    [anon_sym_lambda] = ACTIONS(7),
    [anon_sym_mu] = ACTIONS(7),
    [anon_sym_nu] = ACTIONS(7),
    [anon_sym_xi] = ACTIONS(7),
    [anon_sym_omicron] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_rho] = ACTIONS(7),
    [anon_sym_sigma] = ACTIONS(7),
    [anon_sym_tau] = ACTIONS(7),
    [anon_sym_upsilon] = ACTIONS(7),
    [anon_sym_phi] = ACTIONS(7),
    [anon_sym_chi] = ACTIONS(7),
    [anon_sym_psi] = ACTIONS(7),
    [anon_sym_omega] = ACTIONS(7),
    [anon_sym_Alpha] = ACTIONS(7),
    [anon_sym_Beta] = ACTIONS(7),
    [anon_sym_Gamma] = ACTIONS(7),
    [anon_sym_Delta] = ACTIONS(7),
    [anon_sym_Epsilon] = ACTIONS(7),
    [anon_sym_Zeta] = ACTIONS(7),
    [anon_sym_Eta] = ACTIONS(7),
    [anon_sym_Theta] = ACTIONS(7),
    [anon_sym_Iota] = ACTIONS(7),
    [anon_sym_Kappa] = ACTIONS(7),
    [anon_sym_Lambda] = ACTIONS(7),
    [anon_sym_Mu] = ACTIONS(7),
    [anon_sym_Nu] = ACTIONS(7),
    [anon_sym_Xi] = ACTIONS(7),
    [anon_sym_Omicron] = ACTIONS(7),
    [anon_sym_Pi] = ACTIONS(7),
    [anon_sym_Rho] = ACTIONS(7),
    [anon_sym_Sigma] = ACTIONS(7),
    [anon_sym_Tau] = ACTIONS(7),
    [anon_sym_Upsilon] = ACTIONS(7),
    [anon_sym_Phi] = ACTIONS(7),
    [anon_sym_Chi] = ACTIONS(7),
    [anon_sym_Psi] = ACTIONS(7),
    [anon_sym_Omega] = ACTIONS(7),
    [anon_sym_infty] = ACTIONS(7),
    [anon_sym_hbar] = ACTIONS(7),
    [anon_sym_ell] = ACTIONS(7),
    [anon_sym_Re] = ACTIONS(7),
    [anon_sym_Im] = ACTIONS(7),
    [anon_sym_aleph] = ACTIONS(7),
    [anon_sym_nabla] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_forall] = ACTIONS(7),
    [anon_sym_exists] = ACTIONS(7),
    [anon_sym_emptyset] = ACTIONS(7),
    [anon_sym_grad] = ACTIONS(7),
    [anon_sym_del] = ACTIONS(7),
    [anon_sym_pm] = ACTIONS(7),
    [anon_sym_mp] = ACTIONS(7),
    [aux_sym_constant_symbol_token1] = ACTIONS(7),
    [aux_sym_constant_symbol_token2] = ACTIONS(9),
    [aux_sym_constant_symbol_token3] = ACTIONS(9),
    [anon_sym_sqrt] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(11),
    [anon_sym_bb] = ACTIONS(11),
    [anon_sym_cc] = ACTIONS(11),
    [anon_sym_tt] = ACTIONS(11),
    [anon_sym_fr] = ACTIONS(11),
    [anon_sym_sf] = ACTIONS(11),
    [anon_sym_bold] = ACTIONS(11),
    [anon_sym_cal] = ACTIONS(11),
    [anon_sym_frak] = ACTIONS(11),
    [anon_sym_monospace] = ACTIONS(11),
    [anon_sym_italic] = ACTIONS(11),
    [anon_sym_frac] = ACTIONS(13),
    [anon_sym_root] = ACTIONS(13),
    [anon_sym_stackrel] = ACTIONS(13),
    [anon_sym_choose] = ACTIONS(13),
    [anon_sym_atop] = ACTIONS(13),
    [anon_sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [26] = {
    [anon_sym_alpha] = ACTIONS(69),
    [anon_sym_beta] = ACTIONS(69),
    [anon_sym_gamma] = ACTIONS(69),
    [anon_sym_delta] = ACTIONS(69),
    [anon_sym_epsilon] = ACTIONS(69),
    [anon_sym_zeta] = ACTIONS(69),
    [anon_sym_eta] = ACTIONS(69),
    [anon_sym_theta] = ACTIONS(69),
    [anon_sym_iota] = ACTIONS(69),
    [anon_sym_kappa] = ACTIONS(69),
    [anon_sym_lambda] = ACTIONS(69),
    [anon_sym_mu] = ACTIONS(69),
    [anon_sym_nu] = ACTIONS(69),
    [anon_sym_xi] = ACTIONS(69),
    [anon_sym_omicron] = ACTIONS(69),
    [anon_sym_pi] = ACTIONS(69),
    [anon_sym_rho] = ACTIONS(69),
    [anon_sym_sigma] = ACTIONS(69),
    [anon_sym_tau] = ACTIONS(69),
    [anon_sym_upsilon] = ACTIONS(69),
    [anon_sym_phi] = ACTIONS(69),
    [anon_sym_chi] = ACTIONS(69),
    [anon_sym_psi] = ACTIONS(69),
    [anon_sym_omega] = ACTIONS(69),
    [anon_sym_Alpha] = ACTIONS(69),
    [anon_sym_Beta] = ACTIONS(69),
    [anon_sym_Gamma] = ACTIONS(69),
    [anon_sym_Delta] = ACTIONS(69),
    [anon_sym_Epsilon] = ACTIONS(69),
    [anon_sym_Zeta] = ACTIONS(69),
    [anon_sym_Eta] = ACTIONS(69),
    [anon_sym_Theta] = ACTIONS(69),
    [anon_sym_Iota] = ACTIONS(69),
    [anon_sym_Kappa] = ACTIONS(69),
    [anon_sym_Lambda] = ACTIONS(69),
    [anon_sym_Mu] = ACTIONS(69),
    [anon_sym_Nu] = ACTIONS(69),
    [anon_sym_Xi] = ACTIONS(69),
    [anon_sym_Omicron] = ACTIONS(69),
    [anon_sym_Pi] = ACTIONS(69),
    [anon_sym_Rho] = ACTIONS(69),
    [anon_sym_Sigma] = ACTIONS(69),
    [anon_sym_Tau] = ACTIONS(69),
    [anon_sym_Upsilon] = ACTIONS(69),
    [anon_sym_Phi] = ACTIONS(69),
    [anon_sym_Chi] = ACTIONS(69),
    [anon_sym_Psi] = ACTIONS(69),
    [anon_sym_Omega] = ACTIONS(69),
    [anon_sym_infty] = ACTIONS(69),
    [anon_sym_hbar] = ACTIONS(69),
    [anon_sym_ell] = ACTIONS(69),
    [anon_sym_Re] = ACTIONS(69),
    [anon_sym_Im] = ACTIONS(69),
    [anon_sym_aleph] = ACTIONS(69),
    [anon_sym_nabla] = ACTIONS(69),
    [anon_sym_partial] = ACTIONS(69),
    [anon_sym_forall] = ACTIONS(69),
    [anon_sym_exists] = ACTIONS(69),
    [anon_sym_emptyset] = ACTIONS(69),
    [anon_sym_grad] = ACTIONS(69),
    [anon_sym_del] = ACTIONS(69),
    [anon_sym_pm] = ACTIONS(69),
    [anon_sym_mp] = ACTIONS(69),
    [aux_sym_constant_symbol_token1] = ACTIONS(69),
    [aux_sym_constant_symbol_token2] = ACTIONS(71),
    [aux_sym_constant_symbol_token3] = ACTIONS(71),
    [anon_sym_sqrt] = ACTIONS(69),
    [anon_sym_text] = ACTIONS(69),
    [anon_sym_bb] = ACTIONS(69),
    [anon_sym_cc] = ACTIONS(69),
    [anon_sym_tt] = ACTIONS(69),
    [anon_sym_fr] = ACTIONS(69),
    [anon_sym_sf] = ACTIONS(69),
    [anon_sym_bold] = ACTIONS(69),
    [anon_sym_cal] = ACTIONS(69),
    [anon_sym_frak] = ACTIONS(69),
    [anon_sym_monospace] = ACTIONS(69),
    [anon_sym_italic] = ACTIONS(69),
    [anon_sym_frac] = ACTIONS(69),
    [anon_sym_root] = ACTIONS(69),
    [anon_sym_stackrel] = ACTIONS(69),
    [anon_sym_choose] = ACTIONS(69),
    [anon_sym_atop] = ACTIONS(69),
    [anon_sym_over] = ACTIONS(69),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LBRACE_COLON] = ACTIONS(71),
    [anon_sym_LPAREN_COLON] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_COLON_RBRACE] = ACTIONS(71),
    [anon_sym_COLON_RPAREN] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
  },
  [27] = {
    [anon_sym_alpha] = ACTIONS(73),
    [anon_sym_beta] = ACTIONS(73),
    [anon_sym_gamma] = ACTIONS(73),
    [anon_sym_delta] = ACTIONS(73),
    [anon_sym_epsilon] = ACTIONS(73),
    [anon_sym_zeta] = ACTIONS(73),
    [anon_sym_eta] = ACTIONS(73),
    [anon_sym_theta] = ACTIONS(73),
    [anon_sym_iota] = ACTIONS(73),
    [anon_sym_kappa] = ACTIONS(73),
    [anon_sym_lambda] = ACTIONS(73),
    [anon_sym_mu] = ACTIONS(73),
    [anon_sym_nu] = ACTIONS(73),
    [anon_sym_xi] = ACTIONS(73),
    [anon_sym_omicron] = ACTIONS(73),
    [anon_sym_pi] = ACTIONS(73),
    [anon_sym_rho] = ACTIONS(73),
    [anon_sym_sigma] = ACTIONS(73),
    [anon_sym_tau] = ACTIONS(73),
    [anon_sym_upsilon] = ACTIONS(73),
    [anon_sym_phi] = ACTIONS(73),
    [anon_sym_chi] = ACTIONS(73),
    [anon_sym_psi] = ACTIONS(73),
    [anon_sym_omega] = ACTIONS(73),
    [anon_sym_Alpha] = ACTIONS(73),
    [anon_sym_Beta] = ACTIONS(73),
    [anon_sym_Gamma] = ACTIONS(73),
    [anon_sym_Delta] = ACTIONS(73),
    [anon_sym_Epsilon] = ACTIONS(73),
    [anon_sym_Zeta] = ACTIONS(73),
    [anon_sym_Eta] = ACTIONS(73),
    [anon_sym_Theta] = ACTIONS(73),
    [anon_sym_Iota] = ACTIONS(73),
    [anon_sym_Kappa] = ACTIONS(73),
    [anon_sym_Lambda] = ACTIONS(73),
    [anon_sym_Mu] = ACTIONS(73),
    [anon_sym_Nu] = ACTIONS(73),
    [anon_sym_Xi] = ACTIONS(73),
    [anon_sym_Omicron] = ACTIONS(73),
    [anon_sym_Pi] = ACTIONS(73),
    [anon_sym_Rho] = ACTIONS(73),
    [anon_sym_Sigma] = ACTIONS(73),
    [anon_sym_Tau] = ACTIONS(73),
    [anon_sym_Upsilon] = ACTIONS(73),
    [anon_sym_Phi] = ACTIONS(73),
    [anon_sym_Chi] = ACTIONS(73),
    [anon_sym_Psi] = ACTIONS(73),
    [anon_sym_Omega] = ACTIONS(73),
    [anon_sym_infty] = ACTIONS(73),
    [anon_sym_hbar] = ACTIONS(73),
    [anon_sym_ell] = ACTIONS(73),
    [anon_sym_Re] = ACTIONS(73),
    [anon_sym_Im] = ACTIONS(73),
    [anon_sym_aleph] = ACTIONS(73),
    [anon_sym_nabla] = ACTIONS(73),
    [anon_sym_partial] = ACTIONS(73),
    [anon_sym_forall] = ACTIONS(73),
    [anon_sym_exists] = ACTIONS(73),
    [anon_sym_emptyset] = ACTIONS(73),
    [anon_sym_grad] = ACTIONS(73),
    [anon_sym_del] = ACTIONS(73),
    [anon_sym_pm] = ACTIONS(73),
    [anon_sym_mp] = ACTIONS(73),
    [aux_sym_constant_symbol_token1] = ACTIONS(73),
    [aux_sym_constant_symbol_token2] = ACTIONS(75),
    [aux_sym_constant_symbol_token3] = ACTIONS(75),
    [anon_sym_sqrt] = ACTIONS(73),
    [anon_sym_text] = ACTIONS(73),
    [anon_sym_bb] = ACTIONS(73),
    [anon_sym_cc] = ACTIONS(73),
    [anon_sym_tt] = ACTIONS(73),
    [anon_sym_fr] = ACTIONS(73),
    [anon_sym_sf] = ACTIONS(73),
    [anon_sym_bold] = ACTIONS(73),
    [anon_sym_cal] = ACTIONS(73),
    [anon_sym_frak] = ACTIONS(73),
    [anon_sym_monospace] = ACTIONS(73),
    [anon_sym_italic] = ACTIONS(73),
    [anon_sym_frac] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_stackrel] = ACTIONS(73),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_atop] = ACTIONS(73),
    [anon_sym_over] = ACTIONS(73),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACE_COLON] = ACTIONS(75),
    [anon_sym_LPAREN_COLON] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_COLON_RBRACE] = ACTIONS(75),
    [anon_sym_COLON_RPAREN] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
  },
  [28] = {
    [anon_sym_alpha] = ACTIONS(77),
    [anon_sym_beta] = ACTIONS(77),
    [anon_sym_gamma] = ACTIONS(77),
    [anon_sym_delta] = ACTIONS(77),
    [anon_sym_epsilon] = ACTIONS(77),
    [anon_sym_zeta] = ACTIONS(77),
    [anon_sym_eta] = ACTIONS(77),
    [anon_sym_theta] = ACTIONS(77),
    [anon_sym_iota] = ACTIONS(77),
    [anon_sym_kappa] = ACTIONS(77),
    [anon_sym_lambda] = ACTIONS(77),
    [anon_sym_mu] = ACTIONS(77),
    [anon_sym_nu] = ACTIONS(77),
    [anon_sym_xi] = ACTIONS(77),
    [anon_sym_omicron] = ACTIONS(77),
    [anon_sym_pi] = ACTIONS(77),
    [anon_sym_rho] = ACTIONS(77),
    [anon_sym_sigma] = ACTIONS(77),
    [anon_sym_tau] = ACTIONS(77),
    [anon_sym_upsilon] = ACTIONS(77),
    [anon_sym_phi] = ACTIONS(77),
    [anon_sym_chi] = ACTIONS(77),
    [anon_sym_psi] = ACTIONS(77),
    [anon_sym_omega] = ACTIONS(77),
    [anon_sym_Alpha] = ACTIONS(77),
    [anon_sym_Beta] = ACTIONS(77),
    [anon_sym_Gamma] = ACTIONS(77),
    [anon_sym_Delta] = ACTIONS(77),
    [anon_sym_Epsilon] = ACTIONS(77),
    [anon_sym_Zeta] = ACTIONS(77),
    [anon_sym_Eta] = ACTIONS(77),
    [anon_sym_Theta] = ACTIONS(77),
    [anon_sym_Iota] = ACTIONS(77),
    [anon_sym_Kappa] = ACTIONS(77),
    [anon_sym_Lambda] = ACTIONS(77),
    [anon_sym_Mu] = ACTIONS(77),
    [anon_sym_Nu] = ACTIONS(77),
    [anon_sym_Xi] = ACTIONS(77),
    [anon_sym_Omicron] = ACTIONS(77),
    [anon_sym_Pi] = ACTIONS(77),
    [anon_sym_Rho] = ACTIONS(77),
    [anon_sym_Sigma] = ACTIONS(77),
    [anon_sym_Tau] = ACTIONS(77),
    [anon_sym_Upsilon] = ACTIONS(77),
    [anon_sym_Phi] = ACTIONS(77),
    [anon_sym_Chi] = ACTIONS(77),
    [anon_sym_Psi] = ACTIONS(77),
    [anon_sym_Omega] = ACTIONS(77),
    [anon_sym_infty] = ACTIONS(77),
    [anon_sym_hbar] = ACTIONS(77),
    [anon_sym_ell] = ACTIONS(77),
    [anon_sym_Re] = ACTIONS(77),
    [anon_sym_Im] = ACTIONS(77),
    [anon_sym_aleph] = ACTIONS(77),
    [anon_sym_nabla] = ACTIONS(77),
    [anon_sym_partial] = ACTIONS(77),
    [anon_sym_forall] = ACTIONS(77),
    [anon_sym_exists] = ACTIONS(77),
    [anon_sym_emptyset] = ACTIONS(77),
    [anon_sym_grad] = ACTIONS(77),
    [anon_sym_del] = ACTIONS(77),
    [anon_sym_pm] = ACTIONS(77),
    [anon_sym_mp] = ACTIONS(77),
    [aux_sym_constant_symbol_token1] = ACTIONS(77),
    [aux_sym_constant_symbol_token2] = ACTIONS(79),
    [aux_sym_constant_symbol_token3] = ACTIONS(79),
    [anon_sym_sqrt] = ACTIONS(77),
    [anon_sym_text] = ACTIONS(77),
    [anon_sym_bb] = ACTIONS(77),
    [anon_sym_cc] = ACTIONS(77),
    [anon_sym_tt] = ACTIONS(77),
    [anon_sym_fr] = ACTIONS(77),
    [anon_sym_sf] = ACTIONS(77),
    [anon_sym_bold] = ACTIONS(77),
    [anon_sym_cal] = ACTIONS(77),
    [anon_sym_frak] = ACTIONS(77),
    [anon_sym_monospace] = ACTIONS(77),
    [anon_sym_italic] = ACTIONS(77),
    [anon_sym_frac] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_stackrel] = ACTIONS(77),
    [anon_sym_choose] = ACTIONS(77),
    [anon_sym_atop] = ACTIONS(77),
    [anon_sym_over] = ACTIONS(77),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACE_COLON] = ACTIONS(79),
    [anon_sym_LPAREN_COLON] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_COLON_RBRACE] = ACTIONS(79),
    [anon_sym_COLON_RPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
  },
  [29] = {
    [anon_sym_alpha] = ACTIONS(81),
    [anon_sym_beta] = ACTIONS(81),
    [anon_sym_gamma] = ACTIONS(81),
    [anon_sym_delta] = ACTIONS(81),
    [anon_sym_epsilon] = ACTIONS(81),
    [anon_sym_zeta] = ACTIONS(81),
    [anon_sym_eta] = ACTIONS(81),
    [anon_sym_theta] = ACTIONS(81),
    [anon_sym_iota] = ACTIONS(81),
    [anon_sym_kappa] = ACTIONS(81),
    [anon_sym_lambda] = ACTIONS(81),
    [anon_sym_mu] = ACTIONS(81),
    [anon_sym_nu] = ACTIONS(81),
    [anon_sym_xi] = ACTIONS(81),
    [anon_sym_omicron] = ACTIONS(81),
    [anon_sym_pi] = ACTIONS(81),
    [anon_sym_rho] = ACTIONS(81),
    [anon_sym_sigma] = ACTIONS(81),
    [anon_sym_tau] = ACTIONS(81),
    [anon_sym_upsilon] = ACTIONS(81),
    [anon_sym_phi] = ACTIONS(81),
    [anon_sym_chi] = ACTIONS(81),
    [anon_sym_psi] = ACTIONS(81),
    [anon_sym_omega] = ACTIONS(81),
    [anon_sym_Alpha] = ACTIONS(81),
    [anon_sym_Beta] = ACTIONS(81),
    [anon_sym_Gamma] = ACTIONS(81),
    [anon_sym_Delta] = ACTIONS(81),
    [anon_sym_Epsilon] = ACTIONS(81),
    [anon_sym_Zeta] = ACTIONS(81),
    [anon_sym_Eta] = ACTIONS(81),
    [anon_sym_Theta] = ACTIONS(81),
    [anon_sym_Iota] = ACTIONS(81),
    [anon_sym_Kappa] = ACTIONS(81),
    [anon_sym_Lambda] = ACTIONS(81),
    [anon_sym_Mu] = ACTIONS(81),
    [anon_sym_Nu] = ACTIONS(81),
    [anon_sym_Xi] = ACTIONS(81),
    [anon_sym_Omicron] = ACTIONS(81),
    [anon_sym_Pi] = ACTIONS(81),
    [anon_sym_Rho] = ACTIONS(81),
    [anon_sym_Sigma] = ACTIONS(81),
    [anon_sym_Tau] = ACTIONS(81),
    [anon_sym_Upsilon] = ACTIONS(81),
    [anon_sym_Phi] = ACTIONS(81),
    [anon_sym_Chi] = ACTIONS(81),
    [anon_sym_Psi] = ACTIONS(81),
    [anon_sym_Omega] = ACTIONS(81),
    [anon_sym_infty] = ACTIONS(81),
    [anon_sym_hbar] = ACTIONS(81),
    [anon_sym_ell] = ACTIONS(81),
    [anon_sym_Re] = ACTIONS(81),
    [anon_sym_Im] = ACTIONS(81),
    [anon_sym_aleph] = ACTIONS(81),
    [anon_sym_nabla] = ACTIONS(81),
    [anon_sym_partial] = ACTIONS(81),
    [anon_sym_forall] = ACTIONS(81),
    [anon_sym_exists] = ACTIONS(81),
    [anon_sym_emptyset] = ACTIONS(81),
    [anon_sym_grad] = ACTIONS(81),
    [anon_sym_del] = ACTIONS(81),
    [anon_sym_pm] = ACTIONS(81),
    [anon_sym_mp] = ACTIONS(81),
    [aux_sym_constant_symbol_token1] = ACTIONS(81),
    [aux_sym_constant_symbol_token2] = ACTIONS(83),
    [aux_sym_constant_symbol_token3] = ACTIONS(83),
    [anon_sym_sqrt] = ACTIONS(81),
    [anon_sym_text] = ACTIONS(81),
    [anon_sym_bb] = ACTIONS(81),
    [anon_sym_cc] = ACTIONS(81),
    [anon_sym_tt] = ACTIONS(81),
    [anon_sym_fr] = ACTIONS(81),
    [anon_sym_sf] = ACTIONS(81),
    [anon_sym_bold] = ACTIONS(81),
    [anon_sym_cal] = ACTIONS(81),
    [anon_sym_frak] = ACTIONS(81),
    [anon_sym_monospace] = ACTIONS(81),
    [anon_sym_italic] = ACTIONS(81),
    [anon_sym_frac] = ACTIONS(81),
    [anon_sym_root] = ACTIONS(81),
    [anon_sym_stackrel] = ACTIONS(81),
    [anon_sym_choose] = ACTIONS(81),
    [anon_sym_atop] = ACTIONS(81),
    [anon_sym_over] = ACTIONS(81),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACE_COLON] = ACTIONS(83),
    [anon_sym_LPAREN_COLON] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_COLON_RBRACE] = ACTIONS(83),
    [anon_sym_COLON_RPAREN] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
  },
  [30] = {
    [anon_sym_alpha] = ACTIONS(85),
    [anon_sym_beta] = ACTIONS(85),
    [anon_sym_gamma] = ACTIONS(85),
    [anon_sym_delta] = ACTIONS(85),
    [anon_sym_epsilon] = ACTIONS(85),
    [anon_sym_zeta] = ACTIONS(85),
    [anon_sym_eta] = ACTIONS(85),
    [anon_sym_theta] = ACTIONS(85),
    [anon_sym_iota] = ACTIONS(85),
    [anon_sym_kappa] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(85),
    [anon_sym_mu] = ACTIONS(85),
    [anon_sym_nu] = ACTIONS(85),
    [anon_sym_xi] = ACTIONS(85),
    [anon_sym_omicron] = ACTIONS(85),
    [anon_sym_pi] = ACTIONS(85),
    [anon_sym_rho] = ACTIONS(85),
    [anon_sym_sigma] = ACTIONS(85),
    [anon_sym_tau] = ACTIONS(85),
    [anon_sym_upsilon] = ACTIONS(85),
    [anon_sym_phi] = ACTIONS(85),
    [anon_sym_chi] = ACTIONS(85),
    [anon_sym_psi] = ACTIONS(85),
    [anon_sym_omega] = ACTIONS(85),
    [anon_sym_Alpha] = ACTIONS(85),
    [anon_sym_Beta] = ACTIONS(85),
    [anon_sym_Gamma] = ACTIONS(85),
    [anon_sym_Delta] = ACTIONS(85),
    [anon_sym_Epsilon] = ACTIONS(85),
    [anon_sym_Zeta] = ACTIONS(85),
    [anon_sym_Eta] = ACTIONS(85),
    [anon_sym_Theta] = ACTIONS(85),
    [anon_sym_Iota] = ACTIONS(85),
    [anon_sym_Kappa] = ACTIONS(85),
    [anon_sym_Lambda] = ACTIONS(85),
    [anon_sym_Mu] = ACTIONS(85),
    [anon_sym_Nu] = ACTIONS(85),
    [anon_sym_Xi] = ACTIONS(85),
    [anon_sym_Omicron] = ACTIONS(85),
    [anon_sym_Pi] = ACTIONS(85),
    [anon_sym_Rho] = ACTIONS(85),
    [anon_sym_Sigma] = ACTIONS(85),
    [anon_sym_Tau] = ACTIONS(85),
    [anon_sym_Upsilon] = ACTIONS(85),
    [anon_sym_Phi] = ACTIONS(85),
    [anon_sym_Chi] = ACTIONS(85),
    [anon_sym_Psi] = ACTIONS(85),
    [anon_sym_Omega] = ACTIONS(85),
    [anon_sym_infty] = ACTIONS(85),
    [anon_sym_hbar] = ACTIONS(85),
    [anon_sym_ell] = ACTIONS(85),
    [anon_sym_Re] = ACTIONS(85),
    [anon_sym_Im] = ACTIONS(85),
    [anon_sym_aleph] = ACTIONS(85),
    [anon_sym_nabla] = ACTIONS(85),
    [anon_sym_partial] = ACTIONS(85),
    [anon_sym_forall] = ACTIONS(85),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_emptyset] = ACTIONS(85),
    [anon_sym_grad] = ACTIONS(85),
    [anon_sym_del] = ACTIONS(85),
    [anon_sym_pm] = ACTIONS(85),
    [anon_sym_mp] = ACTIONS(85),
    [aux_sym_constant_symbol_token1] = ACTIONS(85),
    [aux_sym_constant_symbol_token2] = ACTIONS(87),
    [aux_sym_constant_symbol_token3] = ACTIONS(87),
    [anon_sym_sqrt] = ACTIONS(85),
    [anon_sym_text] = ACTIONS(85),
    [anon_sym_bb] = ACTIONS(85),
    [anon_sym_cc] = ACTIONS(85),
    [anon_sym_tt] = ACTIONS(85),
    [anon_sym_fr] = ACTIONS(85),
    [anon_sym_sf] = ACTIONS(85),
    [anon_sym_bold] = ACTIONS(85),
    [anon_sym_cal] = ACTIONS(85),
    [anon_sym_frak] = ACTIONS(85),
    [anon_sym_monospace] = ACTIONS(85),
    [anon_sym_italic] = ACTIONS(85),
    [anon_sym_frac] = ACTIONS(85),
    [anon_sym_root] = ACTIONS(85),
    [anon_sym_stackrel] = ACTIONS(85),
    [anon_sym_choose] = ACTIONS(85),
    [anon_sym_atop] = ACTIONS(85),
    [anon_sym_over] = ACTIONS(85),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LBRACE_COLON] = ACTIONS(87),
    [anon_sym_LPAREN_COLON] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_COLON_RBRACE] = ACTIONS(87),
    [anon_sym_COLON_RPAREN] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
  },
  [31] = {
    [anon_sym_alpha] = ACTIONS(89),
    [anon_sym_beta] = ACTIONS(89),
    [anon_sym_gamma] = ACTIONS(89),
    [anon_sym_delta] = ACTIONS(89),
    [anon_sym_epsilon] = ACTIONS(89),
    [anon_sym_zeta] = ACTIONS(89),
    [anon_sym_eta] = ACTIONS(89),
    [anon_sym_theta] = ACTIONS(89),
    [anon_sym_iota] = ACTIONS(89),
    [anon_sym_kappa] = ACTIONS(89),
    [anon_sym_lambda] = ACTIONS(89),
    [anon_sym_mu] = ACTIONS(89),
    [anon_sym_nu] = ACTIONS(89),
    [anon_sym_xi] = ACTIONS(89),
    [anon_sym_omicron] = ACTIONS(89),
    [anon_sym_pi] = ACTIONS(89),
    [anon_sym_rho] = ACTIONS(89),
    [anon_sym_sigma] = ACTIONS(89),
    [anon_sym_tau] = ACTIONS(89),
    [anon_sym_upsilon] = ACTIONS(89),
    [anon_sym_phi] = ACTIONS(89),
    [anon_sym_chi] = ACTIONS(89),
    [anon_sym_psi] = ACTIONS(89),
    [anon_sym_omega] = ACTIONS(89),
    [anon_sym_Alpha] = ACTIONS(89),
    [anon_sym_Beta] = ACTIONS(89),
    [anon_sym_Gamma] = ACTIONS(89),
    [anon_sym_Delta] = ACTIONS(89),
    [anon_sym_Epsilon] = ACTIONS(89),
    [anon_sym_Zeta] = ACTIONS(89),
    [anon_sym_Eta] = ACTIONS(89),
    [anon_sym_Theta] = ACTIONS(89),
    [anon_sym_Iota] = ACTIONS(89),
    [anon_sym_Kappa] = ACTIONS(89),
    [anon_sym_Lambda] = ACTIONS(89),
    [anon_sym_Mu] = ACTIONS(89),
    [anon_sym_Nu] = ACTIONS(89),
    [anon_sym_Xi] = ACTIONS(89),
    [anon_sym_Omicron] = ACTIONS(89),
    [anon_sym_Pi] = ACTIONS(89),
    [anon_sym_Rho] = ACTIONS(89),
    [anon_sym_Sigma] = ACTIONS(89),
    [anon_sym_Tau] = ACTIONS(89),
    [anon_sym_Upsilon] = ACTIONS(89),
    [anon_sym_Phi] = ACTIONS(89),
    [anon_sym_Chi] = ACTIONS(89),
    [anon_sym_Psi] = ACTIONS(89),
    [anon_sym_Omega] = ACTIONS(89),
    [anon_sym_infty] = ACTIONS(89),
    [anon_sym_hbar] = ACTIONS(89),
    [anon_sym_ell] = ACTIONS(89),
    [anon_sym_Re] = ACTIONS(89),
    [anon_sym_Im] = ACTIONS(89),
    [anon_sym_aleph] = ACTIONS(89),
    [anon_sym_nabla] = ACTIONS(89),
    [anon_sym_partial] = ACTIONS(89),
    [anon_sym_forall] = ACTIONS(89),
    [anon_sym_exists] = ACTIONS(89),
    [anon_sym_emptyset] = ACTIONS(89),
    [anon_sym_grad] = ACTIONS(89),
    [anon_sym_del] = ACTIONS(89),
    [anon_sym_pm] = ACTIONS(89),
    [anon_sym_mp] = ACTIONS(89),
    [aux_sym_constant_symbol_token1] = ACTIONS(89),
    [aux_sym_constant_symbol_token2] = ACTIONS(91),
    [aux_sym_constant_symbol_token3] = ACTIONS(91),
    [anon_sym_sqrt] = ACTIONS(89),
    [anon_sym_text] = ACTIONS(89),
    [anon_sym_bb] = ACTIONS(89),
    [anon_sym_cc] = ACTIONS(89),
    [anon_sym_tt] = ACTIONS(89),
    [anon_sym_fr] = ACTIONS(89),
    [anon_sym_sf] = ACTIONS(89),
    [anon_sym_bold] = ACTIONS(89),
    [anon_sym_cal] = ACTIONS(89),
    [anon_sym_frak] = ACTIONS(89),
    [anon_sym_monospace] = ACTIONS(89),
    [anon_sym_italic] = ACTIONS(89),
    [anon_sym_frac] = ACTIONS(89),
    [anon_sym_root] = ACTIONS(89),
    [anon_sym_stackrel] = ACTIONS(89),
    [anon_sym_choose] = ACTIONS(89),
    [anon_sym_atop] = ACTIONS(89),
    [anon_sym_over] = ACTIONS(89),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACE_COLON] = ACTIONS(91),
    [anon_sym_LPAREN_COLON] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_COLON_RBRACE] = ACTIONS(91),
    [anon_sym_COLON_RPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
  },
  [32] = {
    [anon_sym_alpha] = ACTIONS(93),
    [anon_sym_beta] = ACTIONS(93),
    [anon_sym_gamma] = ACTIONS(93),
    [anon_sym_delta] = ACTIONS(93),
    [anon_sym_epsilon] = ACTIONS(93),
    [anon_sym_zeta] = ACTIONS(93),
    [anon_sym_eta] = ACTIONS(93),
    [anon_sym_theta] = ACTIONS(93),
    [anon_sym_iota] = ACTIONS(93),
    [anon_sym_kappa] = ACTIONS(93),
    [anon_sym_lambda] = ACTIONS(93),
    [anon_sym_mu] = ACTIONS(93),
    [anon_sym_nu] = ACTIONS(93),
    [anon_sym_xi] = ACTIONS(93),
    [anon_sym_omicron] = ACTIONS(93),
    [anon_sym_pi] = ACTIONS(93),
    [anon_sym_rho] = ACTIONS(93),
    [anon_sym_sigma] = ACTIONS(93),
    [anon_sym_tau] = ACTIONS(93),
    [anon_sym_upsilon] = ACTIONS(93),
    [anon_sym_phi] = ACTIONS(93),
    [anon_sym_chi] = ACTIONS(93),
    [anon_sym_psi] = ACTIONS(93),
    [anon_sym_omega] = ACTIONS(93),
    [anon_sym_Alpha] = ACTIONS(93),
    [anon_sym_Beta] = ACTIONS(93),
    [anon_sym_Gamma] = ACTIONS(93),
    [anon_sym_Delta] = ACTIONS(93),
    [anon_sym_Epsilon] = ACTIONS(93),
    [anon_sym_Zeta] = ACTIONS(93),
    [anon_sym_Eta] = ACTIONS(93),
    [anon_sym_Theta] = ACTIONS(93),
    [anon_sym_Iota] = ACTIONS(93),
    [anon_sym_Kappa] = ACTIONS(93),
    [anon_sym_Lambda] = ACTIONS(93),
    [anon_sym_Mu] = ACTIONS(93),
    [anon_sym_Nu] = ACTIONS(93),
    [anon_sym_Xi] = ACTIONS(93),
    [anon_sym_Omicron] = ACTIONS(93),
    [anon_sym_Pi] = ACTIONS(93),
    [anon_sym_Rho] = ACTIONS(93),
    [anon_sym_Sigma] = ACTIONS(93),
    [anon_sym_Tau] = ACTIONS(93),
    [anon_sym_Upsilon] = ACTIONS(93),
    [anon_sym_Phi] = ACTIONS(93),
    [anon_sym_Chi] = ACTIONS(93),
    [anon_sym_Psi] = ACTIONS(93),
    [anon_sym_Omega] = ACTIONS(93),
    [anon_sym_infty] = ACTIONS(93),
    [anon_sym_hbar] = ACTIONS(93),
    [anon_sym_ell] = ACTIONS(93),
    [anon_sym_Re] = ACTIONS(93),
    [anon_sym_Im] = ACTIONS(93),
    [anon_sym_aleph] = ACTIONS(93),
    [anon_sym_nabla] = ACTIONS(93),
    [anon_sym_partial] = ACTIONS(93),
    [anon_sym_forall] = ACTIONS(93),
    [anon_sym_exists] = ACTIONS(93),
    [anon_sym_emptyset] = ACTIONS(93),
    [anon_sym_grad] = ACTIONS(93),
    [anon_sym_del] = ACTIONS(93),
    [anon_sym_pm] = ACTIONS(93),
    [anon_sym_mp] = ACTIONS(93),
    [aux_sym_constant_symbol_token1] = ACTIONS(93),
    [aux_sym_constant_symbol_token2] = ACTIONS(95),
    [aux_sym_constant_symbol_token3] = ACTIONS(95),
    [anon_sym_sqrt] = ACTIONS(93),
    [anon_sym_text] = ACTIONS(93),
    [anon_sym_bb] = ACTIONS(93),
    [anon_sym_cc] = ACTIONS(93),
    [anon_sym_tt] = ACTIONS(93),
    [anon_sym_fr] = ACTIONS(93),
    [anon_sym_sf] = ACTIONS(93),
    [anon_sym_bold] = ACTIONS(93),
    [anon_sym_cal] = ACTIONS(93),
    [anon_sym_frak] = ACTIONS(93),
    [anon_sym_monospace] = ACTIONS(93),
    [anon_sym_italic] = ACTIONS(93),
    [anon_sym_frac] = ACTIONS(93),
    [anon_sym_root] = ACTIONS(93),
    [anon_sym_stackrel] = ACTIONS(93),
    [anon_sym_choose] = ACTIONS(93),
    [anon_sym_atop] = ACTIONS(93),
    [anon_sym_over] = ACTIONS(93),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_LPAREN_COLON] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_COLON_RBRACE] = ACTIONS(95),
    [anon_sym_COLON_RPAREN] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(95),
  },
  [33] = {
    [anon_sym_alpha] = ACTIONS(97),
    [anon_sym_beta] = ACTIONS(97),
    [anon_sym_gamma] = ACTIONS(97),
    [anon_sym_delta] = ACTIONS(97),
    [anon_sym_epsilon] = ACTIONS(97),
    [anon_sym_zeta] = ACTIONS(97),
    [anon_sym_eta] = ACTIONS(97),
    [anon_sym_theta] = ACTIONS(97),
    [anon_sym_iota] = ACTIONS(97),
    [anon_sym_kappa] = ACTIONS(97),
    [anon_sym_lambda] = ACTIONS(97),
    [anon_sym_mu] = ACTIONS(97),
    [anon_sym_nu] = ACTIONS(97),
    [anon_sym_xi] = ACTIONS(97),
    [anon_sym_omicron] = ACTIONS(97),
    [anon_sym_pi] = ACTIONS(97),
    [anon_sym_rho] = ACTIONS(97),
    [anon_sym_sigma] = ACTIONS(97),
    [anon_sym_tau] = ACTIONS(97),
    [anon_sym_upsilon] = ACTIONS(97),
    [anon_sym_phi] = ACTIONS(97),
    [anon_sym_chi] = ACTIONS(97),
    [anon_sym_psi] = ACTIONS(97),
    [anon_sym_omega] = ACTIONS(97),
    [anon_sym_Alpha] = ACTIONS(97),
    [anon_sym_Beta] = ACTIONS(97),
    [anon_sym_Gamma] = ACTIONS(97),
    [anon_sym_Delta] = ACTIONS(97),
    [anon_sym_Epsilon] = ACTIONS(97),
    [anon_sym_Zeta] = ACTIONS(97),
    [anon_sym_Eta] = ACTIONS(97),
    [anon_sym_Theta] = ACTIONS(97),
    [anon_sym_Iota] = ACTIONS(97),
    [anon_sym_Kappa] = ACTIONS(97),
    [anon_sym_Lambda] = ACTIONS(97),
    [anon_sym_Mu] = ACTIONS(97),
    [anon_sym_Nu] = ACTIONS(97),
    [anon_sym_Xi] = ACTIONS(97),
    [anon_sym_Omicron] = ACTIONS(97),
    [anon_sym_Pi] = ACTIONS(97),
    [anon_sym_Rho] = ACTIONS(97),
    [anon_sym_Sigma] = ACTIONS(97),
    [anon_sym_Tau] = ACTIONS(97),
    [anon_sym_Upsilon] = ACTIONS(97),
    [anon_sym_Phi] = ACTIONS(97),
    [anon_sym_Chi] = ACTIONS(97),
    [anon_sym_Psi] = ACTIONS(97),
    [anon_sym_Omega] = ACTIONS(97),
    [anon_sym_infty] = ACTIONS(97),
    [anon_sym_hbar] = ACTIONS(97),
    [anon_sym_ell] = ACTIONS(97),
    [anon_sym_Re] = ACTIONS(97),
    [anon_sym_Im] = ACTIONS(97),
    [anon_sym_aleph] = ACTIONS(97),
    [anon_sym_nabla] = ACTIONS(97),
    [anon_sym_partial] = ACTIONS(97),
    [anon_sym_forall] = ACTIONS(97),
    [anon_sym_exists] = ACTIONS(97),
    [anon_sym_emptyset] = ACTIONS(97),
    [anon_sym_grad] = ACTIONS(97),
    [anon_sym_del] = ACTIONS(97),
    [anon_sym_pm] = ACTIONS(97),
    [anon_sym_mp] = ACTIONS(97),
    [aux_sym_constant_symbol_token1] = ACTIONS(97),
    [aux_sym_constant_symbol_token2] = ACTIONS(99),
    [aux_sym_constant_symbol_token3] = ACTIONS(99),
    [anon_sym_sqrt] = ACTIONS(97),
    [anon_sym_text] = ACTIONS(97),
    [anon_sym_bb] = ACTIONS(97),
    [anon_sym_cc] = ACTIONS(97),
    [anon_sym_tt] = ACTIONS(97),
    [anon_sym_fr] = ACTIONS(97),
    [anon_sym_sf] = ACTIONS(97),
    [anon_sym_bold] = ACTIONS(97),
    [anon_sym_cal] = ACTIONS(97),
    [anon_sym_frak] = ACTIONS(97),
    [anon_sym_monospace] = ACTIONS(97),
    [anon_sym_italic] = ACTIONS(97),
    [anon_sym_frac] = ACTIONS(97),
    [anon_sym_root] = ACTIONS(97),
    [anon_sym_stackrel] = ACTIONS(97),
    [anon_sym_choose] = ACTIONS(97),
    [anon_sym_atop] = ACTIONS(97),
    [anon_sym_over] = ACTIONS(97),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACE_COLON] = ACTIONS(99),
    [anon_sym_LPAREN_COLON] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_COLON_RBRACE] = ACTIONS(99),
    [anon_sym_COLON_RPAREN] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
  },
  [34] = {
    [anon_sym_alpha] = ACTIONS(101),
    [anon_sym_beta] = ACTIONS(101),
    [anon_sym_gamma] = ACTIONS(101),
    [anon_sym_delta] = ACTIONS(101),
    [anon_sym_epsilon] = ACTIONS(101),
    [anon_sym_zeta] = ACTIONS(101),
    [anon_sym_eta] = ACTIONS(101),
    [anon_sym_theta] = ACTIONS(101),
    [anon_sym_iota] = ACTIONS(101),
    [anon_sym_kappa] = ACTIONS(101),
    [anon_sym_lambda] = ACTIONS(101),
    [anon_sym_mu] = ACTIONS(101),
    [anon_sym_nu] = ACTIONS(101),
    [anon_sym_xi] = ACTIONS(101),
    [anon_sym_omicron] = ACTIONS(101),
    [anon_sym_pi] = ACTIONS(101),
    [anon_sym_rho] = ACTIONS(101),
    [anon_sym_sigma] = ACTIONS(101),
    [anon_sym_tau] = ACTIONS(101),
    [anon_sym_upsilon] = ACTIONS(101),
    [anon_sym_phi] = ACTIONS(101),
    [anon_sym_chi] = ACTIONS(101),
    [anon_sym_psi] = ACTIONS(101),
    [anon_sym_omega] = ACTIONS(101),
    [anon_sym_Alpha] = ACTIONS(101),
    [anon_sym_Beta] = ACTIONS(101),
    [anon_sym_Gamma] = ACTIONS(101),
    [anon_sym_Delta] = ACTIONS(101),
    [anon_sym_Epsilon] = ACTIONS(101),
    [anon_sym_Zeta] = ACTIONS(101),
    [anon_sym_Eta] = ACTIONS(101),
    [anon_sym_Theta] = ACTIONS(101),
    [anon_sym_Iota] = ACTIONS(101),
    [anon_sym_Kappa] = ACTIONS(101),
    [anon_sym_Lambda] = ACTIONS(101),
    [anon_sym_Mu] = ACTIONS(101),
    [anon_sym_Nu] = ACTIONS(101),
    [anon_sym_Xi] = ACTIONS(101),
    [anon_sym_Omicron] = ACTIONS(101),
    [anon_sym_Pi] = ACTIONS(101),
    [anon_sym_Rho] = ACTIONS(101),
    [anon_sym_Sigma] = ACTIONS(101),
    [anon_sym_Tau] = ACTIONS(101),
    [anon_sym_Upsilon] = ACTIONS(101),
    [anon_sym_Phi] = ACTIONS(101),
    [anon_sym_Chi] = ACTIONS(101),
    [anon_sym_Psi] = ACTIONS(101),
    [anon_sym_Omega] = ACTIONS(101),
    [anon_sym_infty] = ACTIONS(101),
    [anon_sym_hbar] = ACTIONS(101),
    [anon_sym_ell] = ACTIONS(101),
    [anon_sym_Re] = ACTIONS(101),
    [anon_sym_Im] = ACTIONS(101),
    [anon_sym_aleph] = ACTIONS(101),
    [anon_sym_nabla] = ACTIONS(101),
    [anon_sym_partial] = ACTIONS(101),
    [anon_sym_forall] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_emptyset] = ACTIONS(101),
    [anon_sym_grad] = ACTIONS(101),
    [anon_sym_del] = ACTIONS(101),
    [anon_sym_pm] = ACTIONS(101),
    [anon_sym_mp] = ACTIONS(101),
    [aux_sym_constant_symbol_token1] = ACTIONS(101),
    [aux_sym_constant_symbol_token2] = ACTIONS(103),
    [aux_sym_constant_symbol_token3] = ACTIONS(103),
    [anon_sym_sqrt] = ACTIONS(101),
    [anon_sym_text] = ACTIONS(101),
    [anon_sym_bb] = ACTIONS(101),
    [anon_sym_cc] = ACTIONS(101),
    [anon_sym_tt] = ACTIONS(101),
    [anon_sym_fr] = ACTIONS(101),
    [anon_sym_sf] = ACTIONS(101),
    [anon_sym_bold] = ACTIONS(101),
    [anon_sym_cal] = ACTIONS(101),
    [anon_sym_frak] = ACTIONS(101),
    [anon_sym_monospace] = ACTIONS(101),
    [anon_sym_italic] = ACTIONS(101),
    [anon_sym_frac] = ACTIONS(101),
    [anon_sym_root] = ACTIONS(101),
    [anon_sym_stackrel] = ACTIONS(101),
    [anon_sym_choose] = ACTIONS(101),
    [anon_sym_atop] = ACTIONS(101),
    [anon_sym_over] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_LBRACE_COLON] = ACTIONS(103),
    [anon_sym_LPAREN_COLON] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_COLON_RBRACE] = ACTIONS(103),
    [anon_sym_COLON_RPAREN] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
  },
  [35] = {
    [anon_sym_alpha] = ACTIONS(105),
    [anon_sym_beta] = ACTIONS(105),
    [anon_sym_gamma] = ACTIONS(105),
    [anon_sym_delta] = ACTIONS(105),
    [anon_sym_epsilon] = ACTIONS(105),
    [anon_sym_zeta] = ACTIONS(105),
    [anon_sym_eta] = ACTIONS(105),
    [anon_sym_theta] = ACTIONS(105),
    [anon_sym_iota] = ACTIONS(105),
    [anon_sym_kappa] = ACTIONS(105),
    [anon_sym_lambda] = ACTIONS(105),
    [anon_sym_mu] = ACTIONS(105),
    [anon_sym_nu] = ACTIONS(105),
    [anon_sym_xi] = ACTIONS(105),
    [anon_sym_omicron] = ACTIONS(105),
    [anon_sym_pi] = ACTIONS(105),
    [anon_sym_rho] = ACTIONS(105),
    [anon_sym_sigma] = ACTIONS(105),
    [anon_sym_tau] = ACTIONS(105),
    [anon_sym_upsilon] = ACTIONS(105),
    [anon_sym_phi] = ACTIONS(105),
    [anon_sym_chi] = ACTIONS(105),
    [anon_sym_psi] = ACTIONS(105),
    [anon_sym_omega] = ACTIONS(105),
    [anon_sym_Alpha] = ACTIONS(105),
    [anon_sym_Beta] = ACTIONS(105),
    [anon_sym_Gamma] = ACTIONS(105),
    [anon_sym_Delta] = ACTIONS(105),
    [anon_sym_Epsilon] = ACTIONS(105),
    [anon_sym_Zeta] = ACTIONS(105),
    [anon_sym_Eta] = ACTIONS(105),
    [anon_sym_Theta] = ACTIONS(105),
    [anon_sym_Iota] = ACTIONS(105),
    [anon_sym_Kappa] = ACTIONS(105),
    [anon_sym_Lambda] = ACTIONS(105),
    [anon_sym_Mu] = ACTIONS(105),
    [anon_sym_Nu] = ACTIONS(105),
    [anon_sym_Xi] = ACTIONS(105),
    [anon_sym_Omicron] = ACTIONS(105),
    [anon_sym_Pi] = ACTIONS(105),
    [anon_sym_Rho] = ACTIONS(105),
    [anon_sym_Sigma] = ACTIONS(105),
    [anon_sym_Tau] = ACTIONS(105),
    [anon_sym_Upsilon] = ACTIONS(105),
    [anon_sym_Phi] = ACTIONS(105),
    [anon_sym_Chi] = ACTIONS(105),
    [anon_sym_Psi] = ACTIONS(105),
    [anon_sym_Omega] = ACTIONS(105),
    [anon_sym_infty] = ACTIONS(105),
    [anon_sym_hbar] = ACTIONS(105),
    [anon_sym_ell] = ACTIONS(105),
    [anon_sym_Re] = ACTIONS(105),
    [anon_sym_Im] = ACTIONS(105),
    [anon_sym_aleph] = ACTIONS(105),
    [anon_sym_nabla] = ACTIONS(105),
    [anon_sym_partial] = ACTIONS(105),
    [anon_sym_forall] = ACTIONS(105),
    [anon_sym_exists] = ACTIONS(105),
    [anon_sym_emptyset] = ACTIONS(105),
    [anon_sym_grad] = ACTIONS(105),
    [anon_sym_del] = ACTIONS(105),
    [anon_sym_pm] = ACTIONS(105),
    [anon_sym_mp] = ACTIONS(105),
    [aux_sym_constant_symbol_token1] = ACTIONS(105),
    [aux_sym_constant_symbol_token2] = ACTIONS(107),
    [aux_sym_constant_symbol_token3] = ACTIONS(107),
    [anon_sym_sqrt] = ACTIONS(105),
    [anon_sym_text] = ACTIONS(105),
    [anon_sym_bb] = ACTIONS(105),
    [anon_sym_cc] = ACTIONS(105),
    [anon_sym_tt] = ACTIONS(105),
    [anon_sym_fr] = ACTIONS(105),
    [anon_sym_sf] = ACTIONS(105),
    [anon_sym_bold] = ACTIONS(105),
    [anon_sym_cal] = ACTIONS(105),
    [anon_sym_frak] = ACTIONS(105),
    [anon_sym_monospace] = ACTIONS(105),
    [anon_sym_italic] = ACTIONS(105),
    [anon_sym_frac] = ACTIONS(105),
    [anon_sym_root] = ACTIONS(105),
    [anon_sym_stackrel] = ACTIONS(105),
    [anon_sym_choose] = ACTIONS(105),
    [anon_sym_atop] = ACTIONS(105),
    [anon_sym_over] = ACTIONS(105),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LBRACE_COLON] = ACTIONS(107),
    [anon_sym_LPAREN_COLON] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_COLON_RBRACE] = ACTIONS(107),
    [anon_sym_COLON_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(111),
  },
  [36] = {
    [anon_sym_alpha] = ACTIONS(81),
    [anon_sym_beta] = ACTIONS(81),
    [anon_sym_gamma] = ACTIONS(81),
    [anon_sym_delta] = ACTIONS(81),
    [anon_sym_epsilon] = ACTIONS(81),
    [anon_sym_zeta] = ACTIONS(81),
    [anon_sym_eta] = ACTIONS(81),
    [anon_sym_theta] = ACTIONS(81),
    [anon_sym_iota] = ACTIONS(81),
    [anon_sym_kappa] = ACTIONS(81),
    [anon_sym_lambda] = ACTIONS(81),
    [anon_sym_mu] = ACTIONS(81),
    [anon_sym_nu] = ACTIONS(81),
    [anon_sym_xi] = ACTIONS(81),
    [anon_sym_omicron] = ACTIONS(81),
    [anon_sym_pi] = ACTIONS(81),
    [anon_sym_rho] = ACTIONS(81),
    [anon_sym_sigma] = ACTIONS(81),
    [anon_sym_tau] = ACTIONS(81),
    [anon_sym_upsilon] = ACTIONS(81),
    [anon_sym_phi] = ACTIONS(81),
    [anon_sym_chi] = ACTIONS(81),
    [anon_sym_psi] = ACTIONS(81),
    [anon_sym_omega] = ACTIONS(81),
    [anon_sym_Alpha] = ACTIONS(81),
    [anon_sym_Beta] = ACTIONS(81),
    [anon_sym_Gamma] = ACTIONS(81),
    [anon_sym_Delta] = ACTIONS(81),
    [anon_sym_Epsilon] = ACTIONS(81),
    [anon_sym_Zeta] = ACTIONS(81),
    [anon_sym_Eta] = ACTIONS(81),
    [anon_sym_Theta] = ACTIONS(81),
    [anon_sym_Iota] = ACTIONS(81),
    [anon_sym_Kappa] = ACTIONS(81),
    [anon_sym_Lambda] = ACTIONS(81),
    [anon_sym_Mu] = ACTIONS(81),
    [anon_sym_Nu] = ACTIONS(81),
    [anon_sym_Xi] = ACTIONS(81),
    [anon_sym_Omicron] = ACTIONS(81),
    [anon_sym_Pi] = ACTIONS(81),
    [anon_sym_Rho] = ACTIONS(81),
    [anon_sym_Sigma] = ACTIONS(81),
    [anon_sym_Tau] = ACTIONS(81),
    [anon_sym_Upsilon] = ACTIONS(81),
    [anon_sym_Phi] = ACTIONS(81),
    [anon_sym_Chi] = ACTIONS(81),
    [anon_sym_Psi] = ACTIONS(81),
    [anon_sym_Omega] = ACTIONS(81),
    [anon_sym_infty] = ACTIONS(81),
    [anon_sym_hbar] = ACTIONS(81),
    [anon_sym_ell] = ACTIONS(81),
    [anon_sym_Re] = ACTIONS(81),
    [anon_sym_Im] = ACTIONS(81),
    [anon_sym_aleph] = ACTIONS(81),
    [anon_sym_nabla] = ACTIONS(81),
    [anon_sym_partial] = ACTIONS(81),
    [anon_sym_forall] = ACTIONS(81),
    [anon_sym_exists] = ACTIONS(81),
    [anon_sym_emptyset] = ACTIONS(81),
    [anon_sym_grad] = ACTIONS(81),
    [anon_sym_del] = ACTIONS(81),
    [anon_sym_pm] = ACTIONS(81),
    [anon_sym_mp] = ACTIONS(81),
    [aux_sym_constant_symbol_token1] = ACTIONS(81),
    [aux_sym_constant_symbol_token2] = ACTIONS(83),
    [aux_sym_constant_symbol_token3] = ACTIONS(83),
    [anon_sym_sqrt] = ACTIONS(81),
    [anon_sym_text] = ACTIONS(81),
    [anon_sym_bb] = ACTIONS(81),
    [anon_sym_cc] = ACTIONS(81),
    [anon_sym_tt] = ACTIONS(81),
    [anon_sym_fr] = ACTIONS(81),
    [anon_sym_sf] = ACTIONS(81),
    [anon_sym_bold] = ACTIONS(81),
    [anon_sym_cal] = ACTIONS(81),
    [anon_sym_frak] = ACTIONS(81),
    [anon_sym_monospace] = ACTIONS(81),
    [anon_sym_italic] = ACTIONS(81),
    [anon_sym_frac] = ACTIONS(81),
    [anon_sym_root] = ACTIONS(81),
    [anon_sym_stackrel] = ACTIONS(81),
    [anon_sym_choose] = ACTIONS(81),
    [anon_sym_atop] = ACTIONS(81),
    [anon_sym_over] = ACTIONS(81),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACE_COLON] = ACTIONS(83),
    [anon_sym_LPAREN_COLON] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_COLON_RBRACE] = ACTIONS(113),
    [anon_sym_COLON_RPAREN] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
  },
  [37] = {
    [anon_sym_alpha] = ACTIONS(115),
    [anon_sym_beta] = ACTIONS(115),
    [anon_sym_gamma] = ACTIONS(115),
    [anon_sym_delta] = ACTIONS(115),
    [anon_sym_epsilon] = ACTIONS(115),
    [anon_sym_zeta] = ACTIONS(115),
    [anon_sym_eta] = ACTIONS(115),
    [anon_sym_theta] = ACTIONS(115),
    [anon_sym_iota] = ACTIONS(115),
    [anon_sym_kappa] = ACTIONS(115),
    [anon_sym_lambda] = ACTIONS(115),
    [anon_sym_mu] = ACTIONS(115),
    [anon_sym_nu] = ACTIONS(115),
    [anon_sym_xi] = ACTIONS(115),
    [anon_sym_omicron] = ACTIONS(115),
    [anon_sym_pi] = ACTIONS(115),
    [anon_sym_rho] = ACTIONS(115),
    [anon_sym_sigma] = ACTIONS(115),
    [anon_sym_tau] = ACTIONS(115),
    [anon_sym_upsilon] = ACTIONS(115),
    [anon_sym_phi] = ACTIONS(115),
    [anon_sym_chi] = ACTIONS(115),
    [anon_sym_psi] = ACTIONS(115),
    [anon_sym_omega] = ACTIONS(115),
    [anon_sym_Alpha] = ACTIONS(115),
    [anon_sym_Beta] = ACTIONS(115),
    [anon_sym_Gamma] = ACTIONS(115),
    [anon_sym_Delta] = ACTIONS(115),
    [anon_sym_Epsilon] = ACTIONS(115),
    [anon_sym_Zeta] = ACTIONS(115),
    [anon_sym_Eta] = ACTIONS(115),
    [anon_sym_Theta] = ACTIONS(115),
    [anon_sym_Iota] = ACTIONS(115),
    [anon_sym_Kappa] = ACTIONS(115),
    [anon_sym_Lambda] = ACTIONS(115),
    [anon_sym_Mu] = ACTIONS(115),
    [anon_sym_Nu] = ACTIONS(115),
    [anon_sym_Xi] = ACTIONS(115),
    [anon_sym_Omicron] = ACTIONS(115),
    [anon_sym_Pi] = ACTIONS(115),
    [anon_sym_Rho] = ACTIONS(115),
    [anon_sym_Sigma] = ACTIONS(115),
    [anon_sym_Tau] = ACTIONS(115),
    [anon_sym_Upsilon] = ACTIONS(115),
    [anon_sym_Phi] = ACTIONS(115),
    [anon_sym_Chi] = ACTIONS(115),
    [anon_sym_Psi] = ACTIONS(115),
    [anon_sym_Omega] = ACTIONS(115),
    [anon_sym_infty] = ACTIONS(115),
    [anon_sym_hbar] = ACTIONS(115),
    [anon_sym_ell] = ACTIONS(115),
    [anon_sym_Re] = ACTIONS(115),
    [anon_sym_Im] = ACTIONS(115),
    [anon_sym_aleph] = ACTIONS(115),
    [anon_sym_nabla] = ACTIONS(115),
    [anon_sym_partial] = ACTIONS(115),
    [anon_sym_forall] = ACTIONS(115),
    [anon_sym_exists] = ACTIONS(115),
    [anon_sym_emptyset] = ACTIONS(115),
    [anon_sym_grad] = ACTIONS(115),
    [anon_sym_del] = ACTIONS(115),
    [anon_sym_pm] = ACTIONS(115),
    [anon_sym_mp] = ACTIONS(115),
    [aux_sym_constant_symbol_token1] = ACTIONS(115),
    [aux_sym_constant_symbol_token2] = ACTIONS(117),
    [aux_sym_constant_symbol_token3] = ACTIONS(117),
    [anon_sym_sqrt] = ACTIONS(115),
    [anon_sym_text] = ACTIONS(115),
    [anon_sym_bb] = ACTIONS(115),
    [anon_sym_cc] = ACTIONS(115),
    [anon_sym_tt] = ACTIONS(115),
    [anon_sym_fr] = ACTIONS(115),
    [anon_sym_sf] = ACTIONS(115),
    [anon_sym_bold] = ACTIONS(115),
    [anon_sym_cal] = ACTIONS(115),
    [anon_sym_frak] = ACTIONS(115),
    [anon_sym_monospace] = ACTIONS(115),
    [anon_sym_italic] = ACTIONS(115),
    [anon_sym_frac] = ACTIONS(115),
    [anon_sym_root] = ACTIONS(115),
    [anon_sym_stackrel] = ACTIONS(115),
    [anon_sym_choose] = ACTIONS(115),
    [anon_sym_atop] = ACTIONS(115),
    [anon_sym_over] = ACTIONS(115),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_LBRACE_COLON] = ACTIONS(117),
    [anon_sym_LPAREN_COLON] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_COLON_RBRACE] = ACTIONS(117),
    [anon_sym_COLON_RPAREN] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
  },
  [38] = {
    [anon_sym_alpha] = ACTIONS(119),
    [anon_sym_beta] = ACTIONS(119),
    [anon_sym_gamma] = ACTIONS(119),
    [anon_sym_delta] = ACTIONS(119),
    [anon_sym_epsilon] = ACTIONS(119),
    [anon_sym_zeta] = ACTIONS(119),
    [anon_sym_eta] = ACTIONS(119),
    [anon_sym_theta] = ACTIONS(119),
    [anon_sym_iota] = ACTIONS(119),
    [anon_sym_kappa] = ACTIONS(119),
    [anon_sym_lambda] = ACTIONS(119),
    [anon_sym_mu] = ACTIONS(119),
    [anon_sym_nu] = ACTIONS(119),
    [anon_sym_xi] = ACTIONS(119),
    [anon_sym_omicron] = ACTIONS(119),
    [anon_sym_pi] = ACTIONS(119),
    [anon_sym_rho] = ACTIONS(119),
    [anon_sym_sigma] = ACTIONS(119),
    [anon_sym_tau] = ACTIONS(119),
    [anon_sym_upsilon] = ACTIONS(119),
    [anon_sym_phi] = ACTIONS(119),
    [anon_sym_chi] = ACTIONS(119),
    [anon_sym_psi] = ACTIONS(119),
    [anon_sym_omega] = ACTIONS(119),
    [anon_sym_Alpha] = ACTIONS(119),
    [anon_sym_Beta] = ACTIONS(119),
    [anon_sym_Gamma] = ACTIONS(119),
    [anon_sym_Delta] = ACTIONS(119),
    [anon_sym_Epsilon] = ACTIONS(119),
    [anon_sym_Zeta] = ACTIONS(119),
    [anon_sym_Eta] = ACTIONS(119),
    [anon_sym_Theta] = ACTIONS(119),
    [anon_sym_Iota] = ACTIONS(119),
    [anon_sym_Kappa] = ACTIONS(119),
    [anon_sym_Lambda] = ACTIONS(119),
    [anon_sym_Mu] = ACTIONS(119),
    [anon_sym_Nu] = ACTIONS(119),
    [anon_sym_Xi] = ACTIONS(119),
    [anon_sym_Omicron] = ACTIONS(119),
    [anon_sym_Pi] = ACTIONS(119),
    [anon_sym_Rho] = ACTIONS(119),
    [anon_sym_Sigma] = ACTIONS(119),
    [anon_sym_Tau] = ACTIONS(119),
    [anon_sym_Upsilon] = ACTIONS(119),
    [anon_sym_Phi] = ACTIONS(119),
    [anon_sym_Chi] = ACTIONS(119),
    [anon_sym_Psi] = ACTIONS(119),
    [anon_sym_Omega] = ACTIONS(119),
    [anon_sym_infty] = ACTIONS(119),
    [anon_sym_hbar] = ACTIONS(119),
    [anon_sym_ell] = ACTIONS(119),
    [anon_sym_Re] = ACTIONS(119),
    [anon_sym_Im] = ACTIONS(119),
    [anon_sym_aleph] = ACTIONS(119),
    [anon_sym_nabla] = ACTIONS(119),
    [anon_sym_partial] = ACTIONS(119),
    [anon_sym_forall] = ACTIONS(119),
    [anon_sym_exists] = ACTIONS(119),
    [anon_sym_emptyset] = ACTIONS(119),
    [anon_sym_grad] = ACTIONS(119),
    [anon_sym_del] = ACTIONS(119),
    [anon_sym_pm] = ACTIONS(119),
    [anon_sym_mp] = ACTIONS(119),
    [aux_sym_constant_symbol_token1] = ACTIONS(119),
    [aux_sym_constant_symbol_token2] = ACTIONS(121),
    [aux_sym_constant_symbol_token3] = ACTIONS(121),
    [anon_sym_sqrt] = ACTIONS(119),
    [anon_sym_text] = ACTIONS(119),
    [anon_sym_bb] = ACTIONS(119),
    [anon_sym_cc] = ACTIONS(119),
    [anon_sym_tt] = ACTIONS(119),
    [anon_sym_fr] = ACTIONS(119),
    [anon_sym_sf] = ACTIONS(119),
    [anon_sym_bold] = ACTIONS(119),
    [anon_sym_cal] = ACTIONS(119),
    [anon_sym_frak] = ACTIONS(119),
    [anon_sym_monospace] = ACTIONS(119),
    [anon_sym_italic] = ACTIONS(119),
    [anon_sym_frac] = ACTIONS(119),
    [anon_sym_root] = ACTIONS(119),
    [anon_sym_stackrel] = ACTIONS(119),
    [anon_sym_choose] = ACTIONS(119),
    [anon_sym_atop] = ACTIONS(119),
    [anon_sym_over] = ACTIONS(119),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACE_COLON] = ACTIONS(121),
    [anon_sym_LPAREN_COLON] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_COLON_RBRACE] = ACTIONS(121),
    [anon_sym_COLON_RPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(121),
  },
  [39] = {
    [anon_sym_alpha] = ACTIONS(123),
    [anon_sym_beta] = ACTIONS(123),
    [anon_sym_gamma] = ACTIONS(123),
    [anon_sym_delta] = ACTIONS(123),
    [anon_sym_epsilon] = ACTIONS(123),
    [anon_sym_zeta] = ACTIONS(123),
    [anon_sym_eta] = ACTIONS(123),
    [anon_sym_theta] = ACTIONS(123),
    [anon_sym_iota] = ACTIONS(123),
    [anon_sym_kappa] = ACTIONS(123),
    [anon_sym_lambda] = ACTIONS(123),
    [anon_sym_mu] = ACTIONS(123),
    [anon_sym_nu] = ACTIONS(123),
    [anon_sym_xi] = ACTIONS(123),
    [anon_sym_omicron] = ACTIONS(123),
    [anon_sym_pi] = ACTIONS(123),
    [anon_sym_rho] = ACTIONS(123),
    [anon_sym_sigma] = ACTIONS(123),
    [anon_sym_tau] = ACTIONS(123),
    [anon_sym_upsilon] = ACTIONS(123),
    [anon_sym_phi] = ACTIONS(123),
    [anon_sym_chi] = ACTIONS(123),
    [anon_sym_psi] = ACTIONS(123),
    [anon_sym_omega] = ACTIONS(123),
    [anon_sym_Alpha] = ACTIONS(123),
    [anon_sym_Beta] = ACTIONS(123),
    [anon_sym_Gamma] = ACTIONS(123),
    [anon_sym_Delta] = ACTIONS(123),
    [anon_sym_Epsilon] = ACTIONS(123),
    [anon_sym_Zeta] = ACTIONS(123),
    [anon_sym_Eta] = ACTIONS(123),
    [anon_sym_Theta] = ACTIONS(123),
    [anon_sym_Iota] = ACTIONS(123),
    [anon_sym_Kappa] = ACTIONS(123),
    [anon_sym_Lambda] = ACTIONS(123),
    [anon_sym_Mu] = ACTIONS(123),
    [anon_sym_Nu] = ACTIONS(123),
    [anon_sym_Xi] = ACTIONS(123),
    [anon_sym_Omicron] = ACTIONS(123),
    [anon_sym_Pi] = ACTIONS(123),
    [anon_sym_Rho] = ACTIONS(123),
    [anon_sym_Sigma] = ACTIONS(123),
    [anon_sym_Tau] = ACTIONS(123),
    [anon_sym_Upsilon] = ACTIONS(123),
    [anon_sym_Phi] = ACTIONS(123),
    [anon_sym_Chi] = ACTIONS(123),
    [anon_sym_Psi] = ACTIONS(123),
    [anon_sym_Omega] = ACTIONS(123),
    [anon_sym_infty] = ACTIONS(123),
    [anon_sym_hbar] = ACTIONS(123),
    [anon_sym_ell] = ACTIONS(123),
    [anon_sym_Re] = ACTIONS(123),
    [anon_sym_Im] = ACTIONS(123),
    [anon_sym_aleph] = ACTIONS(123),
    [anon_sym_nabla] = ACTIONS(123),
    [anon_sym_partial] = ACTIONS(123),
    [anon_sym_forall] = ACTIONS(123),
    [anon_sym_exists] = ACTIONS(123),
    [anon_sym_emptyset] = ACTIONS(123),
    [anon_sym_grad] = ACTIONS(123),
    [anon_sym_del] = ACTIONS(123),
    [anon_sym_pm] = ACTIONS(123),
    [anon_sym_mp] = ACTIONS(123),
    [aux_sym_constant_symbol_token1] = ACTIONS(123),
    [aux_sym_constant_symbol_token2] = ACTIONS(125),
    [aux_sym_constant_symbol_token3] = ACTIONS(125),
    [anon_sym_sqrt] = ACTIONS(123),
    [anon_sym_text] = ACTIONS(123),
    [anon_sym_bb] = ACTIONS(123),
    [anon_sym_cc] = ACTIONS(123),
    [anon_sym_tt] = ACTIONS(123),
    [anon_sym_fr] = ACTIONS(123),
    [anon_sym_sf] = ACTIONS(123),
    [anon_sym_bold] = ACTIONS(123),
    [anon_sym_cal] = ACTIONS(123),
    [anon_sym_frak] = ACTIONS(123),
    [anon_sym_monospace] = ACTIONS(123),
    [anon_sym_italic] = ACTIONS(123),
    [anon_sym_frac] = ACTIONS(123),
    [anon_sym_root] = ACTIONS(123),
    [anon_sym_stackrel] = ACTIONS(123),
    [anon_sym_choose] = ACTIONS(123),
    [anon_sym_atop] = ACTIONS(123),
    [anon_sym_over] = ACTIONS(123),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_LBRACE_COLON] = ACTIONS(125),
    [anon_sym_LPAREN_COLON] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_COLON_RBRACE] = ACTIONS(125),
    [anon_sym_COLON_RPAREN] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(125),
  },
  [40] = {
    [anon_sym_alpha] = ACTIONS(127),
    [anon_sym_beta] = ACTIONS(127),
    [anon_sym_gamma] = ACTIONS(127),
    [anon_sym_delta] = ACTIONS(127),
    [anon_sym_epsilon] = ACTIONS(127),
    [anon_sym_zeta] = ACTIONS(127),
    [anon_sym_eta] = ACTIONS(127),
    [anon_sym_theta] = ACTIONS(127),
    [anon_sym_iota] = ACTIONS(127),
    [anon_sym_kappa] = ACTIONS(127),
    [anon_sym_lambda] = ACTIONS(127),
    [anon_sym_mu] = ACTIONS(127),
    [anon_sym_nu] = ACTIONS(127),
    [anon_sym_xi] = ACTIONS(127),
    [anon_sym_omicron] = ACTIONS(127),
    [anon_sym_pi] = ACTIONS(127),
    [anon_sym_rho] = ACTIONS(127),
    [anon_sym_sigma] = ACTIONS(127),
    [anon_sym_tau] = ACTIONS(127),
    [anon_sym_upsilon] = ACTIONS(127),
    [anon_sym_phi] = ACTIONS(127),
    [anon_sym_chi] = ACTIONS(127),
    [anon_sym_psi] = ACTIONS(127),
    [anon_sym_omega] = ACTIONS(127),
    [anon_sym_Alpha] = ACTIONS(127),
    [anon_sym_Beta] = ACTIONS(127),
    [anon_sym_Gamma] = ACTIONS(127),
    [anon_sym_Delta] = ACTIONS(127),
    [anon_sym_Epsilon] = ACTIONS(127),
    [anon_sym_Zeta] = ACTIONS(127),
    [anon_sym_Eta] = ACTIONS(127),
    [anon_sym_Theta] = ACTIONS(127),
    [anon_sym_Iota] = ACTIONS(127),
    [anon_sym_Kappa] = ACTIONS(127),
    [anon_sym_Lambda] = ACTIONS(127),
    [anon_sym_Mu] = ACTIONS(127),
    [anon_sym_Nu] = ACTIONS(127),
    [anon_sym_Xi] = ACTIONS(127),
    [anon_sym_Omicron] = ACTIONS(127),
    [anon_sym_Pi] = ACTIONS(127),
    [anon_sym_Rho] = ACTIONS(127),
    [anon_sym_Sigma] = ACTIONS(127),
    [anon_sym_Tau] = ACTIONS(127),
    [anon_sym_Upsilon] = ACTIONS(127),
    [anon_sym_Phi] = ACTIONS(127),
    [anon_sym_Chi] = ACTIONS(127),
    [anon_sym_Psi] = ACTIONS(127),
    [anon_sym_Omega] = ACTIONS(127),
    [anon_sym_infty] = ACTIONS(127),
    [anon_sym_hbar] = ACTIONS(127),
    [anon_sym_ell] = ACTIONS(127),
    [anon_sym_Re] = ACTIONS(127),
    [anon_sym_Im] = ACTIONS(127),
    [anon_sym_aleph] = ACTIONS(127),
    [anon_sym_nabla] = ACTIONS(127),
    [anon_sym_partial] = ACTIONS(127),
    [anon_sym_forall] = ACTIONS(127),
    [anon_sym_exists] = ACTIONS(127),
    [anon_sym_emptyset] = ACTIONS(127),
    [anon_sym_grad] = ACTIONS(127),
    [anon_sym_del] = ACTIONS(127),
    [anon_sym_pm] = ACTIONS(127),
    [anon_sym_mp] = ACTIONS(127),
    [aux_sym_constant_symbol_token1] = ACTIONS(127),
    [aux_sym_constant_symbol_token2] = ACTIONS(129),
    [aux_sym_constant_symbol_token3] = ACTIONS(129),
    [anon_sym_sqrt] = ACTIONS(127),
    [anon_sym_text] = ACTIONS(127),
    [anon_sym_bb] = ACTIONS(127),
    [anon_sym_cc] = ACTIONS(127),
    [anon_sym_tt] = ACTIONS(127),
    [anon_sym_fr] = ACTIONS(127),
    [anon_sym_sf] = ACTIONS(127),
    [anon_sym_bold] = ACTIONS(127),
    [anon_sym_cal] = ACTIONS(127),
    [anon_sym_frak] = ACTIONS(127),
    [anon_sym_monospace] = ACTIONS(127),
    [anon_sym_italic] = ACTIONS(127),
    [anon_sym_frac] = ACTIONS(127),
    [anon_sym_root] = ACTIONS(127),
    [anon_sym_stackrel] = ACTIONS(127),
    [anon_sym_choose] = ACTIONS(127),
    [anon_sym_atop] = ACTIONS(127),
    [anon_sym_over] = ACTIONS(127),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE_COLON] = ACTIONS(129),
    [anon_sym_LPAREN_COLON] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_COLON_RBRACE] = ACTIONS(129),
    [anon_sym_COLON_RPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(131),
  },
  [41] = {
    [anon_sym_alpha] = ACTIONS(133),
    [anon_sym_beta] = ACTIONS(133),
    [anon_sym_gamma] = ACTIONS(133),
    [anon_sym_delta] = ACTIONS(133),
    [anon_sym_epsilon] = ACTIONS(133),
    [anon_sym_zeta] = ACTIONS(133),
    [anon_sym_eta] = ACTIONS(133),
    [anon_sym_theta] = ACTIONS(133),
    [anon_sym_iota] = ACTIONS(133),
    [anon_sym_kappa] = ACTIONS(133),
    [anon_sym_lambda] = ACTIONS(133),
    [anon_sym_mu] = ACTIONS(133),
    [anon_sym_nu] = ACTIONS(133),
    [anon_sym_xi] = ACTIONS(133),
    [anon_sym_omicron] = ACTIONS(133),
    [anon_sym_pi] = ACTIONS(133),
    [anon_sym_rho] = ACTIONS(133),
    [anon_sym_sigma] = ACTIONS(133),
    [anon_sym_tau] = ACTIONS(133),
    [anon_sym_upsilon] = ACTIONS(133),
    [anon_sym_phi] = ACTIONS(133),
    [anon_sym_chi] = ACTIONS(133),
    [anon_sym_psi] = ACTIONS(133),
    [anon_sym_omega] = ACTIONS(133),
    [anon_sym_Alpha] = ACTIONS(133),
    [anon_sym_Beta] = ACTIONS(133),
    [anon_sym_Gamma] = ACTIONS(133),
    [anon_sym_Delta] = ACTIONS(133),
    [anon_sym_Epsilon] = ACTIONS(133),
    [anon_sym_Zeta] = ACTIONS(133),
    [anon_sym_Eta] = ACTIONS(133),
    [anon_sym_Theta] = ACTIONS(133),
    [anon_sym_Iota] = ACTIONS(133),
    [anon_sym_Kappa] = ACTIONS(133),
    [anon_sym_Lambda] = ACTIONS(133),
    [anon_sym_Mu] = ACTIONS(133),
    [anon_sym_Nu] = ACTIONS(133),
    [anon_sym_Xi] = ACTIONS(133),
    [anon_sym_Omicron] = ACTIONS(133),
    [anon_sym_Pi] = ACTIONS(133),
    [anon_sym_Rho] = ACTIONS(133),
    [anon_sym_Sigma] = ACTIONS(133),
    [anon_sym_Tau] = ACTIONS(133),
    [anon_sym_Upsilon] = ACTIONS(133),
    [anon_sym_Phi] = ACTIONS(133),
    [anon_sym_Chi] = ACTIONS(133),
    [anon_sym_Psi] = ACTIONS(133),
    [anon_sym_Omega] = ACTIONS(133),
    [anon_sym_infty] = ACTIONS(133),
    [anon_sym_hbar] = ACTIONS(133),
    [anon_sym_ell] = ACTIONS(133),
    [anon_sym_Re] = ACTIONS(133),
    [anon_sym_Im] = ACTIONS(133),
    [anon_sym_aleph] = ACTIONS(133),
    [anon_sym_nabla] = ACTIONS(133),
    [anon_sym_partial] = ACTIONS(133),
    [anon_sym_forall] = ACTIONS(133),
    [anon_sym_exists] = ACTIONS(133),
    [anon_sym_emptyset] = ACTIONS(133),
    [anon_sym_grad] = ACTIONS(133),
    [anon_sym_del] = ACTIONS(133),
    [anon_sym_pm] = ACTIONS(133),
    [anon_sym_mp] = ACTIONS(133),
    [aux_sym_constant_symbol_token1] = ACTIONS(133),
    [aux_sym_constant_symbol_token2] = ACTIONS(135),
    [aux_sym_constant_symbol_token3] = ACTIONS(135),
    [anon_sym_sqrt] = ACTIONS(133),
    [anon_sym_text] = ACTIONS(133),
    [anon_sym_bb] = ACTIONS(133),
    [anon_sym_cc] = ACTIONS(133),
    [anon_sym_tt] = ACTIONS(133),
    [anon_sym_fr] = ACTIONS(133),
    [anon_sym_sf] = ACTIONS(133),
    [anon_sym_bold] = ACTIONS(133),
    [anon_sym_cal] = ACTIONS(133),
    [anon_sym_frak] = ACTIONS(133),
    [anon_sym_monospace] = ACTIONS(133),
    [anon_sym_italic] = ACTIONS(133),
    [anon_sym_frac] = ACTIONS(133),
    [anon_sym_root] = ACTIONS(133),
    [anon_sym_stackrel] = ACTIONS(133),
    [anon_sym_choose] = ACTIONS(133),
    [anon_sym_atop] = ACTIONS(133),
    [anon_sym_over] = ACTIONS(133),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_LBRACE_COLON] = ACTIONS(135),
    [anon_sym_LPAREN_COLON] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_COLON_RBRACE] = ACTIONS(135),
    [anon_sym_COLON_RPAREN] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
  },
  [42] = {
    [anon_sym_alpha] = ACTIONS(137),
    [anon_sym_beta] = ACTIONS(137),
    [anon_sym_gamma] = ACTIONS(137),
    [anon_sym_delta] = ACTIONS(137),
    [anon_sym_epsilon] = ACTIONS(137),
    [anon_sym_zeta] = ACTIONS(137),
    [anon_sym_eta] = ACTIONS(137),
    [anon_sym_theta] = ACTIONS(137),
    [anon_sym_iota] = ACTIONS(137),
    [anon_sym_kappa] = ACTIONS(137),
    [anon_sym_lambda] = ACTIONS(137),
    [anon_sym_mu] = ACTIONS(137),
    [anon_sym_nu] = ACTIONS(137),
    [anon_sym_xi] = ACTIONS(137),
    [anon_sym_omicron] = ACTIONS(137),
    [anon_sym_pi] = ACTIONS(137),
    [anon_sym_rho] = ACTIONS(137),
    [anon_sym_sigma] = ACTIONS(137),
    [anon_sym_tau] = ACTIONS(137),
    [anon_sym_upsilon] = ACTIONS(137),
    [anon_sym_phi] = ACTIONS(137),
    [anon_sym_chi] = ACTIONS(137),
    [anon_sym_psi] = ACTIONS(137),
    [anon_sym_omega] = ACTIONS(137),
    [anon_sym_Alpha] = ACTIONS(137),
    [anon_sym_Beta] = ACTIONS(137),
    [anon_sym_Gamma] = ACTIONS(137),
    [anon_sym_Delta] = ACTIONS(137),
    [anon_sym_Epsilon] = ACTIONS(137),
    [anon_sym_Zeta] = ACTIONS(137),
    [anon_sym_Eta] = ACTIONS(137),
    [anon_sym_Theta] = ACTIONS(137),
    [anon_sym_Iota] = ACTIONS(137),
    [anon_sym_Kappa] = ACTIONS(137),
    [anon_sym_Lambda] = ACTIONS(137),
    [anon_sym_Mu] = ACTIONS(137),
    [anon_sym_Nu] = ACTIONS(137),
    [anon_sym_Xi] = ACTIONS(137),
    [anon_sym_Omicron] = ACTIONS(137),
    [anon_sym_Pi] = ACTIONS(137),
    [anon_sym_Rho] = ACTIONS(137),
    [anon_sym_Sigma] = ACTIONS(137),
    [anon_sym_Tau] = ACTIONS(137),
    [anon_sym_Upsilon] = ACTIONS(137),
    [anon_sym_Phi] = ACTIONS(137),
    [anon_sym_Chi] = ACTIONS(137),
    [anon_sym_Psi] = ACTIONS(137),
    [anon_sym_Omega] = ACTIONS(137),
    [anon_sym_infty] = ACTIONS(137),
    [anon_sym_hbar] = ACTIONS(137),
    [anon_sym_ell] = ACTIONS(137),
    [anon_sym_Re] = ACTIONS(137),
    [anon_sym_Im] = ACTIONS(137),
    [anon_sym_aleph] = ACTIONS(137),
    [anon_sym_nabla] = ACTIONS(137),
    [anon_sym_partial] = ACTIONS(137),
    [anon_sym_forall] = ACTIONS(137),
    [anon_sym_exists] = ACTIONS(137),
    [anon_sym_emptyset] = ACTIONS(137),
    [anon_sym_grad] = ACTIONS(137),
    [anon_sym_del] = ACTIONS(137),
    [anon_sym_pm] = ACTIONS(137),
    [anon_sym_mp] = ACTIONS(137),
    [aux_sym_constant_symbol_token1] = ACTIONS(137),
    [aux_sym_constant_symbol_token2] = ACTIONS(139),
    [aux_sym_constant_symbol_token3] = ACTIONS(139),
    [anon_sym_sqrt] = ACTIONS(137),
    [anon_sym_text] = ACTIONS(137),
    [anon_sym_bb] = ACTIONS(137),
    [anon_sym_cc] = ACTIONS(137),
    [anon_sym_tt] = ACTIONS(137),
    [anon_sym_fr] = ACTIONS(137),
    [anon_sym_sf] = ACTIONS(137),
    [anon_sym_bold] = ACTIONS(137),
    [anon_sym_cal] = ACTIONS(137),
    [anon_sym_frak] = ACTIONS(137),
    [anon_sym_monospace] = ACTIONS(137),
    [anon_sym_italic] = ACTIONS(137),
    [anon_sym_frac] = ACTIONS(137),
    [anon_sym_root] = ACTIONS(137),
    [anon_sym_stackrel] = ACTIONS(137),
    [anon_sym_choose] = ACTIONS(137),
    [anon_sym_atop] = ACTIONS(137),
    [anon_sym_over] = ACTIONS(137),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_LBRACE_COLON] = ACTIONS(139),
    [anon_sym_LPAREN_COLON] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COLON_RBRACE] = ACTIONS(139),
    [anon_sym_COLON_RPAREN] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
  },
  [43] = {
    [anon_sym_alpha] = ACTIONS(105),
    [anon_sym_beta] = ACTIONS(105),
    [anon_sym_gamma] = ACTIONS(105),
    [anon_sym_delta] = ACTIONS(105),
    [anon_sym_epsilon] = ACTIONS(105),
    [anon_sym_zeta] = ACTIONS(105),
    [anon_sym_eta] = ACTIONS(105),
    [anon_sym_theta] = ACTIONS(105),
    [anon_sym_iota] = ACTIONS(105),
    [anon_sym_kappa] = ACTIONS(105),
    [anon_sym_lambda] = ACTIONS(105),
    [anon_sym_mu] = ACTIONS(105),
    [anon_sym_nu] = ACTIONS(105),
    [anon_sym_xi] = ACTIONS(105),
    [anon_sym_omicron] = ACTIONS(105),
    [anon_sym_pi] = ACTIONS(105),
    [anon_sym_rho] = ACTIONS(105),
    [anon_sym_sigma] = ACTIONS(105),
    [anon_sym_tau] = ACTIONS(105),
    [anon_sym_upsilon] = ACTIONS(105),
    [anon_sym_phi] = ACTIONS(105),
    [anon_sym_chi] = ACTIONS(105),
    [anon_sym_psi] = ACTIONS(105),
    [anon_sym_omega] = ACTIONS(105),
    [anon_sym_Alpha] = ACTIONS(105),
    [anon_sym_Beta] = ACTIONS(105),
    [anon_sym_Gamma] = ACTIONS(105),
    [anon_sym_Delta] = ACTIONS(105),
    [anon_sym_Epsilon] = ACTIONS(105),
    [anon_sym_Zeta] = ACTIONS(105),
    [anon_sym_Eta] = ACTIONS(105),
    [anon_sym_Theta] = ACTIONS(105),
    [anon_sym_Iota] = ACTIONS(105),
    [anon_sym_Kappa] = ACTIONS(105),
    [anon_sym_Lambda] = ACTIONS(105),
    [anon_sym_Mu] = ACTIONS(105),
    [anon_sym_Nu] = ACTIONS(105),
    [anon_sym_Xi] = ACTIONS(105),
    [anon_sym_Omicron] = ACTIONS(105),
    [anon_sym_Pi] = ACTIONS(105),
    [anon_sym_Rho] = ACTIONS(105),
    [anon_sym_Sigma] = ACTIONS(105),
    [anon_sym_Tau] = ACTIONS(105),
    [anon_sym_Upsilon] = ACTIONS(105),
    [anon_sym_Phi] = ACTIONS(105),
    [anon_sym_Chi] = ACTIONS(105),
    [anon_sym_Psi] = ACTIONS(105),
    [anon_sym_Omega] = ACTIONS(105),
    [anon_sym_infty] = ACTIONS(105),
    [anon_sym_hbar] = ACTIONS(105),
    [anon_sym_ell] = ACTIONS(105),
    [anon_sym_Re] = ACTIONS(105),
    [anon_sym_Im] = ACTIONS(105),
    [anon_sym_aleph] = ACTIONS(105),
    [anon_sym_nabla] = ACTIONS(105),
    [anon_sym_partial] = ACTIONS(105),
    [anon_sym_forall] = ACTIONS(105),
    [anon_sym_exists] = ACTIONS(105),
    [anon_sym_emptyset] = ACTIONS(105),
    [anon_sym_grad] = ACTIONS(105),
    [anon_sym_del] = ACTIONS(105),
    [anon_sym_pm] = ACTIONS(105),
    [anon_sym_mp] = ACTIONS(105),
    [aux_sym_constant_symbol_token1] = ACTIONS(105),
    [aux_sym_constant_symbol_token2] = ACTIONS(107),
    [aux_sym_constant_symbol_token3] = ACTIONS(107),
    [anon_sym_sqrt] = ACTIONS(105),
    [anon_sym_text] = ACTIONS(105),
    [anon_sym_bb] = ACTIONS(105),
    [anon_sym_cc] = ACTIONS(105),
    [anon_sym_tt] = ACTIONS(105),
    [anon_sym_fr] = ACTIONS(105),
    [anon_sym_sf] = ACTIONS(105),
    [anon_sym_bold] = ACTIONS(105),
    [anon_sym_cal] = ACTIONS(105),
    [anon_sym_frak] = ACTIONS(105),
    [anon_sym_monospace] = ACTIONS(105),
    [anon_sym_italic] = ACTIONS(105),
    [anon_sym_frac] = ACTIONS(105),
    [anon_sym_root] = ACTIONS(105),
    [anon_sym_stackrel] = ACTIONS(105),
    [anon_sym_choose] = ACTIONS(105),
    [anon_sym_atop] = ACTIONS(105),
    [anon_sym_over] = ACTIONS(105),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LBRACE_COLON] = ACTIONS(107),
    [anon_sym_LPAREN_COLON] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_COLON_RBRACE] = ACTIONS(107),
    [anon_sym_COLON_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_alpha] = ACTIONS(123),
    [anon_sym_beta] = ACTIONS(123),
    [anon_sym_gamma] = ACTIONS(123),
    [anon_sym_delta] = ACTIONS(123),
    [anon_sym_epsilon] = ACTIONS(123),
    [anon_sym_zeta] = ACTIONS(123),
    [anon_sym_eta] = ACTIONS(123),
    [anon_sym_theta] = ACTIONS(123),
    [anon_sym_iota] = ACTIONS(123),
    [anon_sym_kappa] = ACTIONS(123),
    [anon_sym_lambda] = ACTIONS(123),
    [anon_sym_mu] = ACTIONS(123),
    [anon_sym_nu] = ACTIONS(123),
    [anon_sym_xi] = ACTIONS(123),
    [anon_sym_omicron] = ACTIONS(123),
    [anon_sym_pi] = ACTIONS(123),
    [anon_sym_rho] = ACTIONS(123),
    [anon_sym_sigma] = ACTIONS(123),
    [anon_sym_tau] = ACTIONS(123),
    [anon_sym_upsilon] = ACTIONS(123),
    [anon_sym_phi] = ACTIONS(123),
    [anon_sym_chi] = ACTIONS(123),
    [anon_sym_psi] = ACTIONS(123),
    [anon_sym_omega] = ACTIONS(123),
    [anon_sym_Alpha] = ACTIONS(123),
    [anon_sym_Beta] = ACTIONS(123),
    [anon_sym_Gamma] = ACTIONS(123),
    [anon_sym_Delta] = ACTIONS(123),
    [anon_sym_Epsilon] = ACTIONS(123),
    [anon_sym_Zeta] = ACTIONS(123),
    [anon_sym_Eta] = ACTIONS(123),
    [anon_sym_Theta] = ACTIONS(123),
    [anon_sym_Iota] = ACTIONS(123),
    [anon_sym_Kappa] = ACTIONS(123),
    [anon_sym_Lambda] = ACTIONS(123),
    [anon_sym_Mu] = ACTIONS(123),
    [anon_sym_Nu] = ACTIONS(123),
    [anon_sym_Xi] = ACTIONS(123),
    [anon_sym_Omicron] = ACTIONS(123),
    [anon_sym_Pi] = ACTIONS(123),
    [anon_sym_Rho] = ACTIONS(123),
    [anon_sym_Sigma] = ACTIONS(123),
    [anon_sym_Tau] = ACTIONS(123),
    [anon_sym_Upsilon] = ACTIONS(123),
    [anon_sym_Phi] = ACTIONS(123),
    [anon_sym_Chi] = ACTIONS(123),
    [anon_sym_Psi] = ACTIONS(123),
    [anon_sym_Omega] = ACTIONS(123),
    [anon_sym_infty] = ACTIONS(123),
    [anon_sym_hbar] = ACTIONS(123),
    [anon_sym_ell] = ACTIONS(123),
    [anon_sym_Re] = ACTIONS(123),
    [anon_sym_Im] = ACTIONS(123),
    [anon_sym_aleph] = ACTIONS(123),
    [anon_sym_nabla] = ACTIONS(123),
    [anon_sym_partial] = ACTIONS(123),
    [anon_sym_forall] = ACTIONS(123),
    [anon_sym_exists] = ACTIONS(123),
    [anon_sym_emptyset] = ACTIONS(123),
    [anon_sym_grad] = ACTIONS(123),
    [anon_sym_del] = ACTIONS(123),
    [anon_sym_pm] = ACTIONS(123),
    [anon_sym_mp] = ACTIONS(123),
    [aux_sym_constant_symbol_token1] = ACTIONS(123),
    [aux_sym_constant_symbol_token2] = ACTIONS(125),
    [aux_sym_constant_symbol_token3] = ACTIONS(125),
    [anon_sym_sqrt] = ACTIONS(123),
    [anon_sym_text] = ACTIONS(123),
    [anon_sym_bb] = ACTIONS(123),
    [anon_sym_cc] = ACTIONS(123),
    [anon_sym_tt] = ACTIONS(123),
    [anon_sym_fr] = ACTIONS(123),
    [anon_sym_sf] = ACTIONS(123),
    [anon_sym_bold] = ACTIONS(123),
    [anon_sym_cal] = ACTIONS(123),
    [anon_sym_frak] = ACTIONS(123),
    [anon_sym_monospace] = ACTIONS(123),
    [anon_sym_italic] = ACTIONS(123),
    [anon_sym_frac] = ACTIONS(123),
    [anon_sym_root] = ACTIONS(123),
    [anon_sym_stackrel] = ACTIONS(123),
    [anon_sym_choose] = ACTIONS(123),
    [anon_sym_atop] = ACTIONS(123),
    [anon_sym_over] = ACTIONS(123),
    [sym_multi_linebreak] = ACTIONS(123),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_LBRACE_COLON] = ACTIONS(125),
    [anon_sym_LPAREN_COLON] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(125),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_alpha] = ACTIONS(85),
    [anon_sym_beta] = ACTIONS(85),
    [anon_sym_gamma] = ACTIONS(85),
    [anon_sym_delta] = ACTIONS(85),
    [anon_sym_epsilon] = ACTIONS(85),
    [anon_sym_zeta] = ACTIONS(85),
    [anon_sym_eta] = ACTIONS(85),
    [anon_sym_theta] = ACTIONS(85),
    [anon_sym_iota] = ACTIONS(85),
    [anon_sym_kappa] = ACTIONS(85),
    [anon_sym_lambda] = ACTIONS(85),
    [anon_sym_mu] = ACTIONS(85),
    [anon_sym_nu] = ACTIONS(85),
    [anon_sym_xi] = ACTIONS(85),
    [anon_sym_omicron] = ACTIONS(85),
    [anon_sym_pi] = ACTIONS(85),
    [anon_sym_rho] = ACTIONS(85),
    [anon_sym_sigma] = ACTIONS(85),
    [anon_sym_tau] = ACTIONS(85),
    [anon_sym_upsilon] = ACTIONS(85),
    [anon_sym_phi] = ACTIONS(85),
    [anon_sym_chi] = ACTIONS(85),
    [anon_sym_psi] = ACTIONS(85),
    [anon_sym_omega] = ACTIONS(85),
    [anon_sym_Alpha] = ACTIONS(85),
    [anon_sym_Beta] = ACTIONS(85),
    [anon_sym_Gamma] = ACTIONS(85),
    [anon_sym_Delta] = ACTIONS(85),
    [anon_sym_Epsilon] = ACTIONS(85),
    [anon_sym_Zeta] = ACTIONS(85),
    [anon_sym_Eta] = ACTIONS(85),
    [anon_sym_Theta] = ACTIONS(85),
    [anon_sym_Iota] = ACTIONS(85),
    [anon_sym_Kappa] = ACTIONS(85),
    [anon_sym_Lambda] = ACTIONS(85),
    [anon_sym_Mu] = ACTIONS(85),
    [anon_sym_Nu] = ACTIONS(85),
    [anon_sym_Xi] = ACTIONS(85),
    [anon_sym_Omicron] = ACTIONS(85),
    [anon_sym_Pi] = ACTIONS(85),
    [anon_sym_Rho] = ACTIONS(85),
    [anon_sym_Sigma] = ACTIONS(85),
    [anon_sym_Tau] = ACTIONS(85),
    [anon_sym_Upsilon] = ACTIONS(85),
    [anon_sym_Phi] = ACTIONS(85),
    [anon_sym_Chi] = ACTIONS(85),
    [anon_sym_Psi] = ACTIONS(85),
    [anon_sym_Omega] = ACTIONS(85),
    [anon_sym_infty] = ACTIONS(85),
    [anon_sym_hbar] = ACTIONS(85),
    [anon_sym_ell] = ACTIONS(85),
    [anon_sym_Re] = ACTIONS(85),
    [anon_sym_Im] = ACTIONS(85),
    [anon_sym_aleph] = ACTIONS(85),
    [anon_sym_nabla] = ACTIONS(85),
    [anon_sym_partial] = ACTIONS(85),
    [anon_sym_forall] = ACTIONS(85),
    [anon_sym_exists] = ACTIONS(85),
    [anon_sym_emptyset] = ACTIONS(85),
    [anon_sym_grad] = ACTIONS(85),
    [anon_sym_del] = ACTIONS(85),
    [anon_sym_pm] = ACTIONS(85),
    [anon_sym_mp] = ACTIONS(85),
    [aux_sym_constant_symbol_token1] = ACTIONS(85),
    [aux_sym_constant_symbol_token2] = ACTIONS(87),
    [aux_sym_constant_symbol_token3] = ACTIONS(87),
    [anon_sym_sqrt] = ACTIONS(85),
    [anon_sym_text] = ACTIONS(85),
    [anon_sym_bb] = ACTIONS(85),
    [anon_sym_cc] = ACTIONS(85),
    [anon_sym_tt] = ACTIONS(85),
    [anon_sym_fr] = ACTIONS(85),
    [anon_sym_sf] = ACTIONS(85),
    [anon_sym_bold] = ACTIONS(85),
    [anon_sym_cal] = ACTIONS(85),
    [anon_sym_frak] = ACTIONS(85),
    [anon_sym_monospace] = ACTIONS(85),
    [anon_sym_italic] = ACTIONS(85),
    [anon_sym_frac] = ACTIONS(85),
    [anon_sym_root] = ACTIONS(85),
    [anon_sym_stackrel] = ACTIONS(85),
    [anon_sym_choose] = ACTIONS(85),
    [anon_sym_atop] = ACTIONS(85),
    [anon_sym_over] = ACTIONS(85),
    [sym_multi_linebreak] = ACTIONS(85),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LBRACE_COLON] = ACTIONS(87),
    [anon_sym_LPAREN_COLON] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_alpha] = ACTIONS(77),
    [anon_sym_beta] = ACTIONS(77),
    [anon_sym_gamma] = ACTIONS(77),
    [anon_sym_delta] = ACTIONS(77),
    [anon_sym_epsilon] = ACTIONS(77),
    [anon_sym_zeta] = ACTIONS(77),
    [anon_sym_eta] = ACTIONS(77),
    [anon_sym_theta] = ACTIONS(77),
    [anon_sym_iota] = ACTIONS(77),
    [anon_sym_kappa] = ACTIONS(77),
    [anon_sym_lambda] = ACTIONS(77),
    [anon_sym_mu] = ACTIONS(77),
    [anon_sym_nu] = ACTIONS(77),
    [anon_sym_xi] = ACTIONS(77),
    [anon_sym_omicron] = ACTIONS(77),
    [anon_sym_pi] = ACTIONS(77),
    [anon_sym_rho] = ACTIONS(77),
    [anon_sym_sigma] = ACTIONS(77),
    [anon_sym_tau] = ACTIONS(77),
    [anon_sym_upsilon] = ACTIONS(77),
    [anon_sym_phi] = ACTIONS(77),
    [anon_sym_chi] = ACTIONS(77),
    [anon_sym_psi] = ACTIONS(77),
    [anon_sym_omega] = ACTIONS(77),
    [anon_sym_Alpha] = ACTIONS(77),
    [anon_sym_Beta] = ACTIONS(77),
    [anon_sym_Gamma] = ACTIONS(77),
    [anon_sym_Delta] = ACTIONS(77),
    [anon_sym_Epsilon] = ACTIONS(77),
    [anon_sym_Zeta] = ACTIONS(77),
    [anon_sym_Eta] = ACTIONS(77),
    [anon_sym_Theta] = ACTIONS(77),
    [anon_sym_Iota] = ACTIONS(77),
    [anon_sym_Kappa] = ACTIONS(77),
    [anon_sym_Lambda] = ACTIONS(77),
    [anon_sym_Mu] = ACTIONS(77),
    [anon_sym_Nu] = ACTIONS(77),
    [anon_sym_Xi] = ACTIONS(77),
    [anon_sym_Omicron] = ACTIONS(77),
    [anon_sym_Pi] = ACTIONS(77),
    [anon_sym_Rho] = ACTIONS(77),
    [anon_sym_Sigma] = ACTIONS(77),
    [anon_sym_Tau] = ACTIONS(77),
    [anon_sym_Upsilon] = ACTIONS(77),
    [anon_sym_Phi] = ACTIONS(77),
    [anon_sym_Chi] = ACTIONS(77),
    [anon_sym_Psi] = ACTIONS(77),
    [anon_sym_Omega] = ACTIONS(77),
    [anon_sym_infty] = ACTIONS(77),
    [anon_sym_hbar] = ACTIONS(77),
    [anon_sym_ell] = ACTIONS(77),
    [anon_sym_Re] = ACTIONS(77),
    [anon_sym_Im] = ACTIONS(77),
    [anon_sym_aleph] = ACTIONS(77),
    [anon_sym_nabla] = ACTIONS(77),
    [anon_sym_partial] = ACTIONS(77),
    [anon_sym_forall] = ACTIONS(77),
    [anon_sym_exists] = ACTIONS(77),
    [anon_sym_emptyset] = ACTIONS(77),
    [anon_sym_grad] = ACTIONS(77),
    [anon_sym_del] = ACTIONS(77),
    [anon_sym_pm] = ACTIONS(77),
    [anon_sym_mp] = ACTIONS(77),
    [aux_sym_constant_symbol_token1] = ACTIONS(77),
    [aux_sym_constant_symbol_token2] = ACTIONS(79),
    [aux_sym_constant_symbol_token3] = ACTIONS(79),
    [anon_sym_sqrt] = ACTIONS(77),
    [anon_sym_text] = ACTIONS(77),
    [anon_sym_bb] = ACTIONS(77),
    [anon_sym_cc] = ACTIONS(77),
    [anon_sym_tt] = ACTIONS(77),
    [anon_sym_fr] = ACTIONS(77),
    [anon_sym_sf] = ACTIONS(77),
    [anon_sym_bold] = ACTIONS(77),
    [anon_sym_cal] = ACTIONS(77),
    [anon_sym_frak] = ACTIONS(77),
    [anon_sym_monospace] = ACTIONS(77),
    [anon_sym_italic] = ACTIONS(77),
    [anon_sym_frac] = ACTIONS(77),
    [anon_sym_root] = ACTIONS(77),
    [anon_sym_stackrel] = ACTIONS(77),
    [anon_sym_choose] = ACTIONS(77),
    [anon_sym_atop] = ACTIONS(77),
    [anon_sym_over] = ACTIONS(77),
    [sym_multi_linebreak] = ACTIONS(77),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACE_COLON] = ACTIONS(79),
    [anon_sym_LPAREN_COLON] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_alpha] = ACTIONS(81),
    [anon_sym_beta] = ACTIONS(81),
    [anon_sym_gamma] = ACTIONS(81),
    [anon_sym_delta] = ACTIONS(81),
    [anon_sym_epsilon] = ACTIONS(81),
    [anon_sym_zeta] = ACTIONS(81),
    [anon_sym_eta] = ACTIONS(81),
    [anon_sym_theta] = ACTIONS(81),
    [anon_sym_iota] = ACTIONS(81),
    [anon_sym_kappa] = ACTIONS(81),
    [anon_sym_lambda] = ACTIONS(81),
    [anon_sym_mu] = ACTIONS(81),
    [anon_sym_nu] = ACTIONS(81),
    [anon_sym_xi] = ACTIONS(81),
    [anon_sym_omicron] = ACTIONS(81),
    [anon_sym_pi] = ACTIONS(81),
    [anon_sym_rho] = ACTIONS(81),
    [anon_sym_sigma] = ACTIONS(81),
    [anon_sym_tau] = ACTIONS(81),
    [anon_sym_upsilon] = ACTIONS(81),
    [anon_sym_phi] = ACTIONS(81),
    [anon_sym_chi] = ACTIONS(81),
    [anon_sym_psi] = ACTIONS(81),
    [anon_sym_omega] = ACTIONS(81),
    [anon_sym_Alpha] = ACTIONS(81),
    [anon_sym_Beta] = ACTIONS(81),
    [anon_sym_Gamma] = ACTIONS(81),
    [anon_sym_Delta] = ACTIONS(81),
    [anon_sym_Epsilon] = ACTIONS(81),
    [anon_sym_Zeta] = ACTIONS(81),
    [anon_sym_Eta] = ACTIONS(81),
    [anon_sym_Theta] = ACTIONS(81),
    [anon_sym_Iota] = ACTIONS(81),
    [anon_sym_Kappa] = ACTIONS(81),
    [anon_sym_Lambda] = ACTIONS(81),
    [anon_sym_Mu] = ACTIONS(81),
    [anon_sym_Nu] = ACTIONS(81),
    [anon_sym_Xi] = ACTIONS(81),
    [anon_sym_Omicron] = ACTIONS(81),
    [anon_sym_Pi] = ACTIONS(81),
    [anon_sym_Rho] = ACTIONS(81),
    [anon_sym_Sigma] = ACTIONS(81),
    [anon_sym_Tau] = ACTIONS(81),
    [anon_sym_Upsilon] = ACTIONS(81),
    [anon_sym_Phi] = ACTIONS(81),
    [anon_sym_Chi] = ACTIONS(81),
    [anon_sym_Psi] = ACTIONS(81),
    [anon_sym_Omega] = ACTIONS(81),
    [anon_sym_infty] = ACTIONS(81),
    [anon_sym_hbar] = ACTIONS(81),
    [anon_sym_ell] = ACTIONS(81),
    [anon_sym_Re] = ACTIONS(81),
    [anon_sym_Im] = ACTIONS(81),
    [anon_sym_aleph] = ACTIONS(81),
    [anon_sym_nabla] = ACTIONS(81),
    [anon_sym_partial] = ACTIONS(81),
    [anon_sym_forall] = ACTIONS(81),
    [anon_sym_exists] = ACTIONS(81),
    [anon_sym_emptyset] = ACTIONS(81),
    [anon_sym_grad] = ACTIONS(81),
    [anon_sym_del] = ACTIONS(81),
    [anon_sym_pm] = ACTIONS(81),
    [anon_sym_mp] = ACTIONS(81),
    [aux_sym_constant_symbol_token1] = ACTIONS(81),
    [aux_sym_constant_symbol_token2] = ACTIONS(83),
    [aux_sym_constant_symbol_token3] = ACTIONS(83),
    [anon_sym_sqrt] = ACTIONS(81),
    [anon_sym_text] = ACTIONS(81),
    [anon_sym_bb] = ACTIONS(81),
    [anon_sym_cc] = ACTIONS(81),
    [anon_sym_tt] = ACTIONS(81),
    [anon_sym_fr] = ACTIONS(81),
    [anon_sym_sf] = ACTIONS(81),
    [anon_sym_bold] = ACTIONS(81),
    [anon_sym_cal] = ACTIONS(81),
    [anon_sym_frak] = ACTIONS(81),
    [anon_sym_monospace] = ACTIONS(81),
    [anon_sym_italic] = ACTIONS(81),
    [anon_sym_frac] = ACTIONS(81),
    [anon_sym_root] = ACTIONS(81),
    [anon_sym_stackrel] = ACTIONS(81),
    [anon_sym_choose] = ACTIONS(81),
    [anon_sym_atop] = ACTIONS(81),
    [anon_sym_over] = ACTIONS(81),
    [sym_multi_linebreak] = ACTIONS(81),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LBRACE_COLON] = ACTIONS(83),
    [anon_sym_LPAREN_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_alpha] = ACTIONS(73),
    [anon_sym_beta] = ACTIONS(73),
    [anon_sym_gamma] = ACTIONS(73),
    [anon_sym_delta] = ACTIONS(73),
    [anon_sym_epsilon] = ACTIONS(73),
    [anon_sym_zeta] = ACTIONS(73),
    [anon_sym_eta] = ACTIONS(73),
    [anon_sym_theta] = ACTIONS(73),
    [anon_sym_iota] = ACTIONS(73),
    [anon_sym_kappa] = ACTIONS(73),
    [anon_sym_lambda] = ACTIONS(73),
    [anon_sym_mu] = ACTIONS(73),
    [anon_sym_nu] = ACTIONS(73),
    [anon_sym_xi] = ACTIONS(73),
    [anon_sym_omicron] = ACTIONS(73),
    [anon_sym_pi] = ACTIONS(73),
    [anon_sym_rho] = ACTIONS(73),
    [anon_sym_sigma] = ACTIONS(73),
    [anon_sym_tau] = ACTIONS(73),
    [anon_sym_upsilon] = ACTIONS(73),
    [anon_sym_phi] = ACTIONS(73),
    [anon_sym_chi] = ACTIONS(73),
    [anon_sym_psi] = ACTIONS(73),
    [anon_sym_omega] = ACTIONS(73),
    [anon_sym_Alpha] = ACTIONS(73),
    [anon_sym_Beta] = ACTIONS(73),
    [anon_sym_Gamma] = ACTIONS(73),
    [anon_sym_Delta] = ACTIONS(73),
    [anon_sym_Epsilon] = ACTIONS(73),
    [anon_sym_Zeta] = ACTIONS(73),
    [anon_sym_Eta] = ACTIONS(73),
    [anon_sym_Theta] = ACTIONS(73),
    [anon_sym_Iota] = ACTIONS(73),
    [anon_sym_Kappa] = ACTIONS(73),
    [anon_sym_Lambda] = ACTIONS(73),
    [anon_sym_Mu] = ACTIONS(73),
    [anon_sym_Nu] = ACTIONS(73),
    [anon_sym_Xi] = ACTIONS(73),
    [anon_sym_Omicron] = ACTIONS(73),
    [anon_sym_Pi] = ACTIONS(73),
    [anon_sym_Rho] = ACTIONS(73),
    [anon_sym_Sigma] = ACTIONS(73),
    [anon_sym_Tau] = ACTIONS(73),
    [anon_sym_Upsilon] = ACTIONS(73),
    [anon_sym_Phi] = ACTIONS(73),
    [anon_sym_Chi] = ACTIONS(73),
    [anon_sym_Psi] = ACTIONS(73),
    [anon_sym_Omega] = ACTIONS(73),
    [anon_sym_infty] = ACTIONS(73),
    [anon_sym_hbar] = ACTIONS(73),
    [anon_sym_ell] = ACTIONS(73),
    [anon_sym_Re] = ACTIONS(73),
    [anon_sym_Im] = ACTIONS(73),
    [anon_sym_aleph] = ACTIONS(73),
    [anon_sym_nabla] = ACTIONS(73),
    [anon_sym_partial] = ACTIONS(73),
    [anon_sym_forall] = ACTIONS(73),
    [anon_sym_exists] = ACTIONS(73),
    [anon_sym_emptyset] = ACTIONS(73),
    [anon_sym_grad] = ACTIONS(73),
    [anon_sym_del] = ACTIONS(73),
    [anon_sym_pm] = ACTIONS(73),
    [anon_sym_mp] = ACTIONS(73),
    [aux_sym_constant_symbol_token1] = ACTIONS(73),
    [aux_sym_constant_symbol_token2] = ACTIONS(75),
    [aux_sym_constant_symbol_token3] = ACTIONS(75),
    [anon_sym_sqrt] = ACTIONS(73),
    [anon_sym_text] = ACTIONS(73),
    [anon_sym_bb] = ACTIONS(73),
    [anon_sym_cc] = ACTIONS(73),
    [anon_sym_tt] = ACTIONS(73),
    [anon_sym_fr] = ACTIONS(73),
    [anon_sym_sf] = ACTIONS(73),
    [anon_sym_bold] = ACTIONS(73),
    [anon_sym_cal] = ACTIONS(73),
    [anon_sym_frak] = ACTIONS(73),
    [anon_sym_monospace] = ACTIONS(73),
    [anon_sym_italic] = ACTIONS(73),
    [anon_sym_frac] = ACTIONS(73),
    [anon_sym_root] = ACTIONS(73),
    [anon_sym_stackrel] = ACTIONS(73),
    [anon_sym_choose] = ACTIONS(73),
    [anon_sym_atop] = ACTIONS(73),
    [anon_sym_over] = ACTIONS(73),
    [sym_multi_linebreak] = ACTIONS(73),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACE_COLON] = ACTIONS(75),
    [anon_sym_LPAREN_COLON] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_alpha] = ACTIONS(89),
    [anon_sym_beta] = ACTIONS(89),
    [anon_sym_gamma] = ACTIONS(89),
    [anon_sym_delta] = ACTIONS(89),
    [anon_sym_epsilon] = ACTIONS(89),
    [anon_sym_zeta] = ACTIONS(89),
    [anon_sym_eta] = ACTIONS(89),
    [anon_sym_theta] = ACTIONS(89),
    [anon_sym_iota] = ACTIONS(89),
    [anon_sym_kappa] = ACTIONS(89),
    [anon_sym_lambda] = ACTIONS(89),
    [anon_sym_mu] = ACTIONS(89),
    [anon_sym_nu] = ACTIONS(89),
    [anon_sym_xi] = ACTIONS(89),
    [anon_sym_omicron] = ACTIONS(89),
    [anon_sym_pi] = ACTIONS(89),
    [anon_sym_rho] = ACTIONS(89),
    [anon_sym_sigma] = ACTIONS(89),
    [anon_sym_tau] = ACTIONS(89),
    [anon_sym_upsilon] = ACTIONS(89),
    [anon_sym_phi] = ACTIONS(89),
    [anon_sym_chi] = ACTIONS(89),
    [anon_sym_psi] = ACTIONS(89),
    [anon_sym_omega] = ACTIONS(89),
    [anon_sym_Alpha] = ACTIONS(89),
    [anon_sym_Beta] = ACTIONS(89),
    [anon_sym_Gamma] = ACTIONS(89),
    [anon_sym_Delta] = ACTIONS(89),
    [anon_sym_Epsilon] = ACTIONS(89),
    [anon_sym_Zeta] = ACTIONS(89),
    [anon_sym_Eta] = ACTIONS(89),
    [anon_sym_Theta] = ACTIONS(89),
    [anon_sym_Iota] = ACTIONS(89),
    [anon_sym_Kappa] = ACTIONS(89),
    [anon_sym_Lambda] = ACTIONS(89),
    [anon_sym_Mu] = ACTIONS(89),
    [anon_sym_Nu] = ACTIONS(89),
    [anon_sym_Xi] = ACTIONS(89),
    [anon_sym_Omicron] = ACTIONS(89),
    [anon_sym_Pi] = ACTIONS(89),
    [anon_sym_Rho] = ACTIONS(89),
    [anon_sym_Sigma] = ACTIONS(89),
    [anon_sym_Tau] = ACTIONS(89),
    [anon_sym_Upsilon] = ACTIONS(89),
    [anon_sym_Phi] = ACTIONS(89),
    [anon_sym_Chi] = ACTIONS(89),
    [anon_sym_Psi] = ACTIONS(89),
    [anon_sym_Omega] = ACTIONS(89),
    [anon_sym_infty] = ACTIONS(89),
    [anon_sym_hbar] = ACTIONS(89),
    [anon_sym_ell] = ACTIONS(89),
    [anon_sym_Re] = ACTIONS(89),
    [anon_sym_Im] = ACTIONS(89),
    [anon_sym_aleph] = ACTIONS(89),
    [anon_sym_nabla] = ACTIONS(89),
    [anon_sym_partial] = ACTIONS(89),
    [anon_sym_forall] = ACTIONS(89),
    [anon_sym_exists] = ACTIONS(89),
    [anon_sym_emptyset] = ACTIONS(89),
    [anon_sym_grad] = ACTIONS(89),
    [anon_sym_del] = ACTIONS(89),
    [anon_sym_pm] = ACTIONS(89),
    [anon_sym_mp] = ACTIONS(89),
    [aux_sym_constant_symbol_token1] = ACTIONS(89),
    [aux_sym_constant_symbol_token2] = ACTIONS(91),
    [aux_sym_constant_symbol_token3] = ACTIONS(91),
    [anon_sym_sqrt] = ACTIONS(89),
    [anon_sym_text] = ACTIONS(89),
    [anon_sym_bb] = ACTIONS(89),
    [anon_sym_cc] = ACTIONS(89),
    [anon_sym_tt] = ACTIONS(89),
    [anon_sym_fr] = ACTIONS(89),
    [anon_sym_sf] = ACTIONS(89),
    [anon_sym_bold] = ACTIONS(89),
    [anon_sym_cal] = ACTIONS(89),
    [anon_sym_frak] = ACTIONS(89),
    [anon_sym_monospace] = ACTIONS(89),
    [anon_sym_italic] = ACTIONS(89),
    [anon_sym_frac] = ACTIONS(89),
    [anon_sym_root] = ACTIONS(89),
    [anon_sym_stackrel] = ACTIONS(89),
    [anon_sym_choose] = ACTIONS(89),
    [anon_sym_atop] = ACTIONS(89),
    [anon_sym_over] = ACTIONS(89),
    [sym_multi_linebreak] = ACTIONS(89),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACE_COLON] = ACTIONS(91),
    [anon_sym_LPAREN_COLON] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_alpha] = ACTIONS(119),
    [anon_sym_beta] = ACTIONS(119),
    [anon_sym_gamma] = ACTIONS(119),
    [anon_sym_delta] = ACTIONS(119),
    [anon_sym_epsilon] = ACTIONS(119),
    [anon_sym_zeta] = ACTIONS(119),
    [anon_sym_eta] = ACTIONS(119),
    [anon_sym_theta] = ACTIONS(119),
    [anon_sym_iota] = ACTIONS(119),
    [anon_sym_kappa] = ACTIONS(119),
    [anon_sym_lambda] = ACTIONS(119),
    [anon_sym_mu] = ACTIONS(119),
    [anon_sym_nu] = ACTIONS(119),
    [anon_sym_xi] = ACTIONS(119),
    [anon_sym_omicron] = ACTIONS(119),
    [anon_sym_pi] = ACTIONS(119),
    [anon_sym_rho] = ACTIONS(119),
    [anon_sym_sigma] = ACTIONS(119),
    [anon_sym_tau] = ACTIONS(119),
    [anon_sym_upsilon] = ACTIONS(119),
    [anon_sym_phi] = ACTIONS(119),
    [anon_sym_chi] = ACTIONS(119),
    [anon_sym_psi] = ACTIONS(119),
    [anon_sym_omega] = ACTIONS(119),
    [anon_sym_Alpha] = ACTIONS(119),
    [anon_sym_Beta] = ACTIONS(119),
    [anon_sym_Gamma] = ACTIONS(119),
    [anon_sym_Delta] = ACTIONS(119),
    [anon_sym_Epsilon] = ACTIONS(119),
    [anon_sym_Zeta] = ACTIONS(119),
    [anon_sym_Eta] = ACTIONS(119),
    [anon_sym_Theta] = ACTIONS(119),
    [anon_sym_Iota] = ACTIONS(119),
    [anon_sym_Kappa] = ACTIONS(119),
    [anon_sym_Lambda] = ACTIONS(119),
    [anon_sym_Mu] = ACTIONS(119),
    [anon_sym_Nu] = ACTIONS(119),
    [anon_sym_Xi] = ACTIONS(119),
    [anon_sym_Omicron] = ACTIONS(119),
    [anon_sym_Pi] = ACTIONS(119),
    [anon_sym_Rho] = ACTIONS(119),
    [anon_sym_Sigma] = ACTIONS(119),
    [anon_sym_Tau] = ACTIONS(119),
    [anon_sym_Upsilon] = ACTIONS(119),
    [anon_sym_Phi] = ACTIONS(119),
    [anon_sym_Chi] = ACTIONS(119),
    [anon_sym_Psi] = ACTIONS(119),
    [anon_sym_Omega] = ACTIONS(119),
    [anon_sym_infty] = ACTIONS(119),
    [anon_sym_hbar] = ACTIONS(119),
    [anon_sym_ell] = ACTIONS(119),
    [anon_sym_Re] = ACTIONS(119),
    [anon_sym_Im] = ACTIONS(119),
    [anon_sym_aleph] = ACTIONS(119),
    [anon_sym_nabla] = ACTIONS(119),
    [anon_sym_partial] = ACTIONS(119),
    [anon_sym_forall] = ACTIONS(119),
    [anon_sym_exists] = ACTIONS(119),
    [anon_sym_emptyset] = ACTIONS(119),
    [anon_sym_grad] = ACTIONS(119),
    [anon_sym_del] = ACTIONS(119),
    [anon_sym_pm] = ACTIONS(119),
    [anon_sym_mp] = ACTIONS(119),
    [aux_sym_constant_symbol_token1] = ACTIONS(119),
    [aux_sym_constant_symbol_token2] = ACTIONS(121),
    [aux_sym_constant_symbol_token3] = ACTIONS(121),
    [anon_sym_sqrt] = ACTIONS(119),
    [anon_sym_text] = ACTIONS(119),
    [anon_sym_bb] = ACTIONS(119),
    [anon_sym_cc] = ACTIONS(119),
    [anon_sym_tt] = ACTIONS(119),
    [anon_sym_fr] = ACTIONS(119),
    [anon_sym_sf] = ACTIONS(119),
    [anon_sym_bold] = ACTIONS(119),
    [anon_sym_cal] = ACTIONS(119),
    [anon_sym_frak] = ACTIONS(119),
    [anon_sym_monospace] = ACTIONS(119),
    [anon_sym_italic] = ACTIONS(119),
    [anon_sym_frac] = ACTIONS(119),
    [anon_sym_root] = ACTIONS(119),
    [anon_sym_stackrel] = ACTIONS(119),
    [anon_sym_choose] = ACTIONS(119),
    [anon_sym_atop] = ACTIONS(119),
    [anon_sym_over] = ACTIONS(119),
    [sym_multi_linebreak] = ACTIONS(119),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_LBRACE_COLON] = ACTIONS(121),
    [anon_sym_LPAREN_COLON] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(121),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_alpha] = ACTIONS(105),
    [anon_sym_beta] = ACTIONS(105),
    [anon_sym_gamma] = ACTIONS(105),
    [anon_sym_delta] = ACTIONS(105),
    [anon_sym_epsilon] = ACTIONS(105),
    [anon_sym_zeta] = ACTIONS(105),
    [anon_sym_eta] = ACTIONS(105),
    [anon_sym_theta] = ACTIONS(105),
    [anon_sym_iota] = ACTIONS(105),
    [anon_sym_kappa] = ACTIONS(105),
    [anon_sym_lambda] = ACTIONS(105),
    [anon_sym_mu] = ACTIONS(105),
    [anon_sym_nu] = ACTIONS(105),
    [anon_sym_xi] = ACTIONS(105),
    [anon_sym_omicron] = ACTIONS(105),
    [anon_sym_pi] = ACTIONS(105),
    [anon_sym_rho] = ACTIONS(105),
    [anon_sym_sigma] = ACTIONS(105),
    [anon_sym_tau] = ACTIONS(105),
    [anon_sym_upsilon] = ACTIONS(105),
    [anon_sym_phi] = ACTIONS(105),
    [anon_sym_chi] = ACTIONS(105),
    [anon_sym_psi] = ACTIONS(105),
    [anon_sym_omega] = ACTIONS(105),
    [anon_sym_Alpha] = ACTIONS(105),
    [anon_sym_Beta] = ACTIONS(105),
    [anon_sym_Gamma] = ACTIONS(105),
    [anon_sym_Delta] = ACTIONS(105),
    [anon_sym_Epsilon] = ACTIONS(105),
    [anon_sym_Zeta] = ACTIONS(105),
    [anon_sym_Eta] = ACTIONS(105),
    [anon_sym_Theta] = ACTIONS(105),
    [anon_sym_Iota] = ACTIONS(105),
    [anon_sym_Kappa] = ACTIONS(105),
    [anon_sym_Lambda] = ACTIONS(105),
    [anon_sym_Mu] = ACTIONS(105),
    [anon_sym_Nu] = ACTIONS(105),
    [anon_sym_Xi] = ACTIONS(105),
    [anon_sym_Omicron] = ACTIONS(105),
    [anon_sym_Pi] = ACTIONS(105),
    [anon_sym_Rho] = ACTIONS(105),
    [anon_sym_Sigma] = ACTIONS(105),
    [anon_sym_Tau] = ACTIONS(105),
    [anon_sym_Upsilon] = ACTIONS(105),
    [anon_sym_Phi] = ACTIONS(105),
    [anon_sym_Chi] = ACTIONS(105),
    [anon_sym_Psi] = ACTIONS(105),
    [anon_sym_Omega] = ACTIONS(105),
    [anon_sym_infty] = ACTIONS(105),
    [anon_sym_hbar] = ACTIONS(105),
    [anon_sym_ell] = ACTIONS(105),
    [anon_sym_Re] = ACTIONS(105),
    [anon_sym_Im] = ACTIONS(105),
    [anon_sym_aleph] = ACTIONS(105),
    [anon_sym_nabla] = ACTIONS(105),
    [anon_sym_partial] = ACTIONS(105),
    [anon_sym_forall] = ACTIONS(105),
    [anon_sym_exists] = ACTIONS(105),
    [anon_sym_emptyset] = ACTIONS(105),
    [anon_sym_grad] = ACTIONS(105),
    [anon_sym_del] = ACTIONS(105),
    [anon_sym_pm] = ACTIONS(105),
    [anon_sym_mp] = ACTIONS(105),
    [aux_sym_constant_symbol_token1] = ACTIONS(105),
    [aux_sym_constant_symbol_token2] = ACTIONS(107),
    [aux_sym_constant_symbol_token3] = ACTIONS(107),
    [anon_sym_sqrt] = ACTIONS(105),
    [anon_sym_text] = ACTIONS(105),
    [anon_sym_bb] = ACTIONS(105),
    [anon_sym_cc] = ACTIONS(105),
    [anon_sym_tt] = ACTIONS(105),
    [anon_sym_fr] = ACTIONS(105),
    [anon_sym_sf] = ACTIONS(105),
    [anon_sym_bold] = ACTIONS(105),
    [anon_sym_cal] = ACTIONS(105),
    [anon_sym_frak] = ACTIONS(105),
    [anon_sym_monospace] = ACTIONS(105),
    [anon_sym_italic] = ACTIONS(105),
    [anon_sym_frac] = ACTIONS(105),
    [anon_sym_root] = ACTIONS(105),
    [anon_sym_stackrel] = ACTIONS(105),
    [anon_sym_choose] = ACTIONS(105),
    [anon_sym_atop] = ACTIONS(105),
    [anon_sym_over] = ACTIONS(105),
    [sym_multi_linebreak] = ACTIONS(105),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LBRACE_COLON] = ACTIONS(107),
    [anon_sym_LPAREN_COLON] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(143),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_alpha] = ACTIONS(69),
    [anon_sym_beta] = ACTIONS(69),
    [anon_sym_gamma] = ACTIONS(69),
    [anon_sym_delta] = ACTIONS(69),
    [anon_sym_epsilon] = ACTIONS(69),
    [anon_sym_zeta] = ACTIONS(69),
    [anon_sym_eta] = ACTIONS(69),
    [anon_sym_theta] = ACTIONS(69),
    [anon_sym_iota] = ACTIONS(69),
    [anon_sym_kappa] = ACTIONS(69),
    [anon_sym_lambda] = ACTIONS(69),
    [anon_sym_mu] = ACTIONS(69),
    [anon_sym_nu] = ACTIONS(69),
    [anon_sym_xi] = ACTIONS(69),
    [anon_sym_omicron] = ACTIONS(69),
    [anon_sym_pi] = ACTIONS(69),
    [anon_sym_rho] = ACTIONS(69),
    [anon_sym_sigma] = ACTIONS(69),
    [anon_sym_tau] = ACTIONS(69),
    [anon_sym_upsilon] = ACTIONS(69),
    [anon_sym_phi] = ACTIONS(69),
    [anon_sym_chi] = ACTIONS(69),
    [anon_sym_psi] = ACTIONS(69),
    [anon_sym_omega] = ACTIONS(69),
    [anon_sym_Alpha] = ACTIONS(69),
    [anon_sym_Beta] = ACTIONS(69),
    [anon_sym_Gamma] = ACTIONS(69),
    [anon_sym_Delta] = ACTIONS(69),
    [anon_sym_Epsilon] = ACTIONS(69),
    [anon_sym_Zeta] = ACTIONS(69),
    [anon_sym_Eta] = ACTIONS(69),
    [anon_sym_Theta] = ACTIONS(69),
    [anon_sym_Iota] = ACTIONS(69),
    [anon_sym_Kappa] = ACTIONS(69),
    [anon_sym_Lambda] = ACTIONS(69),
    [anon_sym_Mu] = ACTIONS(69),
    [anon_sym_Nu] = ACTIONS(69),
    [anon_sym_Xi] = ACTIONS(69),
    [anon_sym_Omicron] = ACTIONS(69),
    [anon_sym_Pi] = ACTIONS(69),
    [anon_sym_Rho] = ACTIONS(69),
    [anon_sym_Sigma] = ACTIONS(69),
    [anon_sym_Tau] = ACTIONS(69),
    [anon_sym_Upsilon] = ACTIONS(69),
    [anon_sym_Phi] = ACTIONS(69),
    [anon_sym_Chi] = ACTIONS(69),
    [anon_sym_Psi] = ACTIONS(69),
    [anon_sym_Omega] = ACTIONS(69),
    [anon_sym_infty] = ACTIONS(69),
    [anon_sym_hbar] = ACTIONS(69),
    [anon_sym_ell] = ACTIONS(69),
    [anon_sym_Re] = ACTIONS(69),
    [anon_sym_Im] = ACTIONS(69),
    [anon_sym_aleph] = ACTIONS(69),
    [anon_sym_nabla] = ACTIONS(69),
    [anon_sym_partial] = ACTIONS(69),
    [anon_sym_forall] = ACTIONS(69),
    [anon_sym_exists] = ACTIONS(69),
    [anon_sym_emptyset] = ACTIONS(69),
    [anon_sym_grad] = ACTIONS(69),
    [anon_sym_del] = ACTIONS(69),
    [anon_sym_pm] = ACTIONS(69),
    [anon_sym_mp] = ACTIONS(69),
    [aux_sym_constant_symbol_token1] = ACTIONS(69),
    [aux_sym_constant_symbol_token2] = ACTIONS(71),
    [aux_sym_constant_symbol_token3] = ACTIONS(71),
    [anon_sym_sqrt] = ACTIONS(69),
    [anon_sym_text] = ACTIONS(69),
    [anon_sym_bb] = ACTIONS(69),
    [anon_sym_cc] = ACTIONS(69),
    [anon_sym_tt] = ACTIONS(69),
    [anon_sym_fr] = ACTIONS(69),
    [anon_sym_sf] = ACTIONS(69),
    [anon_sym_bold] = ACTIONS(69),
    [anon_sym_cal] = ACTIONS(69),
    [anon_sym_frak] = ACTIONS(69),
    [anon_sym_monospace] = ACTIONS(69),
    [anon_sym_italic] = ACTIONS(69),
    [anon_sym_frac] = ACTIONS(69),
    [anon_sym_root] = ACTIONS(69),
    [anon_sym_stackrel] = ACTIONS(69),
    [anon_sym_choose] = ACTIONS(69),
    [anon_sym_atop] = ACTIONS(69),
    [anon_sym_over] = ACTIONS(69),
    [sym_multi_linebreak] = ACTIONS(69),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LBRACE_COLON] = ACTIONS(71),
    [anon_sym_LPAREN_COLON] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_alpha] = ACTIONS(93),
    [anon_sym_beta] = ACTIONS(93),
    [anon_sym_gamma] = ACTIONS(93),
    [anon_sym_delta] = ACTIONS(93),
    [anon_sym_epsilon] = ACTIONS(93),
    [anon_sym_zeta] = ACTIONS(93),
    [anon_sym_eta] = ACTIONS(93),
    [anon_sym_theta] = ACTIONS(93),
    [anon_sym_iota] = ACTIONS(93),
    [anon_sym_kappa] = ACTIONS(93),
    [anon_sym_lambda] = ACTIONS(93),
    [anon_sym_mu] = ACTIONS(93),
    [anon_sym_nu] = ACTIONS(93),
    [anon_sym_xi] = ACTIONS(93),
    [anon_sym_omicron] = ACTIONS(93),
    [anon_sym_pi] = ACTIONS(93),
    [anon_sym_rho] = ACTIONS(93),
    [anon_sym_sigma] = ACTIONS(93),
    [anon_sym_tau] = ACTIONS(93),
    [anon_sym_upsilon] = ACTIONS(93),
    [anon_sym_phi] = ACTIONS(93),
    [anon_sym_chi] = ACTIONS(93),
    [anon_sym_psi] = ACTIONS(93),
    [anon_sym_omega] = ACTIONS(93),
    [anon_sym_Alpha] = ACTIONS(93),
    [anon_sym_Beta] = ACTIONS(93),
    [anon_sym_Gamma] = ACTIONS(93),
    [anon_sym_Delta] = ACTIONS(93),
    [anon_sym_Epsilon] = ACTIONS(93),
    [anon_sym_Zeta] = ACTIONS(93),
    [anon_sym_Eta] = ACTIONS(93),
    [anon_sym_Theta] = ACTIONS(93),
    [anon_sym_Iota] = ACTIONS(93),
    [anon_sym_Kappa] = ACTIONS(93),
    [anon_sym_Lambda] = ACTIONS(93),
    [anon_sym_Mu] = ACTIONS(93),
    [anon_sym_Nu] = ACTIONS(93),
    [anon_sym_Xi] = ACTIONS(93),
    [anon_sym_Omicron] = ACTIONS(93),
    [anon_sym_Pi] = ACTIONS(93),
    [anon_sym_Rho] = ACTIONS(93),
    [anon_sym_Sigma] = ACTIONS(93),
    [anon_sym_Tau] = ACTIONS(93),
    [anon_sym_Upsilon] = ACTIONS(93),
    [anon_sym_Phi] = ACTIONS(93),
    [anon_sym_Chi] = ACTIONS(93),
    [anon_sym_Psi] = ACTIONS(93),
    [anon_sym_Omega] = ACTIONS(93),
    [anon_sym_infty] = ACTIONS(93),
    [anon_sym_hbar] = ACTIONS(93),
    [anon_sym_ell] = ACTIONS(93),
    [anon_sym_Re] = ACTIONS(93),
    [anon_sym_Im] = ACTIONS(93),
    [anon_sym_aleph] = ACTIONS(93),
    [anon_sym_nabla] = ACTIONS(93),
    [anon_sym_partial] = ACTIONS(93),
    [anon_sym_forall] = ACTIONS(93),
    [anon_sym_exists] = ACTIONS(93),
    [anon_sym_emptyset] = ACTIONS(93),
    [anon_sym_grad] = ACTIONS(93),
    [anon_sym_del] = ACTIONS(93),
    [anon_sym_pm] = ACTIONS(93),
    [anon_sym_mp] = ACTIONS(93),
    [aux_sym_constant_symbol_token1] = ACTIONS(93),
    [aux_sym_constant_symbol_token2] = ACTIONS(95),
    [aux_sym_constant_symbol_token3] = ACTIONS(95),
    [anon_sym_sqrt] = ACTIONS(93),
    [anon_sym_text] = ACTIONS(93),
    [anon_sym_bb] = ACTIONS(93),
    [anon_sym_cc] = ACTIONS(93),
    [anon_sym_tt] = ACTIONS(93),
    [anon_sym_fr] = ACTIONS(93),
    [anon_sym_sf] = ACTIONS(93),
    [anon_sym_bold] = ACTIONS(93),
    [anon_sym_cal] = ACTIONS(93),
    [anon_sym_frak] = ACTIONS(93),
    [anon_sym_monospace] = ACTIONS(93),
    [anon_sym_italic] = ACTIONS(93),
    [anon_sym_frac] = ACTIONS(93),
    [anon_sym_root] = ACTIONS(93),
    [anon_sym_stackrel] = ACTIONS(93),
    [anon_sym_choose] = ACTIONS(93),
    [anon_sym_atop] = ACTIONS(93),
    [anon_sym_over] = ACTIONS(93),
    [sym_multi_linebreak] = ACTIONS(93),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_LPAREN_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_CARET] = ACTIONS(95),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_alpha] = ACTIONS(101),
    [anon_sym_beta] = ACTIONS(101),
    [anon_sym_gamma] = ACTIONS(101),
    [anon_sym_delta] = ACTIONS(101),
    [anon_sym_epsilon] = ACTIONS(101),
    [anon_sym_zeta] = ACTIONS(101),
    [anon_sym_eta] = ACTIONS(101),
    [anon_sym_theta] = ACTIONS(101),
    [anon_sym_iota] = ACTIONS(101),
    [anon_sym_kappa] = ACTIONS(101),
    [anon_sym_lambda] = ACTIONS(101),
    [anon_sym_mu] = ACTIONS(101),
    [anon_sym_nu] = ACTIONS(101),
    [anon_sym_xi] = ACTIONS(101),
    [anon_sym_omicron] = ACTIONS(101),
    [anon_sym_pi] = ACTIONS(101),
    [anon_sym_rho] = ACTIONS(101),
    [anon_sym_sigma] = ACTIONS(101),
    [anon_sym_tau] = ACTIONS(101),
    [anon_sym_upsilon] = ACTIONS(101),
    [anon_sym_phi] = ACTIONS(101),
    [anon_sym_chi] = ACTIONS(101),
    [anon_sym_psi] = ACTIONS(101),
    [anon_sym_omega] = ACTIONS(101),
    [anon_sym_Alpha] = ACTIONS(101),
    [anon_sym_Beta] = ACTIONS(101),
    [anon_sym_Gamma] = ACTIONS(101),
    [anon_sym_Delta] = ACTIONS(101),
    [anon_sym_Epsilon] = ACTIONS(101),
    [anon_sym_Zeta] = ACTIONS(101),
    [anon_sym_Eta] = ACTIONS(101),
    [anon_sym_Theta] = ACTIONS(101),
    [anon_sym_Iota] = ACTIONS(101),
    [anon_sym_Kappa] = ACTIONS(101),
    [anon_sym_Lambda] = ACTIONS(101),
    [anon_sym_Mu] = ACTIONS(101),
    [anon_sym_Nu] = ACTIONS(101),
    [anon_sym_Xi] = ACTIONS(101),
    [anon_sym_Omicron] = ACTIONS(101),
    [anon_sym_Pi] = ACTIONS(101),
    [anon_sym_Rho] = ACTIONS(101),
    [anon_sym_Sigma] = ACTIONS(101),
    [anon_sym_Tau] = ACTIONS(101),
    [anon_sym_Upsilon] = ACTIONS(101),
    [anon_sym_Phi] = ACTIONS(101),
    [anon_sym_Chi] = ACTIONS(101),
    [anon_sym_Psi] = ACTIONS(101),
    [anon_sym_Omega] = ACTIONS(101),
    [anon_sym_infty] = ACTIONS(101),
    [anon_sym_hbar] = ACTIONS(101),
    [anon_sym_ell] = ACTIONS(101),
    [anon_sym_Re] = ACTIONS(101),
    [anon_sym_Im] = ACTIONS(101),
    [anon_sym_aleph] = ACTIONS(101),
    [anon_sym_nabla] = ACTIONS(101),
    [anon_sym_partial] = ACTIONS(101),
    [anon_sym_forall] = ACTIONS(101),
    [anon_sym_exists] = ACTIONS(101),
    [anon_sym_emptyset] = ACTIONS(101),
    [anon_sym_grad] = ACTIONS(101),
    [anon_sym_del] = ACTIONS(101),
    [anon_sym_pm] = ACTIONS(101),
    [anon_sym_mp] = ACTIONS(101),
    [aux_sym_constant_symbol_token1] = ACTIONS(101),
    [aux_sym_constant_symbol_token2] = ACTIONS(103),
    [aux_sym_constant_symbol_token3] = ACTIONS(103),
    [anon_sym_sqrt] = ACTIONS(101),
    [anon_sym_text] = ACTIONS(101),
    [anon_sym_bb] = ACTIONS(101),
    [anon_sym_cc] = ACTIONS(101),
    [anon_sym_tt] = ACTIONS(101),
    [anon_sym_fr] = ACTIONS(101),
    [anon_sym_sf] = ACTIONS(101),
    [anon_sym_bold] = ACTIONS(101),
    [anon_sym_cal] = ACTIONS(101),
    [anon_sym_frak] = ACTIONS(101),
    [anon_sym_monospace] = ACTIONS(101),
    [anon_sym_italic] = ACTIONS(101),
    [anon_sym_frac] = ACTIONS(101),
    [anon_sym_root] = ACTIONS(101),
    [anon_sym_stackrel] = ACTIONS(101),
    [anon_sym_choose] = ACTIONS(101),
    [anon_sym_atop] = ACTIONS(101),
    [anon_sym_over] = ACTIONS(101),
    [sym_multi_linebreak] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_LBRACE_COLON] = ACTIONS(103),
    [anon_sym_LPAREN_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_alpha] = ACTIONS(97),
    [anon_sym_beta] = ACTIONS(97),
    [anon_sym_gamma] = ACTIONS(97),
    [anon_sym_delta] = ACTIONS(97),
    [anon_sym_epsilon] = ACTIONS(97),
    [anon_sym_zeta] = ACTIONS(97),
    [anon_sym_eta] = ACTIONS(97),
    [anon_sym_theta] = ACTIONS(97),
    [anon_sym_iota] = ACTIONS(97),
    [anon_sym_kappa] = ACTIONS(97),
    [anon_sym_lambda] = ACTIONS(97),
    [anon_sym_mu] = ACTIONS(97),
    [anon_sym_nu] = ACTIONS(97),
    [anon_sym_xi] = ACTIONS(97),
    [anon_sym_omicron] = ACTIONS(97),
    [anon_sym_pi] = ACTIONS(97),
    [anon_sym_rho] = ACTIONS(97),
    [anon_sym_sigma] = ACTIONS(97),
    [anon_sym_tau] = ACTIONS(97),
    [anon_sym_upsilon] = ACTIONS(97),
    [anon_sym_phi] = ACTIONS(97),
    [anon_sym_chi] = ACTIONS(97),
    [anon_sym_psi] = ACTIONS(97),
    [anon_sym_omega] = ACTIONS(97),
    [anon_sym_Alpha] = ACTIONS(97),
    [anon_sym_Beta] = ACTIONS(97),
    [anon_sym_Gamma] = ACTIONS(97),
    [anon_sym_Delta] = ACTIONS(97),
    [anon_sym_Epsilon] = ACTIONS(97),
    [anon_sym_Zeta] = ACTIONS(97),
    [anon_sym_Eta] = ACTIONS(97),
    [anon_sym_Theta] = ACTIONS(97),
    [anon_sym_Iota] = ACTIONS(97),
    [anon_sym_Kappa] = ACTIONS(97),
    [anon_sym_Lambda] = ACTIONS(97),
    [anon_sym_Mu] = ACTIONS(97),
    [anon_sym_Nu] = ACTIONS(97),
    [anon_sym_Xi] = ACTIONS(97),
    [anon_sym_Omicron] = ACTIONS(97),
    [anon_sym_Pi] = ACTIONS(97),
    [anon_sym_Rho] = ACTIONS(97),
    [anon_sym_Sigma] = ACTIONS(97),
    [anon_sym_Tau] = ACTIONS(97),
    [anon_sym_Upsilon] = ACTIONS(97),
    [anon_sym_Phi] = ACTIONS(97),
    [anon_sym_Chi] = ACTIONS(97),
    [anon_sym_Psi] = ACTIONS(97),
    [anon_sym_Omega] = ACTIONS(97),
    [anon_sym_infty] = ACTIONS(97),
    [anon_sym_hbar] = ACTIONS(97),
    [anon_sym_ell] = ACTIONS(97),
    [anon_sym_Re] = ACTIONS(97),
    [anon_sym_Im] = ACTIONS(97),
    [anon_sym_aleph] = ACTIONS(97),
    [anon_sym_nabla] = ACTIONS(97),
    [anon_sym_partial] = ACTIONS(97),
    [anon_sym_forall] = ACTIONS(97),
    [anon_sym_exists] = ACTIONS(97),
    [anon_sym_emptyset] = ACTIONS(97),
    [anon_sym_grad] = ACTIONS(97),
    [anon_sym_del] = ACTIONS(97),
    [anon_sym_pm] = ACTIONS(97),
    [anon_sym_mp] = ACTIONS(97),
    [aux_sym_constant_symbol_token1] = ACTIONS(97),
    [aux_sym_constant_symbol_token2] = ACTIONS(99),
    [aux_sym_constant_symbol_token3] = ACTIONS(99),
    [anon_sym_sqrt] = ACTIONS(97),
    [anon_sym_text] = ACTIONS(97),
    [anon_sym_bb] = ACTIONS(97),
    [anon_sym_cc] = ACTIONS(97),
    [anon_sym_tt] = ACTIONS(97),
    [anon_sym_fr] = ACTIONS(97),
    [anon_sym_sf] = ACTIONS(97),
    [anon_sym_bold] = ACTIONS(97),
    [anon_sym_cal] = ACTIONS(97),
    [anon_sym_frak] = ACTIONS(97),
    [anon_sym_monospace] = ACTIONS(97),
    [anon_sym_italic] = ACTIONS(97),
    [anon_sym_frac] = ACTIONS(97),
    [anon_sym_root] = ACTIONS(97),
    [anon_sym_stackrel] = ACTIONS(97),
    [anon_sym_choose] = ACTIONS(97),
    [anon_sym_atop] = ACTIONS(97),
    [anon_sym_over] = ACTIONS(97),
    [sym_multi_linebreak] = ACTIONS(97),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACE_COLON] = ACTIONS(99),
    [anon_sym_LPAREN_COLON] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_alpha] = ACTIONS(115),
    [anon_sym_beta] = ACTIONS(115),
    [anon_sym_gamma] = ACTIONS(115),
    [anon_sym_delta] = ACTIONS(115),
    [anon_sym_epsilon] = ACTIONS(115),
    [anon_sym_zeta] = ACTIONS(115),
    [anon_sym_eta] = ACTIONS(115),
    [anon_sym_theta] = ACTIONS(115),
    [anon_sym_iota] = ACTIONS(115),
    [anon_sym_kappa] = ACTIONS(115),
    [anon_sym_lambda] = ACTIONS(115),
    [anon_sym_mu] = ACTIONS(115),
    [anon_sym_nu] = ACTIONS(115),
    [anon_sym_xi] = ACTIONS(115),
    [anon_sym_omicron] = ACTIONS(115),
    [anon_sym_pi] = ACTIONS(115),
    [anon_sym_rho] = ACTIONS(115),
    [anon_sym_sigma] = ACTIONS(115),
    [anon_sym_tau] = ACTIONS(115),
    [anon_sym_upsilon] = ACTIONS(115),
    [anon_sym_phi] = ACTIONS(115),
    [anon_sym_chi] = ACTIONS(115),
    [anon_sym_psi] = ACTIONS(115),
    [anon_sym_omega] = ACTIONS(115),
    [anon_sym_Alpha] = ACTIONS(115),
    [anon_sym_Beta] = ACTIONS(115),
    [anon_sym_Gamma] = ACTIONS(115),
    [anon_sym_Delta] = ACTIONS(115),
    [anon_sym_Epsilon] = ACTIONS(115),
    [anon_sym_Zeta] = ACTIONS(115),
    [anon_sym_Eta] = ACTIONS(115),
    [anon_sym_Theta] = ACTIONS(115),
    [anon_sym_Iota] = ACTIONS(115),
    [anon_sym_Kappa] = ACTIONS(115),
    [anon_sym_Lambda] = ACTIONS(115),
    [anon_sym_Mu] = ACTIONS(115),
    [anon_sym_Nu] = ACTIONS(115),
    [anon_sym_Xi] = ACTIONS(115),
    [anon_sym_Omicron] = ACTIONS(115),
    [anon_sym_Pi] = ACTIONS(115),
    [anon_sym_Rho] = ACTIONS(115),
    [anon_sym_Sigma] = ACTIONS(115),
    [anon_sym_Tau] = ACTIONS(115),
    [anon_sym_Upsilon] = ACTIONS(115),
    [anon_sym_Phi] = ACTIONS(115),
    [anon_sym_Chi] = ACTIONS(115),
    [anon_sym_Psi] = ACTIONS(115),
    [anon_sym_Omega] = ACTIONS(115),
    [anon_sym_infty] = ACTIONS(115),
    [anon_sym_hbar] = ACTIONS(115),
    [anon_sym_ell] = ACTIONS(115),
    [anon_sym_Re] = ACTIONS(115),
    [anon_sym_Im] = ACTIONS(115),
    [anon_sym_aleph] = ACTIONS(115),
    [anon_sym_nabla] = ACTIONS(115),
    [anon_sym_partial] = ACTIONS(115),
    [anon_sym_forall] = ACTIONS(115),
    [anon_sym_exists] = ACTIONS(115),
    [anon_sym_emptyset] = ACTIONS(115),
    [anon_sym_grad] = ACTIONS(115),
    [anon_sym_del] = ACTIONS(115),
    [anon_sym_pm] = ACTIONS(115),
    [anon_sym_mp] = ACTIONS(115),
    [aux_sym_constant_symbol_token1] = ACTIONS(115),
    [aux_sym_constant_symbol_token2] = ACTIONS(117),
    [aux_sym_constant_symbol_token3] = ACTIONS(117),
    [anon_sym_sqrt] = ACTIONS(115),
    [anon_sym_text] = ACTIONS(115),
    [anon_sym_bb] = ACTIONS(115),
    [anon_sym_cc] = ACTIONS(115),
    [anon_sym_tt] = ACTIONS(115),
    [anon_sym_fr] = ACTIONS(115),
    [anon_sym_sf] = ACTIONS(115),
    [anon_sym_bold] = ACTIONS(115),
    [anon_sym_cal] = ACTIONS(115),
    [anon_sym_frak] = ACTIONS(115),
    [anon_sym_monospace] = ACTIONS(115),
    [anon_sym_italic] = ACTIONS(115),
    [anon_sym_frac] = ACTIONS(115),
    [anon_sym_root] = ACTIONS(115),
    [anon_sym_stackrel] = ACTIONS(115),
    [anon_sym_choose] = ACTIONS(115),
    [anon_sym_atop] = ACTIONS(115),
    [anon_sym_over] = ACTIONS(115),
    [sym_multi_linebreak] = ACTIONS(115),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_LBRACE_COLON] = ACTIONS(117),
    [anon_sym_LPAREN_COLON] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_alpha] = ACTIONS(127),
    [anon_sym_beta] = ACTIONS(127),
    [anon_sym_gamma] = ACTIONS(127),
    [anon_sym_delta] = ACTIONS(127),
    [anon_sym_epsilon] = ACTIONS(127),
    [anon_sym_zeta] = ACTIONS(127),
    [anon_sym_eta] = ACTIONS(127),
    [anon_sym_theta] = ACTIONS(127),
    [anon_sym_iota] = ACTIONS(127),
    [anon_sym_kappa] = ACTIONS(127),
    [anon_sym_lambda] = ACTIONS(127),
    [anon_sym_mu] = ACTIONS(127),
    [anon_sym_nu] = ACTIONS(127),
    [anon_sym_xi] = ACTIONS(127),
    [anon_sym_omicron] = ACTIONS(127),
    [anon_sym_pi] = ACTIONS(127),
    [anon_sym_rho] = ACTIONS(127),
    [anon_sym_sigma] = ACTIONS(127),
    [anon_sym_tau] = ACTIONS(127),
    [anon_sym_upsilon] = ACTIONS(127),
    [anon_sym_phi] = ACTIONS(127),
    [anon_sym_chi] = ACTIONS(127),
    [anon_sym_psi] = ACTIONS(127),
    [anon_sym_omega] = ACTIONS(127),
    [anon_sym_Alpha] = ACTIONS(127),
    [anon_sym_Beta] = ACTIONS(127),
    [anon_sym_Gamma] = ACTIONS(127),
    [anon_sym_Delta] = ACTIONS(127),
    [anon_sym_Epsilon] = ACTIONS(127),
    [anon_sym_Zeta] = ACTIONS(127),
    [anon_sym_Eta] = ACTIONS(127),
    [anon_sym_Theta] = ACTIONS(127),
    [anon_sym_Iota] = ACTIONS(127),
    [anon_sym_Kappa] = ACTIONS(127),
    [anon_sym_Lambda] = ACTIONS(127),
    [anon_sym_Mu] = ACTIONS(127),
    [anon_sym_Nu] = ACTIONS(127),
    [anon_sym_Xi] = ACTIONS(127),
    [anon_sym_Omicron] = ACTIONS(127),
    [anon_sym_Pi] = ACTIONS(127),
    [anon_sym_Rho] = ACTIONS(127),
    [anon_sym_Sigma] = ACTIONS(127),
    [anon_sym_Tau] = ACTIONS(127),
    [anon_sym_Upsilon] = ACTIONS(127),
    [anon_sym_Phi] = ACTIONS(127),
    [anon_sym_Chi] = ACTIONS(127),
    [anon_sym_Psi] = ACTIONS(127),
    [anon_sym_Omega] = ACTIONS(127),
    [anon_sym_infty] = ACTIONS(127),
    [anon_sym_hbar] = ACTIONS(127),
    [anon_sym_ell] = ACTIONS(127),
    [anon_sym_Re] = ACTIONS(127),
    [anon_sym_Im] = ACTIONS(127),
    [anon_sym_aleph] = ACTIONS(127),
    [anon_sym_nabla] = ACTIONS(127),
    [anon_sym_partial] = ACTIONS(127),
    [anon_sym_forall] = ACTIONS(127),
    [anon_sym_exists] = ACTIONS(127),
    [anon_sym_emptyset] = ACTIONS(127),
    [anon_sym_grad] = ACTIONS(127),
    [anon_sym_del] = ACTIONS(127),
    [anon_sym_pm] = ACTIONS(127),
    [anon_sym_mp] = ACTIONS(127),
    [aux_sym_constant_symbol_token1] = ACTIONS(127),
    [aux_sym_constant_symbol_token2] = ACTIONS(129),
    [aux_sym_constant_symbol_token3] = ACTIONS(129),
    [anon_sym_sqrt] = ACTIONS(127),
    [anon_sym_text] = ACTIONS(127),
    [anon_sym_bb] = ACTIONS(127),
    [anon_sym_cc] = ACTIONS(127),
    [anon_sym_tt] = ACTIONS(127),
    [anon_sym_fr] = ACTIONS(127),
    [anon_sym_sf] = ACTIONS(127),
    [anon_sym_bold] = ACTIONS(127),
    [anon_sym_cal] = ACTIONS(127),
    [anon_sym_frak] = ACTIONS(127),
    [anon_sym_monospace] = ACTIONS(127),
    [anon_sym_italic] = ACTIONS(127),
    [anon_sym_frac] = ACTIONS(127),
    [anon_sym_root] = ACTIONS(127),
    [anon_sym_stackrel] = ACTIONS(127),
    [anon_sym_choose] = ACTIONS(127),
    [anon_sym_atop] = ACTIONS(127),
    [anon_sym_over] = ACTIONS(127),
    [sym_multi_linebreak] = ACTIONS(127),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE_COLON] = ACTIONS(129),
    [anon_sym_LPAREN_COLON] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(145),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_alpha] = ACTIONS(137),
    [anon_sym_beta] = ACTIONS(137),
    [anon_sym_gamma] = ACTIONS(137),
    [anon_sym_delta] = ACTIONS(137),
    [anon_sym_epsilon] = ACTIONS(137),
    [anon_sym_zeta] = ACTIONS(137),
    [anon_sym_eta] = ACTIONS(137),
    [anon_sym_theta] = ACTIONS(137),
    [anon_sym_iota] = ACTIONS(137),
    [anon_sym_kappa] = ACTIONS(137),
    [anon_sym_lambda] = ACTIONS(137),
    [anon_sym_mu] = ACTIONS(137),
    [anon_sym_nu] = ACTIONS(137),
    [anon_sym_xi] = ACTIONS(137),
    [anon_sym_omicron] = ACTIONS(137),
    [anon_sym_pi] = ACTIONS(137),
    [anon_sym_rho] = ACTIONS(137),
    [anon_sym_sigma] = ACTIONS(137),
    [anon_sym_tau] = ACTIONS(137),
    [anon_sym_upsilon] = ACTIONS(137),
    [anon_sym_phi] = ACTIONS(137),
    [anon_sym_chi] = ACTIONS(137),
    [anon_sym_psi] = ACTIONS(137),
    [anon_sym_omega] = ACTIONS(137),
    [anon_sym_Alpha] = ACTIONS(137),
    [anon_sym_Beta] = ACTIONS(137),
    [anon_sym_Gamma] = ACTIONS(137),
    [anon_sym_Delta] = ACTIONS(137),
    [anon_sym_Epsilon] = ACTIONS(137),
    [anon_sym_Zeta] = ACTIONS(137),
    [anon_sym_Eta] = ACTIONS(137),
    [anon_sym_Theta] = ACTIONS(137),
    [anon_sym_Iota] = ACTIONS(137),
    [anon_sym_Kappa] = ACTIONS(137),
    [anon_sym_Lambda] = ACTIONS(137),
    [anon_sym_Mu] = ACTIONS(137),
    [anon_sym_Nu] = ACTIONS(137),
    [anon_sym_Xi] = ACTIONS(137),
    [anon_sym_Omicron] = ACTIONS(137),
    [anon_sym_Pi] = ACTIONS(137),
    [anon_sym_Rho] = ACTIONS(137),
    [anon_sym_Sigma] = ACTIONS(137),
    [anon_sym_Tau] = ACTIONS(137),
    [anon_sym_Upsilon] = ACTIONS(137),
    [anon_sym_Phi] = ACTIONS(137),
    [anon_sym_Chi] = ACTIONS(137),
    [anon_sym_Psi] = ACTIONS(137),
    [anon_sym_Omega] = ACTIONS(137),
    [anon_sym_infty] = ACTIONS(137),
    [anon_sym_hbar] = ACTIONS(137),
    [anon_sym_ell] = ACTIONS(137),
    [anon_sym_Re] = ACTIONS(137),
    [anon_sym_Im] = ACTIONS(137),
    [anon_sym_aleph] = ACTIONS(137),
    [anon_sym_nabla] = ACTIONS(137),
    [anon_sym_partial] = ACTIONS(137),
    [anon_sym_forall] = ACTIONS(137),
    [anon_sym_exists] = ACTIONS(137),
    [anon_sym_emptyset] = ACTIONS(137),
    [anon_sym_grad] = ACTIONS(137),
    [anon_sym_del] = ACTIONS(137),
    [anon_sym_pm] = ACTIONS(137),
    [anon_sym_mp] = ACTIONS(137),
    [aux_sym_constant_symbol_token1] = ACTIONS(137),
    [aux_sym_constant_symbol_token2] = ACTIONS(139),
    [aux_sym_constant_symbol_token3] = ACTIONS(139),
    [anon_sym_sqrt] = ACTIONS(137),
    [anon_sym_text] = ACTIONS(137),
    [anon_sym_bb] = ACTIONS(137),
    [anon_sym_cc] = ACTIONS(137),
    [anon_sym_tt] = ACTIONS(137),
    [anon_sym_fr] = ACTIONS(137),
    [anon_sym_sf] = ACTIONS(137),
    [anon_sym_bold] = ACTIONS(137),
    [anon_sym_cal] = ACTIONS(137),
    [anon_sym_frak] = ACTIONS(137),
    [anon_sym_monospace] = ACTIONS(137),
    [anon_sym_italic] = ACTIONS(137),
    [anon_sym_frac] = ACTIONS(137),
    [anon_sym_root] = ACTIONS(137),
    [anon_sym_stackrel] = ACTIONS(137),
    [anon_sym_choose] = ACTIONS(137),
    [anon_sym_atop] = ACTIONS(137),
    [anon_sym_over] = ACTIONS(137),
    [sym_multi_linebreak] = ACTIONS(137),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_LBRACE_COLON] = ACTIONS(139),
    [anon_sym_LPAREN_COLON] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_alpha] = ACTIONS(105),
    [anon_sym_beta] = ACTIONS(105),
    [anon_sym_gamma] = ACTIONS(105),
    [anon_sym_delta] = ACTIONS(105),
    [anon_sym_epsilon] = ACTIONS(105),
    [anon_sym_zeta] = ACTIONS(105),
    [anon_sym_eta] = ACTIONS(105),
    [anon_sym_theta] = ACTIONS(105),
    [anon_sym_iota] = ACTIONS(105),
    [anon_sym_kappa] = ACTIONS(105),
    [anon_sym_lambda] = ACTIONS(105),
    [anon_sym_mu] = ACTIONS(105),
    [anon_sym_nu] = ACTIONS(105),
    [anon_sym_xi] = ACTIONS(105),
    [anon_sym_omicron] = ACTIONS(105),
    [anon_sym_pi] = ACTIONS(105),
    [anon_sym_rho] = ACTIONS(105),
    [anon_sym_sigma] = ACTIONS(105),
    [anon_sym_tau] = ACTIONS(105),
    [anon_sym_upsilon] = ACTIONS(105),
    [anon_sym_phi] = ACTIONS(105),
    [anon_sym_chi] = ACTIONS(105),
    [anon_sym_psi] = ACTIONS(105),
    [anon_sym_omega] = ACTIONS(105),
    [anon_sym_Alpha] = ACTIONS(105),
    [anon_sym_Beta] = ACTIONS(105),
    [anon_sym_Gamma] = ACTIONS(105),
    [anon_sym_Delta] = ACTIONS(105),
    [anon_sym_Epsilon] = ACTIONS(105),
    [anon_sym_Zeta] = ACTIONS(105),
    [anon_sym_Eta] = ACTIONS(105),
    [anon_sym_Theta] = ACTIONS(105),
    [anon_sym_Iota] = ACTIONS(105),
    [anon_sym_Kappa] = ACTIONS(105),
    [anon_sym_Lambda] = ACTIONS(105),
    [anon_sym_Mu] = ACTIONS(105),
    [anon_sym_Nu] = ACTIONS(105),
    [anon_sym_Xi] = ACTIONS(105),
    [anon_sym_Omicron] = ACTIONS(105),
    [anon_sym_Pi] = ACTIONS(105),
    [anon_sym_Rho] = ACTIONS(105),
    [anon_sym_Sigma] = ACTIONS(105),
    [anon_sym_Tau] = ACTIONS(105),
    [anon_sym_Upsilon] = ACTIONS(105),
    [anon_sym_Phi] = ACTIONS(105),
    [anon_sym_Chi] = ACTIONS(105),
    [anon_sym_Psi] = ACTIONS(105),
    [anon_sym_Omega] = ACTIONS(105),
    [anon_sym_infty] = ACTIONS(105),
    [anon_sym_hbar] = ACTIONS(105),
    [anon_sym_ell] = ACTIONS(105),
    [anon_sym_Re] = ACTIONS(105),
    [anon_sym_Im] = ACTIONS(105),
    [anon_sym_aleph] = ACTIONS(105),
    [anon_sym_nabla] = ACTIONS(105),
    [anon_sym_partial] = ACTIONS(105),
    [anon_sym_forall] = ACTIONS(105),
    [anon_sym_exists] = ACTIONS(105),
    [anon_sym_emptyset] = ACTIONS(105),
    [anon_sym_grad] = ACTIONS(105),
    [anon_sym_del] = ACTIONS(105),
    [anon_sym_pm] = ACTIONS(105),
    [anon_sym_mp] = ACTIONS(105),
    [aux_sym_constant_symbol_token1] = ACTIONS(105),
    [aux_sym_constant_symbol_token2] = ACTIONS(107),
    [aux_sym_constant_symbol_token3] = ACTIONS(107),
    [anon_sym_sqrt] = ACTIONS(105),
    [anon_sym_text] = ACTIONS(105),
    [anon_sym_bb] = ACTIONS(105),
    [anon_sym_cc] = ACTIONS(105),
    [anon_sym_tt] = ACTIONS(105),
    [anon_sym_fr] = ACTIONS(105),
    [anon_sym_sf] = ACTIONS(105),
    [anon_sym_bold] = ACTIONS(105),
    [anon_sym_cal] = ACTIONS(105),
    [anon_sym_frak] = ACTIONS(105),
    [anon_sym_monospace] = ACTIONS(105),
    [anon_sym_italic] = ACTIONS(105),
    [anon_sym_frac] = ACTIONS(105),
    [anon_sym_root] = ACTIONS(105),
    [anon_sym_stackrel] = ACTIONS(105),
    [anon_sym_choose] = ACTIONS(105),
    [anon_sym_atop] = ACTIONS(105),
    [anon_sym_over] = ACTIONS(105),
    [sym_multi_linebreak] = ACTIONS(105),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LBRACE_COLON] = ACTIONS(107),
    [anon_sym_LPAREN_COLON] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_alpha] = ACTIONS(133),
    [anon_sym_beta] = ACTIONS(133),
    [anon_sym_gamma] = ACTIONS(133),
    [anon_sym_delta] = ACTIONS(133),
    [anon_sym_epsilon] = ACTIONS(133),
    [anon_sym_zeta] = ACTIONS(133),
    [anon_sym_eta] = ACTIONS(133),
    [anon_sym_theta] = ACTIONS(133),
    [anon_sym_iota] = ACTIONS(133),
    [anon_sym_kappa] = ACTIONS(133),
    [anon_sym_lambda] = ACTIONS(133),
    [anon_sym_mu] = ACTIONS(133),
    [anon_sym_nu] = ACTIONS(133),
    [anon_sym_xi] = ACTIONS(133),
    [anon_sym_omicron] = ACTIONS(133),
    [anon_sym_pi] = ACTIONS(133),
    [anon_sym_rho] = ACTIONS(133),
    [anon_sym_sigma] = ACTIONS(133),
    [anon_sym_tau] = ACTIONS(133),
    [anon_sym_upsilon] = ACTIONS(133),
    [anon_sym_phi] = ACTIONS(133),
    [anon_sym_chi] = ACTIONS(133),
    [anon_sym_psi] = ACTIONS(133),
    [anon_sym_omega] = ACTIONS(133),
    [anon_sym_Alpha] = ACTIONS(133),
    [anon_sym_Beta] = ACTIONS(133),
    [anon_sym_Gamma] = ACTIONS(133),
    [anon_sym_Delta] = ACTIONS(133),
    [anon_sym_Epsilon] = ACTIONS(133),
    [anon_sym_Zeta] = ACTIONS(133),
    [anon_sym_Eta] = ACTIONS(133),
    [anon_sym_Theta] = ACTIONS(133),
    [anon_sym_Iota] = ACTIONS(133),
    [anon_sym_Kappa] = ACTIONS(133),
    [anon_sym_Lambda] = ACTIONS(133),
    [anon_sym_Mu] = ACTIONS(133),
    [anon_sym_Nu] = ACTIONS(133),
    [anon_sym_Xi] = ACTIONS(133),
    [anon_sym_Omicron] = ACTIONS(133),
    [anon_sym_Pi] = ACTIONS(133),
    [anon_sym_Rho] = ACTIONS(133),
    [anon_sym_Sigma] = ACTIONS(133),
    [anon_sym_Tau] = ACTIONS(133),
    [anon_sym_Upsilon] = ACTIONS(133),
    [anon_sym_Phi] = ACTIONS(133),
    [anon_sym_Chi] = ACTIONS(133),
    [anon_sym_Psi] = ACTIONS(133),
    [anon_sym_Omega] = ACTIONS(133),
    [anon_sym_infty] = ACTIONS(133),
    [anon_sym_hbar] = ACTIONS(133),
    [anon_sym_ell] = ACTIONS(133),
    [anon_sym_Re] = ACTIONS(133),
    [anon_sym_Im] = ACTIONS(133),
    [anon_sym_aleph] = ACTIONS(133),
    [anon_sym_nabla] = ACTIONS(133),
    [anon_sym_partial] = ACTIONS(133),
    [anon_sym_forall] = ACTIONS(133),
    [anon_sym_exists] = ACTIONS(133),
    [anon_sym_emptyset] = ACTIONS(133),
    [anon_sym_grad] = ACTIONS(133),
    [anon_sym_del] = ACTIONS(133),
    [anon_sym_pm] = ACTIONS(133),
    [anon_sym_mp] = ACTIONS(133),
    [aux_sym_constant_symbol_token1] = ACTIONS(133),
    [aux_sym_constant_symbol_token2] = ACTIONS(135),
    [aux_sym_constant_symbol_token3] = ACTIONS(135),
    [anon_sym_sqrt] = ACTIONS(133),
    [anon_sym_text] = ACTIONS(133),
    [anon_sym_bb] = ACTIONS(133),
    [anon_sym_cc] = ACTIONS(133),
    [anon_sym_tt] = ACTIONS(133),
    [anon_sym_fr] = ACTIONS(133),
    [anon_sym_sf] = ACTIONS(133),
    [anon_sym_bold] = ACTIONS(133),
    [anon_sym_cal] = ACTIONS(133),
    [anon_sym_frak] = ACTIONS(133),
    [anon_sym_monospace] = ACTIONS(133),
    [anon_sym_italic] = ACTIONS(133),
    [anon_sym_frac] = ACTIONS(133),
    [anon_sym_root] = ACTIONS(133),
    [anon_sym_stackrel] = ACTIONS(133),
    [anon_sym_choose] = ACTIONS(133),
    [anon_sym_atop] = ACTIONS(133),
    [anon_sym_over] = ACTIONS(133),
    [sym_multi_linebreak] = ACTIONS(133),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_LBRACE_COLON] = ACTIONS(135),
    [anon_sym_LPAREN_COLON] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_alpha] = ACTIONS(149),
    [anon_sym_beta] = ACTIONS(149),
    [anon_sym_gamma] = ACTIONS(149),
    [anon_sym_delta] = ACTIONS(149),
    [anon_sym_epsilon] = ACTIONS(149),
    [anon_sym_zeta] = ACTIONS(149),
    [anon_sym_eta] = ACTIONS(149),
    [anon_sym_theta] = ACTIONS(149),
    [anon_sym_iota] = ACTIONS(149),
    [anon_sym_kappa] = ACTIONS(149),
    [anon_sym_lambda] = ACTIONS(149),
    [anon_sym_mu] = ACTIONS(149),
    [anon_sym_nu] = ACTIONS(149),
    [anon_sym_xi] = ACTIONS(149),
    [anon_sym_omicron] = ACTIONS(149),
    [anon_sym_pi] = ACTIONS(149),
    [anon_sym_rho] = ACTIONS(149),
    [anon_sym_sigma] = ACTIONS(149),
    [anon_sym_tau] = ACTIONS(149),
    [anon_sym_upsilon] = ACTIONS(149),
    [anon_sym_phi] = ACTIONS(149),
    [anon_sym_chi] = ACTIONS(149),
    [anon_sym_psi] = ACTIONS(149),
    [anon_sym_omega] = ACTIONS(149),
    [anon_sym_Alpha] = ACTIONS(149),
    [anon_sym_Beta] = ACTIONS(149),
    [anon_sym_Gamma] = ACTIONS(149),
    [anon_sym_Delta] = ACTIONS(149),
    [anon_sym_Epsilon] = ACTIONS(149),
    [anon_sym_Zeta] = ACTIONS(149),
    [anon_sym_Eta] = ACTIONS(149),
    [anon_sym_Theta] = ACTIONS(149),
    [anon_sym_Iota] = ACTIONS(149),
    [anon_sym_Kappa] = ACTIONS(149),
    [anon_sym_Lambda] = ACTIONS(149),
    [anon_sym_Mu] = ACTIONS(149),
    [anon_sym_Nu] = ACTIONS(149),
    [anon_sym_Xi] = ACTIONS(149),
    [anon_sym_Omicron] = ACTIONS(149),
    [anon_sym_Pi] = ACTIONS(149),
    [anon_sym_Rho] = ACTIONS(149),
    [anon_sym_Sigma] = ACTIONS(149),
    [anon_sym_Tau] = ACTIONS(149),
    [anon_sym_Upsilon] = ACTIONS(149),
    [anon_sym_Phi] = ACTIONS(149),
    [anon_sym_Chi] = ACTIONS(149),
    [anon_sym_Psi] = ACTIONS(149),
    [anon_sym_Omega] = ACTIONS(149),
    [anon_sym_infty] = ACTIONS(149),
    [anon_sym_hbar] = ACTIONS(149),
    [anon_sym_ell] = ACTIONS(149),
    [anon_sym_Re] = ACTIONS(149),
    [anon_sym_Im] = ACTIONS(149),
    [anon_sym_aleph] = ACTIONS(149),
    [anon_sym_nabla] = ACTIONS(149),
    [anon_sym_partial] = ACTIONS(149),
    [anon_sym_forall] = ACTIONS(149),
    [anon_sym_exists] = ACTIONS(149),
    [anon_sym_emptyset] = ACTIONS(149),
    [anon_sym_grad] = ACTIONS(149),
    [anon_sym_del] = ACTIONS(149),
    [anon_sym_pm] = ACTIONS(149),
    [anon_sym_mp] = ACTIONS(149),
    [aux_sym_constant_symbol_token1] = ACTIONS(149),
    [aux_sym_constant_symbol_token2] = ACTIONS(147),
    [aux_sym_constant_symbol_token3] = ACTIONS(147),
    [anon_sym_sqrt] = ACTIONS(149),
    [anon_sym_text] = ACTIONS(149),
    [anon_sym_bb] = ACTIONS(149),
    [anon_sym_cc] = ACTIONS(149),
    [anon_sym_tt] = ACTIONS(149),
    [anon_sym_fr] = ACTIONS(149),
    [anon_sym_sf] = ACTIONS(149),
    [anon_sym_bold] = ACTIONS(149),
    [anon_sym_cal] = ACTIONS(149),
    [anon_sym_frak] = ACTIONS(149),
    [anon_sym_monospace] = ACTIONS(149),
    [anon_sym_italic] = ACTIONS(149),
    [anon_sym_frac] = ACTIONS(149),
    [anon_sym_root] = ACTIONS(149),
    [anon_sym_stackrel] = ACTIONS(149),
    [anon_sym_choose] = ACTIONS(149),
    [anon_sym_atop] = ACTIONS(149),
    [anon_sym_over] = ACTIONS(149),
    [sym_multi_linebreak] = ACTIONS(149),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACE_COLON] = ACTIONS(147),
    [anon_sym_LPAREN_COLON] = ACTIONS(147),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_alpha] = ACTIONS(153),
    [anon_sym_beta] = ACTIONS(153),
    [anon_sym_gamma] = ACTIONS(153),
    [anon_sym_delta] = ACTIONS(153),
    [anon_sym_epsilon] = ACTIONS(153),
    [anon_sym_zeta] = ACTIONS(153),
    [anon_sym_eta] = ACTIONS(153),
    [anon_sym_theta] = ACTIONS(153),
    [anon_sym_iota] = ACTIONS(153),
    [anon_sym_kappa] = ACTIONS(153),
    [anon_sym_lambda] = ACTIONS(153),
    [anon_sym_mu] = ACTIONS(153),
    [anon_sym_nu] = ACTIONS(153),
    [anon_sym_xi] = ACTIONS(153),
    [anon_sym_omicron] = ACTIONS(153),
    [anon_sym_pi] = ACTIONS(153),
    [anon_sym_rho] = ACTIONS(153),
    [anon_sym_sigma] = ACTIONS(153),
    [anon_sym_tau] = ACTIONS(153),
    [anon_sym_upsilon] = ACTIONS(153),
    [anon_sym_phi] = ACTIONS(153),
    [anon_sym_chi] = ACTIONS(153),
    [anon_sym_psi] = ACTIONS(153),
    [anon_sym_omega] = ACTIONS(153),
    [anon_sym_Alpha] = ACTIONS(153),
    [anon_sym_Beta] = ACTIONS(153),
    [anon_sym_Gamma] = ACTIONS(153),
    [anon_sym_Delta] = ACTIONS(153),
    [anon_sym_Epsilon] = ACTIONS(153),
    [anon_sym_Zeta] = ACTIONS(153),
    [anon_sym_Eta] = ACTIONS(153),
    [anon_sym_Theta] = ACTIONS(153),
    [anon_sym_Iota] = ACTIONS(153),
    [anon_sym_Kappa] = ACTIONS(153),
    [anon_sym_Lambda] = ACTIONS(153),
    [anon_sym_Mu] = ACTIONS(153),
    [anon_sym_Nu] = ACTIONS(153),
    [anon_sym_Xi] = ACTIONS(153),
    [anon_sym_Omicron] = ACTIONS(153),
    [anon_sym_Pi] = ACTIONS(153),
    [anon_sym_Rho] = ACTIONS(153),
    [anon_sym_Sigma] = ACTIONS(153),
    [anon_sym_Tau] = ACTIONS(153),
    [anon_sym_Upsilon] = ACTIONS(153),
    [anon_sym_Phi] = ACTIONS(153),
    [anon_sym_Chi] = ACTIONS(153),
    [anon_sym_Psi] = ACTIONS(153),
    [anon_sym_Omega] = ACTIONS(153),
    [anon_sym_infty] = ACTIONS(153),
    [anon_sym_hbar] = ACTIONS(153),
    [anon_sym_ell] = ACTIONS(153),
    [anon_sym_Re] = ACTIONS(153),
    [anon_sym_Im] = ACTIONS(153),
    [anon_sym_aleph] = ACTIONS(153),
    [anon_sym_nabla] = ACTIONS(153),
    [anon_sym_partial] = ACTIONS(153),
    [anon_sym_forall] = ACTIONS(153),
    [anon_sym_exists] = ACTIONS(153),
    [anon_sym_emptyset] = ACTIONS(153),
    [anon_sym_grad] = ACTIONS(153),
    [anon_sym_del] = ACTIONS(153),
    [anon_sym_pm] = ACTIONS(153),
    [anon_sym_mp] = ACTIONS(153),
    [aux_sym_constant_symbol_token1] = ACTIONS(153),
    [aux_sym_constant_symbol_token2] = ACTIONS(151),
    [aux_sym_constant_symbol_token3] = ACTIONS(151),
    [anon_sym_sqrt] = ACTIONS(153),
    [anon_sym_text] = ACTIONS(153),
    [anon_sym_bb] = ACTIONS(153),
    [anon_sym_cc] = ACTIONS(153),
    [anon_sym_tt] = ACTIONS(153),
    [anon_sym_fr] = ACTIONS(153),
    [anon_sym_sf] = ACTIONS(153),
    [anon_sym_bold] = ACTIONS(153),
    [anon_sym_cal] = ACTIONS(153),
    [anon_sym_frak] = ACTIONS(153),
    [anon_sym_monospace] = ACTIONS(153),
    [anon_sym_italic] = ACTIONS(153),
    [anon_sym_frac] = ACTIONS(153),
    [anon_sym_root] = ACTIONS(153),
    [anon_sym_stackrel] = ACTIONS(153),
    [anon_sym_choose] = ACTIONS(153),
    [anon_sym_atop] = ACTIONS(153),
    [anon_sym_over] = ACTIONS(153),
    [sym_multi_linebreak] = ACTIONS(153),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_COLON] = ACTIONS(151),
    [anon_sym_LPAREN_COLON] = ACTIONS(151),
  },
  [63] = {
    [anon_sym_alpha] = ACTIONS(155),
    [anon_sym_beta] = ACTIONS(155),
    [anon_sym_gamma] = ACTIONS(155),
    [anon_sym_delta] = ACTIONS(155),
    [anon_sym_epsilon] = ACTIONS(155),
    [anon_sym_zeta] = ACTIONS(155),
    [anon_sym_eta] = ACTIONS(155),
    [anon_sym_theta] = ACTIONS(155),
    [anon_sym_iota] = ACTIONS(155),
    [anon_sym_kappa] = ACTIONS(155),
    [anon_sym_lambda] = ACTIONS(155),
    [anon_sym_mu] = ACTIONS(155),
    [anon_sym_nu] = ACTIONS(155),
    [anon_sym_xi] = ACTIONS(155),
    [anon_sym_omicron] = ACTIONS(155),
    [anon_sym_pi] = ACTIONS(155),
    [anon_sym_rho] = ACTIONS(155),
    [anon_sym_sigma] = ACTIONS(155),
    [anon_sym_tau] = ACTIONS(155),
    [anon_sym_upsilon] = ACTIONS(155),
    [anon_sym_phi] = ACTIONS(155),
    [anon_sym_chi] = ACTIONS(155),
    [anon_sym_psi] = ACTIONS(155),
    [anon_sym_omega] = ACTIONS(155),
    [anon_sym_Alpha] = ACTIONS(155),
    [anon_sym_Beta] = ACTIONS(155),
    [anon_sym_Gamma] = ACTIONS(155),
    [anon_sym_Delta] = ACTIONS(155),
    [anon_sym_Epsilon] = ACTIONS(155),
    [anon_sym_Zeta] = ACTIONS(155),
    [anon_sym_Eta] = ACTIONS(155),
    [anon_sym_Theta] = ACTIONS(155),
    [anon_sym_Iota] = ACTIONS(155),
    [anon_sym_Kappa] = ACTIONS(155),
    [anon_sym_Lambda] = ACTIONS(155),
    [anon_sym_Mu] = ACTIONS(155),
    [anon_sym_Nu] = ACTIONS(155),
    [anon_sym_Xi] = ACTIONS(155),
    [anon_sym_Omicron] = ACTIONS(155),
    [anon_sym_Pi] = ACTIONS(155),
    [anon_sym_Rho] = ACTIONS(155),
    [anon_sym_Sigma] = ACTIONS(155),
    [anon_sym_Tau] = ACTIONS(155),
    [anon_sym_Upsilon] = ACTIONS(155),
    [anon_sym_Phi] = ACTIONS(155),
    [anon_sym_Chi] = ACTIONS(155),
    [anon_sym_Psi] = ACTIONS(155),
    [anon_sym_Omega] = ACTIONS(155),
    [anon_sym_infty] = ACTIONS(155),
    [anon_sym_hbar] = ACTIONS(155),
    [anon_sym_ell] = ACTIONS(155),
    [anon_sym_Re] = ACTIONS(155),
    [anon_sym_Im] = ACTIONS(155),
    [anon_sym_aleph] = ACTIONS(155),
    [anon_sym_nabla] = ACTIONS(155),
    [anon_sym_partial] = ACTIONS(155),
    [anon_sym_forall] = ACTIONS(155),
    [anon_sym_exists] = ACTIONS(155),
    [anon_sym_emptyset] = ACTIONS(155),
    [anon_sym_grad] = ACTIONS(155),
    [anon_sym_del] = ACTIONS(155),
    [anon_sym_pm] = ACTIONS(155),
    [anon_sym_mp] = ACTIONS(155),
    [aux_sym_constant_symbol_token1] = ACTIONS(155),
    [aux_sym_constant_symbol_token2] = ACTIONS(157),
    [aux_sym_constant_symbol_token3] = ACTIONS(157),
    [anon_sym_sqrt] = ACTIONS(155),
    [anon_sym_text] = ACTIONS(155),
    [anon_sym_bb] = ACTIONS(155),
    [anon_sym_cc] = ACTIONS(155),
    [anon_sym_tt] = ACTIONS(155),
    [anon_sym_fr] = ACTIONS(155),
    [anon_sym_sf] = ACTIONS(155),
    [anon_sym_bold] = ACTIONS(155),
    [anon_sym_cal] = ACTIONS(155),
    [anon_sym_frak] = ACTIONS(155),
    [anon_sym_monospace] = ACTIONS(155),
    [anon_sym_italic] = ACTIONS(155),
    [anon_sym_frac] = ACTIONS(155),
    [anon_sym_root] = ACTIONS(155),
    [anon_sym_stackrel] = ACTIONS(155),
    [anon_sym_choose] = ACTIONS(155),
    [anon_sym_atop] = ACTIONS(155),
    [anon_sym_over] = ACTIONS(155),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_LBRACE_COLON] = ACTIONS(157),
    [anon_sym_LPAREN_COLON] = ACTIONS(157),
  },
  [64] = {
    [anon_sym_alpha] = ACTIONS(159),
    [anon_sym_beta] = ACTIONS(159),
    [anon_sym_gamma] = ACTIONS(159),
    [anon_sym_delta] = ACTIONS(159),
    [anon_sym_epsilon] = ACTIONS(159),
    [anon_sym_zeta] = ACTIONS(159),
    [anon_sym_eta] = ACTIONS(159),
    [anon_sym_theta] = ACTIONS(159),
    [anon_sym_iota] = ACTIONS(159),
    [anon_sym_kappa] = ACTIONS(159),
    [anon_sym_lambda] = ACTIONS(159),
    [anon_sym_mu] = ACTIONS(159),
    [anon_sym_nu] = ACTIONS(159),
    [anon_sym_xi] = ACTIONS(159),
    [anon_sym_omicron] = ACTIONS(159),
    [anon_sym_pi] = ACTIONS(159),
    [anon_sym_rho] = ACTIONS(159),
    [anon_sym_sigma] = ACTIONS(159),
    [anon_sym_tau] = ACTIONS(159),
    [anon_sym_upsilon] = ACTIONS(159),
    [anon_sym_phi] = ACTIONS(159),
    [anon_sym_chi] = ACTIONS(159),
    [anon_sym_psi] = ACTIONS(159),
    [anon_sym_omega] = ACTIONS(159),
    [anon_sym_Alpha] = ACTIONS(159),
    [anon_sym_Beta] = ACTIONS(159),
    [anon_sym_Gamma] = ACTIONS(159),
    [anon_sym_Delta] = ACTIONS(159),
    [anon_sym_Epsilon] = ACTIONS(159),
    [anon_sym_Zeta] = ACTIONS(159),
    [anon_sym_Eta] = ACTIONS(159),
    [anon_sym_Theta] = ACTIONS(159),
    [anon_sym_Iota] = ACTIONS(159),
    [anon_sym_Kappa] = ACTIONS(159),
    [anon_sym_Lambda] = ACTIONS(159),
    [anon_sym_Mu] = ACTIONS(159),
    [anon_sym_Nu] = ACTIONS(159),
    [anon_sym_Xi] = ACTIONS(159),
    [anon_sym_Omicron] = ACTIONS(159),
    [anon_sym_Pi] = ACTIONS(159),
    [anon_sym_Rho] = ACTIONS(159),
    [anon_sym_Sigma] = ACTIONS(159),
    [anon_sym_Tau] = ACTIONS(159),
    [anon_sym_Upsilon] = ACTIONS(159),
    [anon_sym_Phi] = ACTIONS(159),
    [anon_sym_Chi] = ACTIONS(159),
    [anon_sym_Psi] = ACTIONS(159),
    [anon_sym_Omega] = ACTIONS(159),
    [anon_sym_infty] = ACTIONS(159),
    [anon_sym_hbar] = ACTIONS(159),
    [anon_sym_ell] = ACTIONS(159),
    [anon_sym_Re] = ACTIONS(159),
    [anon_sym_Im] = ACTIONS(159),
    [anon_sym_aleph] = ACTIONS(159),
    [anon_sym_nabla] = ACTIONS(159),
    [anon_sym_partial] = ACTIONS(159),
    [anon_sym_forall] = ACTIONS(159),
    [anon_sym_exists] = ACTIONS(159),
    [anon_sym_emptyset] = ACTIONS(159),
    [anon_sym_grad] = ACTIONS(159),
    [anon_sym_del] = ACTIONS(159),
    [anon_sym_pm] = ACTIONS(159),
    [anon_sym_mp] = ACTIONS(159),
    [aux_sym_constant_symbol_token1] = ACTIONS(159),
    [aux_sym_constant_symbol_token2] = ACTIONS(161),
    [aux_sym_constant_symbol_token3] = ACTIONS(161),
    [anon_sym_sqrt] = ACTIONS(159),
    [anon_sym_text] = ACTIONS(159),
    [anon_sym_bb] = ACTIONS(159),
    [anon_sym_cc] = ACTIONS(159),
    [anon_sym_tt] = ACTIONS(159),
    [anon_sym_fr] = ACTIONS(159),
    [anon_sym_sf] = ACTIONS(159),
    [anon_sym_bold] = ACTIONS(159),
    [anon_sym_cal] = ACTIONS(159),
    [anon_sym_frak] = ACTIONS(159),
    [anon_sym_monospace] = ACTIONS(159),
    [anon_sym_italic] = ACTIONS(159),
    [anon_sym_frac] = ACTIONS(159),
    [anon_sym_root] = ACTIONS(159),
    [anon_sym_stackrel] = ACTIONS(159),
    [anon_sym_choose] = ACTIONS(159),
    [anon_sym_atop] = ACTIONS(159),
    [anon_sym_over] = ACTIONS(159),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_LBRACE_COLON] = ACTIONS(161),
    [anon_sym_LPAREN_COLON] = ACTIONS(161),
  },
  [65] = {
    [anon_sym_alpha] = ACTIONS(163),
    [anon_sym_beta] = ACTIONS(163),
    [anon_sym_gamma] = ACTIONS(163),
    [anon_sym_delta] = ACTIONS(163),
    [anon_sym_epsilon] = ACTIONS(163),
    [anon_sym_zeta] = ACTIONS(163),
    [anon_sym_eta] = ACTIONS(163),
    [anon_sym_theta] = ACTIONS(163),
    [anon_sym_iota] = ACTIONS(163),
    [anon_sym_kappa] = ACTIONS(163),
    [anon_sym_lambda] = ACTIONS(163),
    [anon_sym_mu] = ACTIONS(163),
    [anon_sym_nu] = ACTIONS(163),
    [anon_sym_xi] = ACTIONS(163),
    [anon_sym_omicron] = ACTIONS(163),
    [anon_sym_pi] = ACTIONS(163),
    [anon_sym_rho] = ACTIONS(163),
    [anon_sym_sigma] = ACTIONS(163),
    [anon_sym_tau] = ACTIONS(163),
    [anon_sym_upsilon] = ACTIONS(163),
    [anon_sym_phi] = ACTIONS(163),
    [anon_sym_chi] = ACTIONS(163),
    [anon_sym_psi] = ACTIONS(163),
    [anon_sym_omega] = ACTIONS(163),
    [anon_sym_Alpha] = ACTIONS(163),
    [anon_sym_Beta] = ACTIONS(163),
    [anon_sym_Gamma] = ACTIONS(163),
    [anon_sym_Delta] = ACTIONS(163),
    [anon_sym_Epsilon] = ACTIONS(163),
    [anon_sym_Zeta] = ACTIONS(163),
    [anon_sym_Eta] = ACTIONS(163),
    [anon_sym_Theta] = ACTIONS(163),
    [anon_sym_Iota] = ACTIONS(163),
    [anon_sym_Kappa] = ACTIONS(163),
    [anon_sym_Lambda] = ACTIONS(163),
    [anon_sym_Mu] = ACTIONS(163),
    [anon_sym_Nu] = ACTIONS(163),
    [anon_sym_Xi] = ACTIONS(163),
    [anon_sym_Omicron] = ACTIONS(163),
    [anon_sym_Pi] = ACTIONS(163),
    [anon_sym_Rho] = ACTIONS(163),
    [anon_sym_Sigma] = ACTIONS(163),
    [anon_sym_Tau] = ACTIONS(163),
    [anon_sym_Upsilon] = ACTIONS(163),
    [anon_sym_Phi] = ACTIONS(163),
    [anon_sym_Chi] = ACTIONS(163),
    [anon_sym_Psi] = ACTIONS(163),
    [anon_sym_Omega] = ACTIONS(163),
    [anon_sym_infty] = ACTIONS(163),
    [anon_sym_hbar] = ACTIONS(163),
    [anon_sym_ell] = ACTIONS(163),
    [anon_sym_Re] = ACTIONS(163),
    [anon_sym_Im] = ACTIONS(163),
    [anon_sym_aleph] = ACTIONS(163),
    [anon_sym_nabla] = ACTIONS(163),
    [anon_sym_partial] = ACTIONS(163),
    [anon_sym_forall] = ACTIONS(163),
    [anon_sym_exists] = ACTIONS(163),
    [anon_sym_emptyset] = ACTIONS(163),
    [anon_sym_grad] = ACTIONS(163),
    [anon_sym_del] = ACTIONS(163),
    [anon_sym_pm] = ACTIONS(163),
    [anon_sym_mp] = ACTIONS(163),
    [aux_sym_constant_symbol_token1] = ACTIONS(163),
    [aux_sym_constant_symbol_token2] = ACTIONS(165),
    [aux_sym_constant_symbol_token3] = ACTIONS(165),
    [anon_sym_sqrt] = ACTIONS(163),
    [anon_sym_text] = ACTIONS(163),
    [anon_sym_bb] = ACTIONS(163),
    [anon_sym_cc] = ACTIONS(163),
    [anon_sym_tt] = ACTIONS(163),
    [anon_sym_fr] = ACTIONS(163),
    [anon_sym_sf] = ACTIONS(163),
    [anon_sym_bold] = ACTIONS(163),
    [anon_sym_cal] = ACTIONS(163),
    [anon_sym_frak] = ACTIONS(163),
    [anon_sym_monospace] = ACTIONS(163),
    [anon_sym_italic] = ACTIONS(163),
    [anon_sym_frac] = ACTIONS(163),
    [anon_sym_root] = ACTIONS(163),
    [anon_sym_stackrel] = ACTIONS(163),
    [anon_sym_choose] = ACTIONS(163),
    [anon_sym_atop] = ACTIONS(163),
    [anon_sym_over] = ACTIONS(163),
    [sym__whitespace] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_LBRACE_COLON] = ACTIONS(165),
    [anon_sym_LPAREN_COLON] = ACTIONS(165),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_right_bracket,
    STATE(72), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(167), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [23] = 6,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(90), 1,
      sym_right_bracket,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [46] = 6,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_right_bracket,
    STATE(67), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [69] = 6,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_right_bracket,
    STATE(72), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [92] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_right_bracket,
    STATE(84), 1,
      aux_sym_other_matrix_expr_repeat1,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [112] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      sym_right_bracket,
    STATE(75), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(167), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [132] = 4,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(175), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_SEMI,
  [150] = 4,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(181), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_SEMI,
  [168] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_right_bracket,
    STATE(70), 1,
      aux_sym_other_matrix_expr_repeat1,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [188] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_right_bracket,
    STATE(86), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(167), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [208] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_right_bracket,
    STATE(82), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [228] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_right_bracket,
    STATE(84), 1,
      aux_sym_other_matrix_expr_repeat1,
    ACTIONS(167), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [248] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(90), 1,
      sym_right_bracket,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [268] = 4,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(171), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_SEMI,
  [286] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_right_bracket,
    STATE(77), 1,
      aux_sym_other_matrix_expr_repeat1,
    ACTIONS(167), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [306] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(89), 1,
      sym_right_bracket,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [326] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_right_bracket,
    STATE(86), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(173), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [346] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    STATE(10), 1,
      sym_left_bracket,
    STATE(92), 1,
      sym_matrix_row_expr,
    ACTIONS(19), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(21), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE_COLON,
      anon_sym_LPAREN_COLON,
  [365] = 4,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      aux_sym_other_matrix_expr_repeat1,
    ACTIONS(186), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [382] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(151), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [395] = 4,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(191), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [412] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(147), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [425] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(181), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [438] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(113), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [450] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(196), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [462] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(186), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_SEMI,
  [474] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(191), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [486] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(200), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [500] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(204), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [514] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(209), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [528] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(200), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [542] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(215), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [556] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(66)] = 0,
  [SMALL_STATE(67)] = 23,
  [SMALL_STATE(68)] = 46,
  [SMALL_STATE(69)] = 69,
  [SMALL_STATE(70)] = 92,
  [SMALL_STATE(71)] = 112,
  [SMALL_STATE(72)] = 132,
  [SMALL_STATE(73)] = 150,
  [SMALL_STATE(74)] = 168,
  [SMALL_STATE(75)] = 188,
  [SMALL_STATE(76)] = 208,
  [SMALL_STATE(77)] = 228,
  [SMALL_STATE(78)] = 248,
  [SMALL_STATE(79)] = 268,
  [SMALL_STATE(80)] = 286,
  [SMALL_STATE(81)] = 306,
  [SMALL_STATE(82)] = 326,
  [SMALL_STATE(83)] = 346,
  [SMALL_STATE(84)] = 365,
  [SMALL_STATE(85)] = 382,
  [SMALL_STATE(86)] = 395,
  [SMALL_STATE(87)] = 412,
  [SMALL_STATE(88)] = 425,
  [SMALL_STATE(89)] = 438,
  [SMALL_STATE(90)] = 450,
  [SMALL_STATE(91)] = 462,
  [SMALL_STATE(92)] = 474,
  [SMALL_STATE(93)] = 486,
  [SMALL_STATE(94)] = 500,
  [SMALL_STATE(95)] = 514,
  [SMALL_STATE(96)] = 528,
  [SMALL_STATE(97)] = 542,
  [SMALL_STATE(98)] = 556,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_matrix_expr, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_matrix_expr, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_symbol, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_symbol, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_matrix_expr, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_matrix_expr, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superscript, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superscript, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_symbol, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_symbol, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_symbol, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_symbol, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_matrix_row_expr, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_matrix_row_expr, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_other_matrix_expr_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_other_matrix_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
