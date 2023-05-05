#include <stdlib.h>
#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of binary digits.
*
* Return: The unsigned integer value of the binary number, or 0 if there is
* a non-binary character in the string or the string is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int bit = 1;
if (b == NULL)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
if (*b == '1')
result += bit;
bit <<= 1;
b--;
}
return (result);
}
