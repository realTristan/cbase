#ifndef HEX_C
#define HEX_C

#include <stdio.h>
#include <stdlib.h>
#include "../types/string.h"
#include "strings.h"

string num_to_hex(const int r);
int hex_to_num(const char c);

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
 * Converts a hex character to a number
 * @param c The hex character to convert
 * @return The number
 */
int hex_to_num(const char c)
{
  if (c == 'A')
  {
    return 10;
  }
  else if (c == 'B')
  {
    return 11;
  }
  else if (c == 'C')
  {
    return 12;
  }
  else if (c == 'D')
  {
    return 13;
  }
  else if (c == 'E')
  {
    return 14;
  }
  else if (c == 'F')
  {
    return 15;
  }
  else
  {
    return atoi(&c);
  }
}

#endif