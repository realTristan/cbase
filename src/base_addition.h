#ifndef BASE_ADDITION_H
#define BASE_ADDITION_H

#include "types/string.h"

/**
 * Adds two base representations together
 * @param h1 The first base representation
 * @param h2 The second base representation
 * @param b1 The base of the first number
 * @param b2 The base of the second number
 * @return The sum of the two numbers in the given base
 */
string base_addition(string h1, string h2, int b1, int b2);

#endif