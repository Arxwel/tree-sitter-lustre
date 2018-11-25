#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 20
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_func = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym__type = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_return = 7,
  anon_sym_SEMI = 8,
  sym_identifier = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym_function_definition = 13,
  sym_parameter_list = 14,
  sym_block = 15,
  sym__statement = 16,
  sym_return_statement = 17,
  sym__expression = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_block_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__type] = "_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
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
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == 'b')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(9);
      if (lookahead == 'r')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(19);
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 5:
      if (lookahead == 'o')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'o')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'l')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__type);
      END_STATE();
    case 9:
      if (lookahead == 'u')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'n')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'c')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 13:
      if (lookahead == 'e')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 't')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'u')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'r')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'n')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'f')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == 'b')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '{')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == 'r')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym__definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
  },
  [2] = {
    [sym_identifier] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [4] = {
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(5),
  },
  [5] = {
    [sym_parameter_list] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [6] = {
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
  },
  [7] = {
    [anon_sym_RPAREN] = ACTIONS(20),
  },
  [8] = {
    [sym__type] = ACTIONS(22),
  },
  [9] = {
    [sym__type] = ACTIONS(24),
  },
  [10] = {
    [sym_block] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(26),
  },
  [11] = {
    [sym__statement] = STATE(15),
    [sym_return_statement] = STATE(15),
    [aux_sym_block_repeat1] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(28),
    [anon_sym_return] = ACTIONS(30),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_func] = ACTIONS(32),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_func] = ACTIONS(34),
  },
  [14] = {
    [sym__expression] = STATE(16),
    [sym_identifier] = ACTIONS(36),
    [sym_number] = ACTIONS(36),
  },
  [15] = {
    [sym__statement] = STATE(18),
    [sym_return_statement] = STATE(18),
    [aux_sym_block_repeat1] = STATE(18),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(30),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(40),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_func] = ACTIONS(42),
  },
  [18] = {
    [sym__statement] = STATE(18),
    [sym_return_statement] = STATE(18),
    [aux_sym_block_repeat1] = STATE(18),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_return] = ACTIONS(46),
  },
  [19] = {
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(49),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.count = 1, .reusable = true}, SHIFT(9),
  [22] = {.count = 1, .reusable = true}, SHIFT(10),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [26] = {.count = 1, .reusable = true}, SHIFT(11),
  [28] = {.count = 1, .reusable = true}, SHIFT(13),
  [30] = {.count = 1, .reusable = true}, SHIFT(14),
  [32] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [34] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [36] = {.count = 1, .reusable = true}, SHIFT(16),
  [38] = {.count = 1, .reusable = true}, SHIFT(17),
  [40] = {.count = 1, .reusable = true}, SHIFT(19),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [44] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 3),
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
