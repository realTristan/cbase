#ifndef BASE_SUBTRACTION_C
#define BASE_SUBTRACTION_C

#include <stdlib.h>
#include <stdio.h>

#include "types/string.h"
#include "base_to_decimal.h"
#include "decimal_to_base.h"

string base_subtraction(string h1, string h2, int b1, int b2);

/**
 * Subtracts the two base representations together
 * @param h1 The first base representation.
 * @param h2 The second base representation.
 * @param b1 The base of the first number.
 * @param b2 The base of the second number.
 * @return The result of subtracting the second number from the first number in the given base.
 */
string base_subtraction(string h1, string h2, int b1, int b2)
{
  if (b1 != b2)
  {
    printf("Error: Bases must be the same\n");
    return NULL;
  }

  // First, convert the bases to decimal
  int decimal1 = base_to_decimal(h1, b1);
  int decimal2 = base_to_decimal(h2, b2);

  // Perform the subtraction below
  int result = decimal1 - decimal2;

  // Convert the decimal result into a base b
  return decimal_to_base(result, b1);
}

#endif



