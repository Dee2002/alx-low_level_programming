/**
* _strncat - a function that concatenates two strings.
*
* @dest: pointer to destination input
* @src: pointer to source input
* @n: most number of bytes from @src
*
* Return: pointer to the resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;

/*find size of the dest array*/
while (dest[c])
c++;

/**
*src doesn't need to be null terminated if contains n or more bytes
*/
for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = src[i];

/*null terminate dest*/
dest[c + i] = '\0';

return (dest);
}
