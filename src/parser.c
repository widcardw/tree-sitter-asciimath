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
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 57
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_number_symbol = 1,
  sym_identifier = 2,
  sym_alpha = 3,
  sym_beta = 4,
  sym_gamma = 5,
  sym_delta = 6,
  sym_epsilon = 7,
  sym_zeta = 8,
  sym_eta = 9,
  sym_theta = 10,
  sym_iota = 11,
  sym_kappa = 12,
  sym_lambda = 13,
  sym_mu = 14,
  sym_nu = 15,
  sym_xi = 16,
  sym_omicron = 17,
  sym_pi = 18,
  sym_rho = 19,
  sym_sigma = 20,
  sym_tau = 21,
  sym_upsilon = 22,
  sym_phi = 23,
  sym_chi = 24,
  sym_psi = 25,
  sym_omega = 26,
  sym_Alpha = 27,
  sym_Beta = 28,
  sym_Gamma = 29,
  sym_Delta = 30,
  sym_Epsilon = 31,
  sym_Zeta = 32,
  sym_Eta = 33,
  sym_Theta = 34,
  sym_Iota = 35,
  sym_Kappa = 36,
  sym_Lambda = 37,
  sym_Mu = 38,
  sym_Nu = 39,
  sym_Xi = 40,
  sym_Omicron = 41,
  sym_Pi = 42,
  sym_Rho = 43,
  sym_Sigma = 44,
  sym_Tau = 45,
  sym_Upsilon = 46,
  sym_Phi = 47,
  sym_Chi = 48,
  sym_Psi = 49,
  sym_Omega = 50,
  sym_infty = 51,
  sym_hbar = 52,
  sym_ell = 53,
  sym_Re = 54,
  sym_Im = 55,
  sym_aleph = 56,
  sym_nabla = 57,
  sym_partial = 58,
  sym_forall = 59,
  sym_exists = 60,
  sym_emptyset = 61,
  sym_grad = 62,
  sym_del = 63,
  sym_plus = 64,
  sym_minus = 65,
  sym_times = 66,
  sym_equals = 67,
  sym_lt = 68,
  sym_gt = 69,
  sym_le = 70,
  sym_ge = 71,
  sym_ne = 72,
  sym_approx = 73,
  sym_pm = 74,
  sym_mp = 75,
  sym_implies = 76,
  sym_equiv = 77,
  sym_tilde_gt = 78,
  sym_dash_gt = 79,
  sym_lt_dash = 80,
  sym_not_lt_dash = 81,
  sym_lt_dash_gt = 82,
  sym_not_lt_dash_gt = 83,
  sym_lt_eq = 84,
  sym_not_lt_eq_gt = 85,
  sym_forall_symbol = 86,
  sym_exists_symbol = 87,
  sym_falsum = 88,
  sym_verum = 89,
  sym_turnstile = 90,
  sym_models = 91,
  sym_sqrt = 92,
  sym_text = 93,
  sym_bb = 94,
  sym_cc = 95,
  sym_tt = 96,
  sym_fr = 97,
  sym_sf = 98,
  sym_bold = 99,
  sym_cal = 100,
  sym_frak = 101,
  sym_monospace = 102,
  sym_italic = 103,
  sym_frac = 104,
  sym_root = 105,
  sym_stackrel = 106,
  sym_choose = 107,
  sym_atop = 108,
  sym_over = 109,
  sym_factorial = 110,
  sym_double_factorial = 111,
  sym_multi_linebreak = 112,
  sym__whitespace = 113,
  anon_sym_DQUOTE = 114,
  sym_unescaped_double_string_fragment = 115,
  sym_escape_sequence = 116,
  anon_sym_LPAREN = 117,
  anon_sym_LBRACK = 118,
  anon_sym_LBRACE = 119,
  anon_sym_LBRACE_COLON = 120,
  anon_sym_LPAREN_COLON = 121,
  anon_sym_RPAREN = 122,
  anon_sym_RBRACK = 123,
  anon_sym_RBRACE = 124,
  anon_sym_COLON_RBRACE = 125,
  anon_sym_COLON_RPAREN = 126,
  anon_sym_COMMA = 127,
  anon_sym_SLASH = 128,
  anon_sym__ = 129,
  anon_sym_CARET = 130,
  sym_source_file = 131,
  sym__expression = 132,
  sym_literal_string = 133,
  sym_left_bracket = 134,
  sym_right_bracket = 135,
  sym_bracket_expr = 136,
  sym_matrix_row_expr = 137,
  sym_matrix_expr = 138,
  sym_unary_expr = 139,
  sym_binary_expr = 140,
  sym_binary_frac = 141,
  sym_simple_expression = 142,
  sym_subscript = 143,
  sym_superscript = 144,
  sym_subscript_superscript = 145,
  sym_intermediate_expression = 146,
  sym_concatenation = 147,
  aux_sym_source_file_repeat1 = 148,
  aux_sym_literal_string_repeat1 = 149,
  aux_sym_matrix_row_expr_repeat1 = 150,
  aux_sym_matrix_expr_repeat1 = 151,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number_symbol] = "number_symbol",
  [sym_identifier] = "identifier",
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
  [sym_implies] = "implies",
  [sym_equiv] = "equiv",
  [sym_tilde_gt] = "tilde_gt",
  [sym_dash_gt] = "dash_gt",
  [sym_lt_dash] = "lt_dash",
  [sym_not_lt_dash] = "not_lt_dash",
  [sym_lt_dash_gt] = "lt_dash_gt",
  [sym_not_lt_dash_gt] = "not_lt_dash_gt",
  [sym_lt_eq] = "lt_eq",
  [sym_not_lt_eq_gt] = "not_lt_eq_gt",
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
  [sym_implies] = sym_implies,
  [sym_equiv] = sym_equiv,
  [sym_tilde_gt] = sym_tilde_gt,
  [sym_dash_gt] = sym_dash_gt,
  [sym_lt_dash] = sym_lt_dash,
  [sym_not_lt_dash] = sym_not_lt_dash,
  [sym_lt_dash_gt] = sym_lt_dash_gt,
  [sym_not_lt_dash_gt] = sym_not_lt_dash_gt,
  [sym_lt_eq] = sym_lt_eq,
  [sym_not_lt_eq_gt] = sym_not_lt_eq_gt,
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
  [sym_implies] = {
    .visible = true,
    .named = true,
  },
  [sym_equiv] = {
    .visible = true,
    .named = true,
  },
  [sym_tilde_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_dash_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_dash] = {
    .visible = true,
    .named = true,
  },
  [sym_not_lt_dash] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_dash_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_not_lt_dash_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_not_lt_eq_gt] = {
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
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
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
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 26,
  [35] = 35,
  [36] = 30,
  [37] = 32,
  [38] = 38,
  [39] = 35,
  [40] = 20,
  [41] = 19,
  [42] = 23,
  [43] = 21,
  [44] = 13,
  [45] = 18,
  [46] = 14,
  [47] = 15,
  [48] = 16,
  [49] = 17,
  [50] = 24,
  [51] = 31,
  [52] = 33,
  [53] = 38,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 54,
  [70] = 55,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 76,
  [79] = 79,
  [80] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\t', 443,
        '\n', 309,
        '\r', 308,
        '!', 314,
        '"', 313,
        '(', 323,
        ')', 446,
        '*', 446,
        '+', 446,
        ',', 446,
        '-', 327,
        '/', 446,
        ':', 315,
        '<', 318,
        '=', 327,
        '>', 325,
        'A', 328,
        'B', 362,
        'C', 376,
        'D', 363,
        'E', 329,
        'G', 337,
        'I', 395,
        'K', 342,
        'L', 341,
        'M', 438,
        'N', 438,
        'O', 397,
        'P', 375,
        'R', 360,
        'S', 380,
        'T', 330,
        'U', 413,
        'X', 379,
        'Z', 362,
        '[', 446,
        '\\', 3,
        ']', 446,
        '^', 446,
        '_', 442,
        'a', 388,
        'b', 349,
        'c', 343,
        'd', 363,
        'e', 391,
        'f', 405,
        'g', 336,
        'h', 352,
        'i', 402,
        'k', 342,
        'l', 341,
        'm', 406,
        'n', 338,
        'o', 396,
        'p', 339,
        'r', 374,
        's', 369,
        't', 332,
        'u', 413,
        'x', 379,
        'z', 362,
        '{', 323,
        '|', 319,
        '}', 446,
        '~', 324,
        0x0b, 443,
        '\f', 443,
        ' ', 443,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(445);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(443);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(311);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '}') ADVANCE(459);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead == '\r' ||
          lookahead == '?') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(450);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(447);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(447);
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
        '\t', 312,
        '\n', 309,
        '\r', 308,
        '"', 313,
        '(', 451,
        '*', 287,
        '+', 285,
        '-', 286,
        '/', 462,
        '=', 288,
        'A', 127,
        'B', 74,
        'C', 98,
        'D', 78,
        'E', 170,
        'G', 41,
        'I', 137,
        'K', 48,
        'L', 47,
        'M', 216,
        'N', 217,
        'O', 138,
        'P', 99,
        'R', 75,
        'S', 102,
        'T', 46,
        'U', 179,
        'X', 103,
        'Z', 86,
        '[', 452,
        '^', 464,
        '_', 463,
        'a', 119,
        'b', 59,
        'c', 50,
        'd', 81,
        'e', 128,
        'f', 156,
        'g', 56,
        'h', 61,
        'i', 148,
        'k', 57,
        'l', 58,
        'm', 157,
        'n', 42,
        'o', 146,
        'p', 43,
        'r', 97,
        's', 90,
        't', 51,
        'u', 181,
        'x', 104,
        'z', 87,
        '{', 453,
        0x0b, 312,
        '\f', 312,
        ' ', 312,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(223);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '\r', 311,
        '"', 313,
        '(', 451,
        ')', 456,
        '*', 287,
        '+', 285,
        ',', 461,
        '-', 286,
        '/', 462,
        ':', 2,
        '=', 288,
        'A', 127,
        'B', 74,
        'C', 98,
        'D', 78,
        'E', 170,
        'G', 41,
        'I', 137,
        'K', 48,
        'L', 47,
        'M', 216,
        'N', 217,
        'O', 138,
        'P', 99,
        'R', 75,
        'S', 102,
        'T', 46,
        'U', 179,
        'X', 103,
        'Z', 86,
        '[', 452,
        ']', 457,
        '^', 464,
        '_', 463,
        'a', 119,
        'b', 59,
        'c', 50,
        'd', 81,
        'e', 128,
        'f', 156,
        'g', 56,
        'h', 61,
        'i', 148,
        'k', 57,
        'l', 58,
        'm', 157,
        'n', 42,
        'o', 146,
        'p', 43,
        'r', 97,
        's', 90,
        't', 51,
        'u', 181,
        'x', 104,
        'z', 87,
        '{', 453,
        '}', 458,
        '\t', 312,
        '\n', 312,
        0x0b, 312,
        '\f', 312,
        ' ', 312,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('F' <= lookahead && lookahead <= 'Y') ||
          ('j' <= lookahead && lookahead <= 'y')) ADVANCE(223);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 's') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'h') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(89);
      if (lookahead == 't') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'h') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'q') ADVANCE(185);
      if (lookahead == 't') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 's') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 't') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 't') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 't') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_Alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_Beta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_Gamma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_Delta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_Epsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_Zeta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_Eta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_Theta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_Iota);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_Kappa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_Lambda);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_Mu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_Nu);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_Xi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_Omicron);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_Pi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_Rho);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_Sigma);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_Tau);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_Upsilon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_Phi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_Chi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_Psi);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_Omega);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_infty);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_hbar);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ell);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_Re);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_Im);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_aleph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_nabla);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_partial);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_forall);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_exists);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_emptyset);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_grad);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_del);
      if (lookahead == 't') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_times);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_sqrt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bb);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_cc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_tt);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_fr);
      if (lookahead == 'a') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_sf);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_bold);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_cal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_frak);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_monospace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_italic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_frac);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_root);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_stackrel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_choose);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_atop);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_over);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_multi_linebreak);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '\r') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(312);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
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
      if (lookahead == '!') ADVANCE(446);
      if (lookahead == '=') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ')') ADVANCE(446);
      if (lookahead == '}') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '.') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '=') ADVANCE(446);
      if (lookahead == '>') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == '>') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '=') ADVANCE(446);
      if (lookahead == '>') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '=') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '=') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '>') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead == 'l') ADVANCE(414);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 't') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'T') ADVANCE(445);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'h') ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '_') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'h') ADVANCE(362);
      if (lookahead == 't') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(445);
      if (lookahead == 's') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'a') ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(445);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'b') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == 'k') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'c') ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'd') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(404);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'p') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'q') ADVANCE(423);
      if (lookahead == 't') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'f') ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'g') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 's') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'h') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'i') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'k') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == 't') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == 'm') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == 'x') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'l') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == 'v') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'm') ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == 't') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'n') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead == 'u') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'o') ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'p') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(436);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(407);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'r') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(437);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 's') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 't') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'u') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'x') ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 'y') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '|') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(447);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ':') ADVANCE(455);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ':') ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LBRACE_COLON);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LPAREN_COLON);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_COLON_RBRACE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_COLON_RPAREN);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 464:
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
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
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
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
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
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number_symbol] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_implies] = ACTIONS(1),
    [sym_equiv] = ACTIONS(1),
    [sym_tilde_gt] = ACTIONS(1),
    [sym_dash_gt] = ACTIONS(1),
    [sym_lt_dash] = ACTIONS(1),
    [sym_not_lt_dash] = ACTIONS(1),
    [sym_lt_dash_gt] = ACTIONS(1),
    [sym_not_lt_dash_gt] = ACTIONS(1),
    [sym_lt_eq] = ACTIONS(1),
    [sym_not_lt_eq_gt] = ACTIONS(1),
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
    [sym_source_file] = STATE(80),
    [sym__expression] = STATE(3),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(3),
    [sym_simple_expression] = STATE(40),
    [sym_subscript] = STATE(51),
    [sym_superscript] = STATE(51),
    [sym_subscript_superscript] = STATE(51),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
    [sym__expression] = STATE(69),
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_binary_frac] = STATE(69),
    [sym_simple_expression] = STATE(20),
    [sym_subscript] = STATE(31),
    [sym_superscript] = STATE(31),
    [sym_subscript_superscript] = STATE(31),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(69),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym__expression] = STATE(4),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(4),
    [sym_simple_expression] = STATE(40),
    [sym_subscript] = STATE(51),
    [sym_superscript] = STATE(51),
    [sym_subscript_superscript] = STATE(51),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym_multi_linebreak] = ACTIONS(41),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
  },
  [4] = {
    [sym__expression] = STATE(4),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(4),
    [sym_simple_expression] = STATE(40),
    [sym_subscript] = STATE(51),
    [sym_superscript] = STATE(51),
    [sym_subscript_superscript] = STATE(51),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_number_symbol] = ACTIONS(45),
    [sym_identifier] = ACTIONS(48),
    [sym_alpha] = ACTIONS(48),
    [sym_beta] = ACTIONS(48),
    [sym_gamma] = ACTIONS(48),
    [sym_delta] = ACTIONS(48),
    [sym_epsilon] = ACTIONS(48),
    [sym_zeta] = ACTIONS(48),
    [sym_eta] = ACTIONS(48),
    [sym_theta] = ACTIONS(48),
    [sym_iota] = ACTIONS(48),
    [sym_kappa] = ACTIONS(48),
    [sym_lambda] = ACTIONS(48),
    [sym_mu] = ACTIONS(48),
    [sym_nu] = ACTIONS(48),
    [sym_xi] = ACTIONS(48),
    [sym_omicron] = ACTIONS(48),
    [sym_pi] = ACTIONS(48),
    [sym_rho] = ACTIONS(48),
    [sym_sigma] = ACTIONS(48),
    [sym_tau] = ACTIONS(48),
    [sym_upsilon] = ACTIONS(48),
    [sym_phi] = ACTIONS(48),
    [sym_chi] = ACTIONS(48),
    [sym_psi] = ACTIONS(48),
    [sym_omega] = ACTIONS(48),
    [sym_Alpha] = ACTIONS(48),
    [sym_Beta] = ACTIONS(48),
    [sym_Gamma] = ACTIONS(48),
    [sym_Delta] = ACTIONS(48),
    [sym_Epsilon] = ACTIONS(48),
    [sym_Zeta] = ACTIONS(48),
    [sym_Eta] = ACTIONS(48),
    [sym_Theta] = ACTIONS(48),
    [sym_Iota] = ACTIONS(48),
    [sym_Kappa] = ACTIONS(48),
    [sym_Lambda] = ACTIONS(48),
    [sym_Mu] = ACTIONS(48),
    [sym_Nu] = ACTIONS(48),
    [sym_Xi] = ACTIONS(48),
    [sym_Omicron] = ACTIONS(48),
    [sym_Pi] = ACTIONS(48),
    [sym_Rho] = ACTIONS(48),
    [sym_Sigma] = ACTIONS(48),
    [sym_Tau] = ACTIONS(48),
    [sym_Upsilon] = ACTIONS(48),
    [sym_Phi] = ACTIONS(48),
    [sym_Chi] = ACTIONS(48),
    [sym_Psi] = ACTIONS(48),
    [sym_Omega] = ACTIONS(48),
    [sym_infty] = ACTIONS(48),
    [sym_hbar] = ACTIONS(48),
    [sym_ell] = ACTIONS(48),
    [sym_Re] = ACTIONS(48),
    [sym_Im] = ACTIONS(48),
    [sym_aleph] = ACTIONS(48),
    [sym_nabla] = ACTIONS(48),
    [sym_partial] = ACTIONS(48),
    [sym_forall] = ACTIONS(48),
    [sym_exists] = ACTIONS(48),
    [sym_emptyset] = ACTIONS(48),
    [sym_grad] = ACTIONS(48),
    [sym_del] = ACTIONS(48),
    [sym_plus] = ACTIONS(45),
    [sym_minus] = ACTIONS(45),
    [sym_times] = ACTIONS(45),
    [sym_equals] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(51),
    [sym_text] = ACTIONS(51),
    [sym_bb] = ACTIONS(51),
    [sym_cc] = ACTIONS(51),
    [sym_tt] = ACTIONS(51),
    [sym_fr] = ACTIONS(51),
    [sym_sf] = ACTIONS(51),
    [sym_bold] = ACTIONS(51),
    [sym_cal] = ACTIONS(51),
    [sym_frak] = ACTIONS(51),
    [sym_monospace] = ACTIONS(51),
    [sym_italic] = ACTIONS(51),
    [sym_frac] = ACTIONS(54),
    [sym_root] = ACTIONS(54),
    [sym_stackrel] = ACTIONS(54),
    [sym_choose] = ACTIONS(54),
    [sym_atop] = ACTIONS(54),
    [sym_over] = ACTIONS(54),
    [sym_multi_linebreak] = ACTIONS(57),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_COLON] = ACTIONS(66),
    [anon_sym_LPAREN_COLON] = ACTIONS(66),
  },
  [5] = {
    [sym__expression] = STATE(54),
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_binary_frac] = STATE(54),
    [sym_simple_expression] = STATE(40),
    [sym_subscript] = STATE(51),
    [sym_superscript] = STATE(51),
    [sym_subscript_superscript] = STATE(51),
    [sym_intermediate_expression] = STATE(5),
    [sym_concatenation] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
    [sym_italic] = ACTIONS(11),
    [sym_frac] = ACTIONS(13),
    [sym_root] = ACTIONS(13),
    [sym_stackrel] = ACTIONS(13),
    [sym_choose] = ACTIONS(13),
    [sym_atop] = ACTIONS(13),
    [sym_over] = ACTIONS(13),
    [sym_multi_linebreak] = ACTIONS(69),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_COLON] = ACTIONS(21),
    [anon_sym_LPAREN_COLON] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(71),
  },
  [6] = {
    [sym__expression] = STATE(60),
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_row_expr] = STATE(58),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_binary_frac] = STATE(60),
    [sym_simple_expression] = STATE(20),
    [sym_subscript] = STATE(31),
    [sym_superscript] = STATE(31),
    [sym_subscript_superscript] = STATE(31),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(60),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym__expression] = STATE(74),
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_row_expr] = STATE(59),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_binary_frac] = STATE(74),
    [sym_simple_expression] = STATE(20),
    [sym_subscript] = STATE(31),
    [sym_superscript] = STATE(31),
    [sym_subscript_superscript] = STATE(31),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(74),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym__expression] = STATE(73),
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(6),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_row_expr] = STATE(58),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_binary_frac] = STATE(73),
    [sym_simple_expression] = STATE(20),
    [sym_subscript] = STATE(31),
    [sym_superscript] = STATE(31),
    [sym_subscript_superscript] = STATE(31),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(73),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym__expression] = STATE(71),
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_binary_frac] = STATE(71),
    [sym_simple_expression] = STATE(20),
    [sym_subscript] = STATE(31),
    [sym_superscript] = STATE(31),
    [sym_subscript_superscript] = STATE(31),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(71),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym__expression] = STATE(61),
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_binary_frac] = STATE(61),
    [sym_simple_expression] = STATE(20),
    [sym_subscript] = STATE(31),
    [sym_superscript] = STATE(31),
    [sym_subscript_superscript] = STATE(31),
    [sym_intermediate_expression] = STATE(2),
    [sym_concatenation] = STATE(61),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(20),
    [sym_subscript] = STATE(31),
    [sym_superscript] = STATE(31),
    [sym_subscript_superscript] = STATE(31),
    [sym_intermediate_expression] = STATE(70),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(40),
    [sym_subscript] = STATE(51),
    [sym_superscript] = STATE(51),
    [sym_subscript_superscript] = STATE(51),
    [sym_intermediate_expression] = STATE(55),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
  [13] = {
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
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
    [sym_sqrt] = ACTIONS(75),
    [sym_text] = ACTIONS(75),
    [sym_bb] = ACTIONS(75),
    [sym_cc] = ACTIONS(75),
    [sym_tt] = ACTIONS(75),
    [sym_fr] = ACTIONS(75),
    [sym_sf] = ACTIONS(75),
    [sym_bold] = ACTIONS(75),
    [sym_cal] = ACTIONS(75),
    [sym_frak] = ACTIONS(75),
    [sym_monospace] = ACTIONS(75),
    [sym_italic] = ACTIONS(75),
    [sym_frac] = ACTIONS(75),
    [sym_root] = ACTIONS(75),
    [sym_stackrel] = ACTIONS(75),
    [sym_choose] = ACTIONS(75),
    [sym_atop] = ACTIONS(75),
    [sym_over] = ACTIONS(75),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACE_COLON] = ACTIONS(73),
    [anon_sym_LPAREN_COLON] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_COLON_RBRACE] = ACTIONS(73),
    [anon_sym_COLON_RPAREN] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
  },
  [14] = {
    [sym_number_symbol] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_alpha] = ACTIONS(79),
    [sym_beta] = ACTIONS(79),
    [sym_gamma] = ACTIONS(79),
    [sym_delta] = ACTIONS(79),
    [sym_epsilon] = ACTIONS(79),
    [sym_zeta] = ACTIONS(79),
    [sym_eta] = ACTIONS(79),
    [sym_theta] = ACTIONS(79),
    [sym_iota] = ACTIONS(79),
    [sym_kappa] = ACTIONS(79),
    [sym_lambda] = ACTIONS(79),
    [sym_mu] = ACTIONS(79),
    [sym_nu] = ACTIONS(79),
    [sym_xi] = ACTIONS(79),
    [sym_omicron] = ACTIONS(79),
    [sym_pi] = ACTIONS(79),
    [sym_rho] = ACTIONS(79),
    [sym_sigma] = ACTIONS(79),
    [sym_tau] = ACTIONS(79),
    [sym_upsilon] = ACTIONS(79),
    [sym_phi] = ACTIONS(79),
    [sym_chi] = ACTIONS(79),
    [sym_psi] = ACTIONS(79),
    [sym_omega] = ACTIONS(79),
    [sym_Alpha] = ACTIONS(79),
    [sym_Beta] = ACTIONS(79),
    [sym_Gamma] = ACTIONS(79),
    [sym_Delta] = ACTIONS(79),
    [sym_Epsilon] = ACTIONS(79),
    [sym_Zeta] = ACTIONS(79),
    [sym_Eta] = ACTIONS(79),
    [sym_Theta] = ACTIONS(79),
    [sym_Iota] = ACTIONS(79),
    [sym_Kappa] = ACTIONS(79),
    [sym_Lambda] = ACTIONS(79),
    [sym_Mu] = ACTIONS(79),
    [sym_Nu] = ACTIONS(79),
    [sym_Xi] = ACTIONS(79),
    [sym_Omicron] = ACTIONS(79),
    [sym_Pi] = ACTIONS(79),
    [sym_Rho] = ACTIONS(79),
    [sym_Sigma] = ACTIONS(79),
    [sym_Tau] = ACTIONS(79),
    [sym_Upsilon] = ACTIONS(79),
    [sym_Phi] = ACTIONS(79),
    [sym_Chi] = ACTIONS(79),
    [sym_Psi] = ACTIONS(79),
    [sym_Omega] = ACTIONS(79),
    [sym_infty] = ACTIONS(79),
    [sym_hbar] = ACTIONS(79),
    [sym_ell] = ACTIONS(79),
    [sym_Re] = ACTIONS(79),
    [sym_Im] = ACTIONS(79),
    [sym_aleph] = ACTIONS(79),
    [sym_nabla] = ACTIONS(79),
    [sym_partial] = ACTIONS(79),
    [sym_forall] = ACTIONS(79),
    [sym_exists] = ACTIONS(79),
    [sym_emptyset] = ACTIONS(79),
    [sym_grad] = ACTIONS(79),
    [sym_del] = ACTIONS(79),
    [sym_plus] = ACTIONS(77),
    [sym_minus] = ACTIONS(77),
    [sym_times] = ACTIONS(77),
    [sym_equals] = ACTIONS(77),
    [sym_sqrt] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
    [sym_bb] = ACTIONS(79),
    [sym_cc] = ACTIONS(79),
    [sym_tt] = ACTIONS(79),
    [sym_fr] = ACTIONS(79),
    [sym_sf] = ACTIONS(79),
    [sym_bold] = ACTIONS(79),
    [sym_cal] = ACTIONS(79),
    [sym_frak] = ACTIONS(79),
    [sym_monospace] = ACTIONS(79),
    [sym_italic] = ACTIONS(79),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACE_COLON] = ACTIONS(77),
    [anon_sym_LPAREN_COLON] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_COLON_RBRACE] = ACTIONS(77),
    [anon_sym_COLON_RPAREN] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(77),
  },
  [15] = {
    [sym_number_symbol] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_alpha] = ACTIONS(83),
    [sym_beta] = ACTIONS(83),
    [sym_gamma] = ACTIONS(83),
    [sym_delta] = ACTIONS(83),
    [sym_epsilon] = ACTIONS(83),
    [sym_zeta] = ACTIONS(83),
    [sym_eta] = ACTIONS(83),
    [sym_theta] = ACTIONS(83),
    [sym_iota] = ACTIONS(83),
    [sym_kappa] = ACTIONS(83),
    [sym_lambda] = ACTIONS(83),
    [sym_mu] = ACTIONS(83),
    [sym_nu] = ACTIONS(83),
    [sym_xi] = ACTIONS(83),
    [sym_omicron] = ACTIONS(83),
    [sym_pi] = ACTIONS(83),
    [sym_rho] = ACTIONS(83),
    [sym_sigma] = ACTIONS(83),
    [sym_tau] = ACTIONS(83),
    [sym_upsilon] = ACTIONS(83),
    [sym_phi] = ACTIONS(83),
    [sym_chi] = ACTIONS(83),
    [sym_psi] = ACTIONS(83),
    [sym_omega] = ACTIONS(83),
    [sym_Alpha] = ACTIONS(83),
    [sym_Beta] = ACTIONS(83),
    [sym_Gamma] = ACTIONS(83),
    [sym_Delta] = ACTIONS(83),
    [sym_Epsilon] = ACTIONS(83),
    [sym_Zeta] = ACTIONS(83),
    [sym_Eta] = ACTIONS(83),
    [sym_Theta] = ACTIONS(83),
    [sym_Iota] = ACTIONS(83),
    [sym_Kappa] = ACTIONS(83),
    [sym_Lambda] = ACTIONS(83),
    [sym_Mu] = ACTIONS(83),
    [sym_Nu] = ACTIONS(83),
    [sym_Xi] = ACTIONS(83),
    [sym_Omicron] = ACTIONS(83),
    [sym_Pi] = ACTIONS(83),
    [sym_Rho] = ACTIONS(83),
    [sym_Sigma] = ACTIONS(83),
    [sym_Tau] = ACTIONS(83),
    [sym_Upsilon] = ACTIONS(83),
    [sym_Phi] = ACTIONS(83),
    [sym_Chi] = ACTIONS(83),
    [sym_Psi] = ACTIONS(83),
    [sym_Omega] = ACTIONS(83),
    [sym_infty] = ACTIONS(83),
    [sym_hbar] = ACTIONS(83),
    [sym_ell] = ACTIONS(83),
    [sym_Re] = ACTIONS(83),
    [sym_Im] = ACTIONS(83),
    [sym_aleph] = ACTIONS(83),
    [sym_nabla] = ACTIONS(83),
    [sym_partial] = ACTIONS(83),
    [sym_forall] = ACTIONS(83),
    [sym_exists] = ACTIONS(83),
    [sym_emptyset] = ACTIONS(83),
    [sym_grad] = ACTIONS(83),
    [sym_del] = ACTIONS(83),
    [sym_plus] = ACTIONS(81),
    [sym_minus] = ACTIONS(81),
    [sym_times] = ACTIONS(81),
    [sym_equals] = ACTIONS(81),
    [sym_sqrt] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
    [sym_bb] = ACTIONS(83),
    [sym_cc] = ACTIONS(83),
    [sym_tt] = ACTIONS(83),
    [sym_fr] = ACTIONS(83),
    [sym_sf] = ACTIONS(83),
    [sym_bold] = ACTIONS(83),
    [sym_cal] = ACTIONS(83),
    [sym_frak] = ACTIONS(83),
    [sym_monospace] = ACTIONS(83),
    [sym_italic] = ACTIONS(83),
    [sym_frac] = ACTIONS(83),
    [sym_root] = ACTIONS(83),
    [sym_stackrel] = ACTIONS(83),
    [sym_choose] = ACTIONS(83),
    [sym_atop] = ACTIONS(83),
    [sym_over] = ACTIONS(83),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LBRACE_COLON] = ACTIONS(81),
    [anon_sym_LPAREN_COLON] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_COLON_RBRACE] = ACTIONS(81),
    [anon_sym_COLON_RPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
  },
  [16] = {
    [sym_number_symbol] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_alpha] = ACTIONS(87),
    [sym_beta] = ACTIONS(87),
    [sym_gamma] = ACTIONS(87),
    [sym_delta] = ACTIONS(87),
    [sym_epsilon] = ACTIONS(87),
    [sym_zeta] = ACTIONS(87),
    [sym_eta] = ACTIONS(87),
    [sym_theta] = ACTIONS(87),
    [sym_iota] = ACTIONS(87),
    [sym_kappa] = ACTIONS(87),
    [sym_lambda] = ACTIONS(87),
    [sym_mu] = ACTIONS(87),
    [sym_nu] = ACTIONS(87),
    [sym_xi] = ACTIONS(87),
    [sym_omicron] = ACTIONS(87),
    [sym_pi] = ACTIONS(87),
    [sym_rho] = ACTIONS(87),
    [sym_sigma] = ACTIONS(87),
    [sym_tau] = ACTIONS(87),
    [sym_upsilon] = ACTIONS(87),
    [sym_phi] = ACTIONS(87),
    [sym_chi] = ACTIONS(87),
    [sym_psi] = ACTIONS(87),
    [sym_omega] = ACTIONS(87),
    [sym_Alpha] = ACTIONS(87),
    [sym_Beta] = ACTIONS(87),
    [sym_Gamma] = ACTIONS(87),
    [sym_Delta] = ACTIONS(87),
    [sym_Epsilon] = ACTIONS(87),
    [sym_Zeta] = ACTIONS(87),
    [sym_Eta] = ACTIONS(87),
    [sym_Theta] = ACTIONS(87),
    [sym_Iota] = ACTIONS(87),
    [sym_Kappa] = ACTIONS(87),
    [sym_Lambda] = ACTIONS(87),
    [sym_Mu] = ACTIONS(87),
    [sym_Nu] = ACTIONS(87),
    [sym_Xi] = ACTIONS(87),
    [sym_Omicron] = ACTIONS(87),
    [sym_Pi] = ACTIONS(87),
    [sym_Rho] = ACTIONS(87),
    [sym_Sigma] = ACTIONS(87),
    [sym_Tau] = ACTIONS(87),
    [sym_Upsilon] = ACTIONS(87),
    [sym_Phi] = ACTIONS(87),
    [sym_Chi] = ACTIONS(87),
    [sym_Psi] = ACTIONS(87),
    [sym_Omega] = ACTIONS(87),
    [sym_infty] = ACTIONS(87),
    [sym_hbar] = ACTIONS(87),
    [sym_ell] = ACTIONS(87),
    [sym_Re] = ACTIONS(87),
    [sym_Im] = ACTIONS(87),
    [sym_aleph] = ACTIONS(87),
    [sym_nabla] = ACTIONS(87),
    [sym_partial] = ACTIONS(87),
    [sym_forall] = ACTIONS(87),
    [sym_exists] = ACTIONS(87),
    [sym_emptyset] = ACTIONS(87),
    [sym_grad] = ACTIONS(87),
    [sym_del] = ACTIONS(87),
    [sym_plus] = ACTIONS(85),
    [sym_minus] = ACTIONS(85),
    [sym_times] = ACTIONS(85),
    [sym_equals] = ACTIONS(85),
    [sym_sqrt] = ACTIONS(87),
    [sym_text] = ACTIONS(87),
    [sym_bb] = ACTIONS(87),
    [sym_cc] = ACTIONS(87),
    [sym_tt] = ACTIONS(87),
    [sym_fr] = ACTIONS(87),
    [sym_sf] = ACTIONS(87),
    [sym_bold] = ACTIONS(87),
    [sym_cal] = ACTIONS(87),
    [sym_frak] = ACTIONS(87),
    [sym_monospace] = ACTIONS(87),
    [sym_italic] = ACTIONS(87),
    [sym_frac] = ACTIONS(87),
    [sym_root] = ACTIONS(87),
    [sym_stackrel] = ACTIONS(87),
    [sym_choose] = ACTIONS(87),
    [sym_atop] = ACTIONS(87),
    [sym_over] = ACTIONS(87),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_LBRACE_COLON] = ACTIONS(85),
    [anon_sym_LPAREN_COLON] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_COLON_RBRACE] = ACTIONS(85),
    [anon_sym_COLON_RPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
  },
  [17] = {
    [sym_number_symbol] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
    [sym_alpha] = ACTIONS(91),
    [sym_beta] = ACTIONS(91),
    [sym_gamma] = ACTIONS(91),
    [sym_delta] = ACTIONS(91),
    [sym_epsilon] = ACTIONS(91),
    [sym_zeta] = ACTIONS(91),
    [sym_eta] = ACTIONS(91),
    [sym_theta] = ACTIONS(91),
    [sym_iota] = ACTIONS(91),
    [sym_kappa] = ACTIONS(91),
    [sym_lambda] = ACTIONS(91),
    [sym_mu] = ACTIONS(91),
    [sym_nu] = ACTIONS(91),
    [sym_xi] = ACTIONS(91),
    [sym_omicron] = ACTIONS(91),
    [sym_pi] = ACTIONS(91),
    [sym_rho] = ACTIONS(91),
    [sym_sigma] = ACTIONS(91),
    [sym_tau] = ACTIONS(91),
    [sym_upsilon] = ACTIONS(91),
    [sym_phi] = ACTIONS(91),
    [sym_chi] = ACTIONS(91),
    [sym_psi] = ACTIONS(91),
    [sym_omega] = ACTIONS(91),
    [sym_Alpha] = ACTIONS(91),
    [sym_Beta] = ACTIONS(91),
    [sym_Gamma] = ACTIONS(91),
    [sym_Delta] = ACTIONS(91),
    [sym_Epsilon] = ACTIONS(91),
    [sym_Zeta] = ACTIONS(91),
    [sym_Eta] = ACTIONS(91),
    [sym_Theta] = ACTIONS(91),
    [sym_Iota] = ACTIONS(91),
    [sym_Kappa] = ACTIONS(91),
    [sym_Lambda] = ACTIONS(91),
    [sym_Mu] = ACTIONS(91),
    [sym_Nu] = ACTIONS(91),
    [sym_Xi] = ACTIONS(91),
    [sym_Omicron] = ACTIONS(91),
    [sym_Pi] = ACTIONS(91),
    [sym_Rho] = ACTIONS(91),
    [sym_Sigma] = ACTIONS(91),
    [sym_Tau] = ACTIONS(91),
    [sym_Upsilon] = ACTIONS(91),
    [sym_Phi] = ACTIONS(91),
    [sym_Chi] = ACTIONS(91),
    [sym_Psi] = ACTIONS(91),
    [sym_Omega] = ACTIONS(91),
    [sym_infty] = ACTIONS(91),
    [sym_hbar] = ACTIONS(91),
    [sym_ell] = ACTIONS(91),
    [sym_Re] = ACTIONS(91),
    [sym_Im] = ACTIONS(91),
    [sym_aleph] = ACTIONS(91),
    [sym_nabla] = ACTIONS(91),
    [sym_partial] = ACTIONS(91),
    [sym_forall] = ACTIONS(91),
    [sym_exists] = ACTIONS(91),
    [sym_emptyset] = ACTIONS(91),
    [sym_grad] = ACTIONS(91),
    [sym_del] = ACTIONS(91),
    [sym_plus] = ACTIONS(89),
    [sym_minus] = ACTIONS(89),
    [sym_times] = ACTIONS(89),
    [sym_equals] = ACTIONS(89),
    [sym_sqrt] = ACTIONS(91),
    [sym_text] = ACTIONS(91),
    [sym_bb] = ACTIONS(91),
    [sym_cc] = ACTIONS(91),
    [sym_tt] = ACTIONS(91),
    [sym_fr] = ACTIONS(91),
    [sym_sf] = ACTIONS(91),
    [sym_bold] = ACTIONS(91),
    [sym_cal] = ACTIONS(91),
    [sym_frak] = ACTIONS(91),
    [sym_monospace] = ACTIONS(91),
    [sym_italic] = ACTIONS(91),
    [sym_frac] = ACTIONS(91),
    [sym_root] = ACTIONS(91),
    [sym_stackrel] = ACTIONS(91),
    [sym_choose] = ACTIONS(91),
    [sym_atop] = ACTIONS(91),
    [sym_over] = ACTIONS(91),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_LBRACE_COLON] = ACTIONS(89),
    [anon_sym_LPAREN_COLON] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_COLON_RBRACE] = ACTIONS(89),
    [anon_sym_COLON_RPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(89),
  },
  [18] = {
    [sym_number_symbol] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [sym_alpha] = ACTIONS(95),
    [sym_beta] = ACTIONS(95),
    [sym_gamma] = ACTIONS(95),
    [sym_delta] = ACTIONS(95),
    [sym_epsilon] = ACTIONS(95),
    [sym_zeta] = ACTIONS(95),
    [sym_eta] = ACTIONS(95),
    [sym_theta] = ACTIONS(95),
    [sym_iota] = ACTIONS(95),
    [sym_kappa] = ACTIONS(95),
    [sym_lambda] = ACTIONS(95),
    [sym_mu] = ACTIONS(95),
    [sym_nu] = ACTIONS(95),
    [sym_xi] = ACTIONS(95),
    [sym_omicron] = ACTIONS(95),
    [sym_pi] = ACTIONS(95),
    [sym_rho] = ACTIONS(95),
    [sym_sigma] = ACTIONS(95),
    [sym_tau] = ACTIONS(95),
    [sym_upsilon] = ACTIONS(95),
    [sym_phi] = ACTIONS(95),
    [sym_chi] = ACTIONS(95),
    [sym_psi] = ACTIONS(95),
    [sym_omega] = ACTIONS(95),
    [sym_Alpha] = ACTIONS(95),
    [sym_Beta] = ACTIONS(95),
    [sym_Gamma] = ACTIONS(95),
    [sym_Delta] = ACTIONS(95),
    [sym_Epsilon] = ACTIONS(95),
    [sym_Zeta] = ACTIONS(95),
    [sym_Eta] = ACTIONS(95),
    [sym_Theta] = ACTIONS(95),
    [sym_Iota] = ACTIONS(95),
    [sym_Kappa] = ACTIONS(95),
    [sym_Lambda] = ACTIONS(95),
    [sym_Mu] = ACTIONS(95),
    [sym_Nu] = ACTIONS(95),
    [sym_Xi] = ACTIONS(95),
    [sym_Omicron] = ACTIONS(95),
    [sym_Pi] = ACTIONS(95),
    [sym_Rho] = ACTIONS(95),
    [sym_Sigma] = ACTIONS(95),
    [sym_Tau] = ACTIONS(95),
    [sym_Upsilon] = ACTIONS(95),
    [sym_Phi] = ACTIONS(95),
    [sym_Chi] = ACTIONS(95),
    [sym_Psi] = ACTIONS(95),
    [sym_Omega] = ACTIONS(95),
    [sym_infty] = ACTIONS(95),
    [sym_hbar] = ACTIONS(95),
    [sym_ell] = ACTIONS(95),
    [sym_Re] = ACTIONS(95),
    [sym_Im] = ACTIONS(95),
    [sym_aleph] = ACTIONS(95),
    [sym_nabla] = ACTIONS(95),
    [sym_partial] = ACTIONS(95),
    [sym_forall] = ACTIONS(95),
    [sym_exists] = ACTIONS(95),
    [sym_emptyset] = ACTIONS(95),
    [sym_grad] = ACTIONS(95),
    [sym_del] = ACTIONS(95),
    [sym_plus] = ACTIONS(93),
    [sym_minus] = ACTIONS(93),
    [sym_times] = ACTIONS(93),
    [sym_equals] = ACTIONS(93),
    [sym_sqrt] = ACTIONS(95),
    [sym_text] = ACTIONS(95),
    [sym_bb] = ACTIONS(95),
    [sym_cc] = ACTIONS(95),
    [sym_tt] = ACTIONS(95),
    [sym_fr] = ACTIONS(95),
    [sym_sf] = ACTIONS(95),
    [sym_bold] = ACTIONS(95),
    [sym_cal] = ACTIONS(95),
    [sym_frak] = ACTIONS(95),
    [sym_monospace] = ACTIONS(95),
    [sym_italic] = ACTIONS(95),
    [sym_frac] = ACTIONS(95),
    [sym_root] = ACTIONS(95),
    [sym_stackrel] = ACTIONS(95),
    [sym_choose] = ACTIONS(95),
    [sym_atop] = ACTIONS(95),
    [sym_over] = ACTIONS(95),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_LBRACE_COLON] = ACTIONS(93),
    [anon_sym_LPAREN_COLON] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_COLON_RBRACE] = ACTIONS(93),
    [anon_sym_COLON_RPAREN] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
  },
  [19] = {
    [sym_number_symbol] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [sym_alpha] = ACTIONS(99),
    [sym_beta] = ACTIONS(99),
    [sym_gamma] = ACTIONS(99),
    [sym_delta] = ACTIONS(99),
    [sym_epsilon] = ACTIONS(99),
    [sym_zeta] = ACTIONS(99),
    [sym_eta] = ACTIONS(99),
    [sym_theta] = ACTIONS(99),
    [sym_iota] = ACTIONS(99),
    [sym_kappa] = ACTIONS(99),
    [sym_lambda] = ACTIONS(99),
    [sym_mu] = ACTIONS(99),
    [sym_nu] = ACTIONS(99),
    [sym_xi] = ACTIONS(99),
    [sym_omicron] = ACTIONS(99),
    [sym_pi] = ACTIONS(99),
    [sym_rho] = ACTIONS(99),
    [sym_sigma] = ACTIONS(99),
    [sym_tau] = ACTIONS(99),
    [sym_upsilon] = ACTIONS(99),
    [sym_phi] = ACTIONS(99),
    [sym_chi] = ACTIONS(99),
    [sym_psi] = ACTIONS(99),
    [sym_omega] = ACTIONS(99),
    [sym_Alpha] = ACTIONS(99),
    [sym_Beta] = ACTIONS(99),
    [sym_Gamma] = ACTIONS(99),
    [sym_Delta] = ACTIONS(99),
    [sym_Epsilon] = ACTIONS(99),
    [sym_Zeta] = ACTIONS(99),
    [sym_Eta] = ACTIONS(99),
    [sym_Theta] = ACTIONS(99),
    [sym_Iota] = ACTIONS(99),
    [sym_Kappa] = ACTIONS(99),
    [sym_Lambda] = ACTIONS(99),
    [sym_Mu] = ACTIONS(99),
    [sym_Nu] = ACTIONS(99),
    [sym_Xi] = ACTIONS(99),
    [sym_Omicron] = ACTIONS(99),
    [sym_Pi] = ACTIONS(99),
    [sym_Rho] = ACTIONS(99),
    [sym_Sigma] = ACTIONS(99),
    [sym_Tau] = ACTIONS(99),
    [sym_Upsilon] = ACTIONS(99),
    [sym_Phi] = ACTIONS(99),
    [sym_Chi] = ACTIONS(99),
    [sym_Psi] = ACTIONS(99),
    [sym_Omega] = ACTIONS(99),
    [sym_infty] = ACTIONS(99),
    [sym_hbar] = ACTIONS(99),
    [sym_ell] = ACTIONS(99),
    [sym_Re] = ACTIONS(99),
    [sym_Im] = ACTIONS(99),
    [sym_aleph] = ACTIONS(99),
    [sym_nabla] = ACTIONS(99),
    [sym_partial] = ACTIONS(99),
    [sym_forall] = ACTIONS(99),
    [sym_exists] = ACTIONS(99),
    [sym_emptyset] = ACTIONS(99),
    [sym_grad] = ACTIONS(99),
    [sym_del] = ACTIONS(99),
    [sym_plus] = ACTIONS(97),
    [sym_minus] = ACTIONS(97),
    [sym_times] = ACTIONS(97),
    [sym_equals] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
    [sym_bb] = ACTIONS(99),
    [sym_cc] = ACTIONS(99),
    [sym_tt] = ACTIONS(99),
    [sym_fr] = ACTIONS(99),
    [sym_sf] = ACTIONS(99),
    [sym_bold] = ACTIONS(99),
    [sym_cal] = ACTIONS(99),
    [sym_frak] = ACTIONS(99),
    [sym_monospace] = ACTIONS(99),
    [sym_italic] = ACTIONS(99),
    [sym_frac] = ACTIONS(99),
    [sym_root] = ACTIONS(99),
    [sym_stackrel] = ACTIONS(99),
    [sym_choose] = ACTIONS(99),
    [sym_atop] = ACTIONS(99),
    [sym_over] = ACTIONS(99),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACE_COLON] = ACTIONS(97),
    [anon_sym_LPAREN_COLON] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_COLON_RBRACE] = ACTIONS(97),
    [anon_sym_COLON_RPAREN] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
  },
  [20] = {
    [sym_number_symbol] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_alpha] = ACTIONS(103),
    [sym_beta] = ACTIONS(103),
    [sym_gamma] = ACTIONS(103),
    [sym_delta] = ACTIONS(103),
    [sym_epsilon] = ACTIONS(103),
    [sym_zeta] = ACTIONS(103),
    [sym_eta] = ACTIONS(103),
    [sym_theta] = ACTIONS(103),
    [sym_iota] = ACTIONS(103),
    [sym_kappa] = ACTIONS(103),
    [sym_lambda] = ACTIONS(103),
    [sym_mu] = ACTIONS(103),
    [sym_nu] = ACTIONS(103),
    [sym_xi] = ACTIONS(103),
    [sym_omicron] = ACTIONS(103),
    [sym_pi] = ACTIONS(103),
    [sym_rho] = ACTIONS(103),
    [sym_sigma] = ACTIONS(103),
    [sym_tau] = ACTIONS(103),
    [sym_upsilon] = ACTIONS(103),
    [sym_phi] = ACTIONS(103),
    [sym_chi] = ACTIONS(103),
    [sym_psi] = ACTIONS(103),
    [sym_omega] = ACTIONS(103),
    [sym_Alpha] = ACTIONS(103),
    [sym_Beta] = ACTIONS(103),
    [sym_Gamma] = ACTIONS(103),
    [sym_Delta] = ACTIONS(103),
    [sym_Epsilon] = ACTIONS(103),
    [sym_Zeta] = ACTIONS(103),
    [sym_Eta] = ACTIONS(103),
    [sym_Theta] = ACTIONS(103),
    [sym_Iota] = ACTIONS(103),
    [sym_Kappa] = ACTIONS(103),
    [sym_Lambda] = ACTIONS(103),
    [sym_Mu] = ACTIONS(103),
    [sym_Nu] = ACTIONS(103),
    [sym_Xi] = ACTIONS(103),
    [sym_Omicron] = ACTIONS(103),
    [sym_Pi] = ACTIONS(103),
    [sym_Rho] = ACTIONS(103),
    [sym_Sigma] = ACTIONS(103),
    [sym_Tau] = ACTIONS(103),
    [sym_Upsilon] = ACTIONS(103),
    [sym_Phi] = ACTIONS(103),
    [sym_Chi] = ACTIONS(103),
    [sym_Psi] = ACTIONS(103),
    [sym_Omega] = ACTIONS(103),
    [sym_infty] = ACTIONS(103),
    [sym_hbar] = ACTIONS(103),
    [sym_ell] = ACTIONS(103),
    [sym_Re] = ACTIONS(103),
    [sym_Im] = ACTIONS(103),
    [sym_aleph] = ACTIONS(103),
    [sym_nabla] = ACTIONS(103),
    [sym_partial] = ACTIONS(103),
    [sym_forall] = ACTIONS(103),
    [sym_exists] = ACTIONS(103),
    [sym_emptyset] = ACTIONS(103),
    [sym_grad] = ACTIONS(103),
    [sym_del] = ACTIONS(103),
    [sym_plus] = ACTIONS(101),
    [sym_minus] = ACTIONS(101),
    [sym_times] = ACTIONS(101),
    [sym_equals] = ACTIONS(101),
    [sym_sqrt] = ACTIONS(103),
    [sym_text] = ACTIONS(103),
    [sym_bb] = ACTIONS(103),
    [sym_cc] = ACTIONS(103),
    [sym_tt] = ACTIONS(103),
    [sym_fr] = ACTIONS(103),
    [sym_sf] = ACTIONS(103),
    [sym_bold] = ACTIONS(103),
    [sym_cal] = ACTIONS(103),
    [sym_frak] = ACTIONS(103),
    [sym_monospace] = ACTIONS(103),
    [sym_italic] = ACTIONS(103),
    [sym_frac] = ACTIONS(103),
    [sym_root] = ACTIONS(103),
    [sym_stackrel] = ACTIONS(103),
    [sym_choose] = ACTIONS(103),
    [sym_atop] = ACTIONS(103),
    [sym_over] = ACTIONS(103),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_LBRACE_COLON] = ACTIONS(101),
    [anon_sym_LPAREN_COLON] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_COLON_RBRACE] = ACTIONS(101),
    [anon_sym_COLON_RPAREN] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym__] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(107),
  },
  [21] = {
    [sym_number_symbol] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [sym_alpha] = ACTIONS(111),
    [sym_beta] = ACTIONS(111),
    [sym_gamma] = ACTIONS(111),
    [sym_delta] = ACTIONS(111),
    [sym_epsilon] = ACTIONS(111),
    [sym_zeta] = ACTIONS(111),
    [sym_eta] = ACTIONS(111),
    [sym_theta] = ACTIONS(111),
    [sym_iota] = ACTIONS(111),
    [sym_kappa] = ACTIONS(111),
    [sym_lambda] = ACTIONS(111),
    [sym_mu] = ACTIONS(111),
    [sym_nu] = ACTIONS(111),
    [sym_xi] = ACTIONS(111),
    [sym_omicron] = ACTIONS(111),
    [sym_pi] = ACTIONS(111),
    [sym_rho] = ACTIONS(111),
    [sym_sigma] = ACTIONS(111),
    [sym_tau] = ACTIONS(111),
    [sym_upsilon] = ACTIONS(111),
    [sym_phi] = ACTIONS(111),
    [sym_chi] = ACTIONS(111),
    [sym_psi] = ACTIONS(111),
    [sym_omega] = ACTIONS(111),
    [sym_Alpha] = ACTIONS(111),
    [sym_Beta] = ACTIONS(111),
    [sym_Gamma] = ACTIONS(111),
    [sym_Delta] = ACTIONS(111),
    [sym_Epsilon] = ACTIONS(111),
    [sym_Zeta] = ACTIONS(111),
    [sym_Eta] = ACTIONS(111),
    [sym_Theta] = ACTIONS(111),
    [sym_Iota] = ACTIONS(111),
    [sym_Kappa] = ACTIONS(111),
    [sym_Lambda] = ACTIONS(111),
    [sym_Mu] = ACTIONS(111),
    [sym_Nu] = ACTIONS(111),
    [sym_Xi] = ACTIONS(111),
    [sym_Omicron] = ACTIONS(111),
    [sym_Pi] = ACTIONS(111),
    [sym_Rho] = ACTIONS(111),
    [sym_Sigma] = ACTIONS(111),
    [sym_Tau] = ACTIONS(111),
    [sym_Upsilon] = ACTIONS(111),
    [sym_Phi] = ACTIONS(111),
    [sym_Chi] = ACTIONS(111),
    [sym_Psi] = ACTIONS(111),
    [sym_Omega] = ACTIONS(111),
    [sym_infty] = ACTIONS(111),
    [sym_hbar] = ACTIONS(111),
    [sym_ell] = ACTIONS(111),
    [sym_Re] = ACTIONS(111),
    [sym_Im] = ACTIONS(111),
    [sym_aleph] = ACTIONS(111),
    [sym_nabla] = ACTIONS(111),
    [sym_partial] = ACTIONS(111),
    [sym_forall] = ACTIONS(111),
    [sym_exists] = ACTIONS(111),
    [sym_emptyset] = ACTIONS(111),
    [sym_grad] = ACTIONS(111),
    [sym_del] = ACTIONS(111),
    [sym_plus] = ACTIONS(109),
    [sym_minus] = ACTIONS(109),
    [sym_times] = ACTIONS(109),
    [sym_equals] = ACTIONS(109),
    [sym_sqrt] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
    [sym_bb] = ACTIONS(111),
    [sym_cc] = ACTIONS(111),
    [sym_tt] = ACTIONS(111),
    [sym_fr] = ACTIONS(111),
    [sym_sf] = ACTIONS(111),
    [sym_bold] = ACTIONS(111),
    [sym_cal] = ACTIONS(111),
    [sym_frak] = ACTIONS(111),
    [sym_monospace] = ACTIONS(111),
    [sym_italic] = ACTIONS(111),
    [sym_frac] = ACTIONS(111),
    [sym_root] = ACTIONS(111),
    [sym_stackrel] = ACTIONS(111),
    [sym_choose] = ACTIONS(111),
    [sym_atop] = ACTIONS(111),
    [sym_over] = ACTIONS(111),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACE_COLON] = ACTIONS(109),
    [anon_sym_LPAREN_COLON] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_COLON_RBRACE] = ACTIONS(109),
    [anon_sym_COLON_RPAREN] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
  },
  [22] = {
    [sym_number_symbol] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_alpha] = ACTIONS(79),
    [sym_beta] = ACTIONS(79),
    [sym_gamma] = ACTIONS(79),
    [sym_delta] = ACTIONS(79),
    [sym_epsilon] = ACTIONS(79),
    [sym_zeta] = ACTIONS(79),
    [sym_eta] = ACTIONS(79),
    [sym_theta] = ACTIONS(79),
    [sym_iota] = ACTIONS(79),
    [sym_kappa] = ACTIONS(79),
    [sym_lambda] = ACTIONS(79),
    [sym_mu] = ACTIONS(79),
    [sym_nu] = ACTIONS(79),
    [sym_xi] = ACTIONS(79),
    [sym_omicron] = ACTIONS(79),
    [sym_pi] = ACTIONS(79),
    [sym_rho] = ACTIONS(79),
    [sym_sigma] = ACTIONS(79),
    [sym_tau] = ACTIONS(79),
    [sym_upsilon] = ACTIONS(79),
    [sym_phi] = ACTIONS(79),
    [sym_chi] = ACTIONS(79),
    [sym_psi] = ACTIONS(79),
    [sym_omega] = ACTIONS(79),
    [sym_Alpha] = ACTIONS(79),
    [sym_Beta] = ACTIONS(79),
    [sym_Gamma] = ACTIONS(79),
    [sym_Delta] = ACTIONS(79),
    [sym_Epsilon] = ACTIONS(79),
    [sym_Zeta] = ACTIONS(79),
    [sym_Eta] = ACTIONS(79),
    [sym_Theta] = ACTIONS(79),
    [sym_Iota] = ACTIONS(79),
    [sym_Kappa] = ACTIONS(79),
    [sym_Lambda] = ACTIONS(79),
    [sym_Mu] = ACTIONS(79),
    [sym_Nu] = ACTIONS(79),
    [sym_Xi] = ACTIONS(79),
    [sym_Omicron] = ACTIONS(79),
    [sym_Pi] = ACTIONS(79),
    [sym_Rho] = ACTIONS(79),
    [sym_Sigma] = ACTIONS(79),
    [sym_Tau] = ACTIONS(79),
    [sym_Upsilon] = ACTIONS(79),
    [sym_Phi] = ACTIONS(79),
    [sym_Chi] = ACTIONS(79),
    [sym_Psi] = ACTIONS(79),
    [sym_Omega] = ACTIONS(79),
    [sym_infty] = ACTIONS(79),
    [sym_hbar] = ACTIONS(79),
    [sym_ell] = ACTIONS(79),
    [sym_Re] = ACTIONS(79),
    [sym_Im] = ACTIONS(79),
    [sym_aleph] = ACTIONS(79),
    [sym_nabla] = ACTIONS(79),
    [sym_partial] = ACTIONS(79),
    [sym_forall] = ACTIONS(79),
    [sym_exists] = ACTIONS(79),
    [sym_emptyset] = ACTIONS(79),
    [sym_grad] = ACTIONS(79),
    [sym_del] = ACTIONS(79),
    [sym_plus] = ACTIONS(77),
    [sym_minus] = ACTIONS(77),
    [sym_times] = ACTIONS(77),
    [sym_equals] = ACTIONS(77),
    [sym_sqrt] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
    [sym_bb] = ACTIONS(79),
    [sym_cc] = ACTIONS(79),
    [sym_tt] = ACTIONS(79),
    [sym_fr] = ACTIONS(79),
    [sym_sf] = ACTIONS(79),
    [sym_bold] = ACTIONS(79),
    [sym_cal] = ACTIONS(79),
    [sym_frak] = ACTIONS(79),
    [sym_monospace] = ACTIONS(79),
    [sym_italic] = ACTIONS(79),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACE_COLON] = ACTIONS(77),
    [anon_sym_LPAREN_COLON] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_COLON_RBRACE] = ACTIONS(113),
    [anon_sym_COLON_RPAREN] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(77),
  },
  [23] = {
    [sym_number_symbol] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
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
    [sym_italic] = ACTIONS(117),
    [sym_frac] = ACTIONS(117),
    [sym_root] = ACTIONS(117),
    [sym_stackrel] = ACTIONS(117),
    [sym_choose] = ACTIONS(117),
    [sym_atop] = ACTIONS(117),
    [sym_over] = ACTIONS(117),
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
  [24] = {
    [sym_number_symbol] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [sym_alpha] = ACTIONS(121),
    [sym_beta] = ACTIONS(121),
    [sym_gamma] = ACTIONS(121),
    [sym_delta] = ACTIONS(121),
    [sym_epsilon] = ACTIONS(121),
    [sym_zeta] = ACTIONS(121),
    [sym_eta] = ACTIONS(121),
    [sym_theta] = ACTIONS(121),
    [sym_iota] = ACTIONS(121),
    [sym_kappa] = ACTIONS(121),
    [sym_lambda] = ACTIONS(121),
    [sym_mu] = ACTIONS(121),
    [sym_nu] = ACTIONS(121),
    [sym_xi] = ACTIONS(121),
    [sym_omicron] = ACTIONS(121),
    [sym_pi] = ACTIONS(121),
    [sym_rho] = ACTIONS(121),
    [sym_sigma] = ACTIONS(121),
    [sym_tau] = ACTIONS(121),
    [sym_upsilon] = ACTIONS(121),
    [sym_phi] = ACTIONS(121),
    [sym_chi] = ACTIONS(121),
    [sym_psi] = ACTIONS(121),
    [sym_omega] = ACTIONS(121),
    [sym_Alpha] = ACTIONS(121),
    [sym_Beta] = ACTIONS(121),
    [sym_Gamma] = ACTIONS(121),
    [sym_Delta] = ACTIONS(121),
    [sym_Epsilon] = ACTIONS(121),
    [sym_Zeta] = ACTIONS(121),
    [sym_Eta] = ACTIONS(121),
    [sym_Theta] = ACTIONS(121),
    [sym_Iota] = ACTIONS(121),
    [sym_Kappa] = ACTIONS(121),
    [sym_Lambda] = ACTIONS(121),
    [sym_Mu] = ACTIONS(121),
    [sym_Nu] = ACTIONS(121),
    [sym_Xi] = ACTIONS(121),
    [sym_Omicron] = ACTIONS(121),
    [sym_Pi] = ACTIONS(121),
    [sym_Rho] = ACTIONS(121),
    [sym_Sigma] = ACTIONS(121),
    [sym_Tau] = ACTIONS(121),
    [sym_Upsilon] = ACTIONS(121),
    [sym_Phi] = ACTIONS(121),
    [sym_Chi] = ACTIONS(121),
    [sym_Psi] = ACTIONS(121),
    [sym_Omega] = ACTIONS(121),
    [sym_infty] = ACTIONS(121),
    [sym_hbar] = ACTIONS(121),
    [sym_ell] = ACTIONS(121),
    [sym_Re] = ACTIONS(121),
    [sym_Im] = ACTIONS(121),
    [sym_aleph] = ACTIONS(121),
    [sym_nabla] = ACTIONS(121),
    [sym_partial] = ACTIONS(121),
    [sym_forall] = ACTIONS(121),
    [sym_exists] = ACTIONS(121),
    [sym_emptyset] = ACTIONS(121),
    [sym_grad] = ACTIONS(121),
    [sym_del] = ACTIONS(121),
    [sym_plus] = ACTIONS(119),
    [sym_minus] = ACTIONS(119),
    [sym_times] = ACTIONS(119),
    [sym_equals] = ACTIONS(119),
    [sym_sqrt] = ACTIONS(121),
    [sym_text] = ACTIONS(121),
    [sym_bb] = ACTIONS(121),
    [sym_cc] = ACTIONS(121),
    [sym_tt] = ACTIONS(121),
    [sym_fr] = ACTIONS(121),
    [sym_sf] = ACTIONS(121),
    [sym_bold] = ACTIONS(121),
    [sym_cal] = ACTIONS(121),
    [sym_frak] = ACTIONS(121),
    [sym_monospace] = ACTIONS(121),
    [sym_italic] = ACTIONS(121),
    [sym_frac] = ACTIONS(121),
    [sym_root] = ACTIONS(121),
    [sym_stackrel] = ACTIONS(121),
    [sym_choose] = ACTIONS(121),
    [sym_atop] = ACTIONS(121),
    [sym_over] = ACTIONS(121),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACE_COLON] = ACTIONS(119),
    [anon_sym_LPAREN_COLON] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_COLON_RBRACE] = ACTIONS(119),
    [anon_sym_COLON_RPAREN] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(123),
  },
  [25] = {
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(24),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
  [26] = {
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(52),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
  [27] = {
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(41),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
  [28] = {
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(50),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
  [29] = {
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(19),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
  [30] = {
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(32),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
  [31] = {
    [sym_number_symbol] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_alpha] = ACTIONS(103),
    [sym_beta] = ACTIONS(103),
    [sym_gamma] = ACTIONS(103),
    [sym_delta] = ACTIONS(103),
    [sym_epsilon] = ACTIONS(103),
    [sym_zeta] = ACTIONS(103),
    [sym_eta] = ACTIONS(103),
    [sym_theta] = ACTIONS(103),
    [sym_iota] = ACTIONS(103),
    [sym_kappa] = ACTIONS(103),
    [sym_lambda] = ACTIONS(103),
    [sym_mu] = ACTIONS(103),
    [sym_nu] = ACTIONS(103),
    [sym_xi] = ACTIONS(103),
    [sym_omicron] = ACTIONS(103),
    [sym_pi] = ACTIONS(103),
    [sym_rho] = ACTIONS(103),
    [sym_sigma] = ACTIONS(103),
    [sym_tau] = ACTIONS(103),
    [sym_upsilon] = ACTIONS(103),
    [sym_phi] = ACTIONS(103),
    [sym_chi] = ACTIONS(103),
    [sym_psi] = ACTIONS(103),
    [sym_omega] = ACTIONS(103),
    [sym_Alpha] = ACTIONS(103),
    [sym_Beta] = ACTIONS(103),
    [sym_Gamma] = ACTIONS(103),
    [sym_Delta] = ACTIONS(103),
    [sym_Epsilon] = ACTIONS(103),
    [sym_Zeta] = ACTIONS(103),
    [sym_Eta] = ACTIONS(103),
    [sym_Theta] = ACTIONS(103),
    [sym_Iota] = ACTIONS(103),
    [sym_Kappa] = ACTIONS(103),
    [sym_Lambda] = ACTIONS(103),
    [sym_Mu] = ACTIONS(103),
    [sym_Nu] = ACTIONS(103),
    [sym_Xi] = ACTIONS(103),
    [sym_Omicron] = ACTIONS(103),
    [sym_Pi] = ACTIONS(103),
    [sym_Rho] = ACTIONS(103),
    [sym_Sigma] = ACTIONS(103),
    [sym_Tau] = ACTIONS(103),
    [sym_Upsilon] = ACTIONS(103),
    [sym_Phi] = ACTIONS(103),
    [sym_Chi] = ACTIONS(103),
    [sym_Psi] = ACTIONS(103),
    [sym_Omega] = ACTIONS(103),
    [sym_infty] = ACTIONS(103),
    [sym_hbar] = ACTIONS(103),
    [sym_ell] = ACTIONS(103),
    [sym_Re] = ACTIONS(103),
    [sym_Im] = ACTIONS(103),
    [sym_aleph] = ACTIONS(103),
    [sym_nabla] = ACTIONS(103),
    [sym_partial] = ACTIONS(103),
    [sym_forall] = ACTIONS(103),
    [sym_exists] = ACTIONS(103),
    [sym_emptyset] = ACTIONS(103),
    [sym_grad] = ACTIONS(103),
    [sym_del] = ACTIONS(103),
    [sym_plus] = ACTIONS(101),
    [sym_minus] = ACTIONS(101),
    [sym_times] = ACTIONS(101),
    [sym_equals] = ACTIONS(101),
    [sym_sqrt] = ACTIONS(103),
    [sym_text] = ACTIONS(103),
    [sym_bb] = ACTIONS(103),
    [sym_cc] = ACTIONS(103),
    [sym_tt] = ACTIONS(103),
    [sym_fr] = ACTIONS(103),
    [sym_sf] = ACTIONS(103),
    [sym_bold] = ACTIONS(103),
    [sym_cal] = ACTIONS(103),
    [sym_frak] = ACTIONS(103),
    [sym_monospace] = ACTIONS(103),
    [sym_italic] = ACTIONS(103),
    [sym_frac] = ACTIONS(103),
    [sym_root] = ACTIONS(103),
    [sym_stackrel] = ACTIONS(103),
    [sym_choose] = ACTIONS(103),
    [sym_atop] = ACTIONS(103),
    [sym_over] = ACTIONS(103),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_LBRACE_COLON] = ACTIONS(101),
    [anon_sym_LPAREN_COLON] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_COLON_RBRACE] = ACTIONS(101),
    [anon_sym_COLON_RPAREN] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
  },
  [32] = {
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(17),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
  [33] = {
    [sym_number_symbol] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
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
    [sym_italic] = ACTIONS(127),
    [sym_frac] = ACTIONS(127),
    [sym_root] = ACTIONS(127),
    [sym_stackrel] = ACTIONS(127),
    [sym_choose] = ACTIONS(127),
    [sym_atop] = ACTIONS(127),
    [sym_over] = ACTIONS(127),
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
  },
  [34] = {
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(33),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
  [35] = {
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(38),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
  [36] = {
    [sym_literal_string] = STATE(21),
    [sym_left_bracket] = STATE(8),
    [sym_bracket_expr] = STATE(21),
    [sym_matrix_expr] = STATE(21),
    [sym_unary_expr] = STATE(21),
    [sym_binary_expr] = STATE(21),
    [sym_simple_expression] = STATE(37),
    [sym_number_symbol] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
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
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(49),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
  [38] = {
    [sym_number_symbol] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
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
    [sym_italic] = ACTIONS(131),
    [sym_frac] = ACTIONS(131),
    [sym_root] = ACTIONS(131),
    [sym_stackrel] = ACTIONS(131),
    [sym_choose] = ACTIONS(131),
    [sym_atop] = ACTIONS(131),
    [sym_over] = ACTIONS(131),
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
  },
  [39] = {
    [sym_literal_string] = STATE(43),
    [sym_left_bracket] = STATE(7),
    [sym_bracket_expr] = STATE(43),
    [sym_matrix_expr] = STATE(43),
    [sym_unary_expr] = STATE(43),
    [sym_binary_expr] = STATE(43),
    [sym_simple_expression] = STATE(53),
    [sym_number_symbol] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_number_symbol] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_alpha] = ACTIONS(103),
    [sym_beta] = ACTIONS(103),
    [sym_gamma] = ACTIONS(103),
    [sym_delta] = ACTIONS(103),
    [sym_epsilon] = ACTIONS(103),
    [sym_zeta] = ACTIONS(103),
    [sym_eta] = ACTIONS(103),
    [sym_theta] = ACTIONS(103),
    [sym_iota] = ACTIONS(103),
    [sym_kappa] = ACTIONS(103),
    [sym_lambda] = ACTIONS(103),
    [sym_mu] = ACTIONS(103),
    [sym_nu] = ACTIONS(103),
    [sym_xi] = ACTIONS(103),
    [sym_omicron] = ACTIONS(103),
    [sym_pi] = ACTIONS(103),
    [sym_rho] = ACTIONS(103),
    [sym_sigma] = ACTIONS(103),
    [sym_tau] = ACTIONS(103),
    [sym_upsilon] = ACTIONS(103),
    [sym_phi] = ACTIONS(103),
    [sym_chi] = ACTIONS(103),
    [sym_psi] = ACTIONS(103),
    [sym_omega] = ACTIONS(103),
    [sym_Alpha] = ACTIONS(103),
    [sym_Beta] = ACTIONS(103),
    [sym_Gamma] = ACTIONS(103),
    [sym_Delta] = ACTIONS(103),
    [sym_Epsilon] = ACTIONS(103),
    [sym_Zeta] = ACTIONS(103),
    [sym_Eta] = ACTIONS(103),
    [sym_Theta] = ACTIONS(103),
    [sym_Iota] = ACTIONS(103),
    [sym_Kappa] = ACTIONS(103),
    [sym_Lambda] = ACTIONS(103),
    [sym_Mu] = ACTIONS(103),
    [sym_Nu] = ACTIONS(103),
    [sym_Xi] = ACTIONS(103),
    [sym_Omicron] = ACTIONS(103),
    [sym_Pi] = ACTIONS(103),
    [sym_Rho] = ACTIONS(103),
    [sym_Sigma] = ACTIONS(103),
    [sym_Tau] = ACTIONS(103),
    [sym_Upsilon] = ACTIONS(103),
    [sym_Phi] = ACTIONS(103),
    [sym_Chi] = ACTIONS(103),
    [sym_Psi] = ACTIONS(103),
    [sym_Omega] = ACTIONS(103),
    [sym_infty] = ACTIONS(103),
    [sym_hbar] = ACTIONS(103),
    [sym_ell] = ACTIONS(103),
    [sym_Re] = ACTIONS(103),
    [sym_Im] = ACTIONS(103),
    [sym_aleph] = ACTIONS(103),
    [sym_nabla] = ACTIONS(103),
    [sym_partial] = ACTIONS(103),
    [sym_forall] = ACTIONS(103),
    [sym_exists] = ACTIONS(103),
    [sym_emptyset] = ACTIONS(103),
    [sym_grad] = ACTIONS(103),
    [sym_del] = ACTIONS(103),
    [sym_plus] = ACTIONS(101),
    [sym_minus] = ACTIONS(101),
    [sym_times] = ACTIONS(101),
    [sym_equals] = ACTIONS(101),
    [sym_sqrt] = ACTIONS(103),
    [sym_text] = ACTIONS(103),
    [sym_bb] = ACTIONS(103),
    [sym_cc] = ACTIONS(103),
    [sym_tt] = ACTIONS(103),
    [sym_fr] = ACTIONS(103),
    [sym_sf] = ACTIONS(103),
    [sym_bold] = ACTIONS(103),
    [sym_cal] = ACTIONS(103),
    [sym_frak] = ACTIONS(103),
    [sym_monospace] = ACTIONS(103),
    [sym_italic] = ACTIONS(103),
    [sym_frac] = ACTIONS(103),
    [sym_root] = ACTIONS(103),
    [sym_stackrel] = ACTIONS(103),
    [sym_choose] = ACTIONS(103),
    [sym_atop] = ACTIONS(103),
    [sym_over] = ACTIONS(103),
    [sym_multi_linebreak] = ACTIONS(103),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_LBRACE_COLON] = ACTIONS(101),
    [anon_sym_LPAREN_COLON] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(135),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_number_symbol] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [sym_alpha] = ACTIONS(99),
    [sym_beta] = ACTIONS(99),
    [sym_gamma] = ACTIONS(99),
    [sym_delta] = ACTIONS(99),
    [sym_epsilon] = ACTIONS(99),
    [sym_zeta] = ACTIONS(99),
    [sym_eta] = ACTIONS(99),
    [sym_theta] = ACTIONS(99),
    [sym_iota] = ACTIONS(99),
    [sym_kappa] = ACTIONS(99),
    [sym_lambda] = ACTIONS(99),
    [sym_mu] = ACTIONS(99),
    [sym_nu] = ACTIONS(99),
    [sym_xi] = ACTIONS(99),
    [sym_omicron] = ACTIONS(99),
    [sym_pi] = ACTIONS(99),
    [sym_rho] = ACTIONS(99),
    [sym_sigma] = ACTIONS(99),
    [sym_tau] = ACTIONS(99),
    [sym_upsilon] = ACTIONS(99),
    [sym_phi] = ACTIONS(99),
    [sym_chi] = ACTIONS(99),
    [sym_psi] = ACTIONS(99),
    [sym_omega] = ACTIONS(99),
    [sym_Alpha] = ACTIONS(99),
    [sym_Beta] = ACTIONS(99),
    [sym_Gamma] = ACTIONS(99),
    [sym_Delta] = ACTIONS(99),
    [sym_Epsilon] = ACTIONS(99),
    [sym_Zeta] = ACTIONS(99),
    [sym_Eta] = ACTIONS(99),
    [sym_Theta] = ACTIONS(99),
    [sym_Iota] = ACTIONS(99),
    [sym_Kappa] = ACTIONS(99),
    [sym_Lambda] = ACTIONS(99),
    [sym_Mu] = ACTIONS(99),
    [sym_Nu] = ACTIONS(99),
    [sym_Xi] = ACTIONS(99),
    [sym_Omicron] = ACTIONS(99),
    [sym_Pi] = ACTIONS(99),
    [sym_Rho] = ACTIONS(99),
    [sym_Sigma] = ACTIONS(99),
    [sym_Tau] = ACTIONS(99),
    [sym_Upsilon] = ACTIONS(99),
    [sym_Phi] = ACTIONS(99),
    [sym_Chi] = ACTIONS(99),
    [sym_Psi] = ACTIONS(99),
    [sym_Omega] = ACTIONS(99),
    [sym_infty] = ACTIONS(99),
    [sym_hbar] = ACTIONS(99),
    [sym_ell] = ACTIONS(99),
    [sym_Re] = ACTIONS(99),
    [sym_Im] = ACTIONS(99),
    [sym_aleph] = ACTIONS(99),
    [sym_nabla] = ACTIONS(99),
    [sym_partial] = ACTIONS(99),
    [sym_forall] = ACTIONS(99),
    [sym_exists] = ACTIONS(99),
    [sym_emptyset] = ACTIONS(99),
    [sym_grad] = ACTIONS(99),
    [sym_del] = ACTIONS(99),
    [sym_plus] = ACTIONS(97),
    [sym_minus] = ACTIONS(97),
    [sym_times] = ACTIONS(97),
    [sym_equals] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
    [sym_bb] = ACTIONS(99),
    [sym_cc] = ACTIONS(99),
    [sym_tt] = ACTIONS(99),
    [sym_fr] = ACTIONS(99),
    [sym_sf] = ACTIONS(99),
    [sym_bold] = ACTIONS(99),
    [sym_cal] = ACTIONS(99),
    [sym_frak] = ACTIONS(99),
    [sym_monospace] = ACTIONS(99),
    [sym_italic] = ACTIONS(99),
    [sym_frac] = ACTIONS(99),
    [sym_root] = ACTIONS(99),
    [sym_stackrel] = ACTIONS(99),
    [sym_choose] = ACTIONS(99),
    [sym_atop] = ACTIONS(99),
    [sym_over] = ACTIONS(99),
    [sym_multi_linebreak] = ACTIONS(99),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACE_COLON] = ACTIONS(97),
    [anon_sym_LPAREN_COLON] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_number_symbol] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
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
    [sym_italic] = ACTIONS(117),
    [sym_frac] = ACTIONS(117),
    [sym_root] = ACTIONS(117),
    [sym_stackrel] = ACTIONS(117),
    [sym_choose] = ACTIONS(117),
    [sym_atop] = ACTIONS(117),
    [sym_over] = ACTIONS(117),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_number_symbol] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [sym_alpha] = ACTIONS(111),
    [sym_beta] = ACTIONS(111),
    [sym_gamma] = ACTIONS(111),
    [sym_delta] = ACTIONS(111),
    [sym_epsilon] = ACTIONS(111),
    [sym_zeta] = ACTIONS(111),
    [sym_eta] = ACTIONS(111),
    [sym_theta] = ACTIONS(111),
    [sym_iota] = ACTIONS(111),
    [sym_kappa] = ACTIONS(111),
    [sym_lambda] = ACTIONS(111),
    [sym_mu] = ACTIONS(111),
    [sym_nu] = ACTIONS(111),
    [sym_xi] = ACTIONS(111),
    [sym_omicron] = ACTIONS(111),
    [sym_pi] = ACTIONS(111),
    [sym_rho] = ACTIONS(111),
    [sym_sigma] = ACTIONS(111),
    [sym_tau] = ACTIONS(111),
    [sym_upsilon] = ACTIONS(111),
    [sym_phi] = ACTIONS(111),
    [sym_chi] = ACTIONS(111),
    [sym_psi] = ACTIONS(111),
    [sym_omega] = ACTIONS(111),
    [sym_Alpha] = ACTIONS(111),
    [sym_Beta] = ACTIONS(111),
    [sym_Gamma] = ACTIONS(111),
    [sym_Delta] = ACTIONS(111),
    [sym_Epsilon] = ACTIONS(111),
    [sym_Zeta] = ACTIONS(111),
    [sym_Eta] = ACTIONS(111),
    [sym_Theta] = ACTIONS(111),
    [sym_Iota] = ACTIONS(111),
    [sym_Kappa] = ACTIONS(111),
    [sym_Lambda] = ACTIONS(111),
    [sym_Mu] = ACTIONS(111),
    [sym_Nu] = ACTIONS(111),
    [sym_Xi] = ACTIONS(111),
    [sym_Omicron] = ACTIONS(111),
    [sym_Pi] = ACTIONS(111),
    [sym_Rho] = ACTIONS(111),
    [sym_Sigma] = ACTIONS(111),
    [sym_Tau] = ACTIONS(111),
    [sym_Upsilon] = ACTIONS(111),
    [sym_Phi] = ACTIONS(111),
    [sym_Chi] = ACTIONS(111),
    [sym_Psi] = ACTIONS(111),
    [sym_Omega] = ACTIONS(111),
    [sym_infty] = ACTIONS(111),
    [sym_hbar] = ACTIONS(111),
    [sym_ell] = ACTIONS(111),
    [sym_Re] = ACTIONS(111),
    [sym_Im] = ACTIONS(111),
    [sym_aleph] = ACTIONS(111),
    [sym_nabla] = ACTIONS(111),
    [sym_partial] = ACTIONS(111),
    [sym_forall] = ACTIONS(111),
    [sym_exists] = ACTIONS(111),
    [sym_emptyset] = ACTIONS(111),
    [sym_grad] = ACTIONS(111),
    [sym_del] = ACTIONS(111),
    [sym_plus] = ACTIONS(109),
    [sym_minus] = ACTIONS(109),
    [sym_times] = ACTIONS(109),
    [sym_equals] = ACTIONS(109),
    [sym_sqrt] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
    [sym_bb] = ACTIONS(111),
    [sym_cc] = ACTIONS(111),
    [sym_tt] = ACTIONS(111),
    [sym_fr] = ACTIONS(111),
    [sym_sf] = ACTIONS(111),
    [sym_bold] = ACTIONS(111),
    [sym_cal] = ACTIONS(111),
    [sym_frak] = ACTIONS(111),
    [sym_monospace] = ACTIONS(111),
    [sym_italic] = ACTIONS(111),
    [sym_frac] = ACTIONS(111),
    [sym_root] = ACTIONS(111),
    [sym_stackrel] = ACTIONS(111),
    [sym_choose] = ACTIONS(111),
    [sym_atop] = ACTIONS(111),
    [sym_over] = ACTIONS(111),
    [sym_multi_linebreak] = ACTIONS(111),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACE_COLON] = ACTIONS(109),
    [anon_sym_LPAREN_COLON] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_number_symbol] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
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
    [sym_sqrt] = ACTIONS(75),
    [sym_text] = ACTIONS(75),
    [sym_bb] = ACTIONS(75),
    [sym_cc] = ACTIONS(75),
    [sym_tt] = ACTIONS(75),
    [sym_fr] = ACTIONS(75),
    [sym_sf] = ACTIONS(75),
    [sym_bold] = ACTIONS(75),
    [sym_cal] = ACTIONS(75),
    [sym_frak] = ACTIONS(75),
    [sym_monospace] = ACTIONS(75),
    [sym_italic] = ACTIONS(75),
    [sym_frac] = ACTIONS(75),
    [sym_root] = ACTIONS(75),
    [sym_stackrel] = ACTIONS(75),
    [sym_choose] = ACTIONS(75),
    [sym_atop] = ACTIONS(75),
    [sym_over] = ACTIONS(75),
    [sym_multi_linebreak] = ACTIONS(75),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACE_COLON] = ACTIONS(73),
    [anon_sym_LPAREN_COLON] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_number_symbol] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [sym_alpha] = ACTIONS(95),
    [sym_beta] = ACTIONS(95),
    [sym_gamma] = ACTIONS(95),
    [sym_delta] = ACTIONS(95),
    [sym_epsilon] = ACTIONS(95),
    [sym_zeta] = ACTIONS(95),
    [sym_eta] = ACTIONS(95),
    [sym_theta] = ACTIONS(95),
    [sym_iota] = ACTIONS(95),
    [sym_kappa] = ACTIONS(95),
    [sym_lambda] = ACTIONS(95),
    [sym_mu] = ACTIONS(95),
    [sym_nu] = ACTIONS(95),
    [sym_xi] = ACTIONS(95),
    [sym_omicron] = ACTIONS(95),
    [sym_pi] = ACTIONS(95),
    [sym_rho] = ACTIONS(95),
    [sym_sigma] = ACTIONS(95),
    [sym_tau] = ACTIONS(95),
    [sym_upsilon] = ACTIONS(95),
    [sym_phi] = ACTIONS(95),
    [sym_chi] = ACTIONS(95),
    [sym_psi] = ACTIONS(95),
    [sym_omega] = ACTIONS(95),
    [sym_Alpha] = ACTIONS(95),
    [sym_Beta] = ACTIONS(95),
    [sym_Gamma] = ACTIONS(95),
    [sym_Delta] = ACTIONS(95),
    [sym_Epsilon] = ACTIONS(95),
    [sym_Zeta] = ACTIONS(95),
    [sym_Eta] = ACTIONS(95),
    [sym_Theta] = ACTIONS(95),
    [sym_Iota] = ACTIONS(95),
    [sym_Kappa] = ACTIONS(95),
    [sym_Lambda] = ACTIONS(95),
    [sym_Mu] = ACTIONS(95),
    [sym_Nu] = ACTIONS(95),
    [sym_Xi] = ACTIONS(95),
    [sym_Omicron] = ACTIONS(95),
    [sym_Pi] = ACTIONS(95),
    [sym_Rho] = ACTIONS(95),
    [sym_Sigma] = ACTIONS(95),
    [sym_Tau] = ACTIONS(95),
    [sym_Upsilon] = ACTIONS(95),
    [sym_Phi] = ACTIONS(95),
    [sym_Chi] = ACTIONS(95),
    [sym_Psi] = ACTIONS(95),
    [sym_Omega] = ACTIONS(95),
    [sym_infty] = ACTIONS(95),
    [sym_hbar] = ACTIONS(95),
    [sym_ell] = ACTIONS(95),
    [sym_Re] = ACTIONS(95),
    [sym_Im] = ACTIONS(95),
    [sym_aleph] = ACTIONS(95),
    [sym_nabla] = ACTIONS(95),
    [sym_partial] = ACTIONS(95),
    [sym_forall] = ACTIONS(95),
    [sym_exists] = ACTIONS(95),
    [sym_emptyset] = ACTIONS(95),
    [sym_grad] = ACTIONS(95),
    [sym_del] = ACTIONS(95),
    [sym_plus] = ACTIONS(93),
    [sym_minus] = ACTIONS(93),
    [sym_times] = ACTIONS(93),
    [sym_equals] = ACTIONS(93),
    [sym_sqrt] = ACTIONS(95),
    [sym_text] = ACTIONS(95),
    [sym_bb] = ACTIONS(95),
    [sym_cc] = ACTIONS(95),
    [sym_tt] = ACTIONS(95),
    [sym_fr] = ACTIONS(95),
    [sym_sf] = ACTIONS(95),
    [sym_bold] = ACTIONS(95),
    [sym_cal] = ACTIONS(95),
    [sym_frak] = ACTIONS(95),
    [sym_monospace] = ACTIONS(95),
    [sym_italic] = ACTIONS(95),
    [sym_frac] = ACTIONS(95),
    [sym_root] = ACTIONS(95),
    [sym_stackrel] = ACTIONS(95),
    [sym_choose] = ACTIONS(95),
    [sym_atop] = ACTIONS(95),
    [sym_over] = ACTIONS(95),
    [sym_multi_linebreak] = ACTIONS(95),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_LBRACE_COLON] = ACTIONS(93),
    [anon_sym_LPAREN_COLON] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_number_symbol] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_alpha] = ACTIONS(79),
    [sym_beta] = ACTIONS(79),
    [sym_gamma] = ACTIONS(79),
    [sym_delta] = ACTIONS(79),
    [sym_epsilon] = ACTIONS(79),
    [sym_zeta] = ACTIONS(79),
    [sym_eta] = ACTIONS(79),
    [sym_theta] = ACTIONS(79),
    [sym_iota] = ACTIONS(79),
    [sym_kappa] = ACTIONS(79),
    [sym_lambda] = ACTIONS(79),
    [sym_mu] = ACTIONS(79),
    [sym_nu] = ACTIONS(79),
    [sym_xi] = ACTIONS(79),
    [sym_omicron] = ACTIONS(79),
    [sym_pi] = ACTIONS(79),
    [sym_rho] = ACTIONS(79),
    [sym_sigma] = ACTIONS(79),
    [sym_tau] = ACTIONS(79),
    [sym_upsilon] = ACTIONS(79),
    [sym_phi] = ACTIONS(79),
    [sym_chi] = ACTIONS(79),
    [sym_psi] = ACTIONS(79),
    [sym_omega] = ACTIONS(79),
    [sym_Alpha] = ACTIONS(79),
    [sym_Beta] = ACTIONS(79),
    [sym_Gamma] = ACTIONS(79),
    [sym_Delta] = ACTIONS(79),
    [sym_Epsilon] = ACTIONS(79),
    [sym_Zeta] = ACTIONS(79),
    [sym_Eta] = ACTIONS(79),
    [sym_Theta] = ACTIONS(79),
    [sym_Iota] = ACTIONS(79),
    [sym_Kappa] = ACTIONS(79),
    [sym_Lambda] = ACTIONS(79),
    [sym_Mu] = ACTIONS(79),
    [sym_Nu] = ACTIONS(79),
    [sym_Xi] = ACTIONS(79),
    [sym_Omicron] = ACTIONS(79),
    [sym_Pi] = ACTIONS(79),
    [sym_Rho] = ACTIONS(79),
    [sym_Sigma] = ACTIONS(79),
    [sym_Tau] = ACTIONS(79),
    [sym_Upsilon] = ACTIONS(79),
    [sym_Phi] = ACTIONS(79),
    [sym_Chi] = ACTIONS(79),
    [sym_Psi] = ACTIONS(79),
    [sym_Omega] = ACTIONS(79),
    [sym_infty] = ACTIONS(79),
    [sym_hbar] = ACTIONS(79),
    [sym_ell] = ACTIONS(79),
    [sym_Re] = ACTIONS(79),
    [sym_Im] = ACTIONS(79),
    [sym_aleph] = ACTIONS(79),
    [sym_nabla] = ACTIONS(79),
    [sym_partial] = ACTIONS(79),
    [sym_forall] = ACTIONS(79),
    [sym_exists] = ACTIONS(79),
    [sym_emptyset] = ACTIONS(79),
    [sym_grad] = ACTIONS(79),
    [sym_del] = ACTIONS(79),
    [sym_plus] = ACTIONS(77),
    [sym_minus] = ACTIONS(77),
    [sym_times] = ACTIONS(77),
    [sym_equals] = ACTIONS(77),
    [sym_sqrt] = ACTIONS(79),
    [sym_text] = ACTIONS(79),
    [sym_bb] = ACTIONS(79),
    [sym_cc] = ACTIONS(79),
    [sym_tt] = ACTIONS(79),
    [sym_fr] = ACTIONS(79),
    [sym_sf] = ACTIONS(79),
    [sym_bold] = ACTIONS(79),
    [sym_cal] = ACTIONS(79),
    [sym_frak] = ACTIONS(79),
    [sym_monospace] = ACTIONS(79),
    [sym_italic] = ACTIONS(79),
    [sym_frac] = ACTIONS(79),
    [sym_root] = ACTIONS(79),
    [sym_stackrel] = ACTIONS(79),
    [sym_choose] = ACTIONS(79),
    [sym_atop] = ACTIONS(79),
    [sym_over] = ACTIONS(79),
    [sym_multi_linebreak] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACE_COLON] = ACTIONS(77),
    [anon_sym_LPAREN_COLON] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(77),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_number_symbol] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [sym_alpha] = ACTIONS(83),
    [sym_beta] = ACTIONS(83),
    [sym_gamma] = ACTIONS(83),
    [sym_delta] = ACTIONS(83),
    [sym_epsilon] = ACTIONS(83),
    [sym_zeta] = ACTIONS(83),
    [sym_eta] = ACTIONS(83),
    [sym_theta] = ACTIONS(83),
    [sym_iota] = ACTIONS(83),
    [sym_kappa] = ACTIONS(83),
    [sym_lambda] = ACTIONS(83),
    [sym_mu] = ACTIONS(83),
    [sym_nu] = ACTIONS(83),
    [sym_xi] = ACTIONS(83),
    [sym_omicron] = ACTIONS(83),
    [sym_pi] = ACTIONS(83),
    [sym_rho] = ACTIONS(83),
    [sym_sigma] = ACTIONS(83),
    [sym_tau] = ACTIONS(83),
    [sym_upsilon] = ACTIONS(83),
    [sym_phi] = ACTIONS(83),
    [sym_chi] = ACTIONS(83),
    [sym_psi] = ACTIONS(83),
    [sym_omega] = ACTIONS(83),
    [sym_Alpha] = ACTIONS(83),
    [sym_Beta] = ACTIONS(83),
    [sym_Gamma] = ACTIONS(83),
    [sym_Delta] = ACTIONS(83),
    [sym_Epsilon] = ACTIONS(83),
    [sym_Zeta] = ACTIONS(83),
    [sym_Eta] = ACTIONS(83),
    [sym_Theta] = ACTIONS(83),
    [sym_Iota] = ACTIONS(83),
    [sym_Kappa] = ACTIONS(83),
    [sym_Lambda] = ACTIONS(83),
    [sym_Mu] = ACTIONS(83),
    [sym_Nu] = ACTIONS(83),
    [sym_Xi] = ACTIONS(83),
    [sym_Omicron] = ACTIONS(83),
    [sym_Pi] = ACTIONS(83),
    [sym_Rho] = ACTIONS(83),
    [sym_Sigma] = ACTIONS(83),
    [sym_Tau] = ACTIONS(83),
    [sym_Upsilon] = ACTIONS(83),
    [sym_Phi] = ACTIONS(83),
    [sym_Chi] = ACTIONS(83),
    [sym_Psi] = ACTIONS(83),
    [sym_Omega] = ACTIONS(83),
    [sym_infty] = ACTIONS(83),
    [sym_hbar] = ACTIONS(83),
    [sym_ell] = ACTIONS(83),
    [sym_Re] = ACTIONS(83),
    [sym_Im] = ACTIONS(83),
    [sym_aleph] = ACTIONS(83),
    [sym_nabla] = ACTIONS(83),
    [sym_partial] = ACTIONS(83),
    [sym_forall] = ACTIONS(83),
    [sym_exists] = ACTIONS(83),
    [sym_emptyset] = ACTIONS(83),
    [sym_grad] = ACTIONS(83),
    [sym_del] = ACTIONS(83),
    [sym_plus] = ACTIONS(81),
    [sym_minus] = ACTIONS(81),
    [sym_times] = ACTIONS(81),
    [sym_equals] = ACTIONS(81),
    [sym_sqrt] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
    [sym_bb] = ACTIONS(83),
    [sym_cc] = ACTIONS(83),
    [sym_tt] = ACTIONS(83),
    [sym_fr] = ACTIONS(83),
    [sym_sf] = ACTIONS(83),
    [sym_bold] = ACTIONS(83),
    [sym_cal] = ACTIONS(83),
    [sym_frak] = ACTIONS(83),
    [sym_monospace] = ACTIONS(83),
    [sym_italic] = ACTIONS(83),
    [sym_frac] = ACTIONS(83),
    [sym_root] = ACTIONS(83),
    [sym_stackrel] = ACTIONS(83),
    [sym_choose] = ACTIONS(83),
    [sym_atop] = ACTIONS(83),
    [sym_over] = ACTIONS(83),
    [sym_multi_linebreak] = ACTIONS(83),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LBRACE_COLON] = ACTIONS(81),
    [anon_sym_LPAREN_COLON] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_number_symbol] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_alpha] = ACTIONS(87),
    [sym_beta] = ACTIONS(87),
    [sym_gamma] = ACTIONS(87),
    [sym_delta] = ACTIONS(87),
    [sym_epsilon] = ACTIONS(87),
    [sym_zeta] = ACTIONS(87),
    [sym_eta] = ACTIONS(87),
    [sym_theta] = ACTIONS(87),
    [sym_iota] = ACTIONS(87),
    [sym_kappa] = ACTIONS(87),
    [sym_lambda] = ACTIONS(87),
    [sym_mu] = ACTIONS(87),
    [sym_nu] = ACTIONS(87),
    [sym_xi] = ACTIONS(87),
    [sym_omicron] = ACTIONS(87),
    [sym_pi] = ACTIONS(87),
    [sym_rho] = ACTIONS(87),
    [sym_sigma] = ACTIONS(87),
    [sym_tau] = ACTIONS(87),
    [sym_upsilon] = ACTIONS(87),
    [sym_phi] = ACTIONS(87),
    [sym_chi] = ACTIONS(87),
    [sym_psi] = ACTIONS(87),
    [sym_omega] = ACTIONS(87),
    [sym_Alpha] = ACTIONS(87),
    [sym_Beta] = ACTIONS(87),
    [sym_Gamma] = ACTIONS(87),
    [sym_Delta] = ACTIONS(87),
    [sym_Epsilon] = ACTIONS(87),
    [sym_Zeta] = ACTIONS(87),
    [sym_Eta] = ACTIONS(87),
    [sym_Theta] = ACTIONS(87),
    [sym_Iota] = ACTIONS(87),
    [sym_Kappa] = ACTIONS(87),
    [sym_Lambda] = ACTIONS(87),
    [sym_Mu] = ACTIONS(87),
    [sym_Nu] = ACTIONS(87),
    [sym_Xi] = ACTIONS(87),
    [sym_Omicron] = ACTIONS(87),
    [sym_Pi] = ACTIONS(87),
    [sym_Rho] = ACTIONS(87),
    [sym_Sigma] = ACTIONS(87),
    [sym_Tau] = ACTIONS(87),
    [sym_Upsilon] = ACTIONS(87),
    [sym_Phi] = ACTIONS(87),
    [sym_Chi] = ACTIONS(87),
    [sym_Psi] = ACTIONS(87),
    [sym_Omega] = ACTIONS(87),
    [sym_infty] = ACTIONS(87),
    [sym_hbar] = ACTIONS(87),
    [sym_ell] = ACTIONS(87),
    [sym_Re] = ACTIONS(87),
    [sym_Im] = ACTIONS(87),
    [sym_aleph] = ACTIONS(87),
    [sym_nabla] = ACTIONS(87),
    [sym_partial] = ACTIONS(87),
    [sym_forall] = ACTIONS(87),
    [sym_exists] = ACTIONS(87),
    [sym_emptyset] = ACTIONS(87),
    [sym_grad] = ACTIONS(87),
    [sym_del] = ACTIONS(87),
    [sym_plus] = ACTIONS(85),
    [sym_minus] = ACTIONS(85),
    [sym_times] = ACTIONS(85),
    [sym_equals] = ACTIONS(85),
    [sym_sqrt] = ACTIONS(87),
    [sym_text] = ACTIONS(87),
    [sym_bb] = ACTIONS(87),
    [sym_cc] = ACTIONS(87),
    [sym_tt] = ACTIONS(87),
    [sym_fr] = ACTIONS(87),
    [sym_sf] = ACTIONS(87),
    [sym_bold] = ACTIONS(87),
    [sym_cal] = ACTIONS(87),
    [sym_frak] = ACTIONS(87),
    [sym_monospace] = ACTIONS(87),
    [sym_italic] = ACTIONS(87),
    [sym_frac] = ACTIONS(87),
    [sym_root] = ACTIONS(87),
    [sym_stackrel] = ACTIONS(87),
    [sym_choose] = ACTIONS(87),
    [sym_atop] = ACTIONS(87),
    [sym_over] = ACTIONS(87),
    [sym_multi_linebreak] = ACTIONS(87),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_LBRACE_COLON] = ACTIONS(85),
    [anon_sym_LPAREN_COLON] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_number_symbol] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
    [sym_alpha] = ACTIONS(91),
    [sym_beta] = ACTIONS(91),
    [sym_gamma] = ACTIONS(91),
    [sym_delta] = ACTIONS(91),
    [sym_epsilon] = ACTIONS(91),
    [sym_zeta] = ACTIONS(91),
    [sym_eta] = ACTIONS(91),
    [sym_theta] = ACTIONS(91),
    [sym_iota] = ACTIONS(91),
    [sym_kappa] = ACTIONS(91),
    [sym_lambda] = ACTIONS(91),
    [sym_mu] = ACTIONS(91),
    [sym_nu] = ACTIONS(91),
    [sym_xi] = ACTIONS(91),
    [sym_omicron] = ACTIONS(91),
    [sym_pi] = ACTIONS(91),
    [sym_rho] = ACTIONS(91),
    [sym_sigma] = ACTIONS(91),
    [sym_tau] = ACTIONS(91),
    [sym_upsilon] = ACTIONS(91),
    [sym_phi] = ACTIONS(91),
    [sym_chi] = ACTIONS(91),
    [sym_psi] = ACTIONS(91),
    [sym_omega] = ACTIONS(91),
    [sym_Alpha] = ACTIONS(91),
    [sym_Beta] = ACTIONS(91),
    [sym_Gamma] = ACTIONS(91),
    [sym_Delta] = ACTIONS(91),
    [sym_Epsilon] = ACTIONS(91),
    [sym_Zeta] = ACTIONS(91),
    [sym_Eta] = ACTIONS(91),
    [sym_Theta] = ACTIONS(91),
    [sym_Iota] = ACTIONS(91),
    [sym_Kappa] = ACTIONS(91),
    [sym_Lambda] = ACTIONS(91),
    [sym_Mu] = ACTIONS(91),
    [sym_Nu] = ACTIONS(91),
    [sym_Xi] = ACTIONS(91),
    [sym_Omicron] = ACTIONS(91),
    [sym_Pi] = ACTIONS(91),
    [sym_Rho] = ACTIONS(91),
    [sym_Sigma] = ACTIONS(91),
    [sym_Tau] = ACTIONS(91),
    [sym_Upsilon] = ACTIONS(91),
    [sym_Phi] = ACTIONS(91),
    [sym_Chi] = ACTIONS(91),
    [sym_Psi] = ACTIONS(91),
    [sym_Omega] = ACTIONS(91),
    [sym_infty] = ACTIONS(91),
    [sym_hbar] = ACTIONS(91),
    [sym_ell] = ACTIONS(91),
    [sym_Re] = ACTIONS(91),
    [sym_Im] = ACTIONS(91),
    [sym_aleph] = ACTIONS(91),
    [sym_nabla] = ACTIONS(91),
    [sym_partial] = ACTIONS(91),
    [sym_forall] = ACTIONS(91),
    [sym_exists] = ACTIONS(91),
    [sym_emptyset] = ACTIONS(91),
    [sym_grad] = ACTIONS(91),
    [sym_del] = ACTIONS(91),
    [sym_plus] = ACTIONS(89),
    [sym_minus] = ACTIONS(89),
    [sym_times] = ACTIONS(89),
    [sym_equals] = ACTIONS(89),
    [sym_sqrt] = ACTIONS(91),
    [sym_text] = ACTIONS(91),
    [sym_bb] = ACTIONS(91),
    [sym_cc] = ACTIONS(91),
    [sym_tt] = ACTIONS(91),
    [sym_fr] = ACTIONS(91),
    [sym_sf] = ACTIONS(91),
    [sym_bold] = ACTIONS(91),
    [sym_cal] = ACTIONS(91),
    [sym_frak] = ACTIONS(91),
    [sym_monospace] = ACTIONS(91),
    [sym_italic] = ACTIONS(91),
    [sym_frac] = ACTIONS(91),
    [sym_root] = ACTIONS(91),
    [sym_stackrel] = ACTIONS(91),
    [sym_choose] = ACTIONS(91),
    [sym_atop] = ACTIONS(91),
    [sym_over] = ACTIONS(91),
    [sym_multi_linebreak] = ACTIONS(91),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_LBRACE_COLON] = ACTIONS(89),
    [anon_sym_LPAREN_COLON] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym__] = ACTIONS(89),
    [anon_sym_CARET] = ACTIONS(89),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_number_symbol] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [sym_alpha] = ACTIONS(121),
    [sym_beta] = ACTIONS(121),
    [sym_gamma] = ACTIONS(121),
    [sym_delta] = ACTIONS(121),
    [sym_epsilon] = ACTIONS(121),
    [sym_zeta] = ACTIONS(121),
    [sym_eta] = ACTIONS(121),
    [sym_theta] = ACTIONS(121),
    [sym_iota] = ACTIONS(121),
    [sym_kappa] = ACTIONS(121),
    [sym_lambda] = ACTIONS(121),
    [sym_mu] = ACTIONS(121),
    [sym_nu] = ACTIONS(121),
    [sym_xi] = ACTIONS(121),
    [sym_omicron] = ACTIONS(121),
    [sym_pi] = ACTIONS(121),
    [sym_rho] = ACTIONS(121),
    [sym_sigma] = ACTIONS(121),
    [sym_tau] = ACTIONS(121),
    [sym_upsilon] = ACTIONS(121),
    [sym_phi] = ACTIONS(121),
    [sym_chi] = ACTIONS(121),
    [sym_psi] = ACTIONS(121),
    [sym_omega] = ACTIONS(121),
    [sym_Alpha] = ACTIONS(121),
    [sym_Beta] = ACTIONS(121),
    [sym_Gamma] = ACTIONS(121),
    [sym_Delta] = ACTIONS(121),
    [sym_Epsilon] = ACTIONS(121),
    [sym_Zeta] = ACTIONS(121),
    [sym_Eta] = ACTIONS(121),
    [sym_Theta] = ACTIONS(121),
    [sym_Iota] = ACTIONS(121),
    [sym_Kappa] = ACTIONS(121),
    [sym_Lambda] = ACTIONS(121),
    [sym_Mu] = ACTIONS(121),
    [sym_Nu] = ACTIONS(121),
    [sym_Xi] = ACTIONS(121),
    [sym_Omicron] = ACTIONS(121),
    [sym_Pi] = ACTIONS(121),
    [sym_Rho] = ACTIONS(121),
    [sym_Sigma] = ACTIONS(121),
    [sym_Tau] = ACTIONS(121),
    [sym_Upsilon] = ACTIONS(121),
    [sym_Phi] = ACTIONS(121),
    [sym_Chi] = ACTIONS(121),
    [sym_Psi] = ACTIONS(121),
    [sym_Omega] = ACTIONS(121),
    [sym_infty] = ACTIONS(121),
    [sym_hbar] = ACTIONS(121),
    [sym_ell] = ACTIONS(121),
    [sym_Re] = ACTIONS(121),
    [sym_Im] = ACTIONS(121),
    [sym_aleph] = ACTIONS(121),
    [sym_nabla] = ACTIONS(121),
    [sym_partial] = ACTIONS(121),
    [sym_forall] = ACTIONS(121),
    [sym_exists] = ACTIONS(121),
    [sym_emptyset] = ACTIONS(121),
    [sym_grad] = ACTIONS(121),
    [sym_del] = ACTIONS(121),
    [sym_plus] = ACTIONS(119),
    [sym_minus] = ACTIONS(119),
    [sym_times] = ACTIONS(119),
    [sym_equals] = ACTIONS(119),
    [sym_sqrt] = ACTIONS(121),
    [sym_text] = ACTIONS(121),
    [sym_bb] = ACTIONS(121),
    [sym_cc] = ACTIONS(121),
    [sym_tt] = ACTIONS(121),
    [sym_fr] = ACTIONS(121),
    [sym_sf] = ACTIONS(121),
    [sym_bold] = ACTIONS(121),
    [sym_cal] = ACTIONS(121),
    [sym_frak] = ACTIONS(121),
    [sym_monospace] = ACTIONS(121),
    [sym_italic] = ACTIONS(121),
    [sym_frac] = ACTIONS(121),
    [sym_root] = ACTIONS(121),
    [sym_stackrel] = ACTIONS(121),
    [sym_choose] = ACTIONS(121),
    [sym_atop] = ACTIONS(121),
    [sym_over] = ACTIONS(121),
    [sym_multi_linebreak] = ACTIONS(121),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACE_COLON] = ACTIONS(119),
    [anon_sym_LPAREN_COLON] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(137),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_number_symbol] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [sym_alpha] = ACTIONS(103),
    [sym_beta] = ACTIONS(103),
    [sym_gamma] = ACTIONS(103),
    [sym_delta] = ACTIONS(103),
    [sym_epsilon] = ACTIONS(103),
    [sym_zeta] = ACTIONS(103),
    [sym_eta] = ACTIONS(103),
    [sym_theta] = ACTIONS(103),
    [sym_iota] = ACTIONS(103),
    [sym_kappa] = ACTIONS(103),
    [sym_lambda] = ACTIONS(103),
    [sym_mu] = ACTIONS(103),
    [sym_nu] = ACTIONS(103),
    [sym_xi] = ACTIONS(103),
    [sym_omicron] = ACTIONS(103),
    [sym_pi] = ACTIONS(103),
    [sym_rho] = ACTIONS(103),
    [sym_sigma] = ACTIONS(103),
    [sym_tau] = ACTIONS(103),
    [sym_upsilon] = ACTIONS(103),
    [sym_phi] = ACTIONS(103),
    [sym_chi] = ACTIONS(103),
    [sym_psi] = ACTIONS(103),
    [sym_omega] = ACTIONS(103),
    [sym_Alpha] = ACTIONS(103),
    [sym_Beta] = ACTIONS(103),
    [sym_Gamma] = ACTIONS(103),
    [sym_Delta] = ACTIONS(103),
    [sym_Epsilon] = ACTIONS(103),
    [sym_Zeta] = ACTIONS(103),
    [sym_Eta] = ACTIONS(103),
    [sym_Theta] = ACTIONS(103),
    [sym_Iota] = ACTIONS(103),
    [sym_Kappa] = ACTIONS(103),
    [sym_Lambda] = ACTIONS(103),
    [sym_Mu] = ACTIONS(103),
    [sym_Nu] = ACTIONS(103),
    [sym_Xi] = ACTIONS(103),
    [sym_Omicron] = ACTIONS(103),
    [sym_Pi] = ACTIONS(103),
    [sym_Rho] = ACTIONS(103),
    [sym_Sigma] = ACTIONS(103),
    [sym_Tau] = ACTIONS(103),
    [sym_Upsilon] = ACTIONS(103),
    [sym_Phi] = ACTIONS(103),
    [sym_Chi] = ACTIONS(103),
    [sym_Psi] = ACTIONS(103),
    [sym_Omega] = ACTIONS(103),
    [sym_infty] = ACTIONS(103),
    [sym_hbar] = ACTIONS(103),
    [sym_ell] = ACTIONS(103),
    [sym_Re] = ACTIONS(103),
    [sym_Im] = ACTIONS(103),
    [sym_aleph] = ACTIONS(103),
    [sym_nabla] = ACTIONS(103),
    [sym_partial] = ACTIONS(103),
    [sym_forall] = ACTIONS(103),
    [sym_exists] = ACTIONS(103),
    [sym_emptyset] = ACTIONS(103),
    [sym_grad] = ACTIONS(103),
    [sym_del] = ACTIONS(103),
    [sym_plus] = ACTIONS(101),
    [sym_minus] = ACTIONS(101),
    [sym_times] = ACTIONS(101),
    [sym_equals] = ACTIONS(101),
    [sym_sqrt] = ACTIONS(103),
    [sym_text] = ACTIONS(103),
    [sym_bb] = ACTIONS(103),
    [sym_cc] = ACTIONS(103),
    [sym_tt] = ACTIONS(103),
    [sym_fr] = ACTIONS(103),
    [sym_sf] = ACTIONS(103),
    [sym_bold] = ACTIONS(103),
    [sym_cal] = ACTIONS(103),
    [sym_frak] = ACTIONS(103),
    [sym_monospace] = ACTIONS(103),
    [sym_italic] = ACTIONS(103),
    [sym_frac] = ACTIONS(103),
    [sym_root] = ACTIONS(103),
    [sym_stackrel] = ACTIONS(103),
    [sym_choose] = ACTIONS(103),
    [sym_atop] = ACTIONS(103),
    [sym_over] = ACTIONS(103),
    [sym_multi_linebreak] = ACTIONS(103),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_LBRACE_COLON] = ACTIONS(101),
    [anon_sym_LPAREN_COLON] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_number_symbol] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
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
    [sym_italic] = ACTIONS(127),
    [sym_frac] = ACTIONS(127),
    [sym_root] = ACTIONS(127),
    [sym_stackrel] = ACTIONS(127),
    [sym_choose] = ACTIONS(127),
    [sym_atop] = ACTIONS(127),
    [sym_over] = ACTIONS(127),
    [sym_multi_linebreak] = ACTIONS(127),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_LBRACE_COLON] = ACTIONS(125),
    [anon_sym_LPAREN_COLON] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_number_symbol] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
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
    [sym_italic] = ACTIONS(131),
    [sym_frac] = ACTIONS(131),
    [sym_root] = ACTIONS(131),
    [sym_stackrel] = ACTIONS(131),
    [sym_choose] = ACTIONS(131),
    [sym_atop] = ACTIONS(131),
    [sym_over] = ACTIONS(131),
    [sym_multi_linebreak] = ACTIONS(131),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_LBRACE_COLON] = ACTIONS(129),
    [anon_sym_LPAREN_COLON] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_number_symbol] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [sym_alpha] = ACTIONS(141),
    [sym_beta] = ACTIONS(141),
    [sym_gamma] = ACTIONS(141),
    [sym_delta] = ACTIONS(141),
    [sym_epsilon] = ACTIONS(141),
    [sym_zeta] = ACTIONS(141),
    [sym_eta] = ACTIONS(141),
    [sym_theta] = ACTIONS(141),
    [sym_iota] = ACTIONS(141),
    [sym_kappa] = ACTIONS(141),
    [sym_lambda] = ACTIONS(141),
    [sym_mu] = ACTIONS(141),
    [sym_nu] = ACTIONS(141),
    [sym_xi] = ACTIONS(141),
    [sym_omicron] = ACTIONS(141),
    [sym_pi] = ACTIONS(141),
    [sym_rho] = ACTIONS(141),
    [sym_sigma] = ACTIONS(141),
    [sym_tau] = ACTIONS(141),
    [sym_upsilon] = ACTIONS(141),
    [sym_phi] = ACTIONS(141),
    [sym_chi] = ACTIONS(141),
    [sym_psi] = ACTIONS(141),
    [sym_omega] = ACTIONS(141),
    [sym_Alpha] = ACTIONS(141),
    [sym_Beta] = ACTIONS(141),
    [sym_Gamma] = ACTIONS(141),
    [sym_Delta] = ACTIONS(141),
    [sym_Epsilon] = ACTIONS(141),
    [sym_Zeta] = ACTIONS(141),
    [sym_Eta] = ACTIONS(141),
    [sym_Theta] = ACTIONS(141),
    [sym_Iota] = ACTIONS(141),
    [sym_Kappa] = ACTIONS(141),
    [sym_Lambda] = ACTIONS(141),
    [sym_Mu] = ACTIONS(141),
    [sym_Nu] = ACTIONS(141),
    [sym_Xi] = ACTIONS(141),
    [sym_Omicron] = ACTIONS(141),
    [sym_Pi] = ACTIONS(141),
    [sym_Rho] = ACTIONS(141),
    [sym_Sigma] = ACTIONS(141),
    [sym_Tau] = ACTIONS(141),
    [sym_Upsilon] = ACTIONS(141),
    [sym_Phi] = ACTIONS(141),
    [sym_Chi] = ACTIONS(141),
    [sym_Psi] = ACTIONS(141),
    [sym_Omega] = ACTIONS(141),
    [sym_infty] = ACTIONS(141),
    [sym_hbar] = ACTIONS(141),
    [sym_ell] = ACTIONS(141),
    [sym_Re] = ACTIONS(141),
    [sym_Im] = ACTIONS(141),
    [sym_aleph] = ACTIONS(141),
    [sym_nabla] = ACTIONS(141),
    [sym_partial] = ACTIONS(141),
    [sym_forall] = ACTIONS(141),
    [sym_exists] = ACTIONS(141),
    [sym_emptyset] = ACTIONS(141),
    [sym_grad] = ACTIONS(141),
    [sym_del] = ACTIONS(141),
    [sym_plus] = ACTIONS(139),
    [sym_minus] = ACTIONS(139),
    [sym_times] = ACTIONS(139),
    [sym_equals] = ACTIONS(139),
    [sym_sqrt] = ACTIONS(141),
    [sym_text] = ACTIONS(141),
    [sym_bb] = ACTIONS(141),
    [sym_cc] = ACTIONS(141),
    [sym_tt] = ACTIONS(141),
    [sym_fr] = ACTIONS(141),
    [sym_sf] = ACTIONS(141),
    [sym_bold] = ACTIONS(141),
    [sym_cal] = ACTIONS(141),
    [sym_frak] = ACTIONS(141),
    [sym_monospace] = ACTIONS(141),
    [sym_italic] = ACTIONS(141),
    [sym_frac] = ACTIONS(141),
    [sym_root] = ACTIONS(141),
    [sym_stackrel] = ACTIONS(141),
    [sym_choose] = ACTIONS(141),
    [sym_atop] = ACTIONS(141),
    [sym_over] = ACTIONS(141),
    [sym_multi_linebreak] = ACTIONS(141),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACE_COLON] = ACTIONS(139),
    [anon_sym_LPAREN_COLON] = ACTIONS(139),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_number_symbol] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
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
    [sym_italic] = ACTIONS(145),
    [sym_frac] = ACTIONS(145),
    [sym_root] = ACTIONS(145),
    [sym_stackrel] = ACTIONS(145),
    [sym_choose] = ACTIONS(145),
    [sym_atop] = ACTIONS(145),
    [sym_over] = ACTIONS(145),
    [sym_multi_linebreak] = ACTIONS(145),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_COLON] = ACTIONS(143),
    [anon_sym_LPAREN_COLON] = ACTIONS(143),
  },
  [56] = {
    [sym_number_symbol] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
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
    [sym_italic] = ACTIONS(149),
    [sym_frac] = ACTIONS(149),
    [sym_root] = ACTIONS(149),
    [sym_stackrel] = ACTIONS(149),
    [sym_choose] = ACTIONS(149),
    [sym_atop] = ACTIONS(149),
    [sym_over] = ACTIONS(149),
    [sym__whitespace] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACE_COLON] = ACTIONS(147),
    [anon_sym_LPAREN_COLON] = ACTIONS(147),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(72), 1,
      sym_right_bracket,
    ACTIONS(151), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [20] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      sym_right_bracket,
    STATE(63), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(151), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [40] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      sym_right_bracket,
    STATE(62), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(157), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [60] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_right_bracket,
    STATE(57), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(151), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [80] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_matrix_row_expr_repeat1,
    STATE(68), 1,
      sym_right_bracket,
    ACTIONS(151), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [100] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_right_bracket,
    STATE(65), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(157), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [120] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      sym_right_bracket,
    STATE(65), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(151), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [140] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_matrix_row_expr_repeat1,
    ACTIONS(159), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [157] = 4,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_matrix_expr_repeat1,
    ACTIONS(164), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [174] = 5,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(10), 1,
      sym_left_bracket,
    STATE(67), 1,
      sym_matrix_row_expr,
    ACTIONS(19), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(21), 3,
      anon_sym_LBRACK,
      anon_sym_LBRACE_COLON,
      anon_sym_LPAREN_COLON,
  [193] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(164), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [205] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(113), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [217] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(139), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [229] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(143), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [241] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(159), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [253] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(169), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
      anon_sym_COMMA,
  [265] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(14), 1,
      sym_right_bracket,
    ACTIONS(151), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [279] = 3,
    ACTIONS(31), 1,
      sym__whitespace,
    STATE(46), 1,
      sym_right_bracket,
    ACTIONS(157), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_RBRACE,
      anon_sym_COLON_RPAREN,
  [293] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(173), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [307] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(177), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [321] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(181), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [335] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(177), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [349] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_literal_string_repeat1,
    ACTIONS(187), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [363] = 2,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(57)] = 0,
  [SMALL_STATE(58)] = 20,
  [SMALL_STATE(59)] = 40,
  [SMALL_STATE(60)] = 60,
  [SMALL_STATE(61)] = 80,
  [SMALL_STATE(62)] = 100,
  [SMALL_STATE(63)] = 120,
  [SMALL_STATE(64)] = 140,
  [SMALL_STATE(65)] = 157,
  [SMALL_STATE(66)] = 174,
  [SMALL_STATE(67)] = 193,
  [SMALL_STATE(68)] = 205,
  [SMALL_STATE(69)] = 217,
  [SMALL_STATE(70)] = 229,
  [SMALL_STATE(71)] = 241,
  [SMALL_STATE(72)] = 253,
  [SMALL_STATE(73)] = 265,
  [SMALL_STATE(74)] = 279,
  [SMALL_STATE(75)] = 293,
  [SMALL_STATE(76)] = 307,
  [SMALL_STATE(77)] = 321,
  [SMALL_STATE(78)] = 335,
  [SMALL_STATE(79)] = 349,
  [SMALL_STATE(80)] = 363,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expr, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_right_bracket, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intermediate_expression, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix_expr, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_superscript, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_superscript, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_superscript, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_frac, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_bracket, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_row_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix_row_expr, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
