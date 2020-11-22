#pragma once
#include "token.hpp"
#include <string>
#include <map>

extern std::string operator_decision = "";
const extern std::map<std::string, basic_tokens> singlechar_token;
extern std::map<std::string, reserved_keywords> complex_token;
int return_token(std::string &currentchar);