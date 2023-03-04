#include "main.h"
#include <stdio.h>
/**
* cap_string - capitalizes all words of a string.
* @str: input string.
*
* Return: pointer to the resulting string.
*/
char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 'a' - 'A';
}
}
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 'a' - 'A';
}
}
}

return (str);
}
