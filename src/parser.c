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
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 68
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 126
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_number_symbol = 1,
  sym_identifier = 2,
  sym_if = 3,
  sym_otherwise = 4,
  sym_else = 5,
  sym_alpha = 6,
  sym_beta = 7,
  sym_gamma = 8,
  sym_delta = 9,
  sym_epsilon = 10,
  sym_zeta = 11,
  sym_eta = 12,
  sym_theta = 13,
  sym_iota = 14,
  sym_kappa = 15,
  sym_lambda = 16,
  sym_mu = 17,
  sym_nu = 18,
  sym_xi = 19,
  sym_omicron = 20,
  sym_pi = 21,
  sym_rho = 22,
  sym_sigma = 23,
  sym_tau = 24,
  sym_upsilon = 25,
  sym_phi = 26,
  sym_chi = 27,
  sym_psi = 28,
  sym_omega = 29,
  sym_Alpha = 30,
  sym_Beta = 31,
  sym_Gamma = 32,
  sym_Delta = 33,
  sym_Epsilon = 34,
  sym_Zeta = 35,
  sym_Eta = 36,
  sym_Theta = 37,
  sym_Iota = 38,
  sym_Kappa = 39,
  sym_Lambda = 40,
  sym_Mu = 41,
  sym_Nu = 42,
  sym_Xi = 43,
  sym_Omicron = 44,
  sym_Pi = 45,
  sym_Rho = 46,
  sym_Sigma = 47,
  sym_Tau = 48,
  sym_Upsilon = 49,
  sym_Phi = 50,
  sym_Chi = 51,
  sym_Psi = 52,
  sym_Omega = 53,
  sym_infty = 54,
  sym_hbar = 55,
  sym_ell = 56,
  sym_Re = 57,
  sym_Im = 58,
  sym_aleph = 59,
  sym_nabla = 60,
  sym_partial = 61,
  sym_forall = 62,
  sym_exists = 63,
  sym_emptyset = 64,
  sym_grad = 65,
  sym_del = 66,
  sym_plus = 67,
  sym_minus = 68,
  sym_times = 69,
  sym_equals = 70,
  sym_lt = 71,
  sym_gt = 72,
  sym_le = 73,
  sym_ge = 74,
  sym_ne = 75,
  sym_approx = 76,
  sym_pm = 77,
  sym_mp = 78,
  sym_tilde_gt = 79,
  sym_forall_symbol = 80,
  sym_exists_symbol = 81,
  sym_falsum = 82,
  sym_verum = 83,
  sym_turnstile = 84,
  sym_models = 85,
  sym_sqrt = 86,
  sym_text = 87,
  sym_bb = 88,
  sym_cc = 89,
  sym_tt = 90,
  sym_fr = 91,
  sym_sf = 92,
  sym_bold = 93,
  sym_cal = 94,
  sym_frak = 95,
  sym_monospace = 96,
  sym_mono = 97,
  sym_italic = 98,
  sym_frac = 99,
  sym_root = 100,
  sym_stackrel = 101,
  sym_choose = 102,
  sym_atop = 103,
  sym_over = 104,
  sym_factorial = 105,
  sym_double_factorial = 106,
  sym_multi_linebreak = 107,
  sym__whitespace = 108,
  anon_sym_DQUOTE = 109,
  sym_unescaped_double_string_fragment = 110,
  sym_escape_sequence = 111,
  anon_sym_LPAREN = 112,
  anon_sym_LBRACK = 113,
  anon_sym_LBRACE = 114,
  anon_sym_LBRACE_COLON = 115,
  anon_sym_LPAREN_COLON = 116,
  anon_sym_RPAREN = 117,
  anon_sym_RBRACK = 118,
  anon_sym_RBRACE = 119,
  anon_sym_COLON_RBRACE = 120,
  anon_sym_COLON_RPAREN = 121,
  anon_sym_COMMA = 122,
  anon_sym_SLASH = 123,
  anon_sym__ = 124,
  anon_sym_CARET = 125,
  sym_source_file = 126,
  sym__expression = 127,
  sym_literal_string = 128,
  sym_left_bracket = 129,
  sym_right_bracket = 130,
  sym_bracket_expr = 131,
  sym_matrix_row_expr = 132,
  sym_matrix_expr = 133,
  sym_unary_expr = 134,
  sym_binary_expr = 135,
  sym_binary_frac = 136,
  sym_factorial_expr = 137,
  sym_simple_expression = 138,
  sym_subscript = 139,
  sym_superscript = 140,
  sym_subscript_superscript = 141,
  sym_intermediate_expression = 142,
  sym_concatenation = 143,
  aux_sym_source_file_repeat1 = 144,
  aux_sym_literal_string_repeat1 = 145,
  aux_sym_matrix_row_expr_repeat1 = 146,
  aux_sym_matrix_expr_repeat1 = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number_symbol] = "number_symbol",
  [sym_identifier] = "identifier",
  [sym_if] = "if",
  [sym_otherwise] = "otherwise",
  [sym_else] = "else",
  [sym_alpha] = "alpha",
  [sym_beta] = "beta",
  [sym_gamma] = "gamma",
  [sym_delta] = "delta",
  [sym_epsilon] = "epsilon",
  [sym_zeta] = "zeta",
  [sym_eta] = "eta",
  [sym_theta] = "theta",
  [sym_iota] = "iota",
  [sym_kappa] = "kappa",
  [sym_lambda] = "lambda",
  [sym_mu] = "mu",
  [sym_nu] = "nu",
  [sym_xi] = "xi",
  [sym_omicron] = "omicron",
  [sym_pi] = "pi",
  [sym_rho] = "rho",
  [sym_sigma] = "sigma",
  [sym_tau] = "tau",
  [sym_upsilon] = "upsilon",
  [sym_phi] = "phi",
  [sym_chi] = "chi",
  [sym_psi] = "psi",
  [sym_omega] = "omega",
  [sym_Alpha] = "Alpha",
  [sym_Beta] = "Beta",
  [sym_Gamma] = "Gamma",
  [sym_Delta] = "Delta",
  [sym_Epsilon] = "Epsilon",
  [sym_Zeta] = "Zeta",
  [sym_Eta] = "Eta",
  [sym_Theta] = "Theta",
  [sym_Iota] = "Iota",
  [sym_Kappa] = "Kappa",
  [sym_Lambda] = "Lambda",
  [sym_Mu] = "Mu",
  [sym_Nu] = "Nu",
  [sym_Xi] = "Xi",
  [sym_Omicron] = "Omicron",
  [sym_Pi] = "Pi",
  [sym_Rho] = "Rho",
  [sym_Sigma] = "Sigma",
  [sym_Tau] = "Tau",
  [sym_Upsilon] = "Upsilon",
  [sym_Phi] = "Phi",
  [sym_Chi] = "Chi",
  [sym_Psi] = "Psi",
  [sym_Omega] = "Omega",
  [sym_infty] = "infty",
  [sym_hbar] = "hbar",
  [sym_ell] = "ell",
  [sym_Re] = "Re",
  [sym_Im] = "Im",
  [sym_aleph] = "aleph",
  [sym_nabla] = "nabla",
  [sym_partial] = "partial",
  [sym_forall] = "forall",
  [sym_exists] = "exists",
  [sym_emptyset] = "emptyset",
  [sym_grad] = "grad",
  [sym_del] = "del",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_times] = "times",
  [sym_equals] = "equals",
  [sym_lt] = "lt",
  [sym_gt] = "gt",
  [sym_le] = "le",
  [sym_ge] = "ge",
  [sym_ne] = "ne",
  [sym_approx] = "approx",
  [sym_pm] = "pm",
  [sym_mp] = "mp",
  [sym_tilde_gt] = "tilde_gt",
  [sym_forall_symbol] = "forall_symbol",
  [sym_exists_symbol] = "exists_symbol",
  [sym_falsum] = "falsum",
  [sym_verum] = "verum",
  [sym_turnstile] = "turnstile",
  [sym_models] = "models",
  [sym_sqrt] = "sqrt",
  [sym_text] = "text",
  [sym_bb] = "bb",
  [sym_cc] = "cc",
  [sym_tt] = "tt",
  [sym_fr] = "fr",
  [sym_sf] = "sf",
  [sym_bold] = "bold",
  [sym_cal] = "cal",
  [sym_frak] = "frak",
  [sym_monospace] = "monospace",
  [sym_mono] = "mono",
  [sym_italic] = "italic",
  [sym_frac] = "frac",
  [sym_root] = "root",
  [sym_stackrel] = "stackrel",
  [sym_choose] = "choose",
  [sym_atop] = "atop",
  [sym_over] = "over",
  [sym_factorial] = "factorial",
  [sym_double_factorial] = "double_factorial",
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
  [sym_literal_string] = "literal_string",
  [sym_left_bracket] = "left_bracket",
  [sym_right_bracket] = "right_bracket",
  [sym_bracket_expr] = "bracket_expr",
  [sym_matrix_row_expr] = "matrix_row_expr",
  [sym_matrix_expr] = "matrix_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_binary_frac] = "binary_frac",
  [sym_factorial_expr] = "factorial_expr",
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
  [sym_identifier] = sym_identifier,
  [sym_if] = sym_if,
  [sym_otherwise] = sym_otherwise,
  [sym_else] = sym_else,
  [sym_alpha] = sym_alpha,
  [sym_beta] = sym_beta,
  [sym_gamma] = sym_gamma,
  [sym_delta] = sym_delta,
  [sym_epsilon] = sym_epsilon,
  [sym_zeta] = sym_zeta,
  [sym_eta] = sym_eta,
  [sym_theta] = sym_theta,
  [sym_iota] = sym_iota,
  [sym_kappa] = sym_kappa,
  [sym_lambda] = sym_lambda,
  [sym_mu] = sym_mu,
  [sym_nu] = sym_nu,
  [sym_xi] = sym_xi,
  [sym_omicron] = sym_omicron,
  [sym_pi] = sym_pi,
  [sym_rho] = sym_rho,
  [sym_sigma] = sym_sigma,
  [sym_tau] = sym_tau,
  [sym_upsilon] = sym_upsilon,
  [sym_phi] = sym_phi,
  [sym_chi] = sym_chi,
  [sym_psi] = sym_psi,
  [sym_omega] = sym_omega,
  [sym_Alpha] = sym_Alpha,
  [sym_Beta] = sym_Beta,
  [sym_Gamma] = sym_Gamma,
  [sym_Delta] = sym_Delta,
  [sym_Epsilon] = sym_Epsilon,
  [sym_Zeta] = sym_Zeta,
  [sym_Eta] = sym_Eta,
  [sym_Theta] = sym_Theta,
  [sym_Iota] = sym_Iota,
  [sym_Kappa] = sym_Kappa,
  [sym_Lambda] = sym_Lambda,
  [sym_Mu] = sym_Mu,
  [sym_Nu] = sym_Nu,
  [sym_Xi] = sym_Xi,
  [sym_Omicron] = sym_Omicron,
  [sym_Pi] = sym_Pi,
  [sym_Rho] = sym_Rho,
  [sym_Sigma] = sym_Sigma,
  [sym_Tau] = sym_Tau,
  [sym_Upsilon] = sym_Upsilon,
  [sym_Phi] = sym_Phi,
  [sym_Chi] = sym_Chi,
  [sym_Psi] = sym_Psi,
  [sym_Omega] = sym_Omega,
  [sym_infty] = sym_infty,
  [sym_hbar] = sym_hbar,
  [sym_ell] = sym_ell,
  [sym_Re] = sym_Re,
  [sym_Im] = sym_Im,
  [sym_aleph] = sym_aleph,
  [sym_nabla] = sym_nabla,
  [sym_partial] = sym_partial,
  [sym_forall] = sym_forall,
  [sym_exists] = sym_exists,
  [sym_emptyset] = sym_emptyset,
  [sym_grad] = sym_grad,
  [sym_del] = sym_del,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_times] = sym_times,
  [sym_equals] = sym_equals,
  [sym_lt] = sym_lt,
  [sym_gt] = sym_gt,
  [sym_le] = sym_le,
  [sym_ge] = sym_ge,
  [sym_ne] = sym_ne,
  [sym_approx] = sym_approx,
  [sym_pm] = sym_pm,
  [sym_mp] = sym_mp,
  [sym_tilde_gt] = sym_tilde_gt,
  [sym_forall_symbol] = sym_forall_symbol,
  [sym_exists_symbol] = sym_exists_symbol,
  [sym_falsum] = sym_falsum,
  [sym_verum] = sym_verum,
  [sym_turnstile] = sym_turnstile,
  [sym_models] = sym_models,
  [sym_sqrt] = sym_sqrt,
  [sym_text] = sym_text,
  [sym_bb] = sym_bb,
  [sym_cc] = sym_cc,
  [sym_tt] = sym_tt,
  [sym_fr] = sym_fr,
  [sym_sf] = sym_sf,
  [sym_bold] = sym_bold,
  [sym_cal] = sym_cal,
  [sym_frak] = sym_frak,
  [sym_monospace] = sym_monospace,
  [sym_mono] = sym_mono,
  [sym_italic] = sym_italic,
  [sym_frac] = sym_frac,
  [sym_root] = sym_root,
  [sym_stackrel] = sym_stackrel,
  [sym_choose] = sym_choose,
  [sym_atop] = sym_atop,
  [sym_over] = sym_over,
  [sym_factorial] = sym_factorial,
  [sym_double_factorial] = sym_double_factorial,
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
  [sym_literal_string] = sym_literal_string,
  [sym_left_bracket] = sym_left_bracket,
  [sym_right_bracket] = sym_right_bracket,
  [sym_bracket_expr] = sym_bracket_expr,
  [sym_matrix_row_expr] = sym_matrix_row_expr,
  [sym_matrix_expr] = sym_matrix_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_binary_frac] = sym_binary_frac,
  [sym_factorial_expr] = sym_factorial_expr,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_otherwise] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_alpha] = {
    .visible = true,
    .named = true,
  },
  [sym_beta] = {
    .visible = true,
    .named = true,
  },
  [sym_gamma] = {
    .visible = true,
    .named = true,
  },
  [sym_delta] = {
    .visible = true,
    .named = true,
  },
  [sym_epsilon] = {
    .visible = true,
    .named = true,
  },
  [sym_zeta] = {
    .visible = true,
    .named = true,
  },
  [sym_eta] = {
    .visible = true,
    .named = true,
  },
  [sym_theta] = {
    .visible = true,
    .named = true,
  },
  [sym_iota] = {
    .visible = true,
    .named = true,
  },
  [sym_kappa] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_mu] = {
    .visible = true,
    .named = true,
  },
  [sym_nu] = {
    .visible = true,
    .named = true,
  },
  [sym_xi] = {
    .visible = true,
    .named = true,
  },
  [sym_omicron] = {
    .visible = true,
    .named = true,
  },
  [sym_pi] = {
    .visible = true,
    .named = true,
  },
  [sym_rho] = {
    .visible = true,
    .named = true,
  },
  [sym_sigma] = {
    .visible = true,
    .named = true,
  },
  [sym_tau] = {
    .visible = true,
    .named = true,
  },
  [sym_upsilon] = {
    .visible = true,
    .named = true,
  },
  [sym_phi] = {
    .visible = true,
    .named = true,
  },
  [sym_chi] = {
    .visible = true,
    .named = true,
  },
  [sym_psi] = {
    .visible = true,
    .named = true,
  },
  [sym_omega] = {
    .visible = true,
    .named = true,
  },
  [sym_Alpha] = {
    .visible = true,
    .named = true,
  },
  [sym_Beta] = {
    .visible = true,
    .named = true,
  },
  [sym_Gamma] = {
    .visible = true,
    .named = true,
  },
  [sym_Delta] = {
    .visible = true,
    .named = true,
  },
  [sym_Epsilon] = {
    .visible = true,
    .named = true,
  },
  [sym_Zeta] = {
    .visible = true,
    .named = true,
  },
  [sym_Eta] = {
    .visible = true,
    .named = true,
  },
  [sym_Theta] = {
    .visible = true,
    .named = true,
  },
  [sym_Iota] = {
    .visible = true,
    .named = true,
  },
  [sym_Kappa] = {
    .visible = true,
    .named = true,
  },
  [sym_Lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_Mu] = {
    .visible = true,
    .named = true,
  },
  [sym_Nu] = {
    .visible = true,
    .named = true,
  },
  [sym_Xi] = {
    .visible = true,
    .named = true,
  },
  [sym_Omicron] = {
    .visible = true,
    .named = true,
  },
  [sym_Pi] = {
    .visible = true,
    .named = true,
  },
  [sym_Rho] = {
    .visible = true,
    .named = true,
  },
  [sym_Sigma] = {
    .visible = true,
    .named = true,
  },
  [sym_Tau] = {
    .visible = true,
    .named = true,
  },
  [sym_Upsilon] = {
    .visible = true,
    .named = true,
  },
  [sym_Phi] = {
    .visible = true,
    .named = true,
  },
  [sym_Chi] = {
    .visible = true,
    .named = true,
  },
  [sym_Psi] = {
    .visible = true,
    .named = true,
  },
  [sym_Omega] = {
    .visible = true,
    .named = true,
  },
  [sym_infty] = {
    .visible = true,
    .named = true,
  },
  [sym_hbar] = {
    .visible = true,
    .named = true,
  },
  [sym_ell] = {
    .visible = true,
    .named = true,
  },
  [sym_Re] = {
    .visible = true,
    .named = true,
  },
  [sym_Im] = {
    .visible = true,
    .named = true,
  },
  [sym_aleph] = {
    .visible = true,
    .named = true,
  },
  [sym_nabla] = {
    .visible = true,
    .named = true,
  },
  [sym_partial] = {
    .visible = true,
    .named = true,
  },
  [sym_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_emptyset] = {
    .visible = true,
    .named = true,
  },
  [sym_grad] = {
    .visible = true,
    .named = true,
  },
  [sym_del] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_times] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_le] = {
    .visible = true,
    .named = true,
  },
  [sym_ge] = {
    .visible = true,
    .named = true,
  },
  [sym_ne] = {
    .visible = true,
    .named = true,
  },
  [sym_approx] = {
    .visible = true,
    .named = true,
  },
  [sym_pm] = {
    .visible = true,
    .named = true,
  },
  [sym_mp] = {
    .visible = true,
    .named = true,
  },
  [sym_tilde_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_forall_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_exists_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_falsum] = {
    .visible = true,
    .named = true,
  },
  [sym_verum] = {
    .visible = true,
    .named = true,
  },
  [sym_turnstile] = {
    .visible = true,
    .named = true,
  },
  [sym_models] = {
    .visible = true,
    .named = true,
  },
  [sym_sqrt] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_bb] = {
    .visible = true,
    .named = true,
  },
  [sym_cc] = {
    .visible = true,
    .named = true,
  },
  [sym_tt] = {
    .visible = true,
    .named = true,
  },
  [sym_fr] = {
    .visible = true,
    .named = true,
  },
  [sym_sf] = {
    .visible = true,
    .named = true,
  },
  [sym_bold] = {
    .visible = true,
    .named = true,
  },
  [sym_cal] = {
    .visible = true,
    .named = true,
  },
  [sym_frak] = {
    .visible = true,
    .named = true,
  },
  [sym_monospace] = {
    .visible = true,
    .named = true,
  },
  [sym_mono] = {
    .visible = true,
    .named = true,
  },
  [sym_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_frac] = {
    .visible = true,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_stackrel] = {
    .visible = true,
    .named = true,
  },
  [sym_choose] = {
    .visible = true,
    .named = true,
  },
  [sym_atop] = {
    .visible = true,
    .named = true,
  },
  [sym_over] = {
    .visible = true,
    .named = true,
  },
  [sym_factorial] = {
    .visible = true,
    .named = true,
  },
  [sym_double_factorial] = {
    .visible = true,
    .named = true,
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
  [sym_factorial_expr] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 6,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 34,
  [41] = 38,
  [42] = 37,
  [43] = 43,
  [44] = 43,
  [45] = 35,
  [46] = 43,
  [47] = 38,
  [48] = 37,
  [49] = 24,
  [50] = 16,
  [51] = 18,
  [52] = 19,
  [53] = 53,
  [54] = 17,
  [55] = 20,
  [56] = 15,
  [57] = 23,
  [58] = 22,
  [59] = 25,
  [60] = 27,
  [61] = 30,
  [62] = 32,
  [63] = 33,
  [64] = 53,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 15,
  [69] = 19,
  [70] = 27,
  [71] = 25,
  [72] = 24,
  [73] = 23,
  [74] = 22,
  [75] = 16,
  [76] = 17,
  [77] = 20,
  [78] = 18,
  [79] = 30,
  [80] = 32,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 81,
  [85] = 85,
  [86] = 81,
  [87] = 33,
  [88] = 88,
  [89] = 88,
  [90] = 82,
  [91] = 88,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 66,
  [96] = 96,
  [97] = 65,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 99,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 105,
  [109] = 106,
  [110] = 105,
  [111] = 111,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\t', 467,
        '\n', 333,
        '\r', 332,
        '!', 338,
        '"', 337,
        '(', 343,
        ')', 470,
        '*', 470,
        '+', 470,
        ',', 470,
        '-', 470,
        '/', 470,
        ':', 339,
        '<', 345,
        '=', 470,
        '>', 345,
        'A', 346,
        'B', 380,
        'C', 396,
        'D', 381,
        'E', 347,
        'G', 355,
        'I', 418,
        'K', 360,
        'L', 359,
        'M', 461,
        'N', 461,
        'O', 420,
        'P', 395,
        'R', 378,
        'S', 401,
        'T', 348,
        'U', 435,
        'X', 400,
        'Z', 380,
        '[', 470,
        '\\', 5,
        ']', 470,
        '^', 470,
        '_', 466,
        'a', 411,
        'b', 367,
        'c', 361,
        'd', 381,
        'e', 412,
        'f', 427,
        'g', 354,
        'h', 370,
        'i', 389,
        'k', 360,
        'l', 359,
        'm', 428,
        'n', 356,
        'o', 419,
        'p', 357,
        'r', 394,
        's', 388,
        't', 350,
        'u', 435,
        'x', 400,
        'z', 380,
        '{', 343,
        '|', 341,
        '}', 470,
        '~', 344,
        0x0b, 467,
        '\f', 467,
        ' ', 467,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(467);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\r', 335,
        '!', 328,
        ')', 480,
        ',', 485,
        ':', 3,
        ']', 481,
        '^', 488,
        '_', 487,
        '}', 482,
        '\t', 336,
        '\n', 336,
        0x0b, 336,
        '\f', 336,
        ' ', 336,
      );
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '}') ADVANCE(483);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(306);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead == '\r' ||
          lookahead == '?') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(471);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\t', 336,
        '\n', 333,
        '\r', 332,
        '!', 329,
        '"', 337,
        '(', 475,
        '*', 299,
        '+', 297,
        '-', 298,
        '/', 486,
        '<', 301,
        '=', 300,
        '>', 302,
        'A', 136,
        'B', 76,
        'C', 104,
        'D', 82,
        'E', 177,
        'G', 43,
        'I', 145,
        'K', 50,
        'L', 49,
        'M', 224,
        'N', 225,
        'O', 146,
        'P', 105,
        'R', 77,
        'S', 109,
        'T', 48,
        'U', 186,
        'X', 110,
        'Z', 91,
        '[', 476,
        '^', 488,
        '_', 487,
        'a', 127,
        'b', 61,
        'c', 52,
        'd', 85,
        'e', 128,
        'f', 163,
        'g', 58,
        'h', 63,
        'i', 95,
        'k', 59,
        'l', 60,
        'm', 164,
        'n', 44,
        'o', 154,
        'p', 45,
        'r', 103,
        's', 96,
        't', 53,
        'u', 188,
        'x', 111,
        'z', 92,
        '{', 477,
        '~', 4,
        0x0b, 336,
        '\f', 336,
        ' ', 336,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(232);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\r', 335,
        '!', 329,
        '"', 337,
        '(', 475,
        ')', 480,
        '*', 299,
        '+', 297,
        ',', 485,
        '-', 298,
        '/', 486,
        ':', 3,
        '<', 301,
        '=', 300,
        '>', 302,
        'A', 136,
        'B', 76,
        'C', 104,
        'D', 82,
        'E', 177,
        'G', 43,
        'I', 145,
        'K', 50,
        'L', 49,
        'M', 224,
        'N', 225,
        'O', 146,
        'P', 105,
        'R', 77,
        'S', 109,
        'T', 48,
        'U', 186,
        'X', 110,
        'Z', 91,
        '[', 476,
        ']', 481,
        '^', 488,
        '_', 487,
        'a', 127,
        'b', 61,
        'c', 52,
        'd', 85,
        'e', 128,
        'f', 163,
        'g', 58,
        'h', 63,
        'i', 95,
        'k', 59,
        'l', 60,
        'm', 164,
        'n', 44,
        'o', 154,
        'p', 45,
        'r', 103,
        's', 96,
        't', 53,
        'u', 188,
        'x', 111,
        'z', 92,
        '{', 477,
        '}', 482,
        '~', 4,
        '\t', 336,
        '\n', 336,
        0x0b, 336,
        '\f', 336,
        ' ', 336,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(232);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number_symbol);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(307);
      if (lookahead == 's') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'h') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 't') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead == 'k') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'h') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 't') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'q') ADVANCE(193);
      if (lookahead == 't') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 's') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 't') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 's') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(202);
      if (lookahead == 't') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_otherwise);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_else);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_Alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_Beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_Gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_Delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_Epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_Zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_Eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_Theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_Iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_Kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_Lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_Mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_Nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_Xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_Omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_Pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_Rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_Sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_Tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_Upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_Phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_Chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_Psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_Omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_infty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_hbar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ell);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_Re);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_Im);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_aleph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_nabla);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_partial);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_forall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_exists);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_emptyset);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_grad);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_del);
      if (lookahead == 't') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_times);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_approx);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_pm);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_mp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_sqrt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_bb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_cc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_tt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_fr);
      if (lookahead == 'a') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_sf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_bold);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_cal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_frak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_monospace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_mono);
      if (lookahead == 's') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_italic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_frac);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_root);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_stackrel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_choose);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_atop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_over);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_factorial);
      if (lookahead == '!') ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_factorial);
      if (lookahead == '!') ADVANCE(330);
      if (lookahead == '=') ADVANCE(305);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_double_factorial);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_multi_linebreak);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(331);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(336);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '!') ADVANCE(470);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ')') ADVANCE(470);
      if (lookahead == '}') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '=') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead == '>') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '=') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'A') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(437);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'E') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 't') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'T') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'h') ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '_') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'h') ADVANCE(380);
      if (lookahead == 't') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == 's') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(415);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'k') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'q') ADVANCE(446);
      if (lookahead == 't') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead == 't') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 's') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'k') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 's') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(387);
      if (lookahead == 't') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == 'x') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == 'v') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == 'r') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(450);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(453);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(438);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(462);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'w') ADVANCE(403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'x') ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '|') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(471);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(471);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(473);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(479);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LPAREN_COLON);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_COLON_RPAREN);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number_symbol] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_if] = ACTIONS(1),
    [sym_otherwise] = ACTIONS(1),
    [sym_else] = ACTIONS(1),
    [sym_alpha] = ACTIONS(1),
    [sym_beta] = ACTIONS(1),
    [sym_gamma] = ACTIONS(1),
    [sym_delta] = ACTIONS(1),
    [sym_epsilon] = ACTIONS(1),
    [sym_zeta] = ACTIONS(1),
    [sym_eta] = ACTIONS(1),
    [sym_theta] = ACTIONS(1),
    [sym_iota] = ACTIONS(1),
    [sym_kappa] = ACTIONS(1),
    [sym_lambda] = ACTIONS(1),
    [sym_mu] = ACTIONS(1),
    [sym_nu] = ACTIONS(1),
    [sym_xi] = ACTIONS(1),
    [sym_omicron] = ACTIONS(1),
    [sym_pi] = ACTIONS(1),
    [sym_rho] = ACTIONS(1),
    [sym_sigma] = ACTIONS(1),
    [sym_tau] = ACTIONS(1),
    [sym_upsilon] = ACTIONS(1),
    [sym_phi] = ACTIONS(1),
    [sym_chi] = ACTIONS(1),
    [sym_psi] = ACTIONS(1),
    [sym_omega] = ACTIONS(1),
    [sym_Alpha] = ACTIONS(1),
    [sym_Beta] = ACTIONS(1),
    [sym_Gamma] = ACTIONS(1),
    [sym_Delta] = ACTIONS(1),
    [sym_Epsilon] = ACTIONS(1),
    [sym_Zeta] = ACTIONS(1),
    [sym_Eta] = ACTIONS(1),
    [sym_Theta] = ACTIONS(1),
    [sym_Iota] = ACTIONS(1),
    [sym_Kappa] = ACTIONS(1),
    [sym_Lambda] = ACTIONS(1),
    [sym_Mu] = ACTIONS(1),
    [sym_Nu] = ACTIONS(1),
    [sym_Xi] = ACTIONS(1),
    [sym_Omicron] = ACTIONS(1),
    [sym_Pi] = ACTIONS(1),
    [sym_Rho] = ACTIONS(1),
    [sym_Sigma] = ACTIONS(1),
    [sym_Tau] = ACTIONS(1),
    [sym_Upsilon] = ACTIONS(1),
    [sym_Phi] = ACTIONS(1),
    [sym_Chi] = ACTIONS(1),
    [sym_Psi] = ACTIONS(1),
    [sym_Omega] = ACTIONS(1),
    [sym_infty] = ACTIONS(1),
    [sym_hbar] = ACTIONS(1),
    [sym_ell] = ACTIONS(1),
    [sym_Re] = ACTIONS(1),
    [sym_Im] = ACTIONS(1),
    [sym_aleph] = ACTIONS(1),
    [sym_nabla] = ACTIONS(1),
    [sym_partial] = ACTIONS(1),
    [sym_forall] = ACTIONS(1),
    [sym_exists] = ACTIONS(1),
    [sym_emptyset] = ACTIONS(1),
    [sym_grad] = ACTIONS(1),
    [sym_del] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_times] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_le] = ACTIONS(1),
    [sym_ge] = ACTIONS(1),
    [sym_ne] = ACTIONS(1),
    [sym_approx] = ACTIONS(1),
    [sym_pm] = ACTIONS(1),
    [sym_mp] = ACTIONS(1),
    [sym_tilde_gt] = ACTIONS(1),
    [sym_forall_symbol] = ACTIONS(1),
    [sym_exists_symbol] = ACTIONS(1),
    [sym_falsum] = ACTIONS(1),
    [sym_verum] = ACTIONS(1),
    [sym_turnstile] = ACTIONS(1),
    [sym_models] = ACTIONS(1),
    [sym_sqrt] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_bb] = ACTIONS(1),
    [sym_cc] = ACTIONS(1),
    [sym_tt] = ACTIONS(1),
    [sym_fr] = ACTIONS(1),
    [sym_sf] = ACTIONS(1),
    [sym_bold] = ACTIONS(1),
    [sym_cal] = ACTIONS(1),
    [sym_frak] = ACTIONS(1),
    [sym_monospace] = ACTIONS(1),
    [sym_mono] = ACTIONS(1),
    [sym_italic] = ACTIONS(1),
    [sym_frac] = ACTIONS(1),
    [sym_root] = ACTIONS(1),
    [sym_stackrel] = ACTIONS(1),
    [sym_choose] = ACTIONS(1),
    [sym_atop] = ACTIONS(1),
    [sym_over] = ACTIONS(1),
    [sym_factorial] = ACTIONS(1),
    [sym_double_factorial] = ACTIONS(1),
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
    [sym_source_file] = STATE(111),
    [sym__expression] = STATE(4),
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_binary_frac] = STATE(4),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(64),
    [sym_superscript] = STATE(64),
    [sym_subscript_superscript] = STATE(64),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
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
    [sym__expression] = STATE(95),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(95),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(95),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_COLON_RBRACE] = ACTIONS(35),
    [anon_sym_COLON_RPAREN] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(37),
  },
  [3] = {
    [sym__expression] = STATE(66),
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_binary_frac] = STATE(66),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(64),
    [sym_superscript] = STATE(64),
    [sym_subscript_superscript] = STATE(64),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym_multi_linebreak] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(41),
  },
  [4] = {
    [sym__expression] = STATE(5),
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_binary_frac] = STATE(5),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(64),
    [sym_superscript] = STATE(64),
    [sym_subscript_superscript] = STATE(64),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym_multi_linebreak] = ACTIONS(45),
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
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_binary_frac] = STATE(5),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(64),
    [sym_superscript] = STATE(64),
    [sym_subscript_superscript] = STATE(64),
    [sym_intermediate_expression] = STATE(3),
    [sym_concatenation] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_number_symbol] = ACTIONS(49),
    [sym_identifier] = ACTIONS(52),
    [sym_if] = ACTIONS(52),
    [sym_otherwise] = ACTIONS(52),
    [sym_else] = ACTIONS(52),
    [sym_alpha] = ACTIONS(52),
    [sym_beta] = ACTIONS(52),
    [sym_gamma] = ACTIONS(52),
    [sym_delta] = ACTIONS(52),
    [sym_epsilon] = ACTIONS(52),
    [sym_zeta] = ACTIONS(52),
    [sym_eta] = ACTIONS(52),
    [sym_theta] = ACTIONS(52),
    [sym_iota] = ACTIONS(52),
    [sym_kappa] = ACTIONS(52),
    [sym_lambda] = ACTIONS(52),
    [sym_mu] = ACTIONS(52),
    [sym_nu] = ACTIONS(52),
    [sym_xi] = ACTIONS(52),
    [sym_omicron] = ACTIONS(52),
    [sym_pi] = ACTIONS(52),
    [sym_rho] = ACTIONS(52),
    [sym_sigma] = ACTIONS(52),
    [sym_tau] = ACTIONS(52),
    [sym_upsilon] = ACTIONS(52),
    [sym_phi] = ACTIONS(52),
    [sym_chi] = ACTIONS(52),
    [sym_psi] = ACTIONS(52),
    [sym_omega] = ACTIONS(52),
    [sym_Alpha] = ACTIONS(52),
    [sym_Beta] = ACTIONS(52),
    [sym_Gamma] = ACTIONS(52),
    [sym_Delta] = ACTIONS(52),
    [sym_Epsilon] = ACTIONS(52),
    [sym_Zeta] = ACTIONS(52),
    [sym_Eta] = ACTIONS(52),
    [sym_Theta] = ACTIONS(52),
    [sym_Iota] = ACTIONS(52),
    [sym_Kappa] = ACTIONS(52),
    [sym_Lambda] = ACTIONS(52),
    [sym_Mu] = ACTIONS(52),
    [sym_Nu] = ACTIONS(52),
    [sym_Xi] = ACTIONS(52),
    [sym_Omicron] = ACTIONS(52),
    [sym_Pi] = ACTIONS(52),
    [sym_Rho] = ACTIONS(52),
    [sym_Sigma] = ACTIONS(52),
    [sym_Tau] = ACTIONS(52),
    [sym_Upsilon] = ACTIONS(52),
    [sym_Phi] = ACTIONS(52),
    [sym_Chi] = ACTIONS(52),
    [sym_Psi] = ACTIONS(52),
    [sym_Omega] = ACTIONS(52),
    [sym_infty] = ACTIONS(52),
    [sym_hbar] = ACTIONS(52),
    [sym_ell] = ACTIONS(52),
    [sym_Re] = ACTIONS(52),
    [sym_Im] = ACTIONS(52),
    [sym_aleph] = ACTIONS(52),
    [sym_nabla] = ACTIONS(52),
    [sym_partial] = ACTIONS(52),
    [sym_forall] = ACTIONS(52),
    [sym_exists] = ACTIONS(52),
    [sym_emptyset] = ACTIONS(52),
    [sym_grad] = ACTIONS(52),
    [sym_del] = ACTIONS(52),
    [sym_plus] = ACTIONS(49),
    [sym_minus] = ACTIONS(49),
    [sym_times] = ACTIONS(49),
    [sym_equals] = ACTIONS(49),
    [sym_lt] = ACTIONS(52),
    [sym_gt] = ACTIONS(52),
    [sym_le] = ACTIONS(49),
    [sym_ge] = ACTIONS(49),
    [sym_ne] = ACTIONS(49),
    [sym_approx] = ACTIONS(49),
    [sym_pm] = ACTIONS(52),
    [sym_mp] = ACTIONS(52),
    [sym_sqrt] = ACTIONS(55),
    [sym_text] = ACTIONS(55),
    [sym_bb] = ACTIONS(55),
    [sym_cc] = ACTIONS(55),
    [sym_tt] = ACTIONS(55),
    [sym_fr] = ACTIONS(55),
    [sym_sf] = ACTIONS(55),
    [sym_bold] = ACTIONS(55),
    [sym_cal] = ACTIONS(55),
    [sym_frak] = ACTIONS(55),
    [sym_monospace] = ACTIONS(55),
    [sym_mono] = ACTIONS(55),
    [sym_italic] = ACTIONS(55),
    [sym_frac] = ACTIONS(58),
    [sym_root] = ACTIONS(58),
    [sym_stackrel] = ACTIONS(58),
    [sym_choose] = ACTIONS(58),
    [sym_atop] = ACTIONS(58),
    [sym_over] = ACTIONS(58),
    [sym_multi_linebreak] = ACTIONS(61),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LBRACE_COLON] = ACTIONS(70),
    [anon_sym_LPAREN_COLON] = ACTIONS(70),
  },
  [6] = {
    [sym__expression] = STATE(102),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(10),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_row_expr] = STATE(84),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(102),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(102),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [7] = {
    [sym__expression] = STATE(82),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_row_expr] = STATE(86),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(82),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(82),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [8] = {
    [sym__expression] = STATE(99),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(10),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_row_expr] = STATE(86),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(99),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(99),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [9] = {
    [sym__expression] = STATE(101),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(10),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_row_expr] = STATE(81),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(101),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(101),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [10] = {
    [sym__expression] = STATE(90),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_row_expr] = STATE(86),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(90),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(90),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [11] = {
    [sym__expression] = STATE(85),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(85),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(85),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [12] = {
    [sym__expression] = STATE(96),
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_binary_frac] = STATE(96),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(18),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(96),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [13] = {
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(51),
    [sym_subscript] = STATE(64),
    [sym_superscript] = STATE(64),
    [sym_subscript_superscript] = STATE(64),
    [sym_intermediate_expression] = STATE(65),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [14] = {
    [sym_literal_string] = STATE(76),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(76),
    [sym_matrix_expr] = STATE(76),
    [sym_unary_expr] = STATE(76),
    [sym_binary_expr] = STATE(76),
    [sym_factorial_expr] = STATE(76),
    [sym_simple_expression] = STATE(78),
    [sym_subscript] = STATE(53),
    [sym_superscript] = STATE(53),
    [sym_subscript_superscript] = STATE(53),
    [sym_intermediate_expression] = STATE(97),
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_if] = ACTIONS(75),
    [sym_otherwise] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [sym_alpha] = ACTIONS(75),
    [sym_beta] = ACTIONS(75),
    [sym_gamma] = ACTIONS(75),
    [sym_delta] = ACTIONS(75),
    [sym_epsilon] = ACTIONS(75),
    [sym_zeta] = ACTIONS(75),
    [sym_eta] = ACTIONS(75),
    [sym_theta] = ACTIONS(75),
    [sym_iota] = ACTIONS(75),
    [sym_kappa] = ACTIONS(75),
    [sym_lambda] = ACTIONS(75),
    [sym_mu] = ACTIONS(75),
    [sym_nu] = ACTIONS(75),
    [sym_xi] = ACTIONS(75),
    [sym_omicron] = ACTIONS(75),
    [sym_pi] = ACTIONS(75),
    [sym_rho] = ACTIONS(75),
    [sym_sigma] = ACTIONS(75),
    [sym_tau] = ACTIONS(75),
    [sym_upsilon] = ACTIONS(75),
    [sym_phi] = ACTIONS(75),
    [sym_chi] = ACTIONS(75),
    [sym_psi] = ACTIONS(75),
    [sym_omega] = ACTIONS(75),
    [sym_Alpha] = ACTIONS(75),
    [sym_Beta] = ACTIONS(75),
    [sym_Gamma] = ACTIONS(75),
    [sym_Delta] = ACTIONS(75),
    [sym_Epsilon] = ACTIONS(75),
    [sym_Zeta] = ACTIONS(75),
    [sym_Eta] = ACTIONS(75),
    [sym_Theta] = ACTIONS(75),
    [sym_Iota] = ACTIONS(75),
    [sym_Kappa] = ACTIONS(75),
    [sym_Lambda] = ACTIONS(75),
    [sym_Mu] = ACTIONS(75),
    [sym_Nu] = ACTIONS(75),
    [sym_Xi] = ACTIONS(75),
    [sym_Omicron] = ACTIONS(75),
    [sym_Pi] = ACTIONS(75),
    [sym_Rho] = ACTIONS(75),
    [sym_Sigma] = ACTIONS(75),
    [sym_Tau] = ACTIONS(75),
    [sym_Upsilon] = ACTIONS(75),
    [sym_Phi] = ACTIONS(75),
    [sym_Chi] = ACTIONS(75),
    [sym_Psi] = ACTIONS(75),
    [sym_Omega] = ACTIONS(75),
    [sym_infty] = ACTIONS(75),
    [sym_hbar] = ACTIONS(75),
    [sym_ell] = ACTIONS(75),
    [sym_Re] = ACTIONS(75),
    [sym_Im] = ACTIONS(75),
    [sym_aleph] = ACTIONS(75),
    [sym_nabla] = ACTIONS(75),
    [sym_partial] = ACTIONS(75),
    [sym_forall] = ACTIONS(75),
    [sym_exists] = ACTIONS(75),
    [sym_emptyset] = ACTIONS(75),
    [sym_grad] = ACTIONS(75),
    [sym_del] = ACTIONS(75),
    [sym_plus] = ACTIONS(73),
    [sym_minus] = ACTIONS(73),
    [sym_times] = ACTIONS(73),
    [sym_equals] = ACTIONS(73),
    [sym_lt] = ACTIONS(75),
    [sym_gt] = ACTIONS(75),
    [sym_le] = ACTIONS(73),
    [sym_ge] = ACTIONS(73),
    [sym_ne] = ACTIONS(73),
    [sym_approx] = ACTIONS(73),
    [sym_pm] = ACTIONS(75),
    [sym_mp] = ACTIONS(75),
    [sym_sqrt] = ACTIONS(77),
    [sym_text] = ACTIONS(77),
    [sym_bb] = ACTIONS(77),
    [sym_cc] = ACTIONS(77),
    [sym_tt] = ACTIONS(77),
    [sym_fr] = ACTIONS(77),
    [sym_sf] = ACTIONS(77),
    [sym_bold] = ACTIONS(77),
    [sym_cal] = ACTIONS(77),
    [sym_frak] = ACTIONS(77),
    [sym_monospace] = ACTIONS(77),
    [sym_mono] = ACTIONS(77),
    [sym_italic] = ACTIONS(77),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [15] = {
    [sym_number_symbol] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
    [sym_if] = ACTIONS(85),
    [sym_otherwise] = ACTIONS(85),
    [sym_else] = ACTIONS(85),
    [sym_alpha] = ACTIONS(85),
    [sym_beta] = ACTIONS(85),
    [sym_gamma] = ACTIONS(85),
    [sym_delta] = ACTIONS(85),
    [sym_epsilon] = ACTIONS(85),
    [sym_zeta] = ACTIONS(85),
    [sym_eta] = ACTIONS(85),
    [sym_theta] = ACTIONS(85),
    [sym_iota] = ACTIONS(85),
    [sym_kappa] = ACTIONS(85),
    [sym_lambda] = ACTIONS(85),
    [sym_mu] = ACTIONS(85),
    [sym_nu] = ACTIONS(85),
    [sym_xi] = ACTIONS(85),
    [sym_omicron] = ACTIONS(85),
    [sym_pi] = ACTIONS(85),
    [sym_rho] = ACTIONS(85),
    [sym_sigma] = ACTIONS(85),
    [sym_tau] = ACTIONS(85),
    [sym_upsilon] = ACTIONS(85),
    [sym_phi] = ACTIONS(85),
    [sym_chi] = ACTIONS(85),
    [sym_psi] = ACTIONS(85),
    [sym_omega] = ACTIONS(85),
    [sym_Alpha] = ACTIONS(85),
    [sym_Beta] = ACTIONS(85),
    [sym_Gamma] = ACTIONS(85),
    [sym_Delta] = ACTIONS(85),
    [sym_Epsilon] = ACTIONS(85),
    [sym_Zeta] = ACTIONS(85),
    [sym_Eta] = ACTIONS(85),
    [sym_Theta] = ACTIONS(85),
    [sym_Iota] = ACTIONS(85),
    [sym_Kappa] = ACTIONS(85),
    [sym_Lambda] = ACTIONS(85),
    [sym_Mu] = ACTIONS(85),
    [sym_Nu] = ACTIONS(85),
    [sym_Xi] = ACTIONS(85),
    [sym_Omicron] = ACTIONS(85),
    [sym_Pi] = ACTIONS(85),
    [sym_Rho] = ACTIONS(85),
    [sym_Sigma] = ACTIONS(85),
    [sym_Tau] = ACTIONS(85),
    [sym_Upsilon] = ACTIONS(85),
    [sym_Phi] = ACTIONS(85),
    [sym_Chi] = ACTIONS(85),
    [sym_Psi] = ACTIONS(85),
    [sym_Omega] = ACTIONS(85),
    [sym_infty] = ACTIONS(85),
    [sym_hbar] = ACTIONS(85),
    [sym_ell] = ACTIONS(85),
    [sym_Re] = ACTIONS(85),
    [sym_Im] = ACTIONS(85),
    [sym_aleph] = ACTIONS(85),
    [sym_nabla] = ACTIONS(85),
    [sym_partial] = ACTIONS(85),
    [sym_forall] = ACTIONS(85),
    [sym_exists] = ACTIONS(85),
    [sym_emptyset] = ACTIONS(85),
    [sym_grad] = ACTIONS(85),
    [sym_del] = ACTIONS(85),
    [sym_plus] = ACTIONS(83),
    [sym_minus] = ACTIONS(83),
    [sym_times] = ACTIONS(83),
    [sym_equals] = ACTIONS(83),
    [sym_lt] = ACTIONS(85),
    [sym_gt] = ACTIONS(85),
    [sym_le] = ACTIONS(83),
    [sym_ge] = ACTIONS(83),
    [sym_ne] = ACTIONS(83),
    [sym_approx] = ACTIONS(83),
    [sym_pm] = ACTIONS(85),
    [sym_mp] = ACTIONS(85),
    [sym_sqrt] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
    [sym_bb] = ACTIONS(85),
    [sym_cc] = ACTIONS(85),
    [sym_tt] = ACTIONS(85),
    [sym_fr] = ACTIONS(85),
    [sym_sf] = ACTIONS(85),
    [sym_bold] = ACTIONS(85),
    [sym_cal] = ACTIONS(85),
    [sym_frak] = ACTIONS(85),
    [sym_monospace] = ACTIONS(85),
    [sym_mono] = ACTIONS(85),
    [sym_italic] = ACTIONS(85),
    [sym_frac] = ACTIONS(85),
    [sym_root] = ACTIONS(85),
    [sym_stackrel] = ACTIONS(85),
    [sym_choose] = ACTIONS(85),
    [sym_atop] = ACTIONS(85),
    [sym_over] = ACTIONS(85),
    [sym_factorial] = ACTIONS(85),
    [sym_double_factorial] = ACTIONS(83),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LBRACE_COLON] = ACTIONS(83),
    [anon_sym_LPAREN_COLON] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_COLON_RBRACE] = ACTIONS(83),
    [anon_sym_COLON_RPAREN] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
  },
  [16] = {
    [sym_number_symbol] = ACTIONS(87),
    [sym_identifier] = ACTIONS(89),
    [sym_if] = ACTIONS(89),
    [sym_otherwise] = ACTIONS(89),
    [sym_else] = ACTIONS(89),
    [sym_alpha] = ACTIONS(89),
    [sym_beta] = ACTIONS(89),
    [sym_gamma] = ACTIONS(89),
    [sym_delta] = ACTIONS(89),
    [sym_epsilon] = ACTIONS(89),
    [sym_zeta] = ACTIONS(89),
    [sym_eta] = ACTIONS(89),
    [sym_theta] = ACTIONS(89),
    [sym_iota] = ACTIONS(89),
    [sym_kappa] = ACTIONS(89),
    [sym_lambda] = ACTIONS(89),
    [sym_mu] = ACTIONS(89),
    [sym_nu] = ACTIONS(89),
    [sym_xi] = ACTIONS(89),
    [sym_omicron] = ACTIONS(89),
    [sym_pi] = ACTIONS(89),
    [sym_rho] = ACTIONS(89),
    [sym_sigma] = ACTIONS(89),
    [sym_tau] = ACTIONS(89),
    [sym_upsilon] = ACTIONS(89),
    [sym_phi] = ACTIONS(89),
    [sym_chi] = ACTIONS(89),
    [sym_psi] = ACTIONS(89),
    [sym_omega] = ACTIONS(89),
    [sym_Alpha] = ACTIONS(89),
    [sym_Beta] = ACTIONS(89),
    [sym_Gamma] = ACTIONS(89),
    [sym_Delta] = ACTIONS(89),
    [sym_Epsilon] = ACTIONS(89),
    [sym_Zeta] = ACTIONS(89),
    [sym_Eta] = ACTIONS(89),
    [sym_Theta] = ACTIONS(89),
    [sym_Iota] = ACTIONS(89),
    [sym_Kappa] = ACTIONS(89),
    [sym_Lambda] = ACTIONS(89),
    [sym_Mu] = ACTIONS(89),
    [sym_Nu] = ACTIONS(89),
    [sym_Xi] = ACTIONS(89),
    [sym_Omicron] = ACTIONS(89),
    [sym_Pi] = ACTIONS(89),
    [sym_Rho] = ACTIONS(89),
    [sym_Sigma] = ACTIONS(89),
    [sym_Tau] = ACTIONS(89),
    [sym_Upsilon] = ACTIONS(89),
    [sym_Phi] = ACTIONS(89),
    [sym_Chi] = ACTIONS(89),
    [sym_Psi] = ACTIONS(89),
    [sym_Omega] = ACTIONS(89),
    [sym_infty] = ACTIONS(89),
    [sym_hbar] = ACTIONS(89),
    [sym_ell] = ACTIONS(89),
    [sym_Re] = ACTIONS(89),
    [sym_Im] = ACTIONS(89),
    [sym_aleph] = ACTIONS(89),
    [sym_nabla] = ACTIONS(89),
    [sym_partial] = ACTIONS(89),
    [sym_forall] = ACTIONS(89),
    [sym_exists] = ACTIONS(89),
    [sym_emptyset] = ACTIONS(89),
    [sym_grad] = ACTIONS(89),
    [sym_del] = ACTIONS(89),
    [sym_plus] = ACTIONS(87),
    [sym_minus] = ACTIONS(87),
    [sym_times] = ACTIONS(87),
    [sym_equals] = ACTIONS(87),
    [sym_lt] = ACTIONS(89),
    [sym_gt] = ACTIONS(89),
    [sym_le] = ACTIONS(87),
    [sym_ge] = ACTIONS(87),
    [sym_ne] = ACTIONS(87),
    [sym_approx] = ACTIONS(87),
    [sym_pm] = ACTIONS(89),
    [sym_mp] = ACTIONS(89),
    [sym_sqrt] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
    [sym_bb] = ACTIONS(89),
    [sym_cc] = ACTIONS(89),
    [sym_tt] = ACTIONS(89),
    [sym_fr] = ACTIONS(89),
    [sym_sf] = ACTIONS(89),
    [sym_bold] = ACTIONS(89),
    [sym_cal] = ACTIONS(89),
    [sym_frak] = ACTIONS(89),
    [sym_monospace] = ACTIONS(89),
    [sym_mono] = ACTIONS(89),
    [sym_italic] = ACTIONS(89),
    [sym_frac] = ACTIONS(89),
    [sym_root] = ACTIONS(89),
    [sym_stackrel] = ACTIONS(89),
    [sym_choose] = ACTIONS(89),
    [sym_atop] = ACTIONS(89),
    [sym_over] = ACTIONS(89),
    [sym_factorial] = ACTIONS(89),
    [sym_double_factorial] = ACTIONS(87),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACE_COLON] = ACTIONS(87),
    [anon_sym_LPAREN_COLON] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_COLON_RBRACE] = ACTIONS(87),
    [anon_sym_COLON_RPAREN] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
  },
  [17] = {
    [sym_number_symbol] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_if] = ACTIONS(93),
    [sym_otherwise] = ACTIONS(93),
    [sym_else] = ACTIONS(93),
    [sym_alpha] = ACTIONS(93),
    [sym_beta] = ACTIONS(93),
    [sym_gamma] = ACTIONS(93),
    [sym_delta] = ACTIONS(93),
    [sym_epsilon] = ACTIONS(93),
    [sym_zeta] = ACTIONS(93),
    [sym_eta] = ACTIONS(93),
    [sym_theta] = ACTIONS(93),
    [sym_iota] = ACTIONS(93),
    [sym_kappa] = ACTIONS(93),
    [sym_lambda] = ACTIONS(93),
    [sym_mu] = ACTIONS(93),
    [sym_nu] = ACTIONS(93),
    [sym_xi] = ACTIONS(93),
    [sym_omicron] = ACTIONS(93),
    [sym_pi] = ACTIONS(93),
    [sym_rho] = ACTIONS(93),
    [sym_sigma] = ACTIONS(93),
    [sym_tau] = ACTIONS(93),
    [sym_upsilon] = ACTIONS(93),
    [sym_phi] = ACTIONS(93),
    [sym_chi] = ACTIONS(93),
    [sym_psi] = ACTIONS(93),
    [sym_omega] = ACTIONS(93),
    [sym_Alpha] = ACTIONS(93),
    [sym_Beta] = ACTIONS(93),
    [sym_Gamma] = ACTIONS(93),
    [sym_Delta] = ACTIONS(93),
    [sym_Epsilon] = ACTIONS(93),
    [sym_Zeta] = ACTIONS(93),
    [sym_Eta] = ACTIONS(93),
    [sym_Theta] = ACTIONS(93),
    [sym_Iota] = ACTIONS(93),
    [sym_Kappa] = ACTIONS(93),
    [sym_Lambda] = ACTIONS(93),
    [sym_Mu] = ACTIONS(93),
    [sym_Nu] = ACTIONS(93),
    [sym_Xi] = ACTIONS(93),
    [sym_Omicron] = ACTIONS(93),
    [sym_Pi] = ACTIONS(93),
    [sym_Rho] = ACTIONS(93),
    [sym_Sigma] = ACTIONS(93),
    [sym_Tau] = ACTIONS(93),
    [sym_Upsilon] = ACTIONS(93),
    [sym_Phi] = ACTIONS(93),
    [sym_Chi] = ACTIONS(93),
    [sym_Psi] = ACTIONS(93),
    [sym_Omega] = ACTIONS(93),
    [sym_infty] = ACTIONS(93),
    [sym_hbar] = ACTIONS(93),
    [sym_ell] = ACTIONS(93),
    [sym_Re] = ACTIONS(93),
    [sym_Im] = ACTIONS(93),
    [sym_aleph] = ACTIONS(93),
    [sym_nabla] = ACTIONS(93),
    [sym_partial] = ACTIONS(93),
    [sym_forall] = ACTIONS(93),
    [sym_exists] = ACTIONS(93),
    [sym_emptyset] = ACTIONS(93),
    [sym_grad] = ACTIONS(93),
    [sym_del] = ACTIONS(93),
    [sym_plus] = ACTIONS(91),
    [sym_minus] = ACTIONS(91),
    [sym_times] = ACTIONS(91),
    [sym_equals] = ACTIONS(91),
    [sym_lt] = ACTIONS(93),
    [sym_gt] = ACTIONS(93),
    [sym_le] = ACTIONS(91),
    [sym_ge] = ACTIONS(91),
    [sym_ne] = ACTIONS(91),
    [sym_approx] = ACTIONS(91),
    [sym_pm] = ACTIONS(93),
    [sym_mp] = ACTIONS(93),
    [sym_sqrt] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
    [sym_bb] = ACTIONS(93),
    [sym_cc] = ACTIONS(93),
    [sym_tt] = ACTIONS(93),
    [sym_fr] = ACTIONS(93),
    [sym_sf] = ACTIONS(93),
    [sym_bold] = ACTIONS(93),
    [sym_cal] = ACTIONS(93),
    [sym_frak] = ACTIONS(93),
    [sym_monospace] = ACTIONS(93),
    [sym_mono] = ACTIONS(93),
    [sym_italic] = ACTIONS(93),
    [sym_frac] = ACTIONS(93),
    [sym_root] = ACTIONS(93),
    [sym_stackrel] = ACTIONS(93),
    [sym_choose] = ACTIONS(93),
    [sym_atop] = ACTIONS(93),
    [sym_over] = ACTIONS(93),
    [sym_factorial] = ACTIONS(93),
    [sym_double_factorial] = ACTIONS(91),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE_COLON] = ACTIONS(91),
    [anon_sym_LPAREN_COLON] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_COLON_RBRACE] = ACTIONS(91),
    [anon_sym_COLON_RPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
  },
  [18] = {
    [sym_number_symbol] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [sym_if] = ACTIONS(97),
    [sym_otherwise] = ACTIONS(97),
    [sym_else] = ACTIONS(97),
    [sym_alpha] = ACTIONS(97),
    [sym_beta] = ACTIONS(97),
    [sym_gamma] = ACTIONS(97),
    [sym_delta] = ACTIONS(97),
    [sym_epsilon] = ACTIONS(97),
    [sym_zeta] = ACTIONS(97),
    [sym_eta] = ACTIONS(97),
    [sym_theta] = ACTIONS(97),
    [sym_iota] = ACTIONS(97),
    [sym_kappa] = ACTIONS(97),
    [sym_lambda] = ACTIONS(97),
    [sym_mu] = ACTIONS(97),
    [sym_nu] = ACTIONS(97),
    [sym_xi] = ACTIONS(97),
    [sym_omicron] = ACTIONS(97),
    [sym_pi] = ACTIONS(97),
    [sym_rho] = ACTIONS(97),
    [sym_sigma] = ACTIONS(97),
    [sym_tau] = ACTIONS(97),
    [sym_upsilon] = ACTIONS(97),
    [sym_phi] = ACTIONS(97),
    [sym_chi] = ACTIONS(97),
    [sym_psi] = ACTIONS(97),
    [sym_omega] = ACTIONS(97),
    [sym_Alpha] = ACTIONS(97),
    [sym_Beta] = ACTIONS(97),
    [sym_Gamma] = ACTIONS(97),
    [sym_Delta] = ACTIONS(97),
    [sym_Epsilon] = ACTIONS(97),
    [sym_Zeta] = ACTIONS(97),
    [sym_Eta] = ACTIONS(97),
    [sym_Theta] = ACTIONS(97),
    [sym_Iota] = ACTIONS(97),
    [sym_Kappa] = ACTIONS(97),
    [sym_Lambda] = ACTIONS(97),
    [sym_Mu] = ACTIONS(97),
    [sym_Nu] = ACTIONS(97),
    [sym_Xi] = ACTIONS(97),
    [sym_Omicron] = ACTIONS(97),
    [sym_Pi] = ACTIONS(97),
    [sym_Rho] = ACTIONS(97),
    [sym_Sigma] = ACTIONS(97),
    [sym_Tau] = ACTIONS(97),
    [sym_Upsilon] = ACTIONS(97),
    [sym_Phi] = ACTIONS(97),
    [sym_Chi] = ACTIONS(97),
    [sym_Psi] = ACTIONS(97),
    [sym_Omega] = ACTIONS(97),
    [sym_infty] = ACTIONS(97),
    [sym_hbar] = ACTIONS(97),
    [sym_ell] = ACTIONS(97),
    [sym_Re] = ACTIONS(97),
    [sym_Im] = ACTIONS(97),
    [sym_aleph] = ACTIONS(97),
    [sym_nabla] = ACTIONS(97),
    [sym_partial] = ACTIONS(97),
    [sym_forall] = ACTIONS(97),
    [sym_exists] = ACTIONS(97),
    [sym_emptyset] = ACTIONS(97),
    [sym_grad] = ACTIONS(97),
    [sym_del] = ACTIONS(97),
    [sym_plus] = ACTIONS(95),
    [sym_minus] = ACTIONS(95),
    [sym_times] = ACTIONS(95),
    [sym_equals] = ACTIONS(95),
    [sym_lt] = ACTIONS(97),
    [sym_gt] = ACTIONS(97),
    [sym_le] = ACTIONS(95),
    [sym_ge] = ACTIONS(95),
    [sym_ne] = ACTIONS(95),
    [sym_approx] = ACTIONS(95),
    [sym_pm] = ACTIONS(97),
    [sym_mp] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
    [sym_bb] = ACTIONS(97),
    [sym_cc] = ACTIONS(97),
    [sym_tt] = ACTIONS(97),
    [sym_fr] = ACTIONS(97),
    [sym_sf] = ACTIONS(97),
    [sym_bold] = ACTIONS(97),
    [sym_cal] = ACTIONS(97),
    [sym_frak] = ACTIONS(97),
    [sym_monospace] = ACTIONS(97),
    [sym_mono] = ACTIONS(97),
    [sym_italic] = ACTIONS(97),
    [sym_frac] = ACTIONS(97),
    [sym_root] = ACTIONS(97),
    [sym_stackrel] = ACTIONS(97),
    [sym_choose] = ACTIONS(97),
    [sym_atop] = ACTIONS(97),
    [sym_over] = ACTIONS(97),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_LPAREN_COLON] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_COLON_RBRACE] = ACTIONS(95),
    [anon_sym_COLON_RPAREN] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(105),
  },
  [19] = {
    [sym_number_symbol] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_if] = ACTIONS(109),
    [sym_otherwise] = ACTIONS(109),
    [sym_else] = ACTIONS(109),
    [sym_alpha] = ACTIONS(109),
    [sym_beta] = ACTIONS(109),
    [sym_gamma] = ACTIONS(109),
    [sym_delta] = ACTIONS(109),
    [sym_epsilon] = ACTIONS(109),
    [sym_zeta] = ACTIONS(109),
    [sym_eta] = ACTIONS(109),
    [sym_theta] = ACTIONS(109),
    [sym_iota] = ACTIONS(109),
    [sym_kappa] = ACTIONS(109),
    [sym_lambda] = ACTIONS(109),
    [sym_mu] = ACTIONS(109),
    [sym_nu] = ACTIONS(109),
    [sym_xi] = ACTIONS(109),
    [sym_omicron] = ACTIONS(109),
    [sym_pi] = ACTIONS(109),
    [sym_rho] = ACTIONS(109),
    [sym_sigma] = ACTIONS(109),
    [sym_tau] = ACTIONS(109),
    [sym_upsilon] = ACTIONS(109),
    [sym_phi] = ACTIONS(109),
    [sym_chi] = ACTIONS(109),
    [sym_psi] = ACTIONS(109),
    [sym_omega] = ACTIONS(109),
    [sym_Alpha] = ACTIONS(109),
    [sym_Beta] = ACTIONS(109),
    [sym_Gamma] = ACTIONS(109),
    [sym_Delta] = ACTIONS(109),
    [sym_Epsilon] = ACTIONS(109),
    [sym_Zeta] = ACTIONS(109),
    [sym_Eta] = ACTIONS(109),
    [sym_Theta] = ACTIONS(109),
    [sym_Iota] = ACTIONS(109),
    [sym_Kappa] = ACTIONS(109),
    [sym_Lambda] = ACTIONS(109),
    [sym_Mu] = ACTIONS(109),
    [sym_Nu] = ACTIONS(109),
    [sym_Xi] = ACTIONS(109),
    [sym_Omicron] = ACTIONS(109),
    [sym_Pi] = ACTIONS(109),
    [sym_Rho] = ACTIONS(109),
    [sym_Sigma] = ACTIONS(109),
    [sym_Tau] = ACTIONS(109),
    [sym_Upsilon] = ACTIONS(109),
    [sym_Phi] = ACTIONS(109),
    [sym_Chi] = ACTIONS(109),
    [sym_Psi] = ACTIONS(109),
    [sym_Omega] = ACTIONS(109),
    [sym_infty] = ACTIONS(109),
    [sym_hbar] = ACTIONS(109),
    [sym_ell] = ACTIONS(109),
    [sym_Re] = ACTIONS(109),
    [sym_Im] = ACTIONS(109),
    [sym_aleph] = ACTIONS(109),
    [sym_nabla] = ACTIONS(109),
    [sym_partial] = ACTIONS(109),
    [sym_forall] = ACTIONS(109),
    [sym_exists] = ACTIONS(109),
    [sym_emptyset] = ACTIONS(109),
    [sym_grad] = ACTIONS(109),
    [sym_del] = ACTIONS(109),
    [sym_plus] = ACTIONS(107),
    [sym_minus] = ACTIONS(107),
    [sym_times] = ACTIONS(107),
    [sym_equals] = ACTIONS(107),
    [sym_lt] = ACTIONS(109),
    [sym_gt] = ACTIONS(109),
    [sym_le] = ACTIONS(107),
    [sym_ge] = ACTIONS(107),
    [sym_ne] = ACTIONS(107),
    [sym_approx] = ACTIONS(107),
    [sym_pm] = ACTIONS(109),
    [sym_mp] = ACTIONS(109),
    [sym_sqrt] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
    [sym_bb] = ACTIONS(109),
    [sym_cc] = ACTIONS(109),
    [sym_tt] = ACTIONS(109),
    [sym_fr] = ACTIONS(109),
    [sym_sf] = ACTIONS(109),
    [sym_bold] = ACTIONS(109),
    [sym_cal] = ACTIONS(109),
    [sym_frak] = ACTIONS(109),
    [sym_monospace] = ACTIONS(109),
    [sym_mono] = ACTIONS(109),
    [sym_italic] = ACTIONS(109),
    [sym_frac] = ACTIONS(109),
    [sym_root] = ACTIONS(109),
    [sym_stackrel] = ACTIONS(109),
    [sym_choose] = ACTIONS(109),
    [sym_atop] = ACTIONS(109),
    [sym_over] = ACTIONS(109),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACE_COLON] = ACTIONS(107),
    [anon_sym_LPAREN_COLON] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_COLON_RBRACE] = ACTIONS(107),
    [anon_sym_COLON_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
  },
  [20] = {
    [sym_number_symbol] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_if] = ACTIONS(113),
    [sym_otherwise] = ACTIONS(113),
    [sym_else] = ACTIONS(113),
    [sym_alpha] = ACTIONS(113),
    [sym_beta] = ACTIONS(113),
    [sym_gamma] = ACTIONS(113),
    [sym_delta] = ACTIONS(113),
    [sym_epsilon] = ACTIONS(113),
    [sym_zeta] = ACTIONS(113),
    [sym_eta] = ACTIONS(113),
    [sym_theta] = ACTIONS(113),
    [sym_iota] = ACTIONS(113),
    [sym_kappa] = ACTIONS(113),
    [sym_lambda] = ACTIONS(113),
    [sym_mu] = ACTIONS(113),
    [sym_nu] = ACTIONS(113),
    [sym_xi] = ACTIONS(113),
    [sym_omicron] = ACTIONS(113),
    [sym_pi] = ACTIONS(113),
    [sym_rho] = ACTIONS(113),
    [sym_sigma] = ACTIONS(113),
    [sym_tau] = ACTIONS(113),
    [sym_upsilon] = ACTIONS(113),
    [sym_phi] = ACTIONS(113),
    [sym_chi] = ACTIONS(113),
    [sym_psi] = ACTIONS(113),
    [sym_omega] = ACTIONS(113),
    [sym_Alpha] = ACTIONS(113),
    [sym_Beta] = ACTIONS(113),
    [sym_Gamma] = ACTIONS(113),
    [sym_Delta] = ACTIONS(113),
    [sym_Epsilon] = ACTIONS(113),
    [sym_Zeta] = ACTIONS(113),
    [sym_Eta] = ACTIONS(113),
    [sym_Theta] = ACTIONS(113),
    [sym_Iota] = ACTIONS(113),
    [sym_Kappa] = ACTIONS(113),
    [sym_Lambda] = ACTIONS(113),
    [sym_Mu] = ACTIONS(113),
    [sym_Nu] = ACTIONS(113),
    [sym_Xi] = ACTIONS(113),
    [sym_Omicron] = ACTIONS(113),
    [sym_Pi] = ACTIONS(113),
    [sym_Rho] = ACTIONS(113),
    [sym_Sigma] = ACTIONS(113),
    [sym_Tau] = ACTIONS(113),
    [sym_Upsilon] = ACTIONS(113),
    [sym_Phi] = ACTIONS(113),
    [sym_Chi] = ACTIONS(113),
    [sym_Psi] = ACTIONS(113),
    [sym_Omega] = ACTIONS(113),
    [sym_infty] = ACTIONS(113),
    [sym_hbar] = ACTIONS(113),
    [sym_ell] = ACTIONS(113),
    [sym_Re] = ACTIONS(113),
    [sym_Im] = ACTIONS(113),
    [sym_aleph] = ACTIONS(113),
    [sym_nabla] = ACTIONS(113),
    [sym_partial] = ACTIONS(113),
    [sym_forall] = ACTIONS(113),
    [sym_exists] = ACTIONS(113),
    [sym_emptyset] = ACTIONS(113),
    [sym_grad] = ACTIONS(113),
    [sym_del] = ACTIONS(113),
    [sym_plus] = ACTIONS(111),
    [sym_minus] = ACTIONS(111),
    [sym_times] = ACTIONS(111),
    [sym_equals] = ACTIONS(111),
    [sym_lt] = ACTIONS(113),
    [sym_gt] = ACTIONS(113),
    [sym_le] = ACTIONS(111),
    [sym_ge] = ACTIONS(111),
    [sym_ne] = ACTIONS(111),
    [sym_approx] = ACTIONS(111),
    [sym_pm] = ACTIONS(113),
    [sym_mp] = ACTIONS(113),
    [sym_sqrt] = ACTIONS(113),
    [sym_text] = ACTIONS(113),
    [sym_bb] = ACTIONS(113),
    [sym_cc] = ACTIONS(113),
    [sym_tt] = ACTIONS(113),
    [sym_fr] = ACTIONS(113),
    [sym_sf] = ACTIONS(113),
    [sym_bold] = ACTIONS(113),
    [sym_cal] = ACTIONS(113),
    [sym_frak] = ACTIONS(113),
    [sym_monospace] = ACTIONS(113),
    [sym_mono] = ACTIONS(113),
    [sym_italic] = ACTIONS(113),
    [sym_frac] = ACTIONS(113),
    [sym_root] = ACTIONS(113),
    [sym_stackrel] = ACTIONS(113),
    [sym_choose] = ACTIONS(113),
    [sym_atop] = ACTIONS(113),
    [sym_over] = ACTIONS(113),
    [sym_factorial] = ACTIONS(113),
    [sym_double_factorial] = ACTIONS(111),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACE_COLON] = ACTIONS(111),
    [anon_sym_LPAREN_COLON] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_COLON_RBRACE] = ACTIONS(111),
    [anon_sym_COLON_RPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(111),
  },
  [21] = {
    [sym_number_symbol] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_if] = ACTIONS(117),
    [sym_otherwise] = ACTIONS(117),
    [sym_else] = ACTIONS(117),
    [sym_alpha] = ACTIONS(117),
    [sym_beta] = ACTIONS(117),
    [sym_gamma] = ACTIONS(117),
    [sym_delta] = ACTIONS(117),
    [sym_epsilon] = ACTIONS(117),
    [sym_zeta] = ACTIONS(117),
    [sym_eta] = ACTIONS(117),
    [sym_theta] = ACTIONS(117),
    [sym_iota] = ACTIONS(117),
    [sym_kappa] = ACTIONS(117),
    [sym_lambda] = ACTIONS(117),
    [sym_mu] = ACTIONS(117),
    [sym_nu] = ACTIONS(117),
    [sym_xi] = ACTIONS(117),
    [sym_omicron] = ACTIONS(117),
    [sym_pi] = ACTIONS(117),
    [sym_rho] = ACTIONS(117),
    [sym_sigma] = ACTIONS(117),
    [sym_tau] = ACTIONS(117),
    [sym_upsilon] = ACTIONS(117),
    [sym_phi] = ACTIONS(117),
    [sym_chi] = ACTIONS(117),
    [sym_psi] = ACTIONS(117),
    [sym_omega] = ACTIONS(117),
    [sym_Alpha] = ACTIONS(117),
    [sym_Beta] = ACTIONS(117),
    [sym_Gamma] = ACTIONS(117),
    [sym_Delta] = ACTIONS(117),
    [sym_Epsilon] = ACTIONS(117),
    [sym_Zeta] = ACTIONS(117),
    [sym_Eta] = ACTIONS(117),
    [sym_Theta] = ACTIONS(117),
    [sym_Iota] = ACTIONS(117),
    [sym_Kappa] = ACTIONS(117),
    [sym_Lambda] = ACTIONS(117),
    [sym_Mu] = ACTIONS(117),
    [sym_Nu] = ACTIONS(117),
    [sym_Xi] = ACTIONS(117),
    [sym_Omicron] = ACTIONS(117),
    [sym_Pi] = ACTIONS(117),
    [sym_Rho] = ACTIONS(117),
    [sym_Sigma] = ACTIONS(117),
    [sym_Tau] = ACTIONS(117),
    [sym_Upsilon] = ACTIONS(117),
    [sym_Phi] = ACTIONS(117),
    [sym_Chi] = ACTIONS(117),
    [sym_Psi] = ACTIONS(117),
    [sym_Omega] = ACTIONS(117),
    [sym_infty] = ACTIONS(117),
    [sym_hbar] = ACTIONS(117),
    [sym_ell] = ACTIONS(117),
    [sym_Re] = ACTIONS(117),
    [sym_Im] = ACTIONS(117),
    [sym_aleph] = ACTIONS(117),
    [sym_nabla] = ACTIONS(117),
    [sym_partial] = ACTIONS(117),
    [sym_forall] = ACTIONS(117),
    [sym_exists] = ACTIONS(117),
    [sym_emptyset] = ACTIONS(117),
    [sym_grad] = ACTIONS(117),
    [sym_del] = ACTIONS(117),
    [sym_plus] = ACTIONS(115),
    [sym_minus] = ACTIONS(115),
    [sym_times] = ACTIONS(115),
    [sym_equals] = ACTIONS(115),
    [sym_lt] = ACTIONS(117),
    [sym_gt] = ACTIONS(117),
    [sym_le] = ACTIONS(115),
    [sym_ge] = ACTIONS(115),
    [sym_ne] = ACTIONS(115),
    [sym_approx] = ACTIONS(115),
    [sym_pm] = ACTIONS(117),
    [sym_mp] = ACTIONS(117),
    [sym_sqrt] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
    [sym_bb] = ACTIONS(117),
    [sym_cc] = ACTIONS(117),
    [sym_tt] = ACTIONS(117),
    [sym_fr] = ACTIONS(117),
    [sym_sf] = ACTIONS(117),
    [sym_bold] = ACTIONS(117),
    [sym_cal] = ACTIONS(117),
    [sym_frak] = ACTIONS(117),
    [sym_monospace] = ACTIONS(117),
    [sym_mono] = ACTIONS(117),
    [sym_italic] = ACTIONS(117),
    [sym_frac] = ACTIONS(117),
    [sym_root] = ACTIONS(117),
    [sym_stackrel] = ACTIONS(117),
    [sym_choose] = ACTIONS(117),
    [sym_atop] = ACTIONS(117),
    [sym_over] = ACTIONS(117),
    [sym_factorial] = ACTIONS(117),
    [sym_double_factorial] = ACTIONS(115),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_COLON] = ACTIONS(115),
    [anon_sym_LPAREN_COLON] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_COLON_RBRACE] = ACTIONS(115),
    [anon_sym_COLON_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
  },
  [22] = {
    [sym_number_symbol] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_if] = ACTIONS(123),
    [sym_otherwise] = ACTIONS(123),
    [sym_else] = ACTIONS(123),
    [sym_alpha] = ACTIONS(123),
    [sym_beta] = ACTIONS(123),
    [sym_gamma] = ACTIONS(123),
    [sym_delta] = ACTIONS(123),
    [sym_epsilon] = ACTIONS(123),
    [sym_zeta] = ACTIONS(123),
    [sym_eta] = ACTIONS(123),
    [sym_theta] = ACTIONS(123),
    [sym_iota] = ACTIONS(123),
    [sym_kappa] = ACTIONS(123),
    [sym_lambda] = ACTIONS(123),
    [sym_mu] = ACTIONS(123),
    [sym_nu] = ACTIONS(123),
    [sym_xi] = ACTIONS(123),
    [sym_omicron] = ACTIONS(123),
    [sym_pi] = ACTIONS(123),
    [sym_rho] = ACTIONS(123),
    [sym_sigma] = ACTIONS(123),
    [sym_tau] = ACTIONS(123),
    [sym_upsilon] = ACTIONS(123),
    [sym_phi] = ACTIONS(123),
    [sym_chi] = ACTIONS(123),
    [sym_psi] = ACTIONS(123),
    [sym_omega] = ACTIONS(123),
    [sym_Alpha] = ACTIONS(123),
    [sym_Beta] = ACTIONS(123),
    [sym_Gamma] = ACTIONS(123),
    [sym_Delta] = ACTIONS(123),
    [sym_Epsilon] = ACTIONS(123),
    [sym_Zeta] = ACTIONS(123),
    [sym_Eta] = ACTIONS(123),
    [sym_Theta] = ACTIONS(123),
    [sym_Iota] = ACTIONS(123),
    [sym_Kappa] = ACTIONS(123),
    [sym_Lambda] = ACTIONS(123),
    [sym_Mu] = ACTIONS(123),
    [sym_Nu] = ACTIONS(123),
    [sym_Xi] = ACTIONS(123),
    [sym_Omicron] = ACTIONS(123),
    [sym_Pi] = ACTIONS(123),
    [sym_Rho] = ACTIONS(123),
    [sym_Sigma] = ACTIONS(123),
    [sym_Tau] = ACTIONS(123),
    [sym_Upsilon] = ACTIONS(123),
    [sym_Phi] = ACTIONS(123),
    [sym_Chi] = ACTIONS(123),
    [sym_Psi] = ACTIONS(123),
    [sym_Omega] = ACTIONS(123),
    [sym_infty] = ACTIONS(123),
    [sym_hbar] = ACTIONS(123),
    [sym_ell] = ACTIONS(123),
    [sym_Re] = ACTIONS(123),
    [sym_Im] = ACTIONS(123),
    [sym_aleph] = ACTIONS(123),
    [sym_nabla] = ACTIONS(123),
    [sym_partial] = ACTIONS(123),
    [sym_forall] = ACTIONS(123),
    [sym_exists] = ACTIONS(123),
    [sym_emptyset] = ACTIONS(123),
    [sym_grad] = ACTIONS(123),
    [sym_del] = ACTIONS(123),
    [sym_plus] = ACTIONS(121),
    [sym_minus] = ACTIONS(121),
    [sym_times] = ACTIONS(121),
    [sym_equals] = ACTIONS(121),
    [sym_lt] = ACTIONS(123),
    [sym_gt] = ACTIONS(123),
    [sym_le] = ACTIONS(121),
    [sym_ge] = ACTIONS(121),
    [sym_ne] = ACTIONS(121),
    [sym_approx] = ACTIONS(121),
    [sym_pm] = ACTIONS(123),
    [sym_mp] = ACTIONS(123),
    [sym_sqrt] = ACTIONS(123),
    [sym_text] = ACTIONS(123),
    [sym_bb] = ACTIONS(123),
    [sym_cc] = ACTIONS(123),
    [sym_tt] = ACTIONS(123),
    [sym_fr] = ACTIONS(123),
    [sym_sf] = ACTIONS(123),
    [sym_bold] = ACTIONS(123),
    [sym_cal] = ACTIONS(123),
    [sym_frak] = ACTIONS(123),
    [sym_monospace] = ACTIONS(123),
    [sym_mono] = ACTIONS(123),
    [sym_italic] = ACTIONS(123),
    [sym_frac] = ACTIONS(123),
    [sym_root] = ACTIONS(123),
    [sym_stackrel] = ACTIONS(123),
    [sym_choose] = ACTIONS(123),
    [sym_atop] = ACTIONS(123),
    [sym_over] = ACTIONS(123),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_LBRACE_COLON] = ACTIONS(121),
    [anon_sym_LPAREN_COLON] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_COLON_RBRACE] = ACTIONS(121),
    [anon_sym_COLON_RPAREN] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(121),
  },
  [23] = {
    [sym_number_symbol] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [sym_if] = ACTIONS(127),
    [sym_otherwise] = ACTIONS(127),
    [sym_else] = ACTIONS(127),
    [sym_alpha] = ACTIONS(127),
    [sym_beta] = ACTIONS(127),
    [sym_gamma] = ACTIONS(127),
    [sym_delta] = ACTIONS(127),
    [sym_epsilon] = ACTIONS(127),
    [sym_zeta] = ACTIONS(127),
    [sym_eta] = ACTIONS(127),
    [sym_theta] = ACTIONS(127),
    [sym_iota] = ACTIONS(127),
    [sym_kappa] = ACTIONS(127),
    [sym_lambda] = ACTIONS(127),
    [sym_mu] = ACTIONS(127),
    [sym_nu] = ACTIONS(127),
    [sym_xi] = ACTIONS(127),
    [sym_omicron] = ACTIONS(127),
    [sym_pi] = ACTIONS(127),
    [sym_rho] = ACTIONS(127),
    [sym_sigma] = ACTIONS(127),
    [sym_tau] = ACTIONS(127),
    [sym_upsilon] = ACTIONS(127),
    [sym_phi] = ACTIONS(127),
    [sym_chi] = ACTIONS(127),
    [sym_psi] = ACTIONS(127),
    [sym_omega] = ACTIONS(127),
    [sym_Alpha] = ACTIONS(127),
    [sym_Beta] = ACTIONS(127),
    [sym_Gamma] = ACTIONS(127),
    [sym_Delta] = ACTIONS(127),
    [sym_Epsilon] = ACTIONS(127),
    [sym_Zeta] = ACTIONS(127),
    [sym_Eta] = ACTIONS(127),
    [sym_Theta] = ACTIONS(127),
    [sym_Iota] = ACTIONS(127),
    [sym_Kappa] = ACTIONS(127),
    [sym_Lambda] = ACTIONS(127),
    [sym_Mu] = ACTIONS(127),
    [sym_Nu] = ACTIONS(127),
    [sym_Xi] = ACTIONS(127),
    [sym_Omicron] = ACTIONS(127),
    [sym_Pi] = ACTIONS(127),
    [sym_Rho] = ACTIONS(127),
    [sym_Sigma] = ACTIONS(127),
    [sym_Tau] = ACTIONS(127),
    [sym_Upsilon] = ACTIONS(127),
    [sym_Phi] = ACTIONS(127),
    [sym_Chi] = ACTIONS(127),
    [sym_Psi] = ACTIONS(127),
    [sym_Omega] = ACTIONS(127),
    [sym_infty] = ACTIONS(127),
    [sym_hbar] = ACTIONS(127),
    [sym_ell] = ACTIONS(127),
    [sym_Re] = ACTIONS(127),
    [sym_Im] = ACTIONS(127),
    [sym_aleph] = ACTIONS(127),
    [sym_nabla] = ACTIONS(127),
    [sym_partial] = ACTIONS(127),
    [sym_forall] = ACTIONS(127),
    [sym_exists] = ACTIONS(127),
    [sym_emptyset] = ACTIONS(127),
    [sym_grad] = ACTIONS(127),
    [sym_del] = ACTIONS(127),
    [sym_plus] = ACTIONS(125),
    [sym_minus] = ACTIONS(125),
    [sym_times] = ACTIONS(125),
    [sym_equals] = ACTIONS(125),
    [sym_lt] = ACTIONS(127),
    [sym_gt] = ACTIONS(127),
    [sym_le] = ACTIONS(125),
    [sym_ge] = ACTIONS(125),
    [sym_ne] = ACTIONS(125),
    [sym_approx] = ACTIONS(125),
    [sym_pm] = ACTIONS(127),
    [sym_mp] = ACTIONS(127),
    [sym_sqrt] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
    [sym_bb] = ACTIONS(127),
    [sym_cc] = ACTIONS(127),
    [sym_tt] = ACTIONS(127),
    [sym_fr] = ACTIONS(127),
    [sym_sf] = ACTIONS(127),
    [sym_bold] = ACTIONS(127),
    [sym_cal] = ACTIONS(127),
    [sym_frak] = ACTIONS(127),
    [sym_monospace] = ACTIONS(127),
    [sym_mono] = ACTIONS(127),
    [sym_italic] = ACTIONS(127),
    [sym_frac] = ACTIONS(127),
    [sym_root] = ACTIONS(127),
    [sym_stackrel] = ACTIONS(127),
    [sym_choose] = ACTIONS(127),
    [sym_atop] = ACTIONS(127),
    [sym_over] = ACTIONS(127),
    [sym_factorial] = ACTIONS(127),
    [sym_double_factorial] = ACTIONS(125),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE_COLON] = ACTIONS(125),
    [anon_sym_LPAREN_COLON] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_COLON_RBRACE] = ACTIONS(125),
    [anon_sym_COLON_RPAREN] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(125),
  },
  [24] = {
    [sym_number_symbol] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym_if] = ACTIONS(131),
    [sym_otherwise] = ACTIONS(131),
    [sym_else] = ACTIONS(131),
    [sym_alpha] = ACTIONS(131),
    [sym_beta] = ACTIONS(131),
    [sym_gamma] = ACTIONS(131),
    [sym_delta] = ACTIONS(131),
    [sym_epsilon] = ACTIONS(131),
    [sym_zeta] = ACTIONS(131),
    [sym_eta] = ACTIONS(131),
    [sym_theta] = ACTIONS(131),
    [sym_iota] = ACTIONS(131),
    [sym_kappa] = ACTIONS(131),
    [sym_lambda] = ACTIONS(131),
    [sym_mu] = ACTIONS(131),
    [sym_nu] = ACTIONS(131),
    [sym_xi] = ACTIONS(131),
    [sym_omicron] = ACTIONS(131),
    [sym_pi] = ACTIONS(131),
    [sym_rho] = ACTIONS(131),
    [sym_sigma] = ACTIONS(131),
    [sym_tau] = ACTIONS(131),
    [sym_upsilon] = ACTIONS(131),
    [sym_phi] = ACTIONS(131),
    [sym_chi] = ACTIONS(131),
    [sym_psi] = ACTIONS(131),
    [sym_omega] = ACTIONS(131),
    [sym_Alpha] = ACTIONS(131),
    [sym_Beta] = ACTIONS(131),
    [sym_Gamma] = ACTIONS(131),
    [sym_Delta] = ACTIONS(131),
    [sym_Epsilon] = ACTIONS(131),
    [sym_Zeta] = ACTIONS(131),
    [sym_Eta] = ACTIONS(131),
    [sym_Theta] = ACTIONS(131),
    [sym_Iota] = ACTIONS(131),
    [sym_Kappa] = ACTIONS(131),
    [sym_Lambda] = ACTIONS(131),
    [sym_Mu] = ACTIONS(131),
    [sym_Nu] = ACTIONS(131),
    [sym_Xi] = ACTIONS(131),
    [sym_Omicron] = ACTIONS(131),
    [sym_Pi] = ACTIONS(131),
    [sym_Rho] = ACTIONS(131),
    [sym_Sigma] = ACTIONS(131),
    [sym_Tau] = ACTIONS(131),
    [sym_Upsilon] = ACTIONS(131),
    [sym_Phi] = ACTIONS(131),
    [sym_Chi] = ACTIONS(131),
    [sym_Psi] = ACTIONS(131),
    [sym_Omega] = ACTIONS(131),
    [sym_infty] = ACTIONS(131),
    [sym_hbar] = ACTIONS(131),
    [sym_ell] = ACTIONS(131),
    [sym_Re] = ACTIONS(131),
    [sym_Im] = ACTIONS(131),
    [sym_aleph] = ACTIONS(131),
    [sym_nabla] = ACTIONS(131),
    [sym_partial] = ACTIONS(131),
    [sym_forall] = ACTIONS(131),
    [sym_exists] = ACTIONS(131),
    [sym_emptyset] = ACTIONS(131),
    [sym_grad] = ACTIONS(131),
    [sym_del] = ACTIONS(131),
    [sym_plus] = ACTIONS(129),
    [sym_minus] = ACTIONS(129),
    [sym_times] = ACTIONS(129),
    [sym_equals] = ACTIONS(129),
    [sym_lt] = ACTIONS(131),
    [sym_gt] = ACTIONS(131),
    [sym_le] = ACTIONS(129),
    [sym_ge] = ACTIONS(129),
    [sym_ne] = ACTIONS(129),
    [sym_approx] = ACTIONS(129),
    [sym_pm] = ACTIONS(131),
    [sym_mp] = ACTIONS(131),
    [sym_sqrt] = ACTIONS(131),
    [sym_text] = ACTIONS(131),
    [sym_bb] = ACTIONS(131),
    [sym_cc] = ACTIONS(131),
    [sym_tt] = ACTIONS(131),
    [sym_fr] = ACTIONS(131),
    [sym_sf] = ACTIONS(131),
    [sym_bold] = ACTIONS(131),
    [sym_cal] = ACTIONS(131),
    [sym_frak] = ACTIONS(131),
    [sym_monospace] = ACTIONS(131),
    [sym_mono] = ACTIONS(131),
    [sym_italic] = ACTIONS(131),
    [sym_frac] = ACTIONS(131),
    [sym_root] = ACTIONS(131),
    [sym_stackrel] = ACTIONS(131),
    [sym_choose] = ACTIONS(131),
    [sym_atop] = ACTIONS(131),
    [sym_over] = ACTIONS(131),
    [sym_factorial] = ACTIONS(131),
    [sym_double_factorial] = ACTIONS(129),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_LBRACE_COLON] = ACTIONS(129),
    [anon_sym_LPAREN_COLON] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_COLON_RBRACE] = ACTIONS(129),
    [anon_sym_COLON_RPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym__] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(129),
  },
  [25] = {
    [sym_number_symbol] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_if] = ACTIONS(117),
    [sym_otherwise] = ACTIONS(117),
    [sym_else] = ACTIONS(117),
    [sym_alpha] = ACTIONS(117),
    [sym_beta] = ACTIONS(117),
    [sym_gamma] = ACTIONS(117),
    [sym_delta] = ACTIONS(117),
    [sym_epsilon] = ACTIONS(117),
    [sym_zeta] = ACTIONS(117),
    [sym_eta] = ACTIONS(117),
    [sym_theta] = ACTIONS(117),
    [sym_iota] = ACTIONS(117),
    [sym_kappa] = ACTIONS(117),
    [sym_lambda] = ACTIONS(117),
    [sym_mu] = ACTIONS(117),
    [sym_nu] = ACTIONS(117),
    [sym_xi] = ACTIONS(117),
    [sym_omicron] = ACTIONS(117),
    [sym_pi] = ACTIONS(117),
    [sym_rho] = ACTIONS(117),
    [sym_sigma] = ACTIONS(117),
    [sym_tau] = ACTIONS(117),
    [sym_upsilon] = ACTIONS(117),
    [sym_phi] = ACTIONS(117),
    [sym_chi] = ACTIONS(117),
    [sym_psi] = ACTIONS(117),
    [sym_omega] = ACTIONS(117),
    [sym_Alpha] = ACTIONS(117),
    [sym_Beta] = ACTIONS(117),
    [sym_Gamma] = ACTIONS(117),
    [sym_Delta] = ACTIONS(117),
    [sym_Epsilon] = ACTIONS(117),
    [sym_Zeta] = ACTIONS(117),
    [sym_Eta] = ACTIONS(117),
    [sym_Theta] = ACTIONS(117),
    [sym_Iota] = ACTIONS(117),
    [sym_Kappa] = ACTIONS(117),
    [sym_Lambda] = ACTIONS(117),
    [sym_Mu] = ACTIONS(117),
    [sym_Nu] = ACTIONS(117),
    [sym_Xi] = ACTIONS(117),
    [sym_Omicron] = ACTIONS(117),
    [sym_Pi] = ACTIONS(117),
    [sym_Rho] = ACTIONS(117),
    [sym_Sigma] = ACTIONS(117),
    [sym_Tau] = ACTIONS(117),
    [sym_Upsilon] = ACTIONS(117),
    [sym_Phi] = ACTIONS(117),
    [sym_Chi] = ACTIONS(117),
    [sym_Psi] = ACTIONS(117),
    [sym_Omega] = ACTIONS(117),
    [sym_infty] = ACTIONS(117),
    [sym_hbar] = ACTIONS(117),
    [sym_ell] = ACTIONS(117),
    [sym_Re] = ACTIONS(117),
    [sym_Im] = ACTIONS(117),
    [sym_aleph] = ACTIONS(117),
    [sym_nabla] = ACTIONS(117),
    [sym_partial] = ACTIONS(117),
    [sym_forall] = ACTIONS(117),
    [sym_exists] = ACTIONS(117),
    [sym_emptyset] = ACTIONS(117),
    [sym_grad] = ACTIONS(117),
    [sym_del] = ACTIONS(117),
    [sym_plus] = ACTIONS(115),
    [sym_minus] = ACTIONS(115),
    [sym_times] = ACTIONS(115),
    [sym_equals] = ACTIONS(115),
    [sym_lt] = ACTIONS(117),
    [sym_gt] = ACTIONS(117),
    [sym_le] = ACTIONS(115),
    [sym_ge] = ACTIONS(115),
    [sym_ne] = ACTIONS(115),
    [sym_approx] = ACTIONS(115),
    [sym_pm] = ACTIONS(117),
    [sym_mp] = ACTIONS(117),
    [sym_sqrt] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
    [sym_bb] = ACTIONS(117),
    [sym_cc] = ACTIONS(117),
    [sym_tt] = ACTIONS(117),
    [sym_fr] = ACTIONS(117),
    [sym_sf] = ACTIONS(117),
    [sym_bold] = ACTIONS(117),
    [sym_cal] = ACTIONS(117),
    [sym_frak] = ACTIONS(117),
    [sym_monospace] = ACTIONS(117),
    [sym_mono] = ACTIONS(117),
    [sym_italic] = ACTIONS(117),
    [sym_frac] = ACTIONS(117),
    [sym_root] = ACTIONS(117),
    [sym_stackrel] = ACTIONS(117),
    [sym_choose] = ACTIONS(117),
    [sym_atop] = ACTIONS(117),
    [sym_over] = ACTIONS(117),
    [sym_factorial] = ACTIONS(117),
    [sym_double_factorial] = ACTIONS(115),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_COLON] = ACTIONS(115),
    [anon_sym_LPAREN_COLON] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_COLON_RBRACE] = ACTIONS(115),
    [anon_sym_COLON_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
  },
  [26] = {
    [sym_number_symbol] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_if] = ACTIONS(117),
    [sym_otherwise] = ACTIONS(117),
    [sym_else] = ACTIONS(117),
    [sym_alpha] = ACTIONS(117),
    [sym_beta] = ACTIONS(117),
    [sym_gamma] = ACTIONS(117),
    [sym_delta] = ACTIONS(117),
    [sym_epsilon] = ACTIONS(117),
    [sym_zeta] = ACTIONS(117),
    [sym_eta] = ACTIONS(117),
    [sym_theta] = ACTIONS(117),
    [sym_iota] = ACTIONS(117),
    [sym_kappa] = ACTIONS(117),
    [sym_lambda] = ACTIONS(117),
    [sym_mu] = ACTIONS(117),
    [sym_nu] = ACTIONS(117),
    [sym_xi] = ACTIONS(117),
    [sym_omicron] = ACTIONS(117),
    [sym_pi] = ACTIONS(117),
    [sym_rho] = ACTIONS(117),
    [sym_sigma] = ACTIONS(117),
    [sym_tau] = ACTIONS(117),
    [sym_upsilon] = ACTIONS(117),
    [sym_phi] = ACTIONS(117),
    [sym_chi] = ACTIONS(117),
    [sym_psi] = ACTIONS(117),
    [sym_omega] = ACTIONS(117),
    [sym_Alpha] = ACTIONS(117),
    [sym_Beta] = ACTIONS(117),
    [sym_Gamma] = ACTIONS(117),
    [sym_Delta] = ACTIONS(117),
    [sym_Epsilon] = ACTIONS(117),
    [sym_Zeta] = ACTIONS(117),
    [sym_Eta] = ACTIONS(117),
    [sym_Theta] = ACTIONS(117),
    [sym_Iota] = ACTIONS(117),
    [sym_Kappa] = ACTIONS(117),
    [sym_Lambda] = ACTIONS(117),
    [sym_Mu] = ACTIONS(117),
    [sym_Nu] = ACTIONS(117),
    [sym_Xi] = ACTIONS(117),
    [sym_Omicron] = ACTIONS(117),
    [sym_Pi] = ACTIONS(117),
    [sym_Rho] = ACTIONS(117),
    [sym_Sigma] = ACTIONS(117),
    [sym_Tau] = ACTIONS(117),
    [sym_Upsilon] = ACTIONS(117),
    [sym_Phi] = ACTIONS(117),
    [sym_Chi] = ACTIONS(117),
    [sym_Psi] = ACTIONS(117),
    [sym_Omega] = ACTIONS(117),
    [sym_infty] = ACTIONS(117),
    [sym_hbar] = ACTIONS(117),
    [sym_ell] = ACTIONS(117),
    [sym_Re] = ACTIONS(117),
    [sym_Im] = ACTIONS(117),
    [sym_aleph] = ACTIONS(117),
    [sym_nabla] = ACTIONS(117),
    [sym_partial] = ACTIONS(117),
    [sym_forall] = ACTIONS(117),
    [sym_exists] = ACTIONS(117),
    [sym_emptyset] = ACTIONS(117),
    [sym_grad] = ACTIONS(117),
    [sym_del] = ACTIONS(117),
    [sym_plus] = ACTIONS(115),
    [sym_minus] = ACTIONS(115),
    [sym_times] = ACTIONS(115),
    [sym_equals] = ACTIONS(115),
    [sym_lt] = ACTIONS(117),
    [sym_gt] = ACTIONS(117),
    [sym_le] = ACTIONS(115),
    [sym_ge] = ACTIONS(115),
    [sym_ne] = ACTIONS(115),
    [sym_approx] = ACTIONS(115),
    [sym_pm] = ACTIONS(117),
    [sym_mp] = ACTIONS(117),
    [sym_sqrt] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
    [sym_bb] = ACTIONS(117),
    [sym_cc] = ACTIONS(117),
    [sym_tt] = ACTIONS(117),
    [sym_fr] = ACTIONS(117),
    [sym_sf] = ACTIONS(117),
    [sym_bold] = ACTIONS(117),
    [sym_cal] = ACTIONS(117),
    [sym_frak] = ACTIONS(117),
    [sym_monospace] = ACTIONS(117),
    [sym_mono] = ACTIONS(117),
    [sym_italic] = ACTIONS(117),
    [sym_frac] = ACTIONS(117),
    [sym_root] = ACTIONS(117),
    [sym_stackrel] = ACTIONS(117),
    [sym_choose] = ACTIONS(117),
    [sym_atop] = ACTIONS(117),
    [sym_over] = ACTIONS(117),
    [sym_factorial] = ACTIONS(117),
    [sym_double_factorial] = ACTIONS(115),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_COLON] = ACTIONS(115),
    [anon_sym_LPAREN_COLON] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_COLON_RBRACE] = ACTIONS(115),
    [anon_sym_COLON_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
  },
  [27] = {
    [sym_number_symbol] = ACTIONS(133),
    [sym_identifier] = ACTIONS(135),
    [sym_if] = ACTIONS(135),
    [sym_otherwise] = ACTIONS(135),
    [sym_else] = ACTIONS(135),
    [sym_alpha] = ACTIONS(135),
    [sym_beta] = ACTIONS(135),
    [sym_gamma] = ACTIONS(135),
    [sym_delta] = ACTIONS(135),
    [sym_epsilon] = ACTIONS(135),
    [sym_zeta] = ACTIONS(135),
    [sym_eta] = ACTIONS(135),
    [sym_theta] = ACTIONS(135),
    [sym_iota] = ACTIONS(135),
    [sym_kappa] = ACTIONS(135),
    [sym_lambda] = ACTIONS(135),
    [sym_mu] = ACTIONS(135),
    [sym_nu] = ACTIONS(135),
    [sym_xi] = ACTIONS(135),
    [sym_omicron] = ACTIONS(135),
    [sym_pi] = ACTIONS(135),
    [sym_rho] = ACTIONS(135),
    [sym_sigma] = ACTIONS(135),
    [sym_tau] = ACTIONS(135),
    [sym_upsilon] = ACTIONS(135),
    [sym_phi] = ACTIONS(135),
    [sym_chi] = ACTIONS(135),
    [sym_psi] = ACTIONS(135),
    [sym_omega] = ACTIONS(135),
    [sym_Alpha] = ACTIONS(135),
    [sym_Beta] = ACTIONS(135),
    [sym_Gamma] = ACTIONS(135),
    [sym_Delta] = ACTIONS(135),
    [sym_Epsilon] = ACTIONS(135),
    [sym_Zeta] = ACTIONS(135),
    [sym_Eta] = ACTIONS(135),
    [sym_Theta] = ACTIONS(135),
    [sym_Iota] = ACTIONS(135),
    [sym_Kappa] = ACTIONS(135),
    [sym_Lambda] = ACTIONS(135),
    [sym_Mu] = ACTIONS(135),
    [sym_Nu] = ACTIONS(135),
    [sym_Xi] = ACTIONS(135),
    [sym_Omicron] = ACTIONS(135),
    [sym_Pi] = ACTIONS(135),
    [sym_Rho] = ACTIONS(135),
    [sym_Sigma] = ACTIONS(135),
    [sym_Tau] = ACTIONS(135),
    [sym_Upsilon] = ACTIONS(135),
    [sym_Phi] = ACTIONS(135),
    [sym_Chi] = ACTIONS(135),
    [sym_Psi] = ACTIONS(135),
    [sym_Omega] = ACTIONS(135),
    [sym_infty] = ACTIONS(135),
    [sym_hbar] = ACTIONS(135),
    [sym_ell] = ACTIONS(135),
    [sym_Re] = ACTIONS(135),
    [sym_Im] = ACTIONS(135),
    [sym_aleph] = ACTIONS(135),
    [sym_nabla] = ACTIONS(135),
    [sym_partial] = ACTIONS(135),
    [sym_forall] = ACTIONS(135),
    [sym_exists] = ACTIONS(135),
    [sym_emptyset] = ACTIONS(135),
    [sym_grad] = ACTIONS(135),
    [sym_del] = ACTIONS(135),
    [sym_plus] = ACTIONS(133),
    [sym_minus] = ACTIONS(133),
    [sym_times] = ACTIONS(133),
    [sym_equals] = ACTIONS(133),
    [sym_lt] = ACTIONS(135),
    [sym_gt] = ACTIONS(135),
    [sym_le] = ACTIONS(133),
    [sym_ge] = ACTIONS(133),
    [sym_ne] = ACTIONS(133),
    [sym_approx] = ACTIONS(133),
    [sym_pm] = ACTIONS(135),
    [sym_mp] = ACTIONS(135),
    [sym_sqrt] = ACTIONS(135),
    [sym_text] = ACTIONS(135),
    [sym_bb] = ACTIONS(135),
    [sym_cc] = ACTIONS(135),
    [sym_tt] = ACTIONS(135),
    [sym_fr] = ACTIONS(135),
    [sym_sf] = ACTIONS(135),
    [sym_bold] = ACTIONS(135),
    [sym_cal] = ACTIONS(135),
    [sym_frak] = ACTIONS(135),
    [sym_monospace] = ACTIONS(135),
    [sym_mono] = ACTIONS(135),
    [sym_italic] = ACTIONS(135),
    [sym_frac] = ACTIONS(135),
    [sym_root] = ACTIONS(135),
    [sym_stackrel] = ACTIONS(135),
    [sym_choose] = ACTIONS(135),
    [sym_atop] = ACTIONS(135),
    [sym_over] = ACTIONS(135),
    [sym_factorial] = ACTIONS(135),
    [sym_double_factorial] = ACTIONS(133),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_LBRACE_COLON] = ACTIONS(133),
    [anon_sym_LPAREN_COLON] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_COLON_RBRACE] = ACTIONS(133),
    [anon_sym_COLON_RPAREN] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
  },
  [28] = {
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(58),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [29] = {
    [sym_literal_string] = STATE(76),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(76),
    [sym_matrix_expr] = STATE(76),
    [sym_unary_expr] = STATE(76),
    [sym_binary_expr] = STATE(76),
    [sym_factorial_expr] = STATE(76),
    [sym_simple_expression] = STATE(74),
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_if] = ACTIONS(75),
    [sym_otherwise] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [sym_alpha] = ACTIONS(75),
    [sym_beta] = ACTIONS(75),
    [sym_gamma] = ACTIONS(75),
    [sym_delta] = ACTIONS(75),
    [sym_epsilon] = ACTIONS(75),
    [sym_zeta] = ACTIONS(75),
    [sym_eta] = ACTIONS(75),
    [sym_theta] = ACTIONS(75),
    [sym_iota] = ACTIONS(75),
    [sym_kappa] = ACTIONS(75),
    [sym_lambda] = ACTIONS(75),
    [sym_mu] = ACTIONS(75),
    [sym_nu] = ACTIONS(75),
    [sym_xi] = ACTIONS(75),
    [sym_omicron] = ACTIONS(75),
    [sym_pi] = ACTIONS(75),
    [sym_rho] = ACTIONS(75),
    [sym_sigma] = ACTIONS(75),
    [sym_tau] = ACTIONS(75),
    [sym_upsilon] = ACTIONS(75),
    [sym_phi] = ACTIONS(75),
    [sym_chi] = ACTIONS(75),
    [sym_psi] = ACTIONS(75),
    [sym_omega] = ACTIONS(75),
    [sym_Alpha] = ACTIONS(75),
    [sym_Beta] = ACTIONS(75),
    [sym_Gamma] = ACTIONS(75),
    [sym_Delta] = ACTIONS(75),
    [sym_Epsilon] = ACTIONS(75),
    [sym_Zeta] = ACTIONS(75),
    [sym_Eta] = ACTIONS(75),
    [sym_Theta] = ACTIONS(75),
    [sym_Iota] = ACTIONS(75),
    [sym_Kappa] = ACTIONS(75),
    [sym_Lambda] = ACTIONS(75),
    [sym_Mu] = ACTIONS(75),
    [sym_Nu] = ACTIONS(75),
    [sym_Xi] = ACTIONS(75),
    [sym_Omicron] = ACTIONS(75),
    [sym_Pi] = ACTIONS(75),
    [sym_Rho] = ACTIONS(75),
    [sym_Sigma] = ACTIONS(75),
    [sym_Tau] = ACTIONS(75),
    [sym_Upsilon] = ACTIONS(75),
    [sym_Phi] = ACTIONS(75),
    [sym_Chi] = ACTIONS(75),
    [sym_Psi] = ACTIONS(75),
    [sym_Omega] = ACTIONS(75),
    [sym_infty] = ACTIONS(75),
    [sym_hbar] = ACTIONS(75),
    [sym_ell] = ACTIONS(75),
    [sym_Re] = ACTIONS(75),
    [sym_Im] = ACTIONS(75),
    [sym_aleph] = ACTIONS(75),
    [sym_nabla] = ACTIONS(75),
    [sym_partial] = ACTIONS(75),
    [sym_forall] = ACTIONS(75),
    [sym_exists] = ACTIONS(75),
    [sym_emptyset] = ACTIONS(75),
    [sym_grad] = ACTIONS(75),
    [sym_del] = ACTIONS(75),
    [sym_plus] = ACTIONS(73),
    [sym_minus] = ACTIONS(73),
    [sym_times] = ACTIONS(73),
    [sym_equals] = ACTIONS(73),
    [sym_lt] = ACTIONS(75),
    [sym_gt] = ACTIONS(75),
    [sym_le] = ACTIONS(73),
    [sym_ge] = ACTIONS(73),
    [sym_ne] = ACTIONS(73),
    [sym_approx] = ACTIONS(73),
    [sym_pm] = ACTIONS(75),
    [sym_mp] = ACTIONS(75),
    [sym_sqrt] = ACTIONS(77),
    [sym_text] = ACTIONS(77),
    [sym_bb] = ACTIONS(77),
    [sym_cc] = ACTIONS(77),
    [sym_tt] = ACTIONS(77),
    [sym_fr] = ACTIONS(77),
    [sym_sf] = ACTIONS(77),
    [sym_bold] = ACTIONS(77),
    [sym_cal] = ACTIONS(77),
    [sym_frak] = ACTIONS(77),
    [sym_monospace] = ACTIONS(77),
    [sym_mono] = ACTIONS(77),
    [sym_italic] = ACTIONS(77),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [30] = {
    [sym_number_symbol] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [sym_if] = ACTIONS(139),
    [sym_otherwise] = ACTIONS(139),
    [sym_else] = ACTIONS(139),
    [sym_alpha] = ACTIONS(139),
    [sym_beta] = ACTIONS(139),
    [sym_gamma] = ACTIONS(139),
    [sym_delta] = ACTIONS(139),
    [sym_epsilon] = ACTIONS(139),
    [sym_zeta] = ACTIONS(139),
    [sym_eta] = ACTIONS(139),
    [sym_theta] = ACTIONS(139),
    [sym_iota] = ACTIONS(139),
    [sym_kappa] = ACTIONS(139),
    [sym_lambda] = ACTIONS(139),
    [sym_mu] = ACTIONS(139),
    [sym_nu] = ACTIONS(139),
    [sym_xi] = ACTIONS(139),
    [sym_omicron] = ACTIONS(139),
    [sym_pi] = ACTIONS(139),
    [sym_rho] = ACTIONS(139),
    [sym_sigma] = ACTIONS(139),
    [sym_tau] = ACTIONS(139),
    [sym_upsilon] = ACTIONS(139),
    [sym_phi] = ACTIONS(139),
    [sym_chi] = ACTIONS(139),
    [sym_psi] = ACTIONS(139),
    [sym_omega] = ACTIONS(139),
    [sym_Alpha] = ACTIONS(139),
    [sym_Beta] = ACTIONS(139),
    [sym_Gamma] = ACTIONS(139),
    [sym_Delta] = ACTIONS(139),
    [sym_Epsilon] = ACTIONS(139),
    [sym_Zeta] = ACTIONS(139),
    [sym_Eta] = ACTIONS(139),
    [sym_Theta] = ACTIONS(139),
    [sym_Iota] = ACTIONS(139),
    [sym_Kappa] = ACTIONS(139),
    [sym_Lambda] = ACTIONS(139),
    [sym_Mu] = ACTIONS(139),
    [sym_Nu] = ACTIONS(139),
    [sym_Xi] = ACTIONS(139),
    [sym_Omicron] = ACTIONS(139),
    [sym_Pi] = ACTIONS(139),
    [sym_Rho] = ACTIONS(139),
    [sym_Sigma] = ACTIONS(139),
    [sym_Tau] = ACTIONS(139),
    [sym_Upsilon] = ACTIONS(139),
    [sym_Phi] = ACTIONS(139),
    [sym_Chi] = ACTIONS(139),
    [sym_Psi] = ACTIONS(139),
    [sym_Omega] = ACTIONS(139),
    [sym_infty] = ACTIONS(139),
    [sym_hbar] = ACTIONS(139),
    [sym_ell] = ACTIONS(139),
    [sym_Re] = ACTIONS(139),
    [sym_Im] = ACTIONS(139),
    [sym_aleph] = ACTIONS(139),
    [sym_nabla] = ACTIONS(139),
    [sym_partial] = ACTIONS(139),
    [sym_forall] = ACTIONS(139),
    [sym_exists] = ACTIONS(139),
    [sym_emptyset] = ACTIONS(139),
    [sym_grad] = ACTIONS(139),
    [sym_del] = ACTIONS(139),
    [sym_plus] = ACTIONS(137),
    [sym_minus] = ACTIONS(137),
    [sym_times] = ACTIONS(137),
    [sym_equals] = ACTIONS(137),
    [sym_lt] = ACTIONS(139),
    [sym_gt] = ACTIONS(139),
    [sym_le] = ACTIONS(137),
    [sym_ge] = ACTIONS(137),
    [sym_ne] = ACTIONS(137),
    [sym_approx] = ACTIONS(137),
    [sym_pm] = ACTIONS(139),
    [sym_mp] = ACTIONS(139),
    [sym_sqrt] = ACTIONS(139),
    [sym_text] = ACTIONS(139),
    [sym_bb] = ACTIONS(139),
    [sym_cc] = ACTIONS(139),
    [sym_tt] = ACTIONS(139),
    [sym_fr] = ACTIONS(139),
    [sym_sf] = ACTIONS(139),
    [sym_bold] = ACTIONS(139),
    [sym_cal] = ACTIONS(139),
    [sym_frak] = ACTIONS(139),
    [sym_monospace] = ACTIONS(139),
    [sym_mono] = ACTIONS(139),
    [sym_italic] = ACTIONS(139),
    [sym_frac] = ACTIONS(139),
    [sym_root] = ACTIONS(139),
    [sym_stackrel] = ACTIONS(139),
    [sym_choose] = ACTIONS(139),
    [sym_atop] = ACTIONS(139),
    [sym_over] = ACTIONS(139),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LBRACE_COLON] = ACTIONS(137),
    [anon_sym_LPAREN_COLON] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_COLON_RBRACE] = ACTIONS(137),
    [anon_sym_COLON_RPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym__] = ACTIONS(141),
  },
  [31] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(22),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [32] = {
    [sym_number_symbol] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [sym_if] = ACTIONS(145),
    [sym_otherwise] = ACTIONS(145),
    [sym_else] = ACTIONS(145),
    [sym_alpha] = ACTIONS(145),
    [sym_beta] = ACTIONS(145),
    [sym_gamma] = ACTIONS(145),
    [sym_delta] = ACTIONS(145),
    [sym_epsilon] = ACTIONS(145),
    [sym_zeta] = ACTIONS(145),
    [sym_eta] = ACTIONS(145),
    [sym_theta] = ACTIONS(145),
    [sym_iota] = ACTIONS(145),
    [sym_kappa] = ACTIONS(145),
    [sym_lambda] = ACTIONS(145),
    [sym_mu] = ACTIONS(145),
    [sym_nu] = ACTIONS(145),
    [sym_xi] = ACTIONS(145),
    [sym_omicron] = ACTIONS(145),
    [sym_pi] = ACTIONS(145),
    [sym_rho] = ACTIONS(145),
    [sym_sigma] = ACTIONS(145),
    [sym_tau] = ACTIONS(145),
    [sym_upsilon] = ACTIONS(145),
    [sym_phi] = ACTIONS(145),
    [sym_chi] = ACTIONS(145),
    [sym_psi] = ACTIONS(145),
    [sym_omega] = ACTIONS(145),
    [sym_Alpha] = ACTIONS(145),
    [sym_Beta] = ACTIONS(145),
    [sym_Gamma] = ACTIONS(145),
    [sym_Delta] = ACTIONS(145),
    [sym_Epsilon] = ACTIONS(145),
    [sym_Zeta] = ACTIONS(145),
    [sym_Eta] = ACTIONS(145),
    [sym_Theta] = ACTIONS(145),
    [sym_Iota] = ACTIONS(145),
    [sym_Kappa] = ACTIONS(145),
    [sym_Lambda] = ACTIONS(145),
    [sym_Mu] = ACTIONS(145),
    [sym_Nu] = ACTIONS(145),
    [sym_Xi] = ACTIONS(145),
    [sym_Omicron] = ACTIONS(145),
    [sym_Pi] = ACTIONS(145),
    [sym_Rho] = ACTIONS(145),
    [sym_Sigma] = ACTIONS(145),
    [sym_Tau] = ACTIONS(145),
    [sym_Upsilon] = ACTIONS(145),
    [sym_Phi] = ACTIONS(145),
    [sym_Chi] = ACTIONS(145),
    [sym_Psi] = ACTIONS(145),
    [sym_Omega] = ACTIONS(145),
    [sym_infty] = ACTIONS(145),
    [sym_hbar] = ACTIONS(145),
    [sym_ell] = ACTIONS(145),
    [sym_Re] = ACTIONS(145),
    [sym_Im] = ACTIONS(145),
    [sym_aleph] = ACTIONS(145),
    [sym_nabla] = ACTIONS(145),
    [sym_partial] = ACTIONS(145),
    [sym_forall] = ACTIONS(145),
    [sym_exists] = ACTIONS(145),
    [sym_emptyset] = ACTIONS(145),
    [sym_grad] = ACTIONS(145),
    [sym_del] = ACTIONS(145),
    [sym_plus] = ACTIONS(143),
    [sym_minus] = ACTIONS(143),
    [sym_times] = ACTIONS(143),
    [sym_equals] = ACTIONS(143),
    [sym_lt] = ACTIONS(145),
    [sym_gt] = ACTIONS(145),
    [sym_le] = ACTIONS(143),
    [sym_ge] = ACTIONS(143),
    [sym_ne] = ACTIONS(143),
    [sym_approx] = ACTIONS(143),
    [sym_pm] = ACTIONS(145),
    [sym_mp] = ACTIONS(145),
    [sym_sqrt] = ACTIONS(145),
    [sym_text] = ACTIONS(145),
    [sym_bb] = ACTIONS(145),
    [sym_cc] = ACTIONS(145),
    [sym_tt] = ACTIONS(145),
    [sym_fr] = ACTIONS(145),
    [sym_sf] = ACTIONS(145),
    [sym_bold] = ACTIONS(145),
    [sym_cal] = ACTIONS(145),
    [sym_frak] = ACTIONS(145),
    [sym_monospace] = ACTIONS(145),
    [sym_mono] = ACTIONS(145),
    [sym_italic] = ACTIONS(145),
    [sym_frac] = ACTIONS(145),
    [sym_root] = ACTIONS(145),
    [sym_stackrel] = ACTIONS(145),
    [sym_choose] = ACTIONS(145),
    [sym_atop] = ACTIONS(145),
    [sym_over] = ACTIONS(145),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_COLON] = ACTIONS(143),
    [anon_sym_LPAREN_COLON] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_COLON_RBRACE] = ACTIONS(143),
    [anon_sym_COLON_RPAREN] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(141),
  },
  [33] = {
    [sym_number_symbol] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
    [sym_if] = ACTIONS(149),
    [sym_otherwise] = ACTIONS(149),
    [sym_else] = ACTIONS(149),
    [sym_alpha] = ACTIONS(149),
    [sym_beta] = ACTIONS(149),
    [sym_gamma] = ACTIONS(149),
    [sym_delta] = ACTIONS(149),
    [sym_epsilon] = ACTIONS(149),
    [sym_zeta] = ACTIONS(149),
    [sym_eta] = ACTIONS(149),
    [sym_theta] = ACTIONS(149),
    [sym_iota] = ACTIONS(149),
    [sym_kappa] = ACTIONS(149),
    [sym_lambda] = ACTIONS(149),
    [sym_mu] = ACTIONS(149),
    [sym_nu] = ACTIONS(149),
    [sym_xi] = ACTIONS(149),
    [sym_omicron] = ACTIONS(149),
    [sym_pi] = ACTIONS(149),
    [sym_rho] = ACTIONS(149),
    [sym_sigma] = ACTIONS(149),
    [sym_tau] = ACTIONS(149),
    [sym_upsilon] = ACTIONS(149),
    [sym_phi] = ACTIONS(149),
    [sym_chi] = ACTIONS(149),
    [sym_psi] = ACTIONS(149),
    [sym_omega] = ACTIONS(149),
    [sym_Alpha] = ACTIONS(149),
    [sym_Beta] = ACTIONS(149),
    [sym_Gamma] = ACTIONS(149),
    [sym_Delta] = ACTIONS(149),
    [sym_Epsilon] = ACTIONS(149),
    [sym_Zeta] = ACTIONS(149),
    [sym_Eta] = ACTIONS(149),
    [sym_Theta] = ACTIONS(149),
    [sym_Iota] = ACTIONS(149),
    [sym_Kappa] = ACTIONS(149),
    [sym_Lambda] = ACTIONS(149),
    [sym_Mu] = ACTIONS(149),
    [sym_Nu] = ACTIONS(149),
    [sym_Xi] = ACTIONS(149),
    [sym_Omicron] = ACTIONS(149),
    [sym_Pi] = ACTIONS(149),
    [sym_Rho] = ACTIONS(149),
    [sym_Sigma] = ACTIONS(149),
    [sym_Tau] = ACTIONS(149),
    [sym_Upsilon] = ACTIONS(149),
    [sym_Phi] = ACTIONS(149),
    [sym_Chi] = ACTIONS(149),
    [sym_Psi] = ACTIONS(149),
    [sym_Omega] = ACTIONS(149),
    [sym_infty] = ACTIONS(149),
    [sym_hbar] = ACTIONS(149),
    [sym_ell] = ACTIONS(149),
    [sym_Re] = ACTIONS(149),
    [sym_Im] = ACTIONS(149),
    [sym_aleph] = ACTIONS(149),
    [sym_nabla] = ACTIONS(149),
    [sym_partial] = ACTIONS(149),
    [sym_forall] = ACTIONS(149),
    [sym_exists] = ACTIONS(149),
    [sym_emptyset] = ACTIONS(149),
    [sym_grad] = ACTIONS(149),
    [sym_del] = ACTIONS(149),
    [sym_plus] = ACTIONS(147),
    [sym_minus] = ACTIONS(147),
    [sym_times] = ACTIONS(147),
    [sym_equals] = ACTIONS(147),
    [sym_lt] = ACTIONS(149),
    [sym_gt] = ACTIONS(149),
    [sym_le] = ACTIONS(147),
    [sym_ge] = ACTIONS(147),
    [sym_ne] = ACTIONS(147),
    [sym_approx] = ACTIONS(147),
    [sym_pm] = ACTIONS(149),
    [sym_mp] = ACTIONS(149),
    [sym_sqrt] = ACTIONS(149),
    [sym_text] = ACTIONS(149),
    [sym_bb] = ACTIONS(149),
    [sym_cc] = ACTIONS(149),
    [sym_tt] = ACTIONS(149),
    [sym_fr] = ACTIONS(149),
    [sym_sf] = ACTIONS(149),
    [sym_bold] = ACTIONS(149),
    [sym_cal] = ACTIONS(149),
    [sym_frak] = ACTIONS(149),
    [sym_monospace] = ACTIONS(149),
    [sym_mono] = ACTIONS(149),
    [sym_italic] = ACTIONS(149),
    [sym_frac] = ACTIONS(149),
    [sym_root] = ACTIONS(149),
    [sym_stackrel] = ACTIONS(149),
    [sym_choose] = ACTIONS(149),
    [sym_atop] = ACTIONS(149),
    [sym_over] = ACTIONS(149),
    [sym_factorial] = ACTIONS(99),
    [sym_double_factorial] = ACTIONS(101),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACE_COLON] = ACTIONS(147),
    [anon_sym_LPAREN_COLON] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_COLON_RBRACE] = ACTIONS(147),
    [anon_sym_COLON_RPAREN] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
  },
  [34] = {
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(61),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [35] = {
    [sym_literal_string] = STATE(76),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(76),
    [sym_matrix_expr] = STATE(76),
    [sym_unary_expr] = STATE(76),
    [sym_binary_expr] = STATE(76),
    [sym_factorial_expr] = STATE(76),
    [sym_simple_expression] = STATE(87),
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_if] = ACTIONS(75),
    [sym_otherwise] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [sym_alpha] = ACTIONS(75),
    [sym_beta] = ACTIONS(75),
    [sym_gamma] = ACTIONS(75),
    [sym_delta] = ACTIONS(75),
    [sym_epsilon] = ACTIONS(75),
    [sym_zeta] = ACTIONS(75),
    [sym_eta] = ACTIONS(75),
    [sym_theta] = ACTIONS(75),
    [sym_iota] = ACTIONS(75),
    [sym_kappa] = ACTIONS(75),
    [sym_lambda] = ACTIONS(75),
    [sym_mu] = ACTIONS(75),
    [sym_nu] = ACTIONS(75),
    [sym_xi] = ACTIONS(75),
    [sym_omicron] = ACTIONS(75),
    [sym_pi] = ACTIONS(75),
    [sym_rho] = ACTIONS(75),
    [sym_sigma] = ACTIONS(75),
    [sym_tau] = ACTIONS(75),
    [sym_upsilon] = ACTIONS(75),
    [sym_phi] = ACTIONS(75),
    [sym_chi] = ACTIONS(75),
    [sym_psi] = ACTIONS(75),
    [sym_omega] = ACTIONS(75),
    [sym_Alpha] = ACTIONS(75),
    [sym_Beta] = ACTIONS(75),
    [sym_Gamma] = ACTIONS(75),
    [sym_Delta] = ACTIONS(75),
    [sym_Epsilon] = ACTIONS(75),
    [sym_Zeta] = ACTIONS(75),
    [sym_Eta] = ACTIONS(75),
    [sym_Theta] = ACTIONS(75),
    [sym_Iota] = ACTIONS(75),
    [sym_Kappa] = ACTIONS(75),
    [sym_Lambda] = ACTIONS(75),
    [sym_Mu] = ACTIONS(75),
    [sym_Nu] = ACTIONS(75),
    [sym_Xi] = ACTIONS(75),
    [sym_Omicron] = ACTIONS(75),
    [sym_Pi] = ACTIONS(75),
    [sym_Rho] = ACTIONS(75),
    [sym_Sigma] = ACTIONS(75),
    [sym_Tau] = ACTIONS(75),
    [sym_Upsilon] = ACTIONS(75),
    [sym_Phi] = ACTIONS(75),
    [sym_Chi] = ACTIONS(75),
    [sym_Psi] = ACTIONS(75),
    [sym_Omega] = ACTIONS(75),
    [sym_infty] = ACTIONS(75),
    [sym_hbar] = ACTIONS(75),
    [sym_ell] = ACTIONS(75),
    [sym_Re] = ACTIONS(75),
    [sym_Im] = ACTIONS(75),
    [sym_aleph] = ACTIONS(75),
    [sym_nabla] = ACTIONS(75),
    [sym_partial] = ACTIONS(75),
    [sym_forall] = ACTIONS(75),
    [sym_exists] = ACTIONS(75),
    [sym_emptyset] = ACTIONS(75),
    [sym_grad] = ACTIONS(75),
    [sym_del] = ACTIONS(75),
    [sym_plus] = ACTIONS(73),
    [sym_minus] = ACTIONS(73),
    [sym_times] = ACTIONS(73),
    [sym_equals] = ACTIONS(73),
    [sym_lt] = ACTIONS(75),
    [sym_gt] = ACTIONS(75),
    [sym_le] = ACTIONS(73),
    [sym_ge] = ACTIONS(73),
    [sym_ne] = ACTIONS(73),
    [sym_approx] = ACTIONS(73),
    [sym_pm] = ACTIONS(75),
    [sym_mp] = ACTIONS(75),
    [sym_sqrt] = ACTIONS(77),
    [sym_text] = ACTIONS(77),
    [sym_bb] = ACTIONS(77),
    [sym_cc] = ACTIONS(77),
    [sym_tt] = ACTIONS(77),
    [sym_fr] = ACTIONS(77),
    [sym_sf] = ACTIONS(77),
    [sym_bold] = ACTIONS(77),
    [sym_cal] = ACTIONS(77),
    [sym_frak] = ACTIONS(77),
    [sym_monospace] = ACTIONS(77),
    [sym_mono] = ACTIONS(77),
    [sym_italic] = ACTIONS(77),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [36] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(30),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [37] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(32),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [38] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(31),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [39] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(33),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [40] = {
    [sym_literal_string] = STATE(76),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(76),
    [sym_matrix_expr] = STATE(76),
    [sym_unary_expr] = STATE(76),
    [sym_binary_expr] = STATE(76),
    [sym_factorial_expr] = STATE(76),
    [sym_simple_expression] = STATE(79),
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_if] = ACTIONS(75),
    [sym_otherwise] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [sym_alpha] = ACTIONS(75),
    [sym_beta] = ACTIONS(75),
    [sym_gamma] = ACTIONS(75),
    [sym_delta] = ACTIONS(75),
    [sym_epsilon] = ACTIONS(75),
    [sym_zeta] = ACTIONS(75),
    [sym_eta] = ACTIONS(75),
    [sym_theta] = ACTIONS(75),
    [sym_iota] = ACTIONS(75),
    [sym_kappa] = ACTIONS(75),
    [sym_lambda] = ACTIONS(75),
    [sym_mu] = ACTIONS(75),
    [sym_nu] = ACTIONS(75),
    [sym_xi] = ACTIONS(75),
    [sym_omicron] = ACTIONS(75),
    [sym_pi] = ACTIONS(75),
    [sym_rho] = ACTIONS(75),
    [sym_sigma] = ACTIONS(75),
    [sym_tau] = ACTIONS(75),
    [sym_upsilon] = ACTIONS(75),
    [sym_phi] = ACTIONS(75),
    [sym_chi] = ACTIONS(75),
    [sym_psi] = ACTIONS(75),
    [sym_omega] = ACTIONS(75),
    [sym_Alpha] = ACTIONS(75),
    [sym_Beta] = ACTIONS(75),
    [sym_Gamma] = ACTIONS(75),
    [sym_Delta] = ACTIONS(75),
    [sym_Epsilon] = ACTIONS(75),
    [sym_Zeta] = ACTIONS(75),
    [sym_Eta] = ACTIONS(75),
    [sym_Theta] = ACTIONS(75),
    [sym_Iota] = ACTIONS(75),
    [sym_Kappa] = ACTIONS(75),
    [sym_Lambda] = ACTIONS(75),
    [sym_Mu] = ACTIONS(75),
    [sym_Nu] = ACTIONS(75),
    [sym_Xi] = ACTIONS(75),
    [sym_Omicron] = ACTIONS(75),
    [sym_Pi] = ACTIONS(75),
    [sym_Rho] = ACTIONS(75),
    [sym_Sigma] = ACTIONS(75),
    [sym_Tau] = ACTIONS(75),
    [sym_Upsilon] = ACTIONS(75),
    [sym_Phi] = ACTIONS(75),
    [sym_Chi] = ACTIONS(75),
    [sym_Psi] = ACTIONS(75),
    [sym_Omega] = ACTIONS(75),
    [sym_infty] = ACTIONS(75),
    [sym_hbar] = ACTIONS(75),
    [sym_ell] = ACTIONS(75),
    [sym_Re] = ACTIONS(75),
    [sym_Im] = ACTIONS(75),
    [sym_aleph] = ACTIONS(75),
    [sym_nabla] = ACTIONS(75),
    [sym_partial] = ACTIONS(75),
    [sym_forall] = ACTIONS(75),
    [sym_exists] = ACTIONS(75),
    [sym_emptyset] = ACTIONS(75),
    [sym_grad] = ACTIONS(75),
    [sym_del] = ACTIONS(75),
    [sym_plus] = ACTIONS(73),
    [sym_minus] = ACTIONS(73),
    [sym_times] = ACTIONS(73),
    [sym_equals] = ACTIONS(73),
    [sym_lt] = ACTIONS(75),
    [sym_gt] = ACTIONS(75),
    [sym_le] = ACTIONS(73),
    [sym_ge] = ACTIONS(73),
    [sym_ne] = ACTIONS(73),
    [sym_approx] = ACTIONS(73),
    [sym_pm] = ACTIONS(75),
    [sym_mp] = ACTIONS(75),
    [sym_sqrt] = ACTIONS(77),
    [sym_text] = ACTIONS(77),
    [sym_bb] = ACTIONS(77),
    [sym_cc] = ACTIONS(77),
    [sym_tt] = ACTIONS(77),
    [sym_fr] = ACTIONS(77),
    [sym_sf] = ACTIONS(77),
    [sym_bold] = ACTIONS(77),
    [sym_cal] = ACTIONS(77),
    [sym_frak] = ACTIONS(77),
    [sym_monospace] = ACTIONS(77),
    [sym_mono] = ACTIONS(77),
    [sym_italic] = ACTIONS(77),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [41] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(29),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [42] = {
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(62),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [43] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(19),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [44] = {
    [sym_literal_string] = STATE(76),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(76),
    [sym_matrix_expr] = STATE(76),
    [sym_unary_expr] = STATE(76),
    [sym_binary_expr] = STATE(76),
    [sym_factorial_expr] = STATE(76),
    [sym_simple_expression] = STATE(69),
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_if] = ACTIONS(75),
    [sym_otherwise] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [sym_alpha] = ACTIONS(75),
    [sym_beta] = ACTIONS(75),
    [sym_gamma] = ACTIONS(75),
    [sym_delta] = ACTIONS(75),
    [sym_epsilon] = ACTIONS(75),
    [sym_zeta] = ACTIONS(75),
    [sym_eta] = ACTIONS(75),
    [sym_theta] = ACTIONS(75),
    [sym_iota] = ACTIONS(75),
    [sym_kappa] = ACTIONS(75),
    [sym_lambda] = ACTIONS(75),
    [sym_mu] = ACTIONS(75),
    [sym_nu] = ACTIONS(75),
    [sym_xi] = ACTIONS(75),
    [sym_omicron] = ACTIONS(75),
    [sym_pi] = ACTIONS(75),
    [sym_rho] = ACTIONS(75),
    [sym_sigma] = ACTIONS(75),
    [sym_tau] = ACTIONS(75),
    [sym_upsilon] = ACTIONS(75),
    [sym_phi] = ACTIONS(75),
    [sym_chi] = ACTIONS(75),
    [sym_psi] = ACTIONS(75),
    [sym_omega] = ACTIONS(75),
    [sym_Alpha] = ACTIONS(75),
    [sym_Beta] = ACTIONS(75),
    [sym_Gamma] = ACTIONS(75),
    [sym_Delta] = ACTIONS(75),
    [sym_Epsilon] = ACTIONS(75),
    [sym_Zeta] = ACTIONS(75),
    [sym_Eta] = ACTIONS(75),
    [sym_Theta] = ACTIONS(75),
    [sym_Iota] = ACTIONS(75),
    [sym_Kappa] = ACTIONS(75),
    [sym_Lambda] = ACTIONS(75),
    [sym_Mu] = ACTIONS(75),
    [sym_Nu] = ACTIONS(75),
    [sym_Xi] = ACTIONS(75),
    [sym_Omicron] = ACTIONS(75),
    [sym_Pi] = ACTIONS(75),
    [sym_Rho] = ACTIONS(75),
    [sym_Sigma] = ACTIONS(75),
    [sym_Tau] = ACTIONS(75),
    [sym_Upsilon] = ACTIONS(75),
    [sym_Phi] = ACTIONS(75),
    [sym_Chi] = ACTIONS(75),
    [sym_Psi] = ACTIONS(75),
    [sym_Omega] = ACTIONS(75),
    [sym_infty] = ACTIONS(75),
    [sym_hbar] = ACTIONS(75),
    [sym_ell] = ACTIONS(75),
    [sym_Re] = ACTIONS(75),
    [sym_Im] = ACTIONS(75),
    [sym_aleph] = ACTIONS(75),
    [sym_nabla] = ACTIONS(75),
    [sym_partial] = ACTIONS(75),
    [sym_forall] = ACTIONS(75),
    [sym_exists] = ACTIONS(75),
    [sym_emptyset] = ACTIONS(75),
    [sym_grad] = ACTIONS(75),
    [sym_del] = ACTIONS(75),
    [sym_plus] = ACTIONS(73),
    [sym_minus] = ACTIONS(73),
    [sym_times] = ACTIONS(73),
    [sym_equals] = ACTIONS(73),
    [sym_lt] = ACTIONS(75),
    [sym_gt] = ACTIONS(75),
    [sym_le] = ACTIONS(73),
    [sym_ge] = ACTIONS(73),
    [sym_ne] = ACTIONS(73),
    [sym_approx] = ACTIONS(73),
    [sym_pm] = ACTIONS(75),
    [sym_mp] = ACTIONS(75),
    [sym_sqrt] = ACTIONS(77),
    [sym_text] = ACTIONS(77),
    [sym_bb] = ACTIONS(77),
    [sym_cc] = ACTIONS(77),
    [sym_tt] = ACTIONS(77),
    [sym_fr] = ACTIONS(77),
    [sym_sf] = ACTIONS(77),
    [sym_bold] = ACTIONS(77),
    [sym_cal] = ACTIONS(77),
    [sym_frak] = ACTIONS(77),
    [sym_monospace] = ACTIONS(77),
    [sym_mono] = ACTIONS(77),
    [sym_italic] = ACTIONS(77),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [45] = {
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(63),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [46] = {
    [sym_literal_string] = STATE(54),
    [sym_left_bracket] = STATE(9),
    [sym_bracket_expr] = STATE(54),
    [sym_matrix_expr] = STATE(54),
    [sym_unary_expr] = STATE(54),
    [sym_binary_expr] = STATE(54),
    [sym_factorial_expr] = STATE(54),
    [sym_simple_expression] = STATE(52),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_if] = ACTIONS(9),
    [sym_otherwise] = ACTIONS(9),
    [sym_else] = ACTIONS(9),
    [sym_alpha] = ACTIONS(9),
    [sym_beta] = ACTIONS(9),
    [sym_gamma] = ACTIONS(9),
    [sym_delta] = ACTIONS(9),
    [sym_epsilon] = ACTIONS(9),
    [sym_zeta] = ACTIONS(9),
    [sym_eta] = ACTIONS(9),
    [sym_theta] = ACTIONS(9),
    [sym_iota] = ACTIONS(9),
    [sym_kappa] = ACTIONS(9),
    [sym_lambda] = ACTIONS(9),
    [sym_mu] = ACTIONS(9),
    [sym_nu] = ACTIONS(9),
    [sym_xi] = ACTIONS(9),
    [sym_omicron] = ACTIONS(9),
    [sym_pi] = ACTIONS(9),
    [sym_rho] = ACTIONS(9),
    [sym_sigma] = ACTIONS(9),
    [sym_tau] = ACTIONS(9),
    [sym_upsilon] = ACTIONS(9),
    [sym_phi] = ACTIONS(9),
    [sym_chi] = ACTIONS(9),
    [sym_psi] = ACTIONS(9),
    [sym_omega] = ACTIONS(9),
    [sym_Alpha] = ACTIONS(9),
    [sym_Beta] = ACTIONS(9),
    [sym_Gamma] = ACTIONS(9),
    [sym_Delta] = ACTIONS(9),
    [sym_Epsilon] = ACTIONS(9),
    [sym_Zeta] = ACTIONS(9),
    [sym_Eta] = ACTIONS(9),
    [sym_Theta] = ACTIONS(9),
    [sym_Iota] = ACTIONS(9),
    [sym_Kappa] = ACTIONS(9),
    [sym_Lambda] = ACTIONS(9),
    [sym_Mu] = ACTIONS(9),
    [sym_Nu] = ACTIONS(9),
    [sym_Xi] = ACTIONS(9),
    [sym_Omicron] = ACTIONS(9),
    [sym_Pi] = ACTIONS(9),
    [sym_Rho] = ACTIONS(9),
    [sym_Sigma] = ACTIONS(9),
    [sym_Tau] = ACTIONS(9),
    [sym_Upsilon] = ACTIONS(9),
    [sym_Phi] = ACTIONS(9),
    [sym_Chi] = ACTIONS(9),
    [sym_Psi] = ACTIONS(9),
    [sym_Omega] = ACTIONS(9),
    [sym_infty] = ACTIONS(9),
    [sym_hbar] = ACTIONS(9),
    [sym_ell] = ACTIONS(9),
    [sym_Re] = ACTIONS(9),
    [sym_Im] = ACTIONS(9),
    [sym_aleph] = ACTIONS(9),
    [sym_nabla] = ACTIONS(9),
    [sym_partial] = ACTIONS(9),
    [sym_forall] = ACTIONS(9),
    [sym_exists] = ACTIONS(9),
    [sym_emptyset] = ACTIONS(9),
    [sym_grad] = ACTIONS(9),
    [sym_del] = ACTIONS(9),
    [sym_plus] = ACTIONS(7),
    [sym_minus] = ACTIONS(7),
    [sym_times] = ACTIONS(7),
    [sym_equals] = ACTIONS(7),
    [sym_lt] = ACTIONS(9),
    [sym_gt] = ACTIONS(9),
    [sym_le] = ACTIONS(7),
    [sym_ge] = ACTIONS(7),
    [sym_ne] = ACTIONS(7),
    [sym_approx] = ACTIONS(7),
    [sym_pm] = ACTIONS(9),
    [sym_mp] = ACTIONS(9),
    [sym_sqrt] = ACTIONS(11),
    [sym_text] = ACTIONS(11),
    [sym_bb] = ACTIONS(11),
    [sym_cc] = ACTIONS(11),
    [sym_tt] = ACTIONS(11),
    [sym_fr] = ACTIONS(11),
    [sym_sf] = ACTIONS(11),
    [sym_bold] = ACTIONS(11),
    [sym_cal] = ACTIONS(11),
    [sym_frak] = ACTIONS(11),
    [sym_monospace] = ACTIONS(11),
    [sym_mono] = ACTIONS(11),
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [47] = {
    [sym_literal_string] = STATE(17),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(17),
    [sym_matrix_expr] = STATE(17),
    [sym_unary_expr] = STATE(17),
    [sym_binary_expr] = STATE(17),
    [sym_factorial_expr] = STATE(17),
    [sym_simple_expression] = STATE(28),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [sym_if] = ACTIONS(25),
    [sym_otherwise] = ACTIONS(25),
    [sym_else] = ACTIONS(25),
    [sym_alpha] = ACTIONS(25),
    [sym_beta] = ACTIONS(25),
    [sym_gamma] = ACTIONS(25),
    [sym_delta] = ACTIONS(25),
    [sym_epsilon] = ACTIONS(25),
    [sym_zeta] = ACTIONS(25),
    [sym_eta] = ACTIONS(25),
    [sym_theta] = ACTIONS(25),
    [sym_iota] = ACTIONS(25),
    [sym_kappa] = ACTIONS(25),
    [sym_lambda] = ACTIONS(25),
    [sym_mu] = ACTIONS(25),
    [sym_nu] = ACTIONS(25),
    [sym_xi] = ACTIONS(25),
    [sym_omicron] = ACTIONS(25),
    [sym_pi] = ACTIONS(25),
    [sym_rho] = ACTIONS(25),
    [sym_sigma] = ACTIONS(25),
    [sym_tau] = ACTIONS(25),
    [sym_upsilon] = ACTIONS(25),
    [sym_phi] = ACTIONS(25),
    [sym_chi] = ACTIONS(25),
    [sym_psi] = ACTIONS(25),
    [sym_omega] = ACTIONS(25),
    [sym_Alpha] = ACTIONS(25),
    [sym_Beta] = ACTIONS(25),
    [sym_Gamma] = ACTIONS(25),
    [sym_Delta] = ACTIONS(25),
    [sym_Epsilon] = ACTIONS(25),
    [sym_Zeta] = ACTIONS(25),
    [sym_Eta] = ACTIONS(25),
    [sym_Theta] = ACTIONS(25),
    [sym_Iota] = ACTIONS(25),
    [sym_Kappa] = ACTIONS(25),
    [sym_Lambda] = ACTIONS(25),
    [sym_Mu] = ACTIONS(25),
    [sym_Nu] = ACTIONS(25),
    [sym_Xi] = ACTIONS(25),
    [sym_Omicron] = ACTIONS(25),
    [sym_Pi] = ACTIONS(25),
    [sym_Rho] = ACTIONS(25),
    [sym_Sigma] = ACTIONS(25),
    [sym_Tau] = ACTIONS(25),
    [sym_Upsilon] = ACTIONS(25),
    [sym_Phi] = ACTIONS(25),
    [sym_Chi] = ACTIONS(25),
    [sym_Psi] = ACTIONS(25),
    [sym_Omega] = ACTIONS(25),
    [sym_infty] = ACTIONS(25),
    [sym_hbar] = ACTIONS(25),
    [sym_ell] = ACTIONS(25),
    [sym_Re] = ACTIONS(25),
    [sym_Im] = ACTIONS(25),
    [sym_aleph] = ACTIONS(25),
    [sym_nabla] = ACTIONS(25),
    [sym_partial] = ACTIONS(25),
    [sym_forall] = ACTIONS(25),
    [sym_exists] = ACTIONS(25),
    [sym_emptyset] = ACTIONS(25),
    [sym_grad] = ACTIONS(25),
    [sym_del] = ACTIONS(25),
    [sym_plus] = ACTIONS(23),
    [sym_minus] = ACTIONS(23),
    [sym_times] = ACTIONS(23),
    [sym_equals] = ACTIONS(23),
    [sym_lt] = ACTIONS(25),
    [sym_gt] = ACTIONS(25),
    [sym_le] = ACTIONS(23),
    [sym_ge] = ACTIONS(23),
    [sym_ne] = ACTIONS(23),
    [sym_approx] = ACTIONS(23),
    [sym_pm] = ACTIONS(25),
    [sym_mp] = ACTIONS(25),
    [sym_sqrt] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
    [sym_bb] = ACTIONS(27),
    [sym_cc] = ACTIONS(27),
    [sym_tt] = ACTIONS(27),
    [sym_fr] = ACTIONS(27),
    [sym_sf] = ACTIONS(27),
    [sym_bold] = ACTIONS(27),
    [sym_cal] = ACTIONS(27),
    [sym_frak] = ACTIONS(27),
    [sym_monospace] = ACTIONS(27),
    [sym_mono] = ACTIONS(27),
    [sym_italic] = ACTIONS(27),
    [sym_frac] = ACTIONS(29),
    [sym_root] = ACTIONS(29),
    [sym_stackrel] = ACTIONS(29),
    [sym_choose] = ACTIONS(29),
    [sym_atop] = ACTIONS(29),
    [sym_over] = ACTIONS(29),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [48] = {
    [sym_literal_string] = STATE(76),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(76),
    [sym_matrix_expr] = STATE(76),
    [sym_unary_expr] = STATE(76),
    [sym_binary_expr] = STATE(76),
    [sym_factorial_expr] = STATE(76),
    [sym_simple_expression] = STATE(80),
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [sym_if] = ACTIONS(75),
    [sym_otherwise] = ACTIONS(75),
    [sym_else] = ACTIONS(75),
    [sym_alpha] = ACTIONS(75),
    [sym_beta] = ACTIONS(75),
    [sym_gamma] = ACTIONS(75),
    [sym_delta] = ACTIONS(75),
    [sym_epsilon] = ACTIONS(75),
    [sym_zeta] = ACTIONS(75),
    [sym_eta] = ACTIONS(75),
    [sym_theta] = ACTIONS(75),
    [sym_iota] = ACTIONS(75),
    [sym_kappa] = ACTIONS(75),
    [sym_lambda] = ACTIONS(75),
    [sym_mu] = ACTIONS(75),
    [sym_nu] = ACTIONS(75),
    [sym_xi] = ACTIONS(75),
    [sym_omicron] = ACTIONS(75),
    [sym_pi] = ACTIONS(75),
    [sym_rho] = ACTIONS(75),
    [sym_sigma] = ACTIONS(75),
    [sym_tau] = ACTIONS(75),
    [sym_upsilon] = ACTIONS(75),
    [sym_phi] = ACTIONS(75),
    [sym_chi] = ACTIONS(75),
    [sym_psi] = ACTIONS(75),
    [sym_omega] = ACTIONS(75),
    [sym_Alpha] = ACTIONS(75),
    [sym_Beta] = ACTIONS(75),
    [sym_Gamma] = ACTIONS(75),
    [sym_Delta] = ACTIONS(75),
    [sym_Epsilon] = ACTIONS(75),
    [sym_Zeta] = ACTIONS(75),
    [sym_Eta] = ACTIONS(75),
    [sym_Theta] = ACTIONS(75),
    [sym_Iota] = ACTIONS(75),
    [sym_Kappa] = ACTIONS(75),
    [sym_Lambda] = ACTIONS(75),
    [sym_Mu] = ACTIONS(75),
    [sym_Nu] = ACTIONS(75),
    [sym_Xi] = ACTIONS(75),
    [sym_Omicron] = ACTIONS(75),
    [sym_Pi] = ACTIONS(75),
    [sym_Rho] = ACTIONS(75),
    [sym_Sigma] = ACTIONS(75),
    [sym_Tau] = ACTIONS(75),
    [sym_Upsilon] = ACTIONS(75),
    [sym_Phi] = ACTIONS(75),
    [sym_Chi] = ACTIONS(75),
    [sym_Psi] = ACTIONS(75),
    [sym_Omega] = ACTIONS(75),
    [sym_infty] = ACTIONS(75),
    [sym_hbar] = ACTIONS(75),
    [sym_ell] = ACTIONS(75),
    [sym_Re] = ACTIONS(75),
    [sym_Im] = ACTIONS(75),
    [sym_aleph] = ACTIONS(75),
    [sym_nabla] = ACTIONS(75),
    [sym_partial] = ACTIONS(75),
    [sym_forall] = ACTIONS(75),
    [sym_exists] = ACTIONS(75),
    [sym_emptyset] = ACTIONS(75),
    [sym_grad] = ACTIONS(75),
    [sym_del] = ACTIONS(75),
    [sym_plus] = ACTIONS(73),
    [sym_minus] = ACTIONS(73),
    [sym_times] = ACTIONS(73),
    [sym_equals] = ACTIONS(73),
    [sym_lt] = ACTIONS(75),
    [sym_gt] = ACTIONS(75),
    [sym_le] = ACTIONS(73),
    [sym_ge] = ACTIONS(73),
    [sym_ne] = ACTIONS(73),
    [sym_approx] = ACTIONS(73),
    [sym_pm] = ACTIONS(75),
    [sym_mp] = ACTIONS(75),
    [sym_sqrt] = ACTIONS(77),
    [sym_text] = ACTIONS(77),
    [sym_bb] = ACTIONS(77),
    [sym_cc] = ACTIONS(77),
    [sym_tt] = ACTIONS(77),
    [sym_fr] = ACTIONS(77),
    [sym_sf] = ACTIONS(77),
    [sym_bold] = ACTIONS(77),
    [sym_cal] = ACTIONS(77),
    [sym_frak] = ACTIONS(77),
    [sym_monospace] = ACTIONS(77),
    [sym_mono] = ACTIONS(77),
    [sym_italic] = ACTIONS(77),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_number_symbol] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [sym_if] = ACTIONS(131),
    [sym_otherwise] = ACTIONS(131),
    [sym_else] = ACTIONS(131),
    [sym_alpha] = ACTIONS(131),
    [sym_beta] = ACTIONS(131),
    [sym_gamma] = ACTIONS(131),
    [sym_delta] = ACTIONS(131),
    [sym_epsilon] = ACTIONS(131),
    [sym_zeta] = ACTIONS(131),
    [sym_eta] = ACTIONS(131),
    [sym_theta] = ACTIONS(131),
    [sym_iota] = ACTIONS(131),
    [sym_kappa] = ACTIONS(131),
    [sym_lambda] = ACTIONS(131),
    [sym_mu] = ACTIONS(131),
    [sym_nu] = ACTIONS(131),
    [sym_xi] = ACTIONS(131),
    [sym_omicron] = ACTIONS(131),
    [sym_pi] = ACTIONS(131),
    [sym_rho] = ACTIONS(131),
    [sym_sigma] = ACTIONS(131),
    [sym_tau] = ACTIONS(131),
    [sym_upsilon] = ACTIONS(131),
    [sym_phi] = ACTIONS(131),
    [sym_chi] = ACTIONS(131),
    [sym_psi] = ACTIONS(131),
    [sym_omega] = ACTIONS(131),
    [sym_Alpha] = ACTIONS(131),
    [sym_Beta] = ACTIONS(131),
    [sym_Gamma] = ACTIONS(131),
    [sym_Delta] = ACTIONS(131),
    [sym_Epsilon] = ACTIONS(131),
    [sym_Zeta] = ACTIONS(131),
    [sym_Eta] = ACTIONS(131),
    [sym_Theta] = ACTIONS(131),
    [sym_Iota] = ACTIONS(131),
    [sym_Kappa] = ACTIONS(131),
    [sym_Lambda] = ACTIONS(131),
    [sym_Mu] = ACTIONS(131),
    [sym_Nu] = ACTIONS(131),
    [sym_Xi] = ACTIONS(131),
    [sym_Omicron] = ACTIONS(131),
    [sym_Pi] = ACTIONS(131),
    [sym_Rho] = ACTIONS(131),
    [sym_Sigma] = ACTIONS(131),
    [sym_Tau] = ACTIONS(131),
    [sym_Upsilon] = ACTIONS(131),
    [sym_Phi] = ACTIONS(131),
    [sym_Chi] = ACTIONS(131),
    [sym_Psi] = ACTIONS(131),
    [sym_Omega] = ACTIONS(131),
    [sym_infty] = ACTIONS(131),
    [sym_hbar] = ACTIONS(131),
    [sym_ell] = ACTIONS(131),
    [sym_Re] = ACTIONS(131),
    [sym_Im] = ACTIONS(131),
    [sym_aleph] = ACTIONS(131),
    [sym_nabla] = ACTIONS(131),
    [sym_partial] = ACTIONS(131),
    [sym_forall] = ACTIONS(131),
    [sym_exists] = ACTIONS(131),
    [sym_emptyset] = ACTIONS(131),
    [sym_grad] = ACTIONS(131),
    [sym_del] = ACTIONS(131),
    [sym_plus] = ACTIONS(129),
    [sym_minus] = ACTIONS(129),
    [sym_times] = ACTIONS(129),
    [sym_equals] = ACTIONS(129),
    [sym_lt] = ACTIONS(131),
    [sym_gt] = ACTIONS(131),
    [sym_le] = ACTIONS(129),
    [sym_ge] = ACTIONS(129),
    [sym_ne] = ACTIONS(129),
    [sym_approx] = ACTIONS(129),
    [sym_pm] = ACTIONS(131),
    [sym_mp] = ACTIONS(131),
    [sym_sqrt] = ACTIONS(131),
    [sym_text] = ACTIONS(131),
    [sym_bb] = ACTIONS(131),
    [sym_cc] = ACTIONS(131),
    [sym_tt] = ACTIONS(131),
    [sym_fr] = ACTIONS(131),
    [sym_sf] = ACTIONS(131),
    [sym_bold] = ACTIONS(131),
    [sym_cal] = ACTIONS(131),
    [sym_frak] = ACTIONS(131),
    [sym_monospace] = ACTIONS(131),
    [sym_mono] = ACTIONS(131),
    [sym_italic] = ACTIONS(131),
    [sym_frac] = ACTIONS(131),
    [sym_root] = ACTIONS(131),
    [sym_stackrel] = ACTIONS(131),
    [sym_choose] = ACTIONS(131),
    [sym_atop] = ACTIONS(131),
    [sym_over] = ACTIONS(131),
    [sym_factorial] = ACTIONS(131),
    [sym_double_factorial] = ACTIONS(129),
    [sym_multi_linebreak] = ACTIONS(131),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_LBRACE_COLON] = ACTIONS(129),
    [anon_sym_LPAREN_COLON] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym__] = ACTIONS(129),
    [anon_sym_CARET] = ACTIONS(129),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_number_symbol] = ACTIONS(87),
    [sym_identifier] = ACTIONS(89),
    [sym_if] = ACTIONS(89),
    [sym_otherwise] = ACTIONS(89),
    [sym_else] = ACTIONS(89),
    [sym_alpha] = ACTIONS(89),
    [sym_beta] = ACTIONS(89),
    [sym_gamma] = ACTIONS(89),
    [sym_delta] = ACTIONS(89),
    [sym_epsilon] = ACTIONS(89),
    [sym_zeta] = ACTIONS(89),
    [sym_eta] = ACTIONS(89),
    [sym_theta] = ACTIONS(89),
    [sym_iota] = ACTIONS(89),
    [sym_kappa] = ACTIONS(89),
    [sym_lambda] = ACTIONS(89),
    [sym_mu] = ACTIONS(89),
    [sym_nu] = ACTIONS(89),
    [sym_xi] = ACTIONS(89),
    [sym_omicron] = ACTIONS(89),
    [sym_pi] = ACTIONS(89),
    [sym_rho] = ACTIONS(89),
    [sym_sigma] = ACTIONS(89),
    [sym_tau] = ACTIONS(89),
    [sym_upsilon] = ACTIONS(89),
    [sym_phi] = ACTIONS(89),
    [sym_chi] = ACTIONS(89),
    [sym_psi] = ACTIONS(89),
    [sym_omega] = ACTIONS(89),
    [sym_Alpha] = ACTIONS(89),
    [sym_Beta] = ACTIONS(89),
    [sym_Gamma] = ACTIONS(89),
    [sym_Delta] = ACTIONS(89),
    [sym_Epsilon] = ACTIONS(89),
    [sym_Zeta] = ACTIONS(89),
    [sym_Eta] = ACTIONS(89),
    [sym_Theta] = ACTIONS(89),
    [sym_Iota] = ACTIONS(89),
    [sym_Kappa] = ACTIONS(89),
    [sym_Lambda] = ACTIONS(89),
    [sym_Mu] = ACTIONS(89),
    [sym_Nu] = ACTIONS(89),
    [sym_Xi] = ACTIONS(89),
    [sym_Omicron] = ACTIONS(89),
    [sym_Pi] = ACTIONS(89),
    [sym_Rho] = ACTIONS(89),
    [sym_Sigma] = ACTIONS(89),
    [sym_Tau] = ACTIONS(89),
    [sym_Upsilon] = ACTIONS(89),
    [sym_Phi] = ACTIONS(89),
    [sym_Chi] = ACTIONS(89),
    [sym_Psi] = ACTIONS(89),
    [sym_Omega] = ACTIONS(89),
    [sym_infty] = ACTIONS(89),
    [sym_hbar] = ACTIONS(89),
    [sym_ell] = ACTIONS(89),
    [sym_Re] = ACTIONS(89),
    [sym_Im] = ACTIONS(89),
    [sym_aleph] = ACTIONS(89),
    [sym_nabla] = ACTIONS(89),
    [sym_partial] = ACTIONS(89),
    [sym_forall] = ACTIONS(89),
    [sym_exists] = ACTIONS(89),
    [sym_emptyset] = ACTIONS(89),
    [sym_grad] = ACTIONS(89),
    [sym_del] = ACTIONS(89),
    [sym_plus] = ACTIONS(87),
    [sym_minus] = ACTIONS(87),
    [sym_times] = ACTIONS(87),
    [sym_equals] = ACTIONS(87),
    [sym_lt] = ACTIONS(89),
    [sym_gt] = ACTIONS(89),
    [sym_le] = ACTIONS(87),
    [sym_ge] = ACTIONS(87),
    [sym_ne] = ACTIONS(87),
    [sym_approx] = ACTIONS(87),
    [sym_pm] = ACTIONS(89),
    [sym_mp] = ACTIONS(89),
    [sym_sqrt] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
    [sym_bb] = ACTIONS(89),
    [sym_cc] = ACTIONS(89),
    [sym_tt] = ACTIONS(89),
    [sym_fr] = ACTIONS(89),
    [sym_sf] = ACTIONS(89),
    [sym_bold] = ACTIONS(89),
    [sym_cal] = ACTIONS(89),
    [sym_frak] = ACTIONS(89),
    [sym_monospace] = ACTIONS(89),
    [sym_mono] = ACTIONS(89),
    [sym_italic] = ACTIONS(89),
    [sym_frac] = ACTIONS(89),
    [sym_root] = ACTIONS(89),
    [sym_stackrel] = ACTIONS(89),
    [sym_choose] = ACTIONS(89),
    [sym_atop] = ACTIONS(89),
    [sym_over] = ACTIONS(89),
    [sym_factorial] = ACTIONS(89),
    [sym_double_factorial] = ACTIONS(87),
    [sym_multi_linebreak] = ACTIONS(89),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACE_COLON] = ACTIONS(87),
    [anon_sym_LPAREN_COLON] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_number_symbol] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [sym_if] = ACTIONS(97),
    [sym_otherwise] = ACTIONS(97),
    [sym_else] = ACTIONS(97),
    [sym_alpha] = ACTIONS(97),
    [sym_beta] = ACTIONS(97),
    [sym_gamma] = ACTIONS(97),
    [sym_delta] = ACTIONS(97),
    [sym_epsilon] = ACTIONS(97),
    [sym_zeta] = ACTIONS(97),
    [sym_eta] = ACTIONS(97),
    [sym_theta] = ACTIONS(97),
    [sym_iota] = ACTIONS(97),
    [sym_kappa] = ACTIONS(97),
    [sym_lambda] = ACTIONS(97),
    [sym_mu] = ACTIONS(97),
    [sym_nu] = ACTIONS(97),
    [sym_xi] = ACTIONS(97),
    [sym_omicron] = ACTIONS(97),
    [sym_pi] = ACTIONS(97),
    [sym_rho] = ACTIONS(97),
    [sym_sigma] = ACTIONS(97),
    [sym_tau] = ACTIONS(97),
    [sym_upsilon] = ACTIONS(97),
    [sym_phi] = ACTIONS(97),
    [sym_chi] = ACTIONS(97),
    [sym_psi] = ACTIONS(97),
    [sym_omega] = ACTIONS(97),
    [sym_Alpha] = ACTIONS(97),
    [sym_Beta] = ACTIONS(97),
    [sym_Gamma] = ACTIONS(97),
    [sym_Delta] = ACTIONS(97),
    [sym_Epsilon] = ACTIONS(97),
    [sym_Zeta] = ACTIONS(97),
    [sym_Eta] = ACTIONS(97),
    [sym_Theta] = ACTIONS(97),
    [sym_Iota] = ACTIONS(97),
    [sym_Kappa] = ACTIONS(97),
    [sym_Lambda] = ACTIONS(97),
    [sym_Mu] = ACTIONS(97),
    [sym_Nu] = ACTIONS(97),
    [sym_Xi] = ACTIONS(97),
    [sym_Omicron] = ACTIONS(97),
    [sym_Pi] = ACTIONS(97),
    [sym_Rho] = ACTIONS(97),
    [sym_Sigma] = ACTIONS(97),
    [sym_Tau] = ACTIONS(97),
    [sym_Upsilon] = ACTIONS(97),
    [sym_Phi] = ACTIONS(97),
    [sym_Chi] = ACTIONS(97),
    [sym_Psi] = ACTIONS(97),
    [sym_Omega] = ACTIONS(97),
    [sym_infty] = ACTIONS(97),
    [sym_hbar] = ACTIONS(97),
    [sym_ell] = ACTIONS(97),
    [sym_Re] = ACTIONS(97),
    [sym_Im] = ACTIONS(97),
    [sym_aleph] = ACTIONS(97),
    [sym_nabla] = ACTIONS(97),
    [sym_partial] = ACTIONS(97),
    [sym_forall] = ACTIONS(97),
    [sym_exists] = ACTIONS(97),
    [sym_emptyset] = ACTIONS(97),
    [sym_grad] = ACTIONS(97),
    [sym_del] = ACTIONS(97),
    [sym_plus] = ACTIONS(95),
    [sym_minus] = ACTIONS(95),
    [sym_times] = ACTIONS(95),
    [sym_equals] = ACTIONS(95),
    [sym_lt] = ACTIONS(97),
    [sym_gt] = ACTIONS(97),
    [sym_le] = ACTIONS(95),
    [sym_ge] = ACTIONS(95),
    [sym_ne] = ACTIONS(95),
    [sym_approx] = ACTIONS(95),
    [sym_pm] = ACTIONS(97),
    [sym_mp] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
    [sym_bb] = ACTIONS(97),
    [sym_cc] = ACTIONS(97),
    [sym_tt] = ACTIONS(97),
    [sym_fr] = ACTIONS(97),
    [sym_sf] = ACTIONS(97),
    [sym_bold] = ACTIONS(97),
    [sym_cal] = ACTIONS(97),
    [sym_frak] = ACTIONS(97),
    [sym_monospace] = ACTIONS(97),
    [sym_mono] = ACTIONS(97),
    [sym_italic] = ACTIONS(97),
    [sym_frac] = ACTIONS(97),
    [sym_root] = ACTIONS(97),
    [sym_stackrel] = ACTIONS(97),
    [sym_choose] = ACTIONS(97),
    [sym_atop] = ACTIONS(97),
    [sym_over] = ACTIONS(97),
    [sym_factorial] = ACTIONS(151),
    [sym_double_factorial] = ACTIONS(153),
    [sym_multi_linebreak] = ACTIONS(97),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_LPAREN_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym__] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(157),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_number_symbol] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [sym_if] = ACTIONS(109),
    [sym_otherwise] = ACTIONS(109),
    [sym_else] = ACTIONS(109),
    [sym_alpha] = ACTIONS(109),
    [sym_beta] = ACTIONS(109),
    [sym_gamma] = ACTIONS(109),
    [sym_delta] = ACTIONS(109),
    [sym_epsilon] = ACTIONS(109),
    [sym_zeta] = ACTIONS(109),
    [sym_eta] = ACTIONS(109),
    [sym_theta] = ACTIONS(109),
    [sym_iota] = ACTIONS(109),
    [sym_kappa] = ACTIONS(109),
    [sym_lambda] = ACTIONS(109),
    [sym_mu] = ACTIONS(109),
    [sym_nu] = ACTIONS(109),
    [sym_xi] = ACTIONS(109),
    [sym_omicron] = ACTIONS(109),
    [sym_pi] = ACTIONS(109),
    [sym_rho] = ACTIONS(109),
    [sym_sigma] = ACTIONS(109),
    [sym_tau] = ACTIONS(109),
    [sym_upsilon] = ACTIONS(109),
    [sym_phi] = ACTIONS(109),
    [sym_chi] = ACTIONS(109),
    [sym_psi] = ACTIONS(109),
    [sym_omega] = ACTIONS(109),
    [sym_Alpha] = ACTIONS(109),
    [sym_Beta] = ACTIONS(109),
    [sym_Gamma] = ACTIONS(109),
    [sym_Delta] = ACTIONS(109),
    [sym_Epsilon] = ACTIONS(109),
    [sym_Zeta] = ACTIONS(109),
    [sym_Eta] = ACTIONS(109),
    [sym_Theta] = ACTIONS(109),
    [sym_Iota] = ACTIONS(109),
    [sym_Kappa] = ACTIONS(109),
    [sym_Lambda] = ACTIONS(109),
    [sym_Mu] = ACTIONS(109),
    [sym_Nu] = ACTIONS(109),
    [sym_Xi] = ACTIONS(109),
    [sym_Omicron] = ACTIONS(109),
    [sym_Pi] = ACTIONS(109),
    [sym_Rho] = ACTIONS(109),
    [sym_Sigma] = ACTIONS(109),
    [sym_Tau] = ACTIONS(109),
    [sym_Upsilon] = ACTIONS(109),
    [sym_Phi] = ACTIONS(109),
    [sym_Chi] = ACTIONS(109),
    [sym_Psi] = ACTIONS(109),
    [sym_Omega] = ACTIONS(109),
    [sym_infty] = ACTIONS(109),
    [sym_hbar] = ACTIONS(109),
    [sym_ell] = ACTIONS(109),
    [sym_Re] = ACTIONS(109),
    [sym_Im] = ACTIONS(109),
    [sym_aleph] = ACTIONS(109),
    [sym_nabla] = ACTIONS(109),
    [sym_partial] = ACTIONS(109),
    [sym_forall] = ACTIONS(109),
    [sym_exists] = ACTIONS(109),
    [sym_emptyset] = ACTIONS(109),
    [sym_grad] = ACTIONS(109),
    [sym_del] = ACTIONS(109),
    [sym_plus] = ACTIONS(107),
    [sym_minus] = ACTIONS(107),
    [sym_times] = ACTIONS(107),
    [sym_equals] = ACTIONS(107),
    [sym_lt] = ACTIONS(109),
    [sym_gt] = ACTIONS(109),
    [sym_le] = ACTIONS(107),
    [sym_ge] = ACTIONS(107),
    [sym_ne] = ACTIONS(107),
    [sym_approx] = ACTIONS(107),
    [sym_pm] = ACTIONS(109),
    [sym_mp] = ACTIONS(109),
    [sym_sqrt] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
    [sym_bb] = ACTIONS(109),
    [sym_cc] = ACTIONS(109),
    [sym_tt] = ACTIONS(109),
    [sym_fr] = ACTIONS(109),
    [sym_sf] = ACTIONS(109),
    [sym_bold] = ACTIONS(109),
    [sym_cal] = ACTIONS(109),
    [sym_frak] = ACTIONS(109),
    [sym_monospace] = ACTIONS(109),
    [sym_mono] = ACTIONS(109),
    [sym_italic] = ACTIONS(109),
    [sym_frac] = ACTIONS(109),
    [sym_root] = ACTIONS(109),
    [sym_stackrel] = ACTIONS(109),
    [sym_choose] = ACTIONS(109),
    [sym_atop] = ACTIONS(109),
    [sym_over] = ACTIONS(109),
    [sym_factorial] = ACTIONS(151),
    [sym_double_factorial] = ACTIONS(153),
    [sym_multi_linebreak] = ACTIONS(109),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACE_COLON] = ACTIONS(107),
    [anon_sym_LPAREN_COLON] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
  },
  [53] = {
    [sym_number_symbol] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [sym_if] = ACTIONS(97),
    [sym_otherwise] = ACTIONS(97),
    [sym_else] = ACTIONS(97),
    [sym_alpha] = ACTIONS(97),
    [sym_beta] = ACTIONS(97),
    [sym_gamma] = ACTIONS(97),
    [sym_delta] = ACTIONS(97),
    [sym_epsilon] = ACTIONS(97),
    [sym_zeta] = ACTIONS(97),
    [sym_eta] = ACTIONS(97),
    [sym_theta] = ACTIONS(97),
    [sym_iota] = ACTIONS(97),
    [sym_kappa] = ACTIONS(97),
    [sym_lambda] = ACTIONS(97),
    [sym_mu] = ACTIONS(97),
    [sym_nu] = ACTIONS(97),
    [sym_xi] = ACTIONS(97),
    [sym_omicron] = ACTIONS(97),
    [sym_pi] = ACTIONS(97),
    [sym_rho] = ACTIONS(97),
    [sym_sigma] = ACTIONS(97),
    [sym_tau] = ACTIONS(97),
    [sym_upsilon] = ACTIONS(97),
    [sym_phi] = ACTIONS(97),
    [sym_chi] = ACTIONS(97),
    [sym_psi] = ACTIONS(97),
    [sym_omega] = ACTIONS(97),
    [sym_Alpha] = ACTIONS(97),
    [sym_Beta] = ACTIONS(97),
    [sym_Gamma] = ACTIONS(97),
    [sym_Delta] = ACTIONS(97),
    [sym_Epsilon] = ACTIONS(97),
    [sym_Zeta] = ACTIONS(97),
    [sym_Eta] = ACTIONS(97),
    [sym_Theta] = ACTIONS(97),
    [sym_Iota] = ACTIONS(97),
    [sym_Kappa] = ACTIONS(97),
    [sym_Lambda] = ACTIONS(97),
    [sym_Mu] = ACTIONS(97),
    [sym_Nu] = ACTIONS(97),
    [sym_Xi] = ACTIONS(97),
    [sym_Omicron] = ACTIONS(97),
    [sym_Pi] = ACTIONS(97),
    [sym_Rho] = ACTIONS(97),
    [sym_Sigma] = ACTIONS(97),
    [sym_Tau] = ACTIONS(97),
    [sym_Upsilon] = ACTIONS(97),
    [sym_Phi] = ACTIONS(97),
    [sym_Chi] = ACTIONS(97),
    [sym_Psi] = ACTIONS(97),
    [sym_Omega] = ACTIONS(97),
    [sym_infty] = ACTIONS(97),
    [sym_hbar] = ACTIONS(97),
    [sym_ell] = ACTIONS(97),
    [sym_Re] = ACTIONS(97),
    [sym_Im] = ACTIONS(97),
    [sym_aleph] = ACTIONS(97),
    [sym_nabla] = ACTIONS(97),
    [sym_partial] = ACTIONS(97),
    [sym_forall] = ACTIONS(97),
    [sym_exists] = ACTIONS(97),
    [sym_emptyset] = ACTIONS(97),
    [sym_grad] = ACTIONS(97),
    [sym_del] = ACTIONS(97),
    [sym_plus] = ACTIONS(95),
    [sym_minus] = ACTIONS(95),
    [sym_times] = ACTIONS(95),
    [sym_equals] = ACTIONS(95),
    [sym_lt] = ACTIONS(97),
    [sym_gt] = ACTIONS(97),
    [sym_le] = ACTIONS(95),
    [sym_ge] = ACTIONS(95),
    [sym_ne] = ACTIONS(95),
    [sym_approx] = ACTIONS(95),
    [sym_pm] = ACTIONS(97),
    [sym_mp] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
    [sym_bb] = ACTIONS(97),
    [sym_cc] = ACTIONS(97),
    [sym_tt] = ACTIONS(97),
    [sym_fr] = ACTIONS(97),
    [sym_sf] = ACTIONS(97),
    [sym_bold] = ACTIONS(97),
    [sym_cal] = ACTIONS(97),
    [sym_frak] = ACTIONS(97),
    [sym_monospace] = ACTIONS(97),
    [sym_mono] = ACTIONS(97),
    [sym_italic] = ACTIONS(97),
    [sym_frac] = ACTIONS(97),
    [sym_root] = ACTIONS(97),
    [sym_stackrel] = ACTIONS(97),
    [sym_choose] = ACTIONS(97),
    [sym_atop] = ACTIONS(97),
    [sym_over] = ACTIONS(97),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_LPAREN_COLON] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_COLON_RBRACE] = ACTIONS(95),
    [anon_sym_COLON_RPAREN] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_number_symbol] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [sym_if] = ACTIONS(93),
    [sym_otherwise] = ACTIONS(93),
    [sym_else] = ACTIONS(93),
    [sym_alpha] = ACTIONS(93),
    [sym_beta] = ACTIONS(93),
    [sym_gamma] = ACTIONS(93),
    [sym_delta] = ACTIONS(93),
    [sym_epsilon] = ACTIONS(93),
    [sym_zeta] = ACTIONS(93),
    [sym_eta] = ACTIONS(93),
    [sym_theta] = ACTIONS(93),
    [sym_iota] = ACTIONS(93),
    [sym_kappa] = ACTIONS(93),
    [sym_lambda] = ACTIONS(93),
    [sym_mu] = ACTIONS(93),
    [sym_nu] = ACTIONS(93),
    [sym_xi] = ACTIONS(93),
    [sym_omicron] = ACTIONS(93),
    [sym_pi] = ACTIONS(93),
    [sym_rho] = ACTIONS(93),
    [sym_sigma] = ACTIONS(93),
    [sym_tau] = ACTIONS(93),
    [sym_upsilon] = ACTIONS(93),
    [sym_phi] = ACTIONS(93),
    [sym_chi] = ACTIONS(93),
    [sym_psi] = ACTIONS(93),
    [sym_omega] = ACTIONS(93),
    [sym_Alpha] = ACTIONS(93),
    [sym_Beta] = ACTIONS(93),
    [sym_Gamma] = ACTIONS(93),
    [sym_Delta] = ACTIONS(93),
    [sym_Epsilon] = ACTIONS(93),
    [sym_Zeta] = ACTIONS(93),
    [sym_Eta] = ACTIONS(93),
    [sym_Theta] = ACTIONS(93),
    [sym_Iota] = ACTIONS(93),
    [sym_Kappa] = ACTIONS(93),
    [sym_Lambda] = ACTIONS(93),
    [sym_Mu] = ACTIONS(93),
    [sym_Nu] = ACTIONS(93),
    [sym_Xi] = ACTIONS(93),
    [sym_Omicron] = ACTIONS(93),
    [sym_Pi] = ACTIONS(93),
    [sym_Rho] = ACTIONS(93),
    [sym_Sigma] = ACTIONS(93),
    [sym_Tau] = ACTIONS(93),
    [sym_Upsilon] = ACTIONS(93),
    [sym_Phi] = ACTIONS(93),
    [sym_Chi] = ACTIONS(93),
    [sym_Psi] = ACTIONS(93),
    [sym_Omega] = ACTIONS(93),
    [sym_infty] = ACTIONS(93),
    [sym_hbar] = ACTIONS(93),
    [sym_ell] = ACTIONS(93),
    [sym_Re] = ACTIONS(93),
    [sym_Im] = ACTIONS(93),
    [sym_aleph] = ACTIONS(93),
    [sym_nabla] = ACTIONS(93),
    [sym_partial] = ACTIONS(93),
    [sym_forall] = ACTIONS(93),
    [sym_exists] = ACTIONS(93),
    [sym_emptyset] = ACTIONS(93),
    [sym_grad] = ACTIONS(93),
    [sym_del] = ACTIONS(93),
    [sym_plus] = ACTIONS(91),
    [sym_minus] = ACTIONS(91),
    [sym_times] = ACTIONS(91),
    [sym_equals] = ACTIONS(91),
    [sym_lt] = ACTIONS(93),
    [sym_gt] = ACTIONS(93),
    [sym_le] = ACTIONS(91),
    [sym_ge] = ACTIONS(91),
    [sym_ne] = ACTIONS(91),
    [sym_approx] = ACTIONS(91),
    [sym_pm] = ACTIONS(93),
    [sym_mp] = ACTIONS(93),
    [sym_sqrt] = ACTIONS(93),
    [sym_text] = ACTIONS(93),
    [sym_bb] = ACTIONS(93),
    [sym_cc] = ACTIONS(93),
    [sym_tt] = ACTIONS(93),
    [sym_fr] = ACTIONS(93),
    [sym_sf] = ACTIONS(93),
    [sym_bold] = ACTIONS(93),
    [sym_cal] = ACTIONS(93),
    [sym_frak] = ACTIONS(93),
    [sym_monospace] = ACTIONS(93),
    [sym_mono] = ACTIONS(93),
    [sym_italic] = ACTIONS(93),
    [sym_frac] = ACTIONS(93),
    [sym_root] = ACTIONS(93),
    [sym_stackrel] = ACTIONS(93),
    [sym_choose] = ACTIONS(93),
    [sym_atop] = ACTIONS(93),
    [sym_over] = ACTIONS(93),
    [sym_factorial] = ACTIONS(93),
    [sym_double_factorial] = ACTIONS(91),
    [sym_multi_linebreak] = ACTIONS(93),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE_COLON] = ACTIONS(91),
    [anon_sym_LPAREN_COLON] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym__] = ACTIONS(91),
    [anon_sym_CARET] = ACTIONS(91),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_number_symbol] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [sym_if] = ACTIONS(113),
    [sym_otherwise] = ACTIONS(113),
    [sym_else] = ACTIONS(113),
    [sym_alpha] = ACTIONS(113),
    [sym_beta] = ACTIONS(113),
    [sym_gamma] = ACTIONS(113),
    [sym_delta] = ACTIONS(113),
    [sym_epsilon] = ACTIONS(113),
    [sym_zeta] = ACTIONS(113),
    [sym_eta] = ACTIONS(113),
    [sym_theta] = ACTIONS(113),
    [sym_iota] = ACTIONS(113),
    [sym_kappa] = ACTIONS(113),
    [sym_lambda] = ACTIONS(113),
    [sym_mu] = ACTIONS(113),
    [sym_nu] = ACTIONS(113),
    [sym_xi] = ACTIONS(113),
    [sym_omicron] = ACTIONS(113),
    [sym_pi] = ACTIONS(113),
    [sym_rho] = ACTIONS(113),
    [sym_sigma] = ACTIONS(113),
    [sym_tau] = ACTIONS(113),
    [sym_upsilon] = ACTIONS(113),
    [sym_phi] = ACTIONS(113),
    [sym_chi] = ACTIONS(113),
    [sym_psi] = ACTIONS(113),
    [sym_omega] = ACTIONS(113),
    [sym_Alpha] = ACTIONS(113),
    [sym_Beta] = ACTIONS(113),
    [sym_Gamma] = ACTIONS(113),
    [sym_Delta] = ACTIONS(113),
    [sym_Epsilon] = ACTIONS(113),
    [sym_Zeta] = ACTIONS(113),
    [sym_Eta] = ACTIONS(113),
    [sym_Theta] = ACTIONS(113),
    [sym_Iota] = ACTIONS(113),
    [sym_Kappa] = ACTIONS(113),
    [sym_Lambda] = ACTIONS(113),
    [sym_Mu] = ACTIONS(113),
    [sym_Nu] = ACTIONS(113),
    [sym_Xi] = ACTIONS(113),
    [sym_Omicron] = ACTIONS(113),
    [sym_Pi] = ACTIONS(113),
    [sym_Rho] = ACTIONS(113),
    [sym_Sigma] = ACTIONS(113),
    [sym_Tau] = ACTIONS(113),
    [sym_Upsilon] = ACTIONS(113),
    [sym_Phi] = ACTIONS(113),
    [sym_Chi] = ACTIONS(113),
    [sym_Psi] = ACTIONS(113),
    [sym_Omega] = ACTIONS(113),
    [sym_infty] = ACTIONS(113),
    [sym_hbar] = ACTIONS(113),
    [sym_ell] = ACTIONS(113),
    [sym_Re] = ACTIONS(113),
    [sym_Im] = ACTIONS(113),
    [sym_aleph] = ACTIONS(113),
    [sym_nabla] = ACTIONS(113),
    [sym_partial] = ACTIONS(113),
    [sym_forall] = ACTIONS(113),
    [sym_exists] = ACTIONS(113),
    [sym_emptyset] = ACTIONS(113),
    [sym_grad] = ACTIONS(113),
    [sym_del] = ACTIONS(113),
    [sym_plus] = ACTIONS(111),
    [sym_minus] = ACTIONS(111),
    [sym_times] = ACTIONS(111),
    [sym_equals] = ACTIONS(111),
    [sym_lt] = ACTIONS(113),
    [sym_gt] = ACTIONS(113),
    [sym_le] = ACTIONS(111),
    [sym_ge] = ACTIONS(111),
    [sym_ne] = ACTIONS(111),
    [sym_approx] = ACTIONS(111),
    [sym_pm] = ACTIONS(113),
    [sym_mp] = ACTIONS(113),
    [sym_sqrt] = ACTIONS(113),
    [sym_text] = ACTIONS(113),
    [sym_bb] = ACTIONS(113),
    [sym_cc] = ACTIONS(113),
    [sym_tt] = ACTIONS(113),
    [sym_fr] = ACTIONS(113),
    [sym_sf] = ACTIONS(113),
    [sym_bold] = ACTIONS(113),
    [sym_cal] = ACTIONS(113),
    [sym_frak] = ACTIONS(113),
    [sym_monospace] = ACTIONS(113),
    [sym_mono] = ACTIONS(113),
    [sym_italic] = ACTIONS(113),
    [sym_frac] = ACTIONS(113),
    [sym_root] = ACTIONS(113),
    [sym_stackrel] = ACTIONS(113),
    [sym_choose] = ACTIONS(113),
    [sym_atop] = ACTIONS(113),
    [sym_over] = ACTIONS(113),
    [sym_factorial] = ACTIONS(113),
    [sym_double_factorial] = ACTIONS(111),
    [sym_multi_linebreak] = ACTIONS(113),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACE_COLON] = ACTIONS(111),
    [anon_sym_LPAREN_COLON] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(111),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_number_symbol] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
    [sym_if] = ACTIONS(85),
    [sym_otherwise] = ACTIONS(85),
    [sym_else] = ACTIONS(85),
    [sym_alpha] = ACTIONS(85),
    [sym_beta] = ACTIONS(85),
    [sym_gamma] = ACTIONS(85),
    [sym_delta] = ACTIONS(85),
    [sym_epsilon] = ACTIONS(85),
    [sym_zeta] = ACTIONS(85),
    [sym_eta] = ACTIONS(85),
    [sym_theta] = ACTIONS(85),
    [sym_iota] = ACTIONS(85),
    [sym_kappa] = ACTIONS(85),
    [sym_lambda] = ACTIONS(85),
    [sym_mu] = ACTIONS(85),
    [sym_nu] = ACTIONS(85),
    [sym_xi] = ACTIONS(85),
    [sym_omicron] = ACTIONS(85),
    [sym_pi] = ACTIONS(85),
    [sym_rho] = ACTIONS(85),
    [sym_sigma] = ACTIONS(85),
    [sym_tau] = ACTIONS(85),
    [sym_upsilon] = ACTIONS(85),
    [sym_phi] = ACTIONS(85),
    [sym_chi] = ACTIONS(85),
    [sym_psi] = ACTIONS(85),
    [sym_omega] = ACTIONS(85),
    [sym_Alpha] = ACTIONS(85),
    [sym_Beta] = ACTIONS(85),
    [sym_Gamma] = ACTIONS(85),
    [sym_Delta] = ACTIONS(85),
    [sym_Epsilon] = ACTIONS(85),
    [sym_Zeta] = ACTIONS(85),
    [sym_Eta] = ACTIONS(85),
    [sym_Theta] = ACTIONS(85),
    [sym_Iota] = ACTIONS(85),
    [sym_Kappa] = ACTIONS(85),
    [sym_Lambda] = ACTIONS(85),
    [sym_Mu] = ACTIONS(85),
    [sym_Nu] = ACTIONS(85),
    [sym_Xi] = ACTIONS(85),
    [sym_Omicron] = ACTIONS(85),
    [sym_Pi] = ACTIONS(85),
    [sym_Rho] = ACTIONS(85),
    [sym_Sigma] = ACTIONS(85),
    [sym_Tau] = ACTIONS(85),
    [sym_Upsilon] = ACTIONS(85),
    [sym_Phi] = ACTIONS(85),
    [sym_Chi] = ACTIONS(85),
    [sym_Psi] = ACTIONS(85),
    [sym_Omega] = ACTIONS(85),
    [sym_infty] = ACTIONS(85),
    [sym_hbar] = ACTIONS(85),
    [sym_ell] = ACTIONS(85),
    [sym_Re] = ACTIONS(85),
    [sym_Im] = ACTIONS(85),
    [sym_aleph] = ACTIONS(85),
    [sym_nabla] = ACTIONS(85),
    [sym_partial] = ACTIONS(85),
    [sym_forall] = ACTIONS(85),
    [sym_exists] = ACTIONS(85),
    [sym_emptyset] = ACTIONS(85),
    [sym_grad] = ACTIONS(85),
    [sym_del] = ACTIONS(85),
    [sym_plus] = ACTIONS(83),
    [sym_minus] = ACTIONS(83),
    [sym_times] = ACTIONS(83),
    [sym_equals] = ACTIONS(83),
    [sym_lt] = ACTIONS(85),
    [sym_gt] = ACTIONS(85),
    [sym_le] = ACTIONS(83),
    [sym_ge] = ACTIONS(83),
    [sym_ne] = ACTIONS(83),
    [sym_approx] = ACTIONS(83),
    [sym_pm] = ACTIONS(85),
    [sym_mp] = ACTIONS(85),
    [sym_sqrt] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
    [sym_bb] = ACTIONS(85),
    [sym_cc] = ACTIONS(85),
    [sym_tt] = ACTIONS(85),
    [sym_fr] = ACTIONS(85),
    [sym_sf] = ACTIONS(85),
    [sym_bold] = ACTIONS(85),
    [sym_cal] = ACTIONS(85),
    [sym_frak] = ACTIONS(85),
    [sym_monospace] = ACTIONS(85),
    [sym_mono] = ACTIONS(85),
    [sym_italic] = ACTIONS(85),
    [sym_frac] = ACTIONS(85),
    [sym_root] = ACTIONS(85),
    [sym_stackrel] = ACTIONS(85),
    [sym_choose] = ACTIONS(85),
    [sym_atop] = ACTIONS(85),
    [sym_over] = ACTIONS(85),
    [sym_factorial] = ACTIONS(85),
    [sym_double_factorial] = ACTIONS(83),
    [sym_multi_linebreak] = ACTIONS(85),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LBRACE_COLON] = ACTIONS(83),
    [anon_sym_LPAREN_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_number_symbol] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [sym_if] = ACTIONS(127),
    [sym_otherwise] = ACTIONS(127),
    [sym_else] = ACTIONS(127),
    [sym_alpha] = ACTIONS(127),
    [sym_beta] = ACTIONS(127),
    [sym_gamma] = ACTIONS(127),
    [sym_delta] = ACTIONS(127),
    [sym_epsilon] = ACTIONS(127),
    [sym_zeta] = ACTIONS(127),
    [sym_eta] = ACTIONS(127),
    [sym_theta] = ACTIONS(127),
    [sym_iota] = ACTIONS(127),
    [sym_kappa] = ACTIONS(127),
    [sym_lambda] = ACTIONS(127),
    [sym_mu] = ACTIONS(127),
    [sym_nu] = ACTIONS(127),
    [sym_xi] = ACTIONS(127),
    [sym_omicron] = ACTIONS(127),
    [sym_pi] = ACTIONS(127),
    [sym_rho] = ACTIONS(127),
    [sym_sigma] = ACTIONS(127),
    [sym_tau] = ACTIONS(127),
    [sym_upsilon] = ACTIONS(127),
    [sym_phi] = ACTIONS(127),
    [sym_chi] = ACTIONS(127),
    [sym_psi] = ACTIONS(127),
    [sym_omega] = ACTIONS(127),
    [sym_Alpha] = ACTIONS(127),
    [sym_Beta] = ACTIONS(127),
    [sym_Gamma] = ACTIONS(127),
    [sym_Delta] = ACTIONS(127),
    [sym_Epsilon] = ACTIONS(127),
    [sym_Zeta] = ACTIONS(127),
    [sym_Eta] = ACTIONS(127),
    [sym_Theta] = ACTIONS(127),
    [sym_Iota] = ACTIONS(127),
    [sym_Kappa] = ACTIONS(127),
    [sym_Lambda] = ACTIONS(127),
    [sym_Mu] = ACTIONS(127),
    [sym_Nu] = ACTIONS(127),
    [sym_Xi] = ACTIONS(127),
    [sym_Omicron] = ACTIONS(127),
    [sym_Pi] = ACTIONS(127),
    [sym_Rho] = ACTIONS(127),
    [sym_Sigma] = ACTIONS(127),
    [sym_Tau] = ACTIONS(127),
    [sym_Upsilon] = ACTIONS(127),
    [sym_Phi] = ACTIONS(127),
    [sym_Chi] = ACTIONS(127),
    [sym_Psi] = ACTIONS(127),
    [sym_Omega] = ACTIONS(127),
    [sym_infty] = ACTIONS(127),
    [sym_hbar] = ACTIONS(127),
    [sym_ell] = ACTIONS(127),
    [sym_Re] = ACTIONS(127),
    [sym_Im] = ACTIONS(127),
    [sym_aleph] = ACTIONS(127),
    [sym_nabla] = ACTIONS(127),
    [sym_partial] = ACTIONS(127),
    [sym_forall] = ACTIONS(127),
    [sym_exists] = ACTIONS(127),
    [sym_emptyset] = ACTIONS(127),
    [sym_grad] = ACTIONS(127),
    [sym_del] = ACTIONS(127),
    [sym_plus] = ACTIONS(125),
    [sym_minus] = ACTIONS(125),
    [sym_times] = ACTIONS(125),
    [sym_equals] = ACTIONS(125),
    [sym_lt] = ACTIONS(127),
    [sym_gt] = ACTIONS(127),
    [sym_le] = ACTIONS(125),
    [sym_ge] = ACTIONS(125),
    [sym_ne] = ACTIONS(125),
    [sym_approx] = ACTIONS(125),
    [sym_pm] = ACTIONS(127),
    [sym_mp] = ACTIONS(127),
    [sym_sqrt] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
    [sym_bb] = ACTIONS(127),
    [sym_cc] = ACTIONS(127),
    [sym_tt] = ACTIONS(127),
    [sym_fr] = ACTIONS(127),
    [sym_sf] = ACTIONS(127),
    [sym_bold] = ACTIONS(127),
    [sym_cal] = ACTIONS(127),
    [sym_frak] = ACTIONS(127),
    [sym_monospace] = ACTIONS(127),
    [sym_mono] = ACTIONS(127),
    [sym_italic] = ACTIONS(127),
    [sym_frac] = ACTIONS(127),
    [sym_root] = ACTIONS(127),
    [sym_stackrel] = ACTIONS(127),
    [sym_choose] = ACTIONS(127),
    [sym_atop] = ACTIONS(127),
    [sym_over] = ACTIONS(127),
    [sym_factorial] = ACTIONS(127),
    [sym_double_factorial] = ACTIONS(125),
    [sym_multi_linebreak] = ACTIONS(127),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE_COLON] = ACTIONS(125),
    [anon_sym_LPAREN_COLON] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(125),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_number_symbol] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [sym_if] = ACTIONS(123),
    [sym_otherwise] = ACTIONS(123),
    [sym_else] = ACTIONS(123),
    [sym_alpha] = ACTIONS(123),
    [sym_beta] = ACTIONS(123),
    [sym_gamma] = ACTIONS(123),
    [sym_delta] = ACTIONS(123),
    [sym_epsilon] = ACTIONS(123),
    [sym_zeta] = ACTIONS(123),
    [sym_eta] = ACTIONS(123),
    [sym_theta] = ACTIONS(123),
    [sym_iota] = ACTIONS(123),
    [sym_kappa] = ACTIONS(123),
    [sym_lambda] = ACTIONS(123),
    [sym_mu] = ACTIONS(123),
    [sym_nu] = ACTIONS(123),
    [sym_xi] = ACTIONS(123),
    [sym_omicron] = ACTIONS(123),
    [sym_pi] = ACTIONS(123),
    [sym_rho] = ACTIONS(123),
    [sym_sigma] = ACTIONS(123),
    [sym_tau] = ACTIONS(123),
    [sym_upsilon] = ACTIONS(123),
    [sym_phi] = ACTIONS(123),
    [sym_chi] = ACTIONS(123),
    [sym_psi] = ACTIONS(123),
    [sym_omega] = ACTIONS(123),
    [sym_Alpha] = ACTIONS(123),
    [sym_Beta] = ACTIONS(123),
    [sym_Gamma] = ACTIONS(123),
    [sym_Delta] = ACTIONS(123),
    [sym_Epsilon] = ACTIONS(123),
    [sym_Zeta] = ACTIONS(123),
    [sym_Eta] = ACTIONS(123),
    [sym_Theta] = ACTIONS(123),
    [sym_Iota] = ACTIONS(123),
    [sym_Kappa] = ACTIONS(123),
    [sym_Lambda] = ACTIONS(123),
    [sym_Mu] = ACTIONS(123),
    [sym_Nu] = ACTIONS(123),
    [sym_Xi] = ACTIONS(123),
    [sym_Omicron] = ACTIONS(123),
    [sym_Pi] = ACTIONS(123),
    [sym_Rho] = ACTIONS(123),
    [sym_Sigma] = ACTIONS(123),
    [sym_Tau] = ACTIONS(123),
    [sym_Upsilon] = ACTIONS(123),
    [sym_Phi] = ACTIONS(123),
    [sym_Chi] = ACTIONS(123),
    [sym_Psi] = ACTIONS(123),
    [sym_Omega] = ACTIONS(123),
    [sym_infty] = ACTIONS(123),
    [sym_hbar] = ACTIONS(123),
    [sym_ell] = ACTIONS(123),
    [sym_Re] = ACTIONS(123),
    [sym_Im] = ACTIONS(123),
    [sym_aleph] = ACTIONS(123),
    [sym_nabla] = ACTIONS(123),
    [sym_partial] = ACTIONS(123),
    [sym_forall] = ACTIONS(123),
    [sym_exists] = ACTIONS(123),
    [sym_emptyset] = ACTIONS(123),
    [sym_grad] = ACTIONS(123),
    [sym_del] = ACTIONS(123),
    [sym_plus] = ACTIONS(121),
    [sym_minus] = ACTIONS(121),
    [sym_times] = ACTIONS(121),
    [sym_equals] = ACTIONS(121),
    [sym_lt] = ACTIONS(123),
    [sym_gt] = ACTIONS(123),
    [sym_le] = ACTIONS(121),
    [sym_ge] = ACTIONS(121),
    [sym_ne] = ACTIONS(121),
    [sym_approx] = ACTIONS(121),
    [sym_pm] = ACTIONS(123),
    [sym_mp] = ACTIONS(123),
    [sym_sqrt] = ACTIONS(123),
    [sym_text] = ACTIONS(123),
    [sym_bb] = ACTIONS(123),
    [sym_cc] = ACTIONS(123),
    [sym_tt] = ACTIONS(123),
    [sym_fr] = ACTIONS(123),
    [sym_sf] = ACTIONS(123),
    [sym_bold] = ACTIONS(123),
    [sym_cal] = ACTIONS(123),
    [sym_frak] = ACTIONS(123),
    [sym_monospace] = ACTIONS(123),
    [sym_mono] = ACTIONS(123),
    [sym_italic] = ACTIONS(123),
    [sym_frac] = ACTIONS(123),
    [sym_root] = ACTIONS(123),
    [sym_stackrel] = ACTIONS(123),
    [sym_choose] = ACTIONS(123),
    [sym_atop] = ACTIONS(123),
    [sym_over] = ACTIONS(123),
    [sym_factorial] = ACTIONS(151),
    [sym_double_factorial] = ACTIONS(153),
    [sym_multi_linebreak] = ACTIONS(123),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_LBRACE_COLON] = ACTIONS(121),
    [anon_sym_LPAREN_COLON] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_CARET] = ACTIONS(121),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_number_symbol] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym_if] = ACTIONS(117),
    [sym_otherwise] = ACTIONS(117),
    [sym_else] = ACTIONS(117),
    [sym_alpha] = ACTIONS(117),
    [sym_beta] = ACTIONS(117),
    [sym_gamma] = ACTIONS(117),
    [sym_delta] = ACTIONS(117),
    [sym_epsilon] = ACTIONS(117),
    [sym_zeta] = ACTIONS(117),
    [sym_eta] = ACTIONS(117),
    [sym_theta] = ACTIONS(117),
    [sym_iota] = ACTIONS(117),
    [sym_kappa] = ACTIONS(117),
    [sym_lambda] = ACTIONS(117),
    [sym_mu] = ACTIONS(117),
    [sym_nu] = ACTIONS(117),
    [sym_xi] = ACTIONS(117),
    [sym_omicron] = ACTIONS(117),
    [sym_pi] = ACTIONS(117),
    [sym_rho] = ACTIONS(117),
    [sym_sigma] = ACTIONS(117),
    [sym_tau] = ACTIONS(117),
    [sym_upsilon] = ACTIONS(117),
    [sym_phi] = ACTIONS(117),
    [sym_chi] = ACTIONS(117),
    [sym_psi] = ACTIONS(117),
    [sym_omega] = ACTIONS(117),
    [sym_Alpha] = ACTIONS(117),
    [sym_Beta] = ACTIONS(117),
    [sym_Gamma] = ACTIONS(117),
    [sym_Delta] = ACTIONS(117),
    [sym_Epsilon] = ACTIONS(117),
    [sym_Zeta] = ACTIONS(117),
    [sym_Eta] = ACTIONS(117),
    [sym_Theta] = ACTIONS(117),
    [sym_Iota] = ACTIONS(117),
    [sym_Kappa] = ACTIONS(117),
    [sym_Lambda] = ACTIONS(117),
    [sym_Mu] = ACTIONS(117),
    [sym_Nu] = ACTIONS(117),
    [sym_Xi] = ACTIONS(117),
    [sym_Omicron] = ACTIONS(117),
    [sym_Pi] = ACTIONS(117),
    [sym_Rho] = ACTIONS(117),
    [sym_Sigma] = ACTIONS(117),
    [sym_Tau] = ACTIONS(117),
    [sym_Upsilon] = ACTIONS(117),
    [sym_Phi] = ACTIONS(117),
    [sym_Chi] = ACTIONS(117),
    [sym_Psi] = ACTIONS(117),
    [sym_Omega] = ACTIONS(117),
    [sym_infty] = ACTIONS(117),
    [sym_hbar] = ACTIONS(117),
    [sym_ell] = ACTIONS(117),
    [sym_Re] = ACTIONS(117),
    [sym_Im] = ACTIONS(117),
    [sym_aleph] = ACTIONS(117),
    [sym_nabla] = ACTIONS(117),
    [sym_partial] = ACTIONS(117),
    [sym_forall] = ACTIONS(117),
    [sym_exists] = ACTIONS(117),
    [sym_emptyset] = ACTIONS(117),
    [sym_grad] = ACTIONS(117),
    [sym_del] = ACTIONS(117),
    [sym_plus] = ACTIONS(115),
    [sym_minus] = ACTIONS(115),
    [sym_times] = ACTIONS(115),
    [sym_equals] = ACTIONS(115),
    [sym_lt] = ACTIONS(117),
    [sym_gt] = ACTIONS(117),
    [sym_le] = ACTIONS(115),
    [sym_ge] = ACTIONS(115),
    [sym_ne] = ACTIONS(115),
    [sym_approx] = ACTIONS(115),
    [sym_pm] = ACTIONS(117),
    [sym_mp] = ACTIONS(117),
    [sym_sqrt] = ACTIONS(117),
    [sym_text] = ACTIONS(117),
    [sym_bb] = ACTIONS(117),
    [sym_cc] = ACTIONS(117),
    [sym_tt] = ACTIONS(117),
    [sym_fr] = ACTIONS(117),
    [sym_sf] = ACTIONS(117),
    [sym_bold] = ACTIONS(117),
    [sym_cal] = ACTIONS(117),
    [sym_frak] = ACTIONS(117),
    [sym_monospace] = ACTIONS(117),
    [sym_mono] = ACTIONS(117),
    [sym_italic] = ACTIONS(117),
    [sym_frac] = ACTIONS(117),
    [sym_root] = ACTIONS(117),
    [sym_stackrel] = ACTIONS(117),
    [sym_choose] = ACTIONS(117),
    [sym_atop] = ACTIONS(117),
    [sym_over] = ACTIONS(117),
    [sym_factorial] = ACTIONS(117),
    [sym_double_factorial] = ACTIONS(115),
    [sym_multi_linebreak] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_COLON] = ACTIONS(115),
    [anon_sym_LPAREN_COLON] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_number_symbol] = ACTIONS(133),
    [sym_identifier] = ACTIONS(135),
    [sym_if] = ACTIONS(135),
    [sym_otherwise] = ACTIONS(135),
    [sym_else] = ACTIONS(135),
    [sym_alpha] = ACTIONS(135),
    [sym_beta] = ACTIONS(135),
    [sym_gamma] = ACTIONS(135),
    [sym_delta] = ACTIONS(135),
    [sym_epsilon] = ACTIONS(135),
    [sym_zeta] = ACTIONS(135),
    [sym_eta] = ACTIONS(135),
    [sym_theta] = ACTIONS(135),
    [sym_iota] = ACTIONS(135),
    [sym_kappa] = ACTIONS(135),
    [sym_lambda] = ACTIONS(135),
    [sym_mu] = ACTIONS(135),
    [sym_nu] = ACTIONS(135),
    [sym_xi] = ACTIONS(135),
    [sym_omicron] = ACTIONS(135),
    [sym_pi] = ACTIONS(135),
    [sym_rho] = ACTIONS(135),
    [sym_sigma] = ACTIONS(135),
    [sym_tau] = ACTIONS(135),
    [sym_upsilon] = ACTIONS(135),
    [sym_phi] = ACTIONS(135),
    [sym_chi] = ACTIONS(135),
    [sym_psi] = ACTIONS(135),
    [sym_omega] = ACTIONS(135),
    [sym_Alpha] = ACTIONS(135),
    [sym_Beta] = ACTIONS(135),
    [sym_Gamma] = ACTIONS(135),
    [sym_Delta] = ACTIONS(135),
    [sym_Epsilon] = ACTIONS(135),
    [sym_Zeta] = ACTIONS(135),
    [sym_Eta] = ACTIONS(135),
    [sym_Theta] = ACTIONS(135),
    [sym_Iota] = ACTIONS(135),
    [sym_Kappa] = ACTIONS(135),
    [sym_Lambda] = ACTIONS(135),
    [sym_Mu] = ACTIONS(135),
    [sym_Nu] = ACTIONS(135),
    [sym_Xi] = ACTIONS(135),
    [sym_Omicron] = ACTIONS(135),
    [sym_Pi] = ACTIONS(135),
    [sym_Rho] = ACTIONS(135),
    [sym_Sigma] = ACTIONS(135),
    [sym_Tau] = ACTIONS(135),
    [sym_Upsilon] = ACTIONS(135),
    [sym_Phi] = ACTIONS(135),
    [sym_Chi] = ACTIONS(135),
    [sym_Psi] = ACTIONS(135),
    [sym_Omega] = ACTIONS(135),
    [sym_infty] = ACTIONS(135),
    [sym_hbar] = ACTIONS(135),
    [sym_ell] = ACTIONS(135),
    [sym_Re] = ACTIONS(135),
    [sym_Im] = ACTIONS(135),
    [sym_aleph] = ACTIONS(135),
    [sym_nabla] = ACTIONS(135),
    [sym_partial] = ACTIONS(135),
    [sym_forall] = ACTIONS(135),
    [sym_exists] = ACTIONS(135),
    [sym_emptyset] = ACTIONS(135),
    [sym_grad] = ACTIONS(135),
    [sym_del] = ACTIONS(135),
    [sym_plus] = ACTIONS(133),
    [sym_minus] = ACTIONS(133),
    [sym_times] = ACTIONS(133),
    [sym_equals] = ACTIONS(133),
    [sym_lt] = ACTIONS(135),
    [sym_gt] = ACTIONS(135),
    [sym_le] = ACTIONS(133),
    [sym_ge] = ACTIONS(133),
    [sym_ne] = ACTIONS(133),
    [sym_approx] = ACTIONS(133),
    [sym_pm] = ACTIONS(135),
    [sym_mp] = ACTIONS(135),
    [sym_sqrt] = ACTIONS(135),
    [sym_text] = ACTIONS(135),
    [sym_bb] = ACTIONS(135),
    [sym_cc] = ACTIONS(135),
    [sym_tt] = ACTIONS(135),
    [sym_fr] = ACTIONS(135),
    [sym_sf] = ACTIONS(135),
    [sym_bold] = ACTIONS(135),
    [sym_cal] = ACTIONS(135),
    [sym_frak] = ACTIONS(135),
    [sym_monospace] = ACTIONS(135),
    [sym_mono] = ACTIONS(135),
    [sym_italic] = ACTIONS(135),
    [sym_frac] = ACTIONS(135),
    [sym_root] = ACTIONS(135),
    [sym_stackrel] = ACTIONS(135),
    [sym_choose] = ACTIONS(135),
    [sym_atop] = ACTIONS(135),
    [sym_over] = ACTIONS(135),
    [sym_factorial] = ACTIONS(135),
    [sym_double_factorial] = ACTIONS(133),
    [sym_multi_linebreak] = ACTIONS(135),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_LBRACE_COLON] = ACTIONS(133),
    [anon_sym_LPAREN_COLON] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_number_symbol] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [sym_if] = ACTIONS(139),
    [sym_otherwise] = ACTIONS(139),
    [sym_else] = ACTIONS(139),
    [sym_alpha] = ACTIONS(139),
    [sym_beta] = ACTIONS(139),
    [sym_gamma] = ACTIONS(139),
    [sym_delta] = ACTIONS(139),
    [sym_epsilon] = ACTIONS(139),
    [sym_zeta] = ACTIONS(139),
    [sym_eta] = ACTIONS(139),
    [sym_theta] = ACTIONS(139),
    [sym_iota] = ACTIONS(139),
    [sym_kappa] = ACTIONS(139),
    [sym_lambda] = ACTIONS(139),
    [sym_mu] = ACTIONS(139),
    [sym_nu] = ACTIONS(139),
    [sym_xi] = ACTIONS(139),
    [sym_omicron] = ACTIONS(139),
    [sym_pi] = ACTIONS(139),
    [sym_rho] = ACTIONS(139),
    [sym_sigma] = ACTIONS(139),
    [sym_tau] = ACTIONS(139),
    [sym_upsilon] = ACTIONS(139),
    [sym_phi] = ACTIONS(139),
    [sym_chi] = ACTIONS(139),
    [sym_psi] = ACTIONS(139),
    [sym_omega] = ACTIONS(139),
    [sym_Alpha] = ACTIONS(139),
    [sym_Beta] = ACTIONS(139),
    [sym_Gamma] = ACTIONS(139),
    [sym_Delta] = ACTIONS(139),
    [sym_Epsilon] = ACTIONS(139),
    [sym_Zeta] = ACTIONS(139),
    [sym_Eta] = ACTIONS(139),
    [sym_Theta] = ACTIONS(139),
    [sym_Iota] = ACTIONS(139),
    [sym_Kappa] = ACTIONS(139),
    [sym_Lambda] = ACTIONS(139),
    [sym_Mu] = ACTIONS(139),
    [sym_Nu] = ACTIONS(139),
    [sym_Xi] = ACTIONS(139),
    [sym_Omicron] = ACTIONS(139),
    [sym_Pi] = ACTIONS(139),
    [sym_Rho] = ACTIONS(139),
    [sym_Sigma] = ACTIONS(139),
    [sym_Tau] = ACTIONS(139),
    [sym_Upsilon] = ACTIONS(139),
    [sym_Phi] = ACTIONS(139),
    [sym_Chi] = ACTIONS(139),
    [sym_Psi] = ACTIONS(139),
    [sym_Omega] = ACTIONS(139),
    [sym_infty] = ACTIONS(139),
    [sym_hbar] = ACTIONS(139),
    [sym_ell] = ACTIONS(139),
    [sym_Re] = ACTIONS(139),
    [sym_Im] = ACTIONS(139),
    [sym_aleph] = ACTIONS(139),
    [sym_nabla] = ACTIONS(139),
    [sym_partial] = ACTIONS(139),
    [sym_forall] = ACTIONS(139),
    [sym_exists] = ACTIONS(139),
    [sym_emptyset] = ACTIONS(139),
    [sym_grad] = ACTIONS(139),
    [sym_del] = ACTIONS(139),
    [sym_plus] = ACTIONS(137),
    [sym_minus] = ACTIONS(137),
    [sym_times] = ACTIONS(137),
    [sym_equals] = ACTIONS(137),
    [sym_lt] = ACTIONS(139),
    [sym_gt] = ACTIONS(139),
    [sym_le] = ACTIONS(137),
    [sym_ge] = ACTIONS(137),
    [sym_ne] = ACTIONS(137),
    [sym_approx] = ACTIONS(137),
    [sym_pm] = ACTIONS(139),
    [sym_mp] = ACTIONS(139),
    [sym_sqrt] = ACTIONS(139),
    [sym_text] = ACTIONS(139),
    [sym_bb] = ACTIONS(139),
    [sym_cc] = ACTIONS(139),
    [sym_tt] = ACTIONS(139),
    [sym_fr] = ACTIONS(139),
    [sym_sf] = ACTIONS(139),
    [sym_bold] = ACTIONS(139),
    [sym_cal] = ACTIONS(139),
    [sym_frak] = ACTIONS(139),
    [sym_monospace] = ACTIONS(139),
    [sym_mono] = ACTIONS(139),
    [sym_italic] = ACTIONS(139),
    [sym_frac] = ACTIONS(139),
    [sym_root] = ACTIONS(139),
    [sym_stackrel] = ACTIONS(139),
    [sym_choose] = ACTIONS(139),
    [sym_atop] = ACTIONS(139),
    [sym_over] = ACTIONS(139),
    [sym_factorial] = ACTIONS(151),
    [sym_double_factorial] = ACTIONS(153),
    [sym_multi_linebreak] = ACTIONS(139),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LBRACE_COLON] = ACTIONS(137),
    [anon_sym_LPAREN_COLON] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym__] = ACTIONS(159),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_number_symbol] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [sym_if] = ACTIONS(145),
    [sym_otherwise] = ACTIONS(145),
    [sym_else] = ACTIONS(145),
    [sym_alpha] = ACTIONS(145),
    [sym_beta] = ACTIONS(145),
    [sym_gamma] = ACTIONS(145),
    [sym_delta] = ACTIONS(145),
    [sym_epsilon] = ACTIONS(145),
    [sym_zeta] = ACTIONS(145),
    [sym_eta] = ACTIONS(145),
    [sym_theta] = ACTIONS(145),
    [sym_iota] = ACTIONS(145),
    [sym_kappa] = ACTIONS(145),
    [sym_lambda] = ACTIONS(145),
    [sym_mu] = ACTIONS(145),
    [sym_nu] = ACTIONS(145),
    [sym_xi] = ACTIONS(145),
    [sym_omicron] = ACTIONS(145),
    [sym_pi] = ACTIONS(145),
    [sym_rho] = ACTIONS(145),
    [sym_sigma] = ACTIONS(145),
    [sym_tau] = ACTIONS(145),
    [sym_upsilon] = ACTIONS(145),
    [sym_phi] = ACTIONS(145),
    [sym_chi] = ACTIONS(145),
    [sym_psi] = ACTIONS(145),
    [sym_omega] = ACTIONS(145),
    [sym_Alpha] = ACTIONS(145),
    [sym_Beta] = ACTIONS(145),
    [sym_Gamma] = ACTIONS(145),
    [sym_Delta] = ACTIONS(145),
    [sym_Epsilon] = ACTIONS(145),
    [sym_Zeta] = ACTIONS(145),
    [sym_Eta] = ACTIONS(145),
    [sym_Theta] = ACTIONS(145),
    [sym_Iota] = ACTIONS(145),
    [sym_Kappa] = ACTIONS(145),
    [sym_Lambda] = ACTIONS(145),
    [sym_Mu] = ACTIONS(145),
    [sym_Nu] = ACTIONS(145),
    [sym_Xi] = ACTIONS(145),
    [sym_Omicron] = ACTIONS(145),
    [sym_Pi] = ACTIONS(145),
    [sym_Rho] = ACTIONS(145),
    [sym_Sigma] = ACTIONS(145),
    [sym_Tau] = ACTIONS(145),
    [sym_Upsilon] = ACTIONS(145),
    [sym_Phi] = ACTIONS(145),
    [sym_Chi] = ACTIONS(145),
    [sym_Psi] = ACTIONS(145),
    [sym_Omega] = ACTIONS(145),
    [sym_infty] = ACTIONS(145),
    [sym_hbar] = ACTIONS(145),
    [sym_ell] = ACTIONS(145),
    [sym_Re] = ACTIONS(145),
    [sym_Im] = ACTIONS(145),
    [sym_aleph] = ACTIONS(145),
    [sym_nabla] = ACTIONS(145),
    [sym_partial] = ACTIONS(145),
    [sym_forall] = ACTIONS(145),
    [sym_exists] = ACTIONS(145),
    [sym_emptyset] = ACTIONS(145),
    [sym_grad] = ACTIONS(145),
    [sym_del] = ACTIONS(145),
    [sym_plus] = ACTIONS(143),
    [sym_minus] = ACTIONS(143),
    [sym_times] = ACTIONS(143),
    [sym_equals] = ACTIONS(143),
    [sym_lt] = ACTIONS(145),
    [sym_gt] = ACTIONS(145),
    [sym_le] = ACTIONS(143),
    [sym_ge] = ACTIONS(143),
    [sym_ne] = ACTIONS(143),
    [sym_approx] = ACTIONS(143),
    [sym_pm] = ACTIONS(145),
    [sym_mp] = ACTIONS(145),
    [sym_sqrt] = ACTIONS(145),
    [sym_text] = ACTIONS(145),
    [sym_bb] = ACTIONS(145),
    [sym_cc] = ACTIONS(145),
    [sym_tt] = ACTIONS(145),
    [sym_fr] = ACTIONS(145),
    [sym_sf] = ACTIONS(145),
    [sym_bold] = ACTIONS(145),
    [sym_cal] = ACTIONS(145),
    [sym_frak] = ACTIONS(145),
    [sym_monospace] = ACTIONS(145),
    [sym_mono] = ACTIONS(145),
    [sym_italic] = ACTIONS(145),
    [sym_frac] = ACTIONS(145),
    [sym_root] = ACTIONS(145),
    [sym_stackrel] = ACTIONS(145),
    [sym_choose] = ACTIONS(145),
    [sym_atop] = ACTIONS(145),
    [sym_over] = ACTIONS(145),
    [sym_factorial] = ACTIONS(151),
    [sym_double_factorial] = ACTIONS(153),
    [sym_multi_linebreak] = ACTIONS(145),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_COLON] = ACTIONS(143),
    [anon_sym_LPAREN_COLON] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(159),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_number_symbol] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
    [sym_if] = ACTIONS(149),
    [sym_otherwise] = ACTIONS(149),
    [sym_else] = ACTIONS(149),
    [sym_alpha] = ACTIONS(149),
    [sym_beta] = ACTIONS(149),
    [sym_gamma] = ACTIONS(149),
    [sym_delta] = ACTIONS(149),
    [sym_epsilon] = ACTIONS(149),
    [sym_zeta] = ACTIONS(149),
    [sym_eta] = ACTIONS(149),
    [sym_theta] = ACTIONS(149),
    [sym_iota] = ACTIONS(149),
    [sym_kappa] = ACTIONS(149),
    [sym_lambda] = ACTIONS(149),
    [sym_mu] = ACTIONS(149),
    [sym_nu] = ACTIONS(149),
    [sym_xi] = ACTIONS(149),
    [sym_omicron] = ACTIONS(149),
    [sym_pi] = ACTIONS(149),
    [sym_rho] = ACTIONS(149),
    [sym_sigma] = ACTIONS(149),
    [sym_tau] = ACTIONS(149),
    [sym_upsilon] = ACTIONS(149),
    [sym_phi] = ACTIONS(149),
    [sym_chi] = ACTIONS(149),
    [sym_psi] = ACTIONS(149),
    [sym_omega] = ACTIONS(149),
    [sym_Alpha] = ACTIONS(149),
    [sym_Beta] = ACTIONS(149),
    [sym_Gamma] = ACTIONS(149),
    [sym_Delta] = ACTIONS(149),
    [sym_Epsilon] = ACTIONS(149),
    [sym_Zeta] = ACTIONS(149),
    [sym_Eta] = ACTIONS(149),
    [sym_Theta] = ACTIONS(149),
    [sym_Iota] = ACTIONS(149),
    [sym_Kappa] = ACTIONS(149),
    [sym_Lambda] = ACTIONS(149),
    [sym_Mu] = ACTIONS(149),
    [sym_Nu] = ACTIONS(149),
    [sym_Xi] = ACTIONS(149),
    [sym_Omicron] = ACTIONS(149),
    [sym_Pi] = ACTIONS(149),
    [sym_Rho] = ACTIONS(149),
    [sym_Sigma] = ACTIONS(149),
    [sym_Tau] = ACTIONS(149),
    [sym_Upsilon] = ACTIONS(149),
    [sym_Phi] = ACTIONS(149),
    [sym_Chi] = ACTIONS(149),
    [sym_Psi] = ACTIONS(149),
    [sym_Omega] = ACTIONS(149),
    [sym_infty] = ACTIONS(149),
    [sym_hbar] = ACTIONS(149),
    [sym_ell] = ACTIONS(149),
    [sym_Re] = ACTIONS(149),
    [sym_Im] = ACTIONS(149),
    [sym_aleph] = ACTIONS(149),
    [sym_nabla] = ACTIONS(149),
    [sym_partial] = ACTIONS(149),
    [sym_forall] = ACTIONS(149),
    [sym_exists] = ACTIONS(149),
    [sym_emptyset] = ACTIONS(149),
    [sym_grad] = ACTIONS(149),
    [sym_del] = ACTIONS(149),
    [sym_plus] = ACTIONS(147),
    [sym_minus] = ACTIONS(147),
    [sym_times] = ACTIONS(147),
    [sym_equals] = ACTIONS(147),
    [sym_lt] = ACTIONS(149),
    [sym_gt] = ACTIONS(149),
    [sym_le] = ACTIONS(147),
    [sym_ge] = ACTIONS(147),
    [sym_ne] = ACTIONS(147),
    [sym_approx] = ACTIONS(147),
    [sym_pm] = ACTIONS(149),
    [sym_mp] = ACTIONS(149),
    [sym_sqrt] = ACTIONS(149),
    [sym_text] = ACTIONS(149),
    [sym_bb] = ACTIONS(149),
    [sym_cc] = ACTIONS(149),
    [sym_tt] = ACTIONS(149),
    [sym_fr] = ACTIONS(149),
    [sym_sf] = ACTIONS(149),
    [sym_bold] = ACTIONS(149),
    [sym_cal] = ACTIONS(149),
    [sym_frak] = ACTIONS(149),
    [sym_monospace] = ACTIONS(149),
    [sym_mono] = ACTIONS(149),
    [sym_italic] = ACTIONS(149),
    [sym_frac] = ACTIONS(149),
    [sym_root] = ACTIONS(149),
    [sym_stackrel] = ACTIONS(149),
    [sym_choose] = ACTIONS(149),
    [sym_atop] = ACTIONS(149),
    [sym_over] = ACTIONS(149),
    [sym_factorial] = ACTIONS(151),
    [sym_double_factorial] = ACTIONS(153),
    [sym_multi_linebreak] = ACTIONS(149),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACE_COLON] = ACTIONS(147),
    [anon_sym_LPAREN_COLON] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_number_symbol] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [sym_if] = ACTIONS(97),
    [sym_otherwise] = ACTIONS(97),
    [sym_else] = ACTIONS(97),
    [sym_alpha] = ACTIONS(97),
    [sym_beta] = ACTIONS(97),
    [sym_gamma] = ACTIONS(97),
    [sym_delta] = ACTIONS(97),
    [sym_epsilon] = ACTIONS(97),
    [sym_zeta] = ACTIONS(97),
    [sym_eta] = ACTIONS(97),
    [sym_theta] = ACTIONS(97),
    [sym_iota] = ACTIONS(97),
    [sym_kappa] = ACTIONS(97),
    [sym_lambda] = ACTIONS(97),
    [sym_mu] = ACTIONS(97),
    [sym_nu] = ACTIONS(97),
    [sym_xi] = ACTIONS(97),
    [sym_omicron] = ACTIONS(97),
    [sym_pi] = ACTIONS(97),
    [sym_rho] = ACTIONS(97),
    [sym_sigma] = ACTIONS(97),
    [sym_tau] = ACTIONS(97),
    [sym_upsilon] = ACTIONS(97),
    [sym_phi] = ACTIONS(97),
    [sym_chi] = ACTIONS(97),
    [sym_psi] = ACTIONS(97),
    [sym_omega] = ACTIONS(97),
    [sym_Alpha] = ACTIONS(97),
    [sym_Beta] = ACTIONS(97),
    [sym_Gamma] = ACTIONS(97),
    [sym_Delta] = ACTIONS(97),
    [sym_Epsilon] = ACTIONS(97),
    [sym_Zeta] = ACTIONS(97),
    [sym_Eta] = ACTIONS(97),
    [sym_Theta] = ACTIONS(97),
    [sym_Iota] = ACTIONS(97),
    [sym_Kappa] = ACTIONS(97),
    [sym_Lambda] = ACTIONS(97),
    [sym_Mu] = ACTIONS(97),
    [sym_Nu] = ACTIONS(97),
    [sym_Xi] = ACTIONS(97),
    [sym_Omicron] = ACTIONS(97),
    [sym_Pi] = ACTIONS(97),
    [sym_Rho] = ACTIONS(97),
    [sym_Sigma] = ACTIONS(97),
    [sym_Tau] = ACTIONS(97),
    [sym_Upsilon] = ACTIONS(97),
    [sym_Phi] = ACTIONS(97),
    [sym_Chi] = ACTIONS(97),
    [sym_Psi] = ACTIONS(97),
    [sym_Omega] = ACTIONS(97),
    [sym_infty] = ACTIONS(97),
    [sym_hbar] = ACTIONS(97),
    [sym_ell] = ACTIONS(97),
    [sym_Re] = ACTIONS(97),
    [sym_Im] = ACTIONS(97),
    [sym_aleph] = ACTIONS(97),
    [sym_nabla] = ACTIONS(97),
    [sym_partial] = ACTIONS(97),
    [sym_forall] = ACTIONS(97),
    [sym_exists] = ACTIONS(97),
    [sym_emptyset] = ACTIONS(97),
    [sym_grad] = ACTIONS(97),
    [sym_del] = ACTIONS(97),
    [sym_plus] = ACTIONS(95),
    [sym_minus] = ACTIONS(95),
    [sym_times] = ACTIONS(95),
    [sym_equals] = ACTIONS(95),
    [sym_lt] = ACTIONS(97),
    [sym_gt] = ACTIONS(97),
    [sym_le] = ACTIONS(95),
    [sym_ge] = ACTIONS(95),
    [sym_ne] = ACTIONS(95),
    [sym_approx] = ACTIONS(95),
    [sym_pm] = ACTIONS(97),
    [sym_mp] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_text] = ACTIONS(97),
    [sym_bb] = ACTIONS(97),
    [sym_cc] = ACTIONS(97),
    [sym_tt] = ACTIONS(97),
    [sym_fr] = ACTIONS(97),
    [sym_sf] = ACTIONS(97),
    [sym_bold] = ACTIONS(97),
    [sym_cal] = ACTIONS(97),
    [sym_frak] = ACTIONS(97),
    [sym_monospace] = ACTIONS(97),
    [sym_mono] = ACTIONS(97),
    [sym_italic] = ACTIONS(97),
    [sym_frac] = ACTIONS(97),
    [sym_root] = ACTIONS(97),
    [sym_stackrel] = ACTIONS(97),
    [sym_choose] = ACTIONS(97),
    [sym_atop] = ACTIONS(97),
    [sym_over] = ACTIONS(97),
    [sym_multi_linebreak] = ACTIONS(97),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACE_COLON] = ACTIONS(95),
    [anon_sym_LPAREN_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_number_symbol] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_if] = ACTIONS(163),
    [sym_otherwise] = ACTIONS(163),
    [sym_else] = ACTIONS(163),
    [sym_alpha] = ACTIONS(163),
    [sym_beta] = ACTIONS(163),
    [sym_gamma] = ACTIONS(163),
    [sym_delta] = ACTIONS(163),
    [sym_epsilon] = ACTIONS(163),
    [sym_zeta] = ACTIONS(163),
    [sym_eta] = ACTIONS(163),
    [sym_theta] = ACTIONS(163),
    [sym_iota] = ACTIONS(163),
    [sym_kappa] = ACTIONS(163),
    [sym_lambda] = ACTIONS(163),
    [sym_mu] = ACTIONS(163),
    [sym_nu] = ACTIONS(163),
    [sym_xi] = ACTIONS(163),
    [sym_omicron] = ACTIONS(163),
    [sym_pi] = ACTIONS(163),
    [sym_rho] = ACTIONS(163),
    [sym_sigma] = ACTIONS(163),
    [sym_tau] = ACTIONS(163),
    [sym_upsilon] = ACTIONS(163),
    [sym_phi] = ACTIONS(163),
    [sym_chi] = ACTIONS(163),
    [sym_psi] = ACTIONS(163),
    [sym_omega] = ACTIONS(163),
    [sym_Alpha] = ACTIONS(163),
    [sym_Beta] = ACTIONS(163),
    [sym_Gamma] = ACTIONS(163),
    [sym_Delta] = ACTIONS(163),
    [sym_Epsilon] = ACTIONS(163),
    [sym_Zeta] = ACTIONS(163),
    [sym_Eta] = ACTIONS(163),
    [sym_Theta] = ACTIONS(163),
    [sym_Iota] = ACTIONS(163),
    [sym_Kappa] = ACTIONS(163),
    [sym_Lambda] = ACTIONS(163),
    [sym_Mu] = ACTIONS(163),
    [sym_Nu] = ACTIONS(163),
    [sym_Xi] = ACTIONS(163),
    [sym_Omicron] = ACTIONS(163),
    [sym_Pi] = ACTIONS(163),
    [sym_Rho] = ACTIONS(163),
    [sym_Sigma] = ACTIONS(163),
    [sym_Tau] = ACTIONS(163),
    [sym_Upsilon] = ACTIONS(163),
    [sym_Phi] = ACTIONS(163),
    [sym_Chi] = ACTIONS(163),
    [sym_Psi] = ACTIONS(163),
    [sym_Omega] = ACTIONS(163),
    [sym_infty] = ACTIONS(163),
    [sym_hbar] = ACTIONS(163),
    [sym_ell] = ACTIONS(163),
    [sym_Re] = ACTIONS(163),
    [sym_Im] = ACTIONS(163),
    [sym_aleph] = ACTIONS(163),
    [sym_nabla] = ACTIONS(163),
    [sym_partial] = ACTIONS(163),
    [sym_forall] = ACTIONS(163),
    [sym_exists] = ACTIONS(163),
    [sym_emptyset] = ACTIONS(163),
    [sym_grad] = ACTIONS(163),
    [sym_del] = ACTIONS(163),
    [sym_plus] = ACTIONS(161),
    [sym_minus] = ACTIONS(161),
    [sym_times] = ACTIONS(161),
    [sym_equals] = ACTIONS(161),
    [sym_lt] = ACTIONS(163),
    [sym_gt] = ACTIONS(163),
    [sym_le] = ACTIONS(161),
    [sym_ge] = ACTIONS(161),
    [sym_ne] = ACTIONS(161),
    [sym_approx] = ACTIONS(161),
    [sym_pm] = ACTIONS(163),
    [sym_mp] = ACTIONS(163),
    [sym_sqrt] = ACTIONS(163),
    [sym_text] = ACTIONS(163),
    [sym_bb] = ACTIONS(163),
    [sym_cc] = ACTIONS(163),
    [sym_tt] = ACTIONS(163),
    [sym_fr] = ACTIONS(163),
    [sym_sf] = ACTIONS(163),
    [sym_bold] = ACTIONS(163),
    [sym_cal] = ACTIONS(163),
    [sym_frak] = ACTIONS(163),
    [sym_monospace] = ACTIONS(163),
    [sym_mono] = ACTIONS(163),
    [sym_italic] = ACTIONS(163),
    [sym_frac] = ACTIONS(163),
    [sym_root] = ACTIONS(163),
    [sym_stackrel] = ACTIONS(163),
    [sym_choose] = ACTIONS(163),
    [sym_atop] = ACTIONS(163),
    [sym_over] = ACTIONS(163),
    [sym_multi_linebreak] = ACTIONS(163),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_LBRACE_COLON] = ACTIONS(161),
    [anon_sym_LPAREN_COLON] = ACTIONS(161),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_number_symbol] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [sym_if] = ACTIONS(167),
    [sym_otherwise] = ACTIONS(167),
    [sym_else] = ACTIONS(167),
    [sym_alpha] = ACTIONS(167),
    [sym_beta] = ACTIONS(167),
    [sym_gamma] = ACTIONS(167),
    [sym_delta] = ACTIONS(167),
    [sym_epsilon] = ACTIONS(167),
    [sym_zeta] = ACTIONS(167),
    [sym_eta] = ACTIONS(167),
    [sym_theta] = ACTIONS(167),
    [sym_iota] = ACTIONS(167),
    [sym_kappa] = ACTIONS(167),
    [sym_lambda] = ACTIONS(167),
    [sym_mu] = ACTIONS(167),
    [sym_nu] = ACTIONS(167),
    [sym_xi] = ACTIONS(167),
    [sym_omicron] = ACTIONS(167),
    [sym_pi] = ACTIONS(167),
    [sym_rho] = ACTIONS(167),
    [sym_sigma] = ACTIONS(167),
    [sym_tau] = ACTIONS(167),
    [sym_upsilon] = ACTIONS(167),
    [sym_phi] = ACTIONS(167),
    [sym_chi] = ACTIONS(167),
    [sym_psi] = ACTIONS(167),
    [sym_omega] = ACTIONS(167),
    [sym_Alpha] = ACTIONS(167),
    [sym_Beta] = ACTIONS(167),
    [sym_Gamma] = ACTIONS(167),
    [sym_Delta] = ACTIONS(167),
    [sym_Epsilon] = ACTIONS(167),
    [sym_Zeta] = ACTIONS(167),
    [sym_Eta] = ACTIONS(167),
    [sym_Theta] = ACTIONS(167),
    [sym_Iota] = ACTIONS(167),
    [sym_Kappa] = ACTIONS(167),
    [sym_Lambda] = ACTIONS(167),
    [sym_Mu] = ACTIONS(167),
    [sym_Nu] = ACTIONS(167),
    [sym_Xi] = ACTIONS(167),
    [sym_Omicron] = ACTIONS(167),
    [sym_Pi] = ACTIONS(167),
    [sym_Rho] = ACTIONS(167),
    [sym_Sigma] = ACTIONS(167),
    [sym_Tau] = ACTIONS(167),
    [sym_Upsilon] = ACTIONS(167),
    [sym_Phi] = ACTIONS(167),
    [sym_Chi] = ACTIONS(167),
    [sym_Psi] = ACTIONS(167),
    [sym_Omega] = ACTIONS(167),
    [sym_infty] = ACTIONS(167),
    [sym_hbar] = ACTIONS(167),
    [sym_ell] = ACTIONS(167),
    [sym_Re] = ACTIONS(167),
    [sym_Im] = ACTIONS(167),
    [sym_aleph] = ACTIONS(167),
    [sym_nabla] = ACTIONS(167),
    [sym_partial] = ACTIONS(167),
    [sym_forall] = ACTIONS(167),
    [sym_exists] = ACTIONS(167),
    [sym_emptyset] = ACTIONS(167),
    [sym_grad] = ACTIONS(167),
    [sym_del] = ACTIONS(167),
    [sym_plus] = ACTIONS(165),
    [sym_minus] = ACTIONS(165),
    [sym_times] = ACTIONS(165),
    [sym_equals] = ACTIONS(165),
    [sym_lt] = ACTIONS(167),
    [sym_gt] = ACTIONS(167),
    [sym_le] = ACTIONS(165),
    [sym_ge] = ACTIONS(165),
    [sym_ne] = ACTIONS(165),
    [sym_approx] = ACTIONS(165),
    [sym_pm] = ACTIONS(167),
    [sym_mp] = ACTIONS(167),
    [sym_sqrt] = ACTIONS(167),
    [sym_text] = ACTIONS(167),
    [sym_bb] = ACTIONS(167),
    [sym_cc] = ACTIONS(167),
    [sym_tt] = ACTIONS(167),
    [sym_fr] = ACTIONS(167),
    [sym_sf] = ACTIONS(167),
    [sym_bold] = ACTIONS(167),
    [sym_cal] = ACTIONS(167),
    [sym_frak] = ACTIONS(167),
    [sym_monospace] = ACTIONS(167),
    [sym_mono] = ACTIONS(167),
    [sym_italic] = ACTIONS(167),
    [sym_frac] = ACTIONS(167),
    [sym_root] = ACTIONS(167),
    [sym_stackrel] = ACTIONS(167),
    [sym_choose] = ACTIONS(167),
    [sym_atop] = ACTIONS(167),
    [sym_over] = ACTIONS(167),
    [sym_multi_linebreak] = ACTIONS(167),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_LBRACE_COLON] = ACTIONS(165),
    [anon_sym_LPAREN_COLON] = ACTIONS(165),
  },
  [67] = {
    [sym_number_symbol] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [sym_if] = ACTIONS(171),
    [sym_otherwise] = ACTIONS(171),
    [sym_else] = ACTIONS(171),
    [sym_alpha] = ACTIONS(171),
    [sym_beta] = ACTIONS(171),
    [sym_gamma] = ACTIONS(171),
    [sym_delta] = ACTIONS(171),
    [sym_epsilon] = ACTIONS(171),
    [sym_zeta] = ACTIONS(171),
    [sym_eta] = ACTIONS(171),
    [sym_theta] = ACTIONS(171),
    [sym_iota] = ACTIONS(171),
    [sym_kappa] = ACTIONS(171),
    [sym_lambda] = ACTIONS(171),
    [sym_mu] = ACTIONS(171),
    [sym_nu] = ACTIONS(171),
    [sym_xi] = ACTIONS(171),
    [sym_omicron] = ACTIONS(171),
    [sym_pi] = ACTIONS(171),
    [sym_rho] = ACTIONS(171),
    [sym_sigma] = ACTIONS(171),
    [sym_tau] = ACTIONS(171),
    [sym_upsilon] = ACTIONS(171),
    [sym_phi] = ACTIONS(171),
    [sym_chi] = ACTIONS(171),
    [sym_psi] = ACTIONS(171),
    [sym_omega] = ACTIONS(171),
    [sym_Alpha] = ACTIONS(171),
    [sym_Beta] = ACTIONS(171),
    [sym_Gamma] = ACTIONS(171),
    [sym_Delta] = ACTIONS(171),
    [sym_Epsilon] = ACTIONS(171),
    [sym_Zeta] = ACTIONS(171),
    [sym_Eta] = ACTIONS(171),
    [sym_Theta] = ACTIONS(171),
    [sym_Iota] = ACTIONS(171),
    [sym_Kappa] = ACTIONS(171),
    [sym_Lambda] = ACTIONS(171),
    [sym_Mu] = ACTIONS(171),
    [sym_Nu] = ACTIONS(171),
    [sym_Xi] = ACTIONS(171),
    [sym_Omicron] = ACTIONS(171),
    [sym_Pi] = ACTIONS(171),
    [sym_Rho] = ACTIONS(171),
    [sym_Sigma] = ACTIONS(171),
    [sym_Tau] = ACTIONS(171),
    [sym_Upsilon] = ACTIONS(171),
    [sym_Phi] = ACTIONS(171),
    [sym_Chi] = ACTIONS(171),
    [sym_Psi] = ACTIONS(171),
    [sym_Omega] = ACTIONS(171),
    [sym_infty] = ACTIONS(171),
    [sym_hbar] = ACTIONS(171),
    [sym_ell] = ACTIONS(171),
    [sym_Re] = ACTIONS(171),
    [sym_Im] = ACTIONS(171),
    [sym_aleph] = ACTIONS(171),
    [sym_nabla] = ACTIONS(171),
    [sym_partial] = ACTIONS(171),
    [sym_forall] = ACTIONS(171),
    [sym_exists] = ACTIONS(171),
    [sym_emptyset] = ACTIONS(171),
    [sym_grad] = ACTIONS(171),
    [sym_del] = ACTIONS(171),
    [sym_plus] = ACTIONS(169),
    [sym_minus] = ACTIONS(169),
    [sym_times] = ACTIONS(169),
    [sym_equals] = ACTIONS(169),
    [sym_lt] = ACTIONS(171),
    [sym_gt] = ACTIONS(171),
    [sym_le] = ACTIONS(169),
    [sym_ge] = ACTIONS(169),
    [sym_ne] = ACTIONS(169),
    [sym_approx] = ACTIONS(169),
    [sym_pm] = ACTIONS(171),
    [sym_mp] = ACTIONS(171),
    [sym_sqrt] = ACTIONS(171),
    [sym_text] = ACTIONS(171),
    [sym_bb] = ACTIONS(171),
    [sym_cc] = ACTIONS(171),
    [sym_tt] = ACTIONS(171),
    [sym_fr] = ACTIONS(171),
    [sym_sf] = ACTIONS(171),
    [sym_bold] = ACTIONS(171),
    [sym_cal] = ACTIONS(171),
    [sym_frak] = ACTIONS(171),
    [sym_monospace] = ACTIONS(171),
    [sym_mono] = ACTIONS(171),
    [sym_italic] = ACTIONS(171),
    [sym_frac] = ACTIONS(171),
    [sym_root] = ACTIONS(171),
    [sym_stackrel] = ACTIONS(171),
    [sym_choose] = ACTIONS(171),
    [sym_atop] = ACTIONS(171),
    [sym_over] = ACTIONS(171),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_LBRACE_COLON] = ACTIONS(169),
    [anon_sym_LPAREN_COLON] = ACTIONS(169),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(85), 1,
      sym_factorial,
    ACTIONS(83), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [18] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      sym_factorial,
    ACTIONS(175), 1,
      sym_double_factorial,
    ACTIONS(107), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [38] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(135), 1,
      sym_factorial,
    ACTIONS(133), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [56] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(117), 1,
      sym_factorial,
    ACTIONS(115), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [74] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(131), 1,
      sym_factorial,
    ACTIONS(129), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [92] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(127), 1,
      sym_factorial,
    ACTIONS(125), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [110] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      sym_factorial,
    ACTIONS(175), 1,
      sym_double_factorial,
    ACTIONS(121), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [130] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(89), 1,
      sym_factorial,
    ACTIONS(87), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [148] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(93), 1,
      sym_factorial,
    ACTIONS(91), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [166] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(113), 1,
      sym_factorial,
    ACTIONS(111), 9,
      sym_double_factorial,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
      anon_sym__,
      anon_sym_CARET,
  [184] = 6,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      sym_factorial,
    ACTIONS(175), 1,
      sym_double_factorial,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      anon_sym_CARET,
    ACTIONS(95), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [208] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      sym_factorial,
    ACTIONS(175), 1,
      sym_double_factorial,
    ACTIONS(181), 1,
      anon_sym__,
    ACTIONS(137), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [229] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      sym_factorial,
    ACTIONS(175), 1,
      sym_double_factorial,
    ACTIONS(181), 1,
      anon_sym_CARET,
    ACTIONS(143), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [250] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_right_bracket,
    STATE(88), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(183), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [270] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_right_bracket,
    STATE(83), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(187), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [290] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(100), 1,
      sym_right_bracket,
    ACTIONS(187), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [310] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      sym_right_bracket,
    STATE(91), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(191), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [330] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(98), 1,
      sym_right_bracket,
    ACTIONS(187), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [350] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_right_bracket,
    STATE(89), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(187), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [370] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(173), 1,
      sym_factorial,
    ACTIONS(175), 1,
      sym_double_factorial,
    ACTIONS(147), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [388] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_right_bracket,
    STATE(93), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(183), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [408] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym_right_bracket,
    STATE(93), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(187), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [428] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      sym_right_bracket,
    STATE(83), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(187), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [448] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_right_bracket,
    STATE(93), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(191), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [468] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(11), 1,
      sym_left_bracket,
    STATE(103), 1,
      sym_matrix_row_expr,
    ACTIONS(19), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(21), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE_COLON,
      anon_sym_LPAREN_COLON,
  [487] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(193), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [504] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(198), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [521] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(165), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [533] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(198), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [545] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(161), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [557] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(119), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [569] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(25), 1,
      sym_right_bracket,
    ACTIONS(187), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [583] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(203), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [595] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(59), 1,
      sym_right_bracket,
    ACTIONS(183), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [609] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(71), 1,
      sym_right_bracket,
    ACTIONS(191), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [623] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(193), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [635] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(207), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [649] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(212), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [663] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(216), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [677] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(216), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [691] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(222), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [705] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(216), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [719] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(228), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [733] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(68)] = 0,
  [SMALL_STATE(69)] = 18,
  [SMALL_STATE(70)] = 38,
  [SMALL_STATE(71)] = 56,
  [SMALL_STATE(72)] = 74,
  [SMALL_STATE(73)] = 92,
  [SMALL_STATE(74)] = 110,
  [SMALL_STATE(75)] = 130,
  [SMALL_STATE(76)] = 148,
  [SMALL_STATE(77)] = 166,
  [SMALL_STATE(78)] = 184,
  [SMALL_STATE(79)] = 208,
  [SMALL_STATE(80)] = 229,
  [SMALL_STATE(81)] = 250,
  [SMALL_STATE(82)] = 270,
  [SMALL_STATE(83)] = 290,
  [SMALL_STATE(84)] = 310,
  [SMALL_STATE(85)] = 330,
  [SMALL_STATE(86)] = 350,
  [SMALL_STATE(87)] = 370,
  [SMALL_STATE(88)] = 388,
  [SMALL_STATE(89)] = 408,
  [SMALL_STATE(90)] = 428,
  [SMALL_STATE(91)] = 448,
  [SMALL_STATE(92)] = 468,
  [SMALL_STATE(93)] = 487,
  [SMALL_STATE(94)] = 504,
  [SMALL_STATE(95)] = 521,
  [SMALL_STATE(96)] = 533,
  [SMALL_STATE(97)] = 545,
  [SMALL_STATE(98)] = 557,
  [SMALL_STATE(99)] = 569,
  [SMALL_STATE(100)] = 583,
  [SMALL_STATE(101)] = 595,
  [SMALL_STATE(102)] = 609,
  [SMALL_STATE(103)] = 623,
  [SMALL_STATE(104)] = 635,
  [SMALL_STATE(105)] = 649,
  [SMALL_STATE(106)] = 663,
  [SMALL_STATE(107)] = 677,
  [SMALL_STATE(108)] = 691,
  [SMALL_STATE(109)] = 705,
  [SMALL_STATE(110)] = 719,
  [SMALL_STATE(111)] = 733,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factorial_expr, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factorial_expr, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superscript, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superscript, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
