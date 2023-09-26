#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "types/string.h"
#include "decimal_to_base.h"
#include "base_to_decimal.h"
#include "utils/strings.h"

// Keep track of the number of tests
#define TOTAL_TESTS 8

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
  }
  else
  {
    printf("\033[0;32m[%d/%d] Test passed in %lfs\n", *count, TOTAL_TESTS, time_spent);
  }

  // Reset the start time
  *start = clock();
}

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
}