#include "token.hpp"
#include <string>
#include <map>

static std::string operator_decision = "";

const static std::map<std::string, basic_tokens> singlechar_token{
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

static std::map<std::string, reserved_keywords> complex_token{
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
      return complex_token[operator_decision];
    }
  }
}