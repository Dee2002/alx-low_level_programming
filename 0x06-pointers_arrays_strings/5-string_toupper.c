#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
* @str: Pointer to string.
*
* Return: Pointer to modified string.
*/
char *string_toupper(char *str)
{
int len = strlen(str);
int i;

for (i = 0; i < len; i++)
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
}

return (str);
}
