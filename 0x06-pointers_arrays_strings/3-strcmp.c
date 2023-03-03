#include <stdio.h>

/**
* _strcmp - Compare two strings.
*
* @s1: Pointer to the first string to compare.
* @s2: Pointer to the second string to compare.
*
* Return: An integer less than, equal to, or greater than zero if s1 is found,
* respectively, to be less than, to match, or be greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
{
break;
}
}

return (s1[i] - s2[i]);
}
