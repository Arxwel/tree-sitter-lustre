module.exports = grammar({
  name: 'lustre',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.node_definition,
      $.type_definition,
      $.const_definition,
      $.var_definition

      // TODO: other kinds of definitions
    ),

    node_definition: $ => seq(
      optional($._function_mode),
      choice(
        'node',
        'function'
      ),
      $.ident,
      '(',
      $.parameter_list,
      ')',
      'returns',
      '(',
      $.parameter_list,
      ')',
      optional($.pragmas),
      ';',
      optional(
        seq(
          repeat(
            choice(
              $.const_definition,
              $.var_definition
            )
          ),
          $.block
        )
      )
    ),

    type_definition: $ => choice(
      seq(
        'type',
        repeat($.ident),
        optional($.pragmas),
        ';'
      ),
      seq(
        'type',
        $.ident,
        '=',
        $._type,
        optional($.pragmas),
        ';'
      )
    ),

    const_definition: $ => seq(
      'const',
      repeat(
        choice(
          seq(
            commaSep($.ident),
            ':',
            $._type,
            optional($.pragmas),
            ';'
          ),
          seq(
            $.ident,
            '=',
            $._expression,
            optional($.pragmas),
            ';'
          ),
          seq(
            $.ident,
            ':',
            $._type,
            '=',
            $._expression,
            optional($.pragmas),
            ';'
          )
        )
      ),
    ),

    var_definition: $ => seq(
      'var',
      $.parameter_list,
      optional(
        seq(
          'when',
          $.identifier
        )
      ),
      optional($.pragmas),
      ';'
    ),

    parameter_list: $ => seq(
      commaSep($.identifier),
      ':',
      $._type,
      optional('^'+$.number)
    ),

    _type: $ => choice(
      'bool',
      'int',
      'real',
      'map',
      'red',
      'fill',
      $.record_type,
      $.array_type,
      $.enum_type
    ),

    record_type: $ => seq(
      'struct',
      '{',
      $.parameter_list,
      '}'
    ),

    array_type: $=> seq(
      $._type,
      '^',
      $._expression
    ),

    enum_type: $=> seq(
      'enum',
      '{',
      commaSep($.ident),
      '}'
    ),

    _function_mode: $ => choice(
      'extern',
      'unsafe'
    ),

    block: $ => seq(
      'let',
      repeat($._statement),
      'tel',
      optional(';')
    ),

    _statement: $ => choice(
      $.equation,
      $.assertion
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      seq(
        '(',
        commaSep($._expression),
        ')'
      ),
      // Record_Exp, ArrayExp
      seq(
        $.unary_op,
        $._expression
      ),
      seq(
        $._expression,
        $.binary_op,
        $._expression
      ),
      seq(
        $.nary_op,
        $._expression
      ),
      seq(
        'if',
        $._expression,
        'then',
        $._expression,
        'else',
        $._expression
      ),
  //    $.call,
      seq(
        $._expression,
        $.selector
      )
    ),

/*
    call: $ => choice(
      $.user_op,
      optional($.pragmas),
      '(',
      commaSep($._expression),
      ')'
    ) ,
*/
    assertion: $ => seq(
      'assert',
      $._expression,
      optional($.pragmas),
      ';'
    ),


    eqSide: $ => choice(
      seq(
        '(',
        commaSep1($.eqPart),
        ')'
      ),
      seq(
        commaSep1($.eqPart)
      )
    ),

    eqPart: $ => choice(
      $.identifier,
      seq(
        $.eqPart,
        $.selector
      )
    ),

    equation: $ => seq(
      $.eqSide,
      '=',
      $.eqSide,
      optional($.pragmas),
      ';'
    ),

    selector: $ => choice(
      seq(
        '.',
        $.ident
      ),
      seq(
        '[',
        $._expression,
        optional(
          seq(
            '..',
            $._expression
          )
        ),
        ']'
      )
    ),
    pragmas: $ => /(%(\\.|[^"\\])*%)*/,
    ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier: $ => /([a-zA-Z_][a-zA-Z0-9_]*|[a-zA-Z_][a-zA-Z0-9_]*::[a-zA-Z_][a-zA-Z0-9_]*)/,
    number: $ => /\d+/,
    operator: $ => choice(
      $.binary_op,
      $.unary_op,
      $.nary_op
    ),
    binary_op: $ => choice(
      '+',
      '-',
      '*',
      '/',
      'div',
      'mod',
      '>',
      '<',
      '>=',
      '<=',
      '<>',
      '=',
      'or',
      'and',
      'xor',
      '=>',
      'when',
      '->',
      'fby'
    ),
    unary_op: $ => choice(
      '-',
      'not',
      'pre',
      'current'
    ),
    nary_op: $ => choice(
      '#',
      'nor'
    ),
    user_op: $ => choice(
      $.identifier,
      seq(
        choice(
          'map',
          'red',
          'fill',
          'fillred',
          'boolred'
        ),
        '<<',
        $.user_op,
        ',',
        $._expression,
        '>>'
      )
    )

  }
});

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
