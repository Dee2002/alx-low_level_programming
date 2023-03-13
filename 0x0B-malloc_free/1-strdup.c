#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns pointer to a new string a duplicate of the string str
* @str: string to duplicate
*
* Return:pointer to duplicated string,or NULL if insufficient memory available
*/
char *_strdup(char *str)
{
char *duplicate;
int i, len;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= len; i++)
duplicate[i] = str[i];

return (duplicate);
}
