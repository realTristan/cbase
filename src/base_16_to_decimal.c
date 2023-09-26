#ifndef BASE_16_TO_DECIMAL_C
#define BASE_16_TO_DECIMAL_C

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "types/string.h"
#include "utils/math.h"

// Base global constant
#define BASE 16

int hex_char_to_decimal(const char hexChar);
int base16_to_decimal(const string h);

/**
 * Converts a hex character to its decimal equivalent
 * @param hexChar The hex character to convert
 * @return The converted number
 */
int hex_char_to_decimal(const char hexChar)
{
  if (isdigit(hexChar))
  {
    return hexChar - '0';
  }

  return tolower(hexChar) - 'a' + 10; // For letters a-f}
}

/**
 * Converts a base-16 (hexadecimal) string to decimal
 * @param h The hex string to convert
 * @return The converted number
 */
int base16_to_decimal(const string h)
{
  int result = 0;

  // Iterate through the hex string from right to left
  const int len = strlen(h);
  for (int i = len - 1; i >= 0; i--)
  {
    const int decimal = hex_char_to_decimal(h[i]);

    result += decimal * power(BASE, len - i - 1);
  }

  return result;
}

#endif