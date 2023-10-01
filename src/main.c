#include <stdlib.h>
#include <stdio.h>

#include "types/string.h"
#include "decimal_to_base.h"
#include "base_to_decimal.h"
#include "base_16_to_decimal.h"
#include "base_to_base.h"
#include "base_addition.h"
#include "base_product.h"
#include "base_subtraction.h"

void handle_opt(int opt);
void opt_decimal_to_base(void);
void opt_base_to_decimal(void);
void opt_base_to_base(void);
void opt_base_addition(void);
void opt_base_product(void);
void opt_base_16_to_decimal(void);
void opt_base_subtraction(void);

/**
 * Main function
 * @return The exit code
 */
int main(void)
{
  int opt;

  do
  {
    printf("\n[1] Decimal to base conversion\n");
    printf("[2] Base to decimal conversion\n");
    printf("[3] Base to base conversion\n");
    printf("[4] Base addition\n");
    printf("[5] Base multiplication\n");
    printf("[6] Decimal to base 16 conversion\n");
    printf("[7] Base Subtraction\n");
    printf("\n>> ");
    scanf("%d", &opt);
    printf("\n");

    if (opt == -1)
    {
      break;
    }

    handle_opt(opt);

  } while (1);

  return 0;
}

/**
 * Handles the option selected by the user
 * @param opt The option selected by the user
 * @return void
 */
void handle_opt(int opt)
{
  switch (opt)
  {
  case 1:
    opt_decimal_to_base();
    break;
  case 2:
    opt_base_to_decimal();
    break;
  case 3:
    opt_base_to_base();
    break;
  case 4:
    opt_base_addition();
    break;
  case 5:
    opt_base_product();
    break;
  case 6:
    opt_base_16_to_decimal();
    break;
  case 7:
    opt_base_subtraction();
    break;
  default:
    printf("Invalid option\n");
    break;
  }
}

/**
 * Converts a decimal number to another base
 * @param void
 * @return void
 */
void opt_decimal_to_base(void)
{
  int n, b;
  string res = malloc(sizeof(char) * 100);

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Enter a base: ");
  scanf("%d", &b);

  // decimal_to_base from decimal_to_base.c
  res = decimal_to_base(n, b);

  printf("Decimal to base result: %s\n", res);
}

/**
 * Converts a base representation to decimal
 * @param void
 * @return void
 */
void opt_base_to_decimal(void)
{
  int b, res;
  string n = malloc(sizeof(char) * 100);

  printf("Enter a base representation: ");
  scanf("%s", n);

  printf("Enter a base: ");
  scanf("%d", &b);

  // base_to_decimal from base_to_decimal.c
  res = base_to_decimal(n, b);

  printf("Base to decimal result: %d\n", res);
}

/**
 * Converts a base representation to another base
 * @param void
 * @return void
 */
void opt_base_to_base(void)
{
  int b1, b2;

  string h1 = malloc(sizeof(char) * 100);
  string res = malloc(sizeof(char) * 100);

  printf("Enter a base representation: ");
  scanf("%s", h1);

  printf("Enter the base of the representation: ");
  scanf("%d", &b1);

  printf("Enter the base to convert to: ");
  scanf("%d", &b2);

  // base_to_base from base_to_base.c
  res = base_to_base(h1, b1, b2);

  printf("Base to base result: %s\n", res);
}

/**
 * Adds two base representations
 * @param void
 * @return void
 */
void opt_base_addition(void)
{
  int b1, b2;

  string h1 = malloc(sizeof(char) * 100);
  string h2 = malloc(sizeof(char) * 100);
  string res = malloc(sizeof(char) * 100);

  printf("Enter a base representation: ");
  scanf("%s", h1);

  printf("Enter the base of the representation: ");
  scanf("%d", &b1);

  printf("\nEnter another base representation: ");
  scanf("%s", h2);

  printf("Enter the base of the representation: ");
  scanf("%d", &b2);

  // base_addition from base_addition.c
  res = base_addition(h1, h2, b1, b2);

  printf("Base addition result: %s\n", res);
}

/**
 * Multiplies two base representations
 * @param void
 * @return void
 */
void opt_base_product(void)
{
  int b1, b2;

  string h1 = malloc(sizeof(char) * 100);
  string h2 = malloc(sizeof(char) * 100);
  string res = malloc(sizeof(char) * 100);

  printf("Enter a base representation: ");
  scanf("%s", h1);

  printf("Enter the base of the representation: ");
  scanf("%d", &b1);

  printf("\nEnter another base representation: ");
  scanf("%s", h2);

  printf("Enter the base of the representation: ");
  scanf("%d", &b2);

  // base_product from base_product.c
  res = base_product(h1, h2, b1, b2);

  printf("Base product result: %s\n", res);
}

/**
 * Converts a base 16 representation to decimal
 * @param void
 * @return void
 */
void opt_base_16_to_decimal(void)
{
  string h1 = malloc(sizeof(char) * 100);
  int res;

  printf("Enter a base 16 representation: ");
  scanf("%s", h1);

  // base16_to_decimal from base_16_to_decimal.c
  res = base16_to_decimal(h1);

  printf("Base 16 to decimal result: %d\n", res);
}

/** Subtracts two base representations
 * @param void
 * @return void
 */

void opt_base_subtraction(void)
{
  int b1, b2;

  string h1 = malloc(sizeof(char) * 100);
  string h2 = malloc(sizeof(char) * 100);
  string res = malloc(sizeof(char) * 100);

  printf("Enter the base represention: ");
  scanf("%s", h1);

  printf("Enter the base of the representation: ");
  scanf("%d", &b1);

  printf("\nEnter another base representation: ");
  scanf("%s", h2);

  printf("Enter the base of the representation: ");
  scanf("%d", &b2);

  // base_subtraction from base_subtraction.c . 
  res = base_subtraction(h1, h2, b1, b2);

  printf("The Base subtraction result: %s\n", res);

}
