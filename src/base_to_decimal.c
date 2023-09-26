#ifndef BASE_TO_DECIMAL_C
#define BASE_TO_DECIMAL_C

#include "utils/math.h"
#include "types/string.h"
#include "utils/hex.h"
#include <string.h>

int base_to_decimal(string h, int b);

/**
 * Converts a number from a base to decimal
 * @param h the hex number to convert
 * @param b The base to convert from
 * @return The converted number
 */
int base_to_decimal(string h, int b)
{
  int r = 0;

  // iterate over the string values. convert from hex to num for each
  const int len = strlen(h);
  for (unsigned int i = 0; i < len; i++)
  {
    const int num = hex_to_num(h[i]);

    r += num * power(b, len - i - 1);
  }

  return r;
}

#endif