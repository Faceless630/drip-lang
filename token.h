#ifndef MAX_VAR_SIZE
#define MAX_VAR_SIZE 50

typedef enum
{
  ADD_OPERATOR,     // +
  SUB_OPERATOR,     // -
  MUL_OPERATOR,     // *
  DIV_OPERATOR,     // /
  PERCENT_OPERATOR, // %
  NEWLINE_OPERATOR, // \n
  LP,               // (
  RP,               // )
  LC,               // {
  RC,               // }
} symbol_token;

typedef enum
{
  var_kw,
  if_kw,
  elif_kw,
  else_kw,
  for_kw,
  while_kw,
  func_kw
} keyword_token;

typedef struct
{
  symbol_token *symbol;
  keyword_token *keywords;
  union
  {
    int int_value;
    double double_value;
  } u;
} Identifiers;

#endif /*MAX_VAR_SIZE*/