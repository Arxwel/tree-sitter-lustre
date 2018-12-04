module.exports = grammar({
  name: 'lustre',

  rules: {
    source_file: $ => repeat('add1bit.lus'),

    program: $ => seq(
      repeat($.include),
      choice(
        $.packBody,
        $.packList
      )
    ),

    packList: $ => seq(
      $.onePack,
      repeat($.onePack)
    ),

    onePack: $ => choice(
      $.modelDecl,
      $.packDecl,
      $.packEq
    ),

    include: $ => seq(
      'include',
      '"',
      $.string,
      '"'
    ),

    provides: $ => seq('provides', repeat1(seq($.provide, ';'))),

    provide: $ => choice(
      seq('const', $.ident, ':', $.type, optional(seq('=', $.expression))),
      seq('unsafe', 'node', $.ident, $.staticParams, $.params, 'returns', $.params),
      seq('node', $.ident, $.staticParams, $.params, 'returns', $.params),
      seq('unsafe', 'function', $.ident, $.staticParams, $.params, 'returns', $.params),
      seq('function', $.ident, $.staticParams, $.params, 'returns', $.params),
      seq('type', $.oneTypeDecl)
    ),

    modelDecl: $ => seq(
      'model',
      $.ident,
      optional($.uses),
      'needs',
      $.staticParams,
      ';',
      optional($.provides),
      'body',
      $.packBody,
      'end'
    ),

    packDecl: $ => seq(
      'package',
      $.ident,
      optional($.uses),
      optional($.provides),
      'body',
      $.packBody,
      'end'
    ),

    uses: $ => seq('uses', $.ident, repeat(seq(',', $.ident)),';'),

    eq_or_is: $ => choice(
      '=',
      'is'
    ),

    packEq: $ => seq(
      'package',
      $.ident,
      $.eq_or_is,
      $.ident,
      '(',
      $.byNameStaticArgList,
      ')',
      ';'
    ),

    packBody: $ => seq(
      $.oneDecl,
      repeat($.oneDecl)
    ),

    oneDecl: $ => choice(
      $.constDecl,
      $.typeDecl,
      $.extNodeDecl,
      $.nodeDecl
    ),

    typedIdentsList: $ => seq(
      $.typedIdents,
      repeat(seq(';', $.typedIdents))
    ),

    typedIdents: $ => seq(
      $.ident,
      repeat(seq(',', $.ident)),
      ':',
      $.type
    ),

    typedValuedIdents: $ => seq(
      $.typedValuedIdent,
      repeat(seq(';', $.typedValuedIdent))
    ),

    typedValuedIdent: $ => seq(
      $.ident,
      choice(
        seq(':', $.type),
        seq(',', $.ident, repeat(seq(',', $.ident)), ':', $.type),
        seq(':', $.type, '=', $.expression)
      )
    ),

    constDecl: $ => seq(
      'const',
      $.constDeclList
    ),

    constDeclList: $ => seq(
      $.oneConstDecl,
      ';',
      repeat($.oneConstDecl,';')
    ),

    oneConstDecl: $ => seq(
      $.ident,
      choice(
        seq(':', $.type),
        seq(',', $.ident, repeat(seq(',', $.ident)), ':', $.type),
        seq(':', $.type, '=', $.expression),
        seq('=', $.expression)
      )
    ),

    typeDecl: $ => seq(
      'type',
      $.typeDeclList
    ),

    typeDeclList: $ => seq(
      $.oneTypeDecl,
      ';',
      repeat($.oneTypeDecl,';')
    ),

    oneTypeDecl: $ => seq(
      $.ident,
      optional(
        seq(
          '=',
          choice(
            $.type,
            seq('enum', '{', $.ident, repeat(',',$.ident), '}'),
            seq(optional('struct'), '{', $.typedValuedIdents, optional(';'), '}')
          )
        )
      )
    ),

    type: $ => seq(
      choice('bool', 'int', 'real', $.identRef),
      repeat(seq('^', $.expression))
    ),

    extNodeDecl: $ => seq(
      choice('extern function', 'unsafe extern function', 'extern node', 'unsafe extern node'),
      $.ident,
      $.params,
      'returns',
      $.params,
      optional(';')
    ),

    nodeDecl: $ => $.localNode,

    localNode: $ => choice(
      seq('node', $.ident, optional($.staticParams), $.params, 'returns', $.params, optional(';'), optional($.localDecls), $.body, choice('.', optional(';'))),
      seq('function', $.ident, optional($.staticParams), $.params, 'returns', $.params, optional(';'), optional($.localDecls), $.body, choice('.', optional(';'))),
      seq('node', $.ident, optional($.staticParams), optional($.nodeProfileOpt), '=', $.effectiveNode, optional(';')),
      seq('function', $.ident, optional($.staticParams), optional($.nodeProfileOpt), '=', $.effectiveNode, optional(';')),
      seq('unsafe node', $.ident, optional($.staticParams), $.params, 'returns', $.params, optional(';'), optional($.localDecls), $.body, choice('.', optional(';'))),
      seq('unsafe function', $.ident, optional($.staticParams), $.params, 'returns', $.params, optional(';'), optional($.localDecls), $.body, choice('.', optional(';'))),
      seq('unsafe node', $.ident, optional($.staticParams), optional($.nodeProfileOpt), '=', $.effectiveNode, optional(';')),
      seq('unsafe function', $.ident, optional($.staticParams), optional($.nodeProfileOpt), '=', $.effectiveNode, optional(';'))
    ),

    nodeProfileOpt: $ => seq($.params, 'returns', $.params),

    staticParams: $ => seq(
        '<<',
        $.staticParamList,
        '>>'
    ),

    staticParamList: $ => seq(
      $.staticParam,
      repeat(';',$.staticParam)
    ),

    staticParam: $ => choice(
      seq('type', $.ident),
      seq('const', $.ident, ':', $.type),
      seq('node', $.ident, $.params, 'returns', $.params),
      seq('function', $.ident, $.params, 'returns', $.params),
      seq('unsafe node', $.ident, $.params, 'returns', $.params),
      seq('unsafe function', $.ident, $.params, 'returns', $.params)
    ),

    params: $ => seq(
      '(',
      optional(seq($.varDeclList, optional(';'))),
      ')'
    ),

    localDecls: $ => $.localDeclList,

    localDeclList: $ => seq(
      $.oneLocalDecl,
      repeat($.oneLocalDecl)
    ),

    oneLocalDecl: $ => choice(
      $.localVars,
      $.localConsts
    ),

    localConsts: $ => seq(
      'const',
      $.constDeclList
    ),

    localVars: $ => seq(
      'var',
      $.varDeclList,
      ';'
    ),

    varDeclList: $ => seq(
      $.varDecl,
      repeat(seq(';', $.varDecl))
    ),

    varDecl: $ => choice(
      $.typedIdents,
      seq($.typedIdents, 'when', $.clockExpr),
      seq('(',$.typedIdentsList,')', 'when', $.clockExpr)
    ),

    body: $ => seq(
      'let',
      optional($.equationList),
      'tel'
    ),

    equationList: $ => seq(
      $.equation,
      repeat($.equation)
    ),

    equation: $ => seq(
      choice('assert', seq($.left, '=')),
      $.expression,
      ';'
    ),

    left: $ => choice(
      $.leftItemList,
      seq('(', $.leftItemList, ')')
    ),

    leftItemList: $ => seq(
      $.leftItem,
      repeat(seq(',',$.leftItem))
    ),

    leftItem: $ => choice(
      $.ident,
      $.fieldLeftItem,
      $.tableLeftItem
    ),

    fieldLeftItem: $ => seq(
      $.leftItem,
      '.',
      $.ident
    ),

    tableLeftItem: $ => seq(
      $.leftItem,
      '[',
      choice($.expression,$.select),
      ']'
    ),

    expression: $ => choice(
      $.constant,
      $.identRef,
      seq('not', $.expression),
      seq('-', $.expression),
      seq('pre', $.expression),
      seq('current', $.expression),
      seq('int', $.expression),
      seq('real', $.expression),
      seq($.expression, 'when', $.clockExpr),
      seq($.expression, 'fby', $.expression),
      seq($.expression, '->', $.expression),
      seq($.expression, 'and', $.expression),
      seq($.expression, 'or', $.expression),
      seq($.expression, 'xor', $.expression),
      seq($.expression, '=>', $.expression),
      seq($.expression, '=', $.expression),
      seq($.expression, '<>', $.expression),
      seq($.expression, '<', $.expression),
      seq($.expression, '>', $.expression),
      seq($.expression, '>=', $.expression),
      seq($.expression, 'div', $.expression),
      seq($.expression, 'mod', $.expression),
      seq($.expression, '-', $.expression),
      seq($.expression, '+', $.expression),
      seq($.expression, '/', $.expression),
      seq($.expression, '*', $.expression),
      seq('if', $.expression, 'then', $.expression, 'else', $.expression),
      seq('with', $.expression, 'then', $.expression, 'else', $.expression),
      seq('#','(', $.expressionList, ')'),
      seq('nor','(', $.expressionList, ')'),
      $.callByPosExpression,
      seq('[', $.expressionList, ']'),
      seq($.expression, '^', $.expression),
      seq($.expression, '|', $.expression),
      seq($.expression, '[', $.expression, ']'),
      seq($.expression, '[', $.select, ']'),
      seq($.expression, '.', $.ident),
      $.callbyNameExpression,
      seq('(', $.expressionList, ')'),
      seq('merge', $.ident, $.mergeCaseList)
    ),

    mergeCaseList: $ => seq(
      optional($.mergeCase),
      repeat1($.mergeCase)
    ),

    mergeCase: $ => seq(
        '(',
        choice($.identRef, 'true', 'false'),
        '->',
        $.expression,
        ')'
    ),

    clockExpr: $ => choice(
      seq($.identRef, '(', $.ident,')'),
      $.ident,
      seq('not', $.ident),
      seq('not', '(', $.ident, ')')
    ),

    predefOp: $ => choice(
      'not',
      'fby',
      'pre',
      'current',
      '->',
      'and',
      'or',
      'xor',
      '=>',
      '=',
      '<>',
      '<',
      '<=',
      '>',
      '>=',
      'div',
      'mod',
      '-',
      '+',
      '/',
      '*',
      'if'
    ),

    callByPosExpression: $ => seq(
      $.effectiveNode,
      '(',
      $.expressionList,
      ')'
    ),

    effectiveNode: $ => seq(
      $.identRef,
      optional(seq('<<', $.staticArgList, '>>'))
    ),

    staticArgList: $ => seq(
      $.staticArg,
      repeat(seq(choice(',',';'),$.staticArg))
    ),

    staticArg: $ => choice(
      seq('type', $.type),
      seq('const', $.expression),
      seq('node', $.effectiveNode),
      $.predefOp,
      $.simpleExp,
      $.surelyType,
      $.surelyNode
    ),

    byNameStaticArgList: $ => seq(
      $.byNameStaticArg,
      repeat(seq(choice(',',';'),$.byNameStaticArg))
    ),

    byNameStaticArg: $ => choice(
      seq('type', $.ident, '=', $.type),
      seq('const', $.ident, '=', $.expression),
      seq('node', $.ident, '=', $.effectiveNode),
      seq('function', $.ident, '=', $.effectiveNode),
      seq($.ident, '=', $.predefOp),
      seq($.ident, '=', $.simpleExp),
      seq($.ident, '=', $.surelyType),
      seq($.ident, '=', $.surelyNode),
    ),

    surelyNode: $ => seq(
      $.identRef,
      '<<',
      $.staticArgList,
      '>>'
    ),

    surelyType: $ => seq(
      choice('bool','int', 'real'),
      repeat(seq('^', $.expression))
    ),

    simpleExp: $ => choice(
      $.constant,
      $.identRef,
      $.simpleTuple,
      seq('not', $.simpleExp),
      seq('-', $.simpleExp),
      seq($.simpleExp, 'and', $.simpleExp),
      seq($.simpleExp, 'or', $.simpleExp),
      seq($.simpleExp, 'xor', $.simpleExp),
      seq($.simpleExp, '=>', $.simpleExp),
      seq($.simpleExp, '=', $.simpleExp),
      seq($.simpleExp, '<>', $.simpleExp),
      seq($.simpleExp, '<', $.simpleExp),
      seq($.simpleExp, '<=', $.simpleExp),
      seq($.simpleExp, '>', $.simpleExp),
      seq($.simpleExp, '>=', $.simpleExp),
      seq($.simpleExp, 'div', $.simpleExp),
      seq($.simpleExp, 'mod', $.simpleExp),
      seq($.simpleExp, '-', $.simpleExp),
      seq($.simpleExp, '+', $.simpleExp),
      seq($.simpleExp, '/', $.simpleExp),
      seq($.simpleExp, '*', $.simpleExp),
      seq('if',$.simpleExp, 'then', $.simpleExp, 'else', $.simpleExp)
    ),

    simpleTuple: $ => seq('(', $.simpleExpList, ')'
    ),

    simpleExpList: $ => seq(
      $.simpleExp,
      repeat(seq(',',$.simpleExp))
    ),

    callbyNameExpression: $ => seq(
        $.identRef,
        '{',
        optional(seq(optional(seq($.identRef, 'with')), $.callbyNameParamList, optional(';'))),
        '}'
    ),

    callbyNameParamList: $ => seq(
      $.callbyNameParam,
      repeat(seq(choice(';',','), $.callbyNameParam))
    ),

    callbyNameParam: $ => seq(
      $.ident,
      '=',
      $.expression
    ),

    expressionList: $ => seq(
      $.expression,
      repeat(seq(',', $.expression))
    ),

    constant: $ => choice(
      'true',
      'false',
      $.intConst,
      $.realConst
    ),

    select: $ => seq(
      $.expression,
      '..',
      $.expression,
      $.step
    ),

    step: $ => seq(
      'step',
      $.expression
    ),

    pragma: $ => repeat1(
      seq('%', $.string, '%')
    ),

    string: $ => /[^\\"\n]+/,
    intConst: $ => '(?&lt;![\w\.])(0|[1-9][0-9]*)[uUlL]*(?![\w\.])*',
    realConst: $ => '(?&lt;![\w\.])((\.[0-9]+ | [0-9]+\.[0-9]*) ([Ee][+-]?[0-9]*)? | ([0-9]+[Ee][+-]?[0-9]*))[fFlL]?(?![\w\.])',
    ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    identRef: $ => /([a-zA-Z_][a-zA-Z0-9_]*|[a-zA-Z_][a-zA-Z0-9_]*::[a-zA-Z_][a-zA-Z0-9_]*)/
  }
});
