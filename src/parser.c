#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 5
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_add1bit_DOTlus = 1,
  anon_sym_include = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_provides = 4,
  anon_sym_SEMI = 5,
  anon_sym_const = 6,
  anon_sym_COLON = 7,
  anon_sym_EQ = 8,
  anon_sym_unsafe = 9,
  anon_sym_node = 10,
  anon_sym_returns = 11,
  anon_sym_function = 12,
  anon_sym_type = 13,
  anon_sym_model = 14,
  anon_sym_needs = 15,
  anon_sym_body = 16,
  anon_sym_end = 17,
  anon_sym_package = 18,
  anon_sym_uses = 19,
  anon_sym_COMMA = 20,
  anon_sym_is = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_enum = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_struct = 27,
  anon_sym_bool = 28,
  anon_sym_int = 29,
  anon_sym_real = 30,
  anon_sym_CARET = 31,
  anon_sym_DOT = 32,
  anon_sym_LT_LT = 33,
  anon_sym_GT_GT = 34,
  anon_sym_var = 35,
  anon_sym_when = 36,
  anon_sym_let = 37,
  anon_sym_tel = 38,
  anon_sym_assert = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  anon_sym_not = 42,
  anon_sym_DASH = 43,
  anon_sym_pre = 44,
  anon_sym_current = 45,
  anon_sym_fby = 46,
  anon_sym_DASH_GT = 47,
  anon_sym_and = 48,
  anon_sym_or = 49,
  anon_sym_xor = 50,
  anon_sym_EQ_GT = 51,
  anon_sym_LT_GT = 52,
  anon_sym_LT = 53,
  anon_sym_GT = 54,
  anon_sym_GT_EQ = 55,
  anon_sym_div = 56,
  anon_sym_mod = 57,
  anon_sym_PLUS = 58,
  anon_sym_SLASH = 59,
  anon_sym_STAR = 60,
  anon_sym_if = 61,
  anon_sym_then = 62,
  anon_sym_else = 63,
  anon_sym_with = 64,
  anon_sym_POUND = 65,
  anon_sym_nor = 66,
  anon_sym_PIPE = 67,
  anon_sym_merge = 68,
  anon_sym_true = 69,
  anon_sym_false = 70,
  anon_sym_LT_EQ = 71,
  anon_sym_DOT_DOT = 72,
  anon_sym_step = 73,
  anon_sym_PERCENT = 74,
  sym_intConst = 75,
  sym_realConst = 76,
  sym_ident = 77,
  sym_identRef = 78,
  sym_source_file = 79,
  aux_sym_source_file_repeat1 = 80,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_add1bit_DOTlus] = "add1bit.lus",
  [anon_sym_include] = "include",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_provides] = "provides",
  [anon_sym_SEMI] = ";",
  [anon_sym_const] = "const",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_node] = "node",
  [anon_sym_returns] = "returns",
  [anon_sym_function] = "function",
  [anon_sym_type] = "type",
  [anon_sym_model] = "model",
  [anon_sym_needs] = "needs",
  [anon_sym_body] = "body",
  [anon_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_uses] = "uses",
  [anon_sym_COMMA] = ",",
  [anon_sym_is] = "is",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_struct] = "struct",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_real] = "real",
  [anon_sym_CARET] = "^",
  [anon_sym_DOT] = ".",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_var] = "var",
  [anon_sym_when] = "when",
  [anon_sym_let] = "let",
  [anon_sym_tel] = "tel",
  [anon_sym_assert] = "assert",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
  [anon_sym_pre] = "pre",
  [anon_sym_current] = "current",
  [anon_sym_fby] = "fby",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_div] = "div",
  [anon_sym_mod] = "mod",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_with] = "with",
  [anon_sym_POUND] = "#",
  [anon_sym_nor] = "nor",
  [anon_sym_PIPE] = "|",
  [anon_sym_merge] = "merge",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_step] = "step",
  [anon_sym_PERCENT] = "%",
  [sym_intConst] = "intConst",
  [sym_realConst] = "realConst",
  [sym_ident] = "ident",
  [sym_identRef] = "identRef",
  [sym_source_file] = "source_file",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_add1bit_DOTlus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provides] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_needs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_current] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_step] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_intConst] = {
    .visible = true,
    .named = true,
  },
  [sym_realConst] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_identRef] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(134);
      if (lookahead == '*')
        ADVANCE(135);
      if (lookahead == '+')
        ADVANCE(136);
      if (lookahead == ',')
        ADVANCE(137);
      if (lookahead == '-')
        ADVANCE(138);
      if (lookahead == '.')
        ADVANCE(140);
      if (lookahead == '/')
        ADVANCE(142);
      if (lookahead == ':')
        ADVANCE(143);
      if (lookahead == ';')
        ADVANCE(144);
      if (lookahead == '<')
        ADVANCE(145);
      if (lookahead == '=')
        ADVANCE(149);
      if (lookahead == '>')
        ADVANCE(151);
      if (lookahead == '[')
        ADVANCE(154);
      if (lookahead == ']')
        ADVANCE(155);
      if (lookahead == '^')
        ADVANCE(156);
      if (lookahead == 'a')
        ADVANCE(157);
      if (lookahead == 'b')
        ADVANCE(179);
      if (lookahead == 'c')
        ADVANCE(185);
      if (lookahead == 'd')
        ADVANCE(196);
      if (lookahead == 'e')
        ADVANCE(199);
      if (lookahead == 'f')
        ADVANCE(207);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'l')
        ADVANCE(231);
      if (lookahead == 'm')
        ADVANCE(234);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'o')
        ADVANCE(253);
      if (lookahead == 'p')
        ADVANCE(255);
      if (lookahead == 'r')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(287);
      if (lookahead == 'u')
        ADVANCE(299);
      if (lookahead == 'v')
        ADVANCE(308);
      if (lookahead == 'w')
        ADVANCE(311);
      if (lookahead == 'x')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(321);
      if (lookahead == '|')
        ADVANCE(322);
      if (lookahead == '}')
        ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '&')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'l')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 't')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ';')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '!')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '[')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'w')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '.')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == ']')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == ')')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '(')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '0')
        ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == '.')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '[')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '0')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '-')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '9')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == ']')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '+')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ' ')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '|')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ' ')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '[')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '0')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '-')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '9')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ']')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '+')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '.')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '[')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '0')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '-')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '9')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == ']')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ')')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '(')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '[')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'E')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'e')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == ']')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '[')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '+')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '-')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ']')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '?')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '[')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '0')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '-')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '9')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == ']')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == '*')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == ')')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '?')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == ' ')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == '|')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == ' ')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '(')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '[')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == '0')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '-')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == '9')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == ']')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '+')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '[')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'E')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == ']')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == '[')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '+')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == '-')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == ']')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == '?')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '[')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '0')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == '-')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '9')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == ']')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == '*')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == ')')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == ')')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == '[')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'f')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'F')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'l')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'L')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == ']')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == '?')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '(')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '?')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == '!')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == '[')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'w')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == '.')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == ']')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == ')')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_realConst);
      END_STATE();
    case 104:
      if (lookahead == '|')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == '[')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == '1')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == '-')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == '9')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == ']')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == '[')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == '0')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == '-')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == '9')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == ']')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == '*')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == ')')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == '[')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'u')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'U')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'l')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'L')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == ']')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == '*')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == '(')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == '?')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == '!')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == '[')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'w')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == '.')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == ']')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == ')')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == '*')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_intConst);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(146);
      if (lookahead == '=')
        ADVANCE(147);
      if (lookahead == '>')
        ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(152);
      if (lookahead == '>')
        ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(161);
      if (lookahead == 'n')
        ADVANCE(172);
      if (lookahead == 's')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 158:
      if (lookahead == ':')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identRef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '1')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'b')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.')
        ADVANCE(167);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 167:
      if (lookahead == 'l')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 's')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_add1bit_DOTlus);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'o')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(181);
      if (lookahead == 'o')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'y')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'o')
        ADVANCE(186);
      if (lookahead == 'u')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_current);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'v')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(200);
      if (lookahead == 'n')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(204);
      if (lookahead == 'u')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'm')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'a')
        ADVANCE(208);
      if (lookahead == 'b')
        ADVANCE(212);
      if (lookahead == 'u')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'y')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_fby);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'c')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'o')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'c')
        ADVANCE(224);
      if (lookahead == 't')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(235);
      if (lookahead == 'o')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'g')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_merge);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_model);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_needs);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_nor);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'r')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'c')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'k')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'a')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'g')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(263);
      if (lookahead == 'o')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_pre);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'v')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'd')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_provides);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'a')
        ADVANCE(272);
      if (lookahead == 't')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_real);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_returns);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(281);
      if (lookahead == 'r')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'p')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_step);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'c')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(288);
      if (lookahead == 'h')
        ADVANCE(290);
      if (lookahead == 'r')
        ADVANCE(293);
      if (lookahead == 'y')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_tel);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'u')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'p')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == 's')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'a')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_uses);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'a')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'h')
        ADVANCE(312);
      if (lookahead == 'i')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'h')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'o')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == ':')
        ADVANCE(158);
      if (lookahead == 'r')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == ':')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(171);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 324:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'a')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(324);
      END_STATE();
    case 325:
      if (lookahead == 'd')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'd')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == '1')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'b')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'i')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 't')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == '.')
        ADVANCE(167);
      END_STATE();
    case 332:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 324},
  [2] = {.lex_state = 332},
  [3] = {.lex_state = 324},
  [4] = {.lex_state = 324},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_add1bit_DOTlus] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_provides] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_unsafe] = ACTIONS(3),
    [anon_sym_node] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(3),
    [anon_sym_model] = ACTIONS(3),
    [anon_sym_needs] = ACTIONS(3),
    [anon_sym_body] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(3),
    [anon_sym_uses] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_bool] = ACTIONS(3),
    [anon_sym_int] = ACTIONS(3),
    [anon_sym_real] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(3),
    [anon_sym_when] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_tel] = ACTIONS(3),
    [anon_sym_assert] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_pre] = ACTIONS(3),
    [anon_sym_current] = ACTIONS(3),
    [anon_sym_fby] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(3),
    [anon_sym_xor] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(3),
    [anon_sym_mod] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_then] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(3),
    [anon_sym_with] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_step] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_intConst] = ACTIONS(1),
    [sym_realConst] = ACTIONS(1),
    [sym_ident] = ACTIONS(3),
    [sym_identRef] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_add1bit_DOTlus] = ACTIONS(7),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [3] = {
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_add1bit_DOTlus] = ACTIONS(13),
  },
  [4] = {
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_add1bit_DOTlus] = ACTIONS(17),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lustre() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
