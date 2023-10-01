#ifndef DECIMAL_TO_BASE_C
#define DECIMAL_TO_BASE_C

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "types/string.h"
#include "utils/hex.h"

string decimal_to_base(int n, const int);

/**
 * Converts a decimal number to a base
 * @param n The number to convert
 * @param b The base to convert to
 * @return The converted number
 */
string decimal_to_base(int n, const int b)
{
  string result = malloc(sizeof(char) * 100);

  while (1)
  {
    const int r = n % b;

    const string s = num_to_hex(r);
    strcat(result, s);

    n /= b;

    if (n == 0)
    {
      break;
    }
  }

  const int len = strlen(result);
  char *reversed = malloc(sizeof(char) * len);

  for (unsigned int i = 0; i < len; i++)
  {
    reversed[i] = result[len - i - 1];
  }

  return reversed;
}

#endif