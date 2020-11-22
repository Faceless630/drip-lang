#pragma once

typedef enum
{
  ADD,
  SUB,
  MUL,
  DIV,
  LP,
  RP,
  LC,
  RC,
  NL,
} basic_tokens;

typedef enum
{
  var_operator,
  if_operator,
  elif_operator,
  else_operator,
  for_operator,
  while_operator,
  func_operator,
} reserved_keywords;

typedef struct
{
  basic_tokens *basic_tokens;
  reserved_keywords *reserved_keywords;
} tokenkinds;