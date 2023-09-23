#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char *string;

/**
 * Converts a number to a hex character
 * @param r The number to convert
 * @return The hex string
 */
string num_to_hex(const int r);

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

  while (n != 0)
  {
    const int r = n % b;

    const string s = num_to_hex(r);
    strcat(result, s);

    n /= b;
  }

  const int len = strlen(result);
  char *reversed = malloc(sizeof(char) * len);

  for (int i = 0; i < len; i++)
  {
    reversed[i] = result[len - i - 1];
  }

  printf("Result: %s\n", reversed);
}

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