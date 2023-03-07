#include "main.h"
#include <stdio.h>

/**
* _strchr - Locates a character in a string.
*
* @s: Pointer to the string to be searched.
* @c: Character to be located.
*
* Return: A pointer to the first occurrence of the character c in the string s,
* or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s); /* Found the character, return a pointer to it. */
}
s++; /* Move to the next character in the string. */
}
if (c == '\0')
{
return (s); /*If character is '\0',return a pointer to the end of the string.*/
}
return (NULL); /* If the character is not found, return NULL. */
}
