#include <stdlib.h>
#include <stdio.h>

#include "types/string.h"
#include "decimal_to_base.h"
#include "base_to_decimal.h"
#include "base_16_to_decimal.h"

/**
 * Main function
 * @return The exit code
 */
int main(void)
{
  int n, b, bd;
  string db = malloc(sizeof(char) * 100);

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Enter a base: ");
  scanf("%d", &b);

  // decimal_to_base from decimal_to_base.c
  db = decimal_to_base(n, b);

  // base_to_decimal from base_to_decimal.c
  bd = base_to_decimal(db, b);

  printf("Decimal to base result: %s\n", db);
  printf("Base to decimal result: %d\n", bd);

  // base_16_to_decimal from base_16_to_decimal.c
  int b16_decimal = base16_to_decimal("1A3");
  printf("Decimal Value of \"1A3\": %d\n", b16_decimal);

  return 0;
}