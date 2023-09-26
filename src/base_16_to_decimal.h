#ifndef BASE_16_TO_DECIMAL_H
#define BASE_16_TO_DECIMAL_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "types/string.h"

/**
 * Converts a hex character to its decimal equivalent
 * @param c The hex character to convert
 * @return The converted number
 */
int hex_char_to_decimal(const char c);

/**
 * Converts a base-16 (hexadecimal) string to decimal
 * @param h The hex string to convert
 * @return The converted number
 */
int base16_to_decimal(const string h);

#endif