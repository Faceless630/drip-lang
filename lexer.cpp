#include "lexer.hpp"

static std::string operator_decision = "";

const extern std::map<std::string, basic_tokens> singlechar_token{
    {"+", ADD},
    {"-", SUB},
    {"*", MUL},
    {"/", DIV},
    {"(", LP},
    {")", RP},
    {"{", LC},
    {"}", RC},
    {"\n", NL},
};

extern std::map<std::string, reserved_keywords> complex_token{
    {"var", var_operator},
    {"if", if_operator},
    {"elif", elif_operator},
    {"else", else_operator},
    {"for", for_operator},
    {"while", while_operator},
    {"func", func_operator},
};

int return_token(std::string &currentchar)
{
  if (singlechar_token.count(currentchar))
  {
    return singlechar_token.at(currentchar);
  }
  else
  {
    operator_decision += currentchar;
    if (complex_token.count(operator_decision))
    {
      int save_current = complex_token[operator_decision];
      operator_decision = "";
      return save_current;
    }
  }
}