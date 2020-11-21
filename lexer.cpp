#include "token.h"
#include <ctype.h>
#include <string>

std::string identifier_decision, currentchar;

inline void reset() { identifier_decision = ""; }

int search_token(Identifiers &identifier)
{

  if (currentchar == "+")
    return ADD_OPERATOR;
  else if (currentchar == "-")
    return SUB_OPERATOR;
  else if (currentchar == "*")
    return SUB_OPERATOR;
  else if (currentchar == "/")
    return DIV_OPERATOR;
  else if (currentchar == "%")
    return PERCENT_OPERATOR;
  else if (currentchar == "\n")
    return NEWLINE_OPERATOR;
  else if (currentchar == "(")
    return LP;
  else if (currentchar == ")")
    return RP;
  else if (currentchar == "{")
    return LC;
  else if (currentchar == "}")
    return RC;

  identifier_decision += currentchar;
  if (identifier_decision == "var")
  {
    reset();
    return var_kw;
  }

  else if (identifier_decision == "if")
  {
    reset();
    return if_kw;
  }

  else if (identifier_decision == "elif")
  {
    reset();
    return elif_kw;
  }

  else if (identifier_decision == "else")
  {
    reset();
    return else_kw;
  }

  else if (identifier_decision == "for")
  {
    reset();
    return for_kw;
  }

  else if (identifier_decision == "while")
  {
    reset();
    return while_kw;
  }

  else if (identifier_decision == "func")
  {
    reset();
    return func_kw;
  }
}
