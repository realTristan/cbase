#include <stdlib.h>
#include <stdio.h>

#include "types/string.h"
#include "decimal_to_base.h"
#include "base_to_decimal.h"
#include "utils/strings.h"

// assertion
#define assert(condition)                         \
  if (!(condition))                               \
  {                                               \
    printf("Assertion failed: %s\n", #condition); \
    exit(1);                                      \
  }                                               \
  else                                            \
  {                                               \
    printf("Assertion passed: %s\n", #condition); \
  }

/**
 * Main function
 * @return The exit code
 */
int main(void)
{
  // decimal_to_base from decimal_to_base.c
  assert(streq(decimal_to_base(1000, 16), "3E8"));
  assert(streq(decimal_to_base(1000, 2), "1111101000"));
  assert(streq(decimal_to_base(1000, 8), "1750"));
  assert(streq(decimal_to_base(1000, 10), "1000"));

  // base_to_decimal from base_to_decimal.c
  assert(base_to_decimal("3E8", 16) == 1000);
  assert(base_to_decimal("1111101000", 2) == 1000);
  assert(base_to_decimal("1750", 8) == 1000);
  assert(base_to_decimal("1000", 10) == 1000);

  printf("All tests passed!\n");
}