#include "main.h"
#include <stdio.h>

/**
* _strchr - Locates a character in a string
*
* @s: pointer to string
* @c: character to find
*
* Return: Pointer to the first occurrence of the character c
*         in the string s, or NULL if the character is not found
*/

char *my_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (c == '\0')
return (s);

return (NULL);
}