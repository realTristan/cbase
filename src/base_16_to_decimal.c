#ifndef BASE_16_TO_DECIMAL_C
#define BASE_16_TO_DECIMAL_C

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "types/string.h"

// Function to convert a hex character to its decimal equivalent
int hex_char_to_decimal(char hexChar)
{
  if (isdigit(hexChar))
  {
    return hexChar - '0';
  }
  else
  {
    return tolower(hexChar) - 'a' + 10; // For letters a-f}
  }
}

// Function to convert a base-16 (hexadecimal) string to decimal
int base16_to_decimal(const string hexStr)
{
  int decimalValue = 0;

  // Iterate through the hex string from right to left
  const int len = strlen(hexStr);
  for (int i = len - 1, base = 1; i >= 0; i--, base = 16)
  {
    const int decimal = hex_char_to_decimal(hexStr[i]);

    decimalValue += decimal * base;
  }

  return decimalValue;
}

#endif