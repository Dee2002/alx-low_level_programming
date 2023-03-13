#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: number of arguments
* @av: array of arguments
*
* Return: pointer to new string, or NULL on failure
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

/* calculate total length of all arguments */
for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

/* allocate memory for concatenated string */
str = malloc(sizeof(char) * (len + ac + 1));
if (str == NULL)
return (NULL);

/* concatenate all arguments with newline character */
for (i = 0, k = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
str[k] = av[i][j];
str[k++] = '\n';
}

/* add null terminator to end of string */
str[k] = '\0';

return (str);
}
