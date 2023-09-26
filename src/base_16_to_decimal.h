#ifndef BASE_16_TO_DECIMAL_H
#define BASE_16_TO_DECIMAL_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "types/string.h"

int hex_char_to_decimal(char hexChar);

int base16_to_decimal(const string hexStr);

#endif