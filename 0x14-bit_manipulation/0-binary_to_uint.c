#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
*
* Return: The converted number, or 0 if one or more chars in the string 'b' is
*         not 0 or 1, or if 'b' is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int i = 0;

if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);

result = result << 1; /* Left-shift the result by 1 bit */
if (b[i] == '1')
result = result | 1; /* Set the least significant bit of 'result' to 1 */

i++;
}

return (result);
}
