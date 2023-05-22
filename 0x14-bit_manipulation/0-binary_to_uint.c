#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @param b: A pointer to a string of 0 and 1 characters
 *
 * @return: The converted number, or 0 if there is one or more chars in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b) 
{
  unsigned int value = 0;
  int power = 1;

  while (*b != '\0') {
    if (*b == '1') {
      value += power;
    } else if (*b == '0') {
      /* Do nothing */
    } else {
      return 0;
    }

    power *= 2;
    b++;
  }

  return value;
}
