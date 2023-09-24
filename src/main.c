#include <stdlib.h>
#include <stdio.h>

#include "types/string.h"
#include "decimal_to_base.h"

/**
 * Main function
 * @return The exit code
 */
int main(void)
{
  int n;
  int b;
  string result = malloc(sizeof(char) * 100);

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Enter a base: ");
  scanf("%d", &b);

  // decimal_to_base from decimal_to_base.c
  result = decimal_to_base(n, b);

  printf("Result: %s\n", result);
}