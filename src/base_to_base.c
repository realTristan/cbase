#ifndef BASE_TO_BASE_C
#define BASE_TO_BASE_C

#include "base_to_decimal.h"
#include "decimal_to_base.h"
#include "types/string.h"

string base_to_base(string h, int b1, int b2);

/**
 * Converts a number from one base to another
 * @param h The hex to convert
 * @param b1 The base to convert from
 * @param b2 The base to convert to
 * @return The converted string
 */
string base_to_base(string h, int b1, int b2)
{
  return decimal_to_base(base_to_decimal(h, b1), b2);
}

#endif