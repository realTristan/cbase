#ifndef MATH_C
#define MATH_C

int power(int base, int exponent);

/**
 * Raises a number to a power
 * @param base The base number
 * @param exponent The exponent
 * @return The result
 */
int power(int base, int exponent)
{
  int result = 1;

  for (unsigned int i = 0; i < exponent; i++)
  {
    result *= base;
  }

  return result;
}

#endif