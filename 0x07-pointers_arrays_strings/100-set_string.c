#include <stdio.h>
#include "main.h"

/**
* set_string - Sets the value of a pointer to a char.
* @s: Pointer to the pointer to the string.
* @to: Pointer to the string to be set.
*/
void set_string(char **s, char *to)
{
*s = to;
}
