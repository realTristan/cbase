#ifndef DECIMAL_TO_BASE_C
#define DECIMAL_TO_BASE_C

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "types/string.h"

string num_to_hex(const int);
string decimal_to_base(int n, const int);

/**
 * Converts a number to a hex character
 * @param r The number to convert
 * @return The hex string
 */
string num_to_hex(const int r)
{
  switch (r)
  {
  case 10:
    return "A";
  case 11:
    return "B";
  case 12:
    return "C";
  case 13:
    return "D";
  case 14:
    return "E";
  case 15:
    return "F";
  default:
  {
    string s = malloc(sizeof(char) * 2);
    sprintf(s, "%d", r);
    return s;
  }
  }
}

/**
 * Converts a decimal number to a base
 * @param n The number to convert
 * @param b The base to convert to
 * @return The converted number
 */
string decimal_to_base(int n, const int b)
{
  string result = malloc(sizeof(char) * 100);

  while (n != 0)
  {
    const int r = n % b;

    const string s = num_to_hex(r);
    strcat(result, s);

    n /= b;
  }

  const int len = strlen(result);
  char *reversed = malloc(sizeof(char) * len);

  for (int i = 0; i < len; i++)
  {
    reversed[i] = result[len - i - 1];
  }

  return reversed;
}

#endif