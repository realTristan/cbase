#ifndef DECIMAL_TO_BASE_H
#define DECIMAL_TO_BASE_H

#include "types/string.h"

/**
 * Converts a decimal number to a base
 * @param n The number to convert
 * @param b The base to convert to
 * @return The converted number
 */
string decimal_to_base(int n, const int b);

#endif