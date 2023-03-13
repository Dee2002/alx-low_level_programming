#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* count_words - Count the number of words in a string
* @str: The string to count
*
* Return: The number of words in the string
*/
int count_words(char *str)
{
int i, words = 0;

for (i = 0; str[i]; i++)
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
words++;

return (words);
}

/**
* strtow - Split a string into words
* @str: The string to split
*
* Return: An array of words, or NULL if str is NULL or empty
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len, n_words;

if (str == NULL || *str == '\0')
return (NULL);

n_words = count_words(str);
words = malloc((n_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; i < n_words; i++)
{
while (str[j] == ' ')
j++;
len = 0;
while (str[j + len] != ' ' && str[j + len] != '\0')
len++;
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[i][k] = str[j + k];
words[i][len] = '\0';
j += len;
}

words[n_words] = NULL;

return (words);
}
