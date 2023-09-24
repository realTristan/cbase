#ifndef HEX_H
#define HEX_H

#include "../types/string.h"

/**
 * Converts a number to a hex character
 * @param r The number to convert
 * @return The hex string
 */
string num_to_hex(const int r);

/**
 * Converts a hex character to a number
 * @param c The hex character to convert
 * @return The number
 */
int hex_to_num(const char c);

#endif