#ifndef BASE_ADDITION_C
#define BASE_ADDITION_C

#include <stdlib.h>
#include <stdio.h>

#include "types/string.h"
#include "base_to_decimal.h"
#include "decimal_to_base.h"

string base_addition(string h1, string h2, int b1, int b2);

/**
 * Adds two base representations together
 * @param h1 The first base representation
 * @param h2 The second base representation
 * @param b1 The base of the first number
 * @param b2 The base of the second number
 * @return The sum of the two numbers in the given base
 */
string base_addition(string h1, string h2, int b1, int b2)
{
  if (b1 != b2)
  {
    printf("Error: Bases must be the same\n");
    return NULL;
  }

  // First, convert the bases to decimal
  int decimal1 = base_to_decimal(h1, b1);
  int decimal2 = base_to_decimal(h2, b2);

  // Convert the decimal result into a base b
  return decimal_to_base(decimal1 + decimal2, b1);
}

#endif