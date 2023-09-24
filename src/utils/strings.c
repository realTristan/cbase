#ifndef STRINGS_C
#define STRINGS_C

#include "../types/string.h"
#include <string.h>

int streq(const string a, const string b);

/**
 * Checks if two strings are equal
 * @param a The first string
 * @param b The second string
 * @return Whether the strings are equal
 */
int streq(const string a, const string b)
{
  return strcmp(a, b) == 0;
}

#endif