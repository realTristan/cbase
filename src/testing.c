#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "types/string.h"
#include "decimal_to_base.h"
#include "base_to_decimal.h"
#include "utils/strings.h"
#include "base_16_to_decimal.h"
#include "base_to_base.h"
#include "base_addition.h"
#include "base_product.h"
#include "base_subtraction.h"

// Keep track of the number of tests.
#define TOTAL_TESTS 25

// Asserts that a condition is true
void assert(int *count, clock_t *start, int condition);

/**
 * Main function
 * @return The exit code
 */
int main(void)
{
  // Keep track of the number of tests
  int count = 0;

  // Keep track of the time
  clock_t start = clock();

  // decimal_to_base from decimal_to_base.c
  assert(&count, &start, streq(decimal_to_base(1000, 16), "3E8"));
  assert(&count, &start, streq(decimal_to_base(1000, 2), "1111101000"));
  assert(&count, &start, streq(decimal_to_base(1000, 8), "1750"));
  assert(&count, &start, streq(decimal_to_base(1000, 10), "1000"));

  // base_to_decimal from base_to_decimal.c
  assert(&count, &start, base_to_decimal("3E8", 16) == 1000);
  assert(&count, &start, base_to_decimal("1111101000", 2) == 1000);
  assert(&count, &start, base_to_decimal("1750", 8) == 1000);
  assert(&count, &start, base_to_decimal("1000", 10) == 1000);

  // base16_to_decimal from base_16_to_decimal.c
  assert(&count, &start, base16_to_decimal("3E8") == 1000);
  assert(&count, &start, base16_to_decimal("98AF") == 39087);
  assert(&count, &start, base16_to_decimal("1A3") == 419);

  // base_to_base from base_to_base.c
  assert(&count, &start, streq(base_to_base("3E8", 16, 10), "1000"));
  assert(&count, &start, streq(base_to_base("3E8", 16, 2), "1111101000"));
  assert(&count, &start, streq(base_to_base("3E8", 16, 8), "1750"));
  assert(&count, &start, streq(base_to_base("1111101000", 2, 10), "1000"));
  assert(&count, &start, streq(base_to_base("1111101000", 2, 16), "3E8"));

  // base_addition from base_addition.c
  assert(&count, &start, streq(base_addition("3E8", "3E8", 16, 16), "7D0"));
  assert(&count, &start, streq(base_addition("1111101000", "1111101000", 2, 2), "11111010000"));
  assert(&count, &start, streq(base_addition("1000", "1000", 10, 10), "2000"));

  // base_product from base_product.c
  assert(&count, &start, streq(base_product("7F", "7F", 16, 16), "3F01"));
  assert(&count, &start, streq(base_product("531", "74", 8, 8), "50334"));
  assert(&count, &start, streq(base_product("101", "101", 2, 2), "11001"));

  // The base_subtraction from base_subtraction.c
  assert(&count, &start, streq(base_subtraction("2321","1332", 4, 4), "323"));
  assert(&count, &start, streq(base_subtraction("453", "345", 8, 8), "106"));
  assert(&count, &start, streq(base_subtraction("422", "143", 5, 5), "224"));

  printf("\n\033[0;32m[%d/%d] All tests passed!\n", count, TOTAL_TESTS);
}

/**
 * Asserts that a condition is true
 * @param count The number of tests
 * @param start The start time
 * @param condition The condition to assert
 */
void assert(int *count, clock_t *start, int condition)
{
  (*count)++;

  // Get the speed
  clock_t end = clock();
  double time_spent = (double)(end - *start) / CLOCKS_PER_SEC;

  if (!condition)
  {
    printf("\033[0;31m[%d/%d] Test failed in %lfs\n", *count, TOTAL_TESTS, time_spent);
    exit(0);
  }
  else
  {
    printf("\033[0;32m[%d/%d] Test passed in %lfs\n", *count, TOTAL_TESTS, time_spent);
  }

  // Reset the start time
  *start = clock();
}