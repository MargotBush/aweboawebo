#include "utils.hpp"
#include <iostream>

bool pilugina::isBinaryDigit(char c)
{
  return c == '0' || c == '1';
}

bool pilugina::isOctalDigit(char c)
{
  return c >= '0' && c <= '7';
}
