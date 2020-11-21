#include "token.h"
#include <ctype.h>
#include <string>

std::string identifier_decision, currentchar;

int search_token(Identifiers &identifier)
{
  while (currentchar != " ")
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
  }
}
