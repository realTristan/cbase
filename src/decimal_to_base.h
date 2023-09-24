#include <stdlib.h>
#include <string.h>
#ifndef DECIMAL_TO_BASE_H
#define DECIMAL_TO_BASE_H

#include "types/string.h"

/**
 * Converts a number to a hex character
 * @param r The number to convert
 * @return The hex string
 */
string num_to_hex(const int r);

/**
 * Converts a decimal number to a base
 * @param n The number to convert
 * @param b The base to convert to
 * @return The converted number
 */
string decimal_to_base(int n, const int b);

#endif