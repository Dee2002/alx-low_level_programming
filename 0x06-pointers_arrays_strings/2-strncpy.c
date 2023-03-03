/**
* _strncpy - copies n bytes of the string pointed to by src,
* including the terminating null byte ('\0'), to the buffer pointed to by dest.
* If there is no null byte among the first n bytes of src, the string placed
* in dest will not be null-terminated.
* If the length of src is less than n, _strncpy writes additional null bytes to
* dest to ensure that a total of n bytes are written.
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: maximum number of bytes to be copied
*
* Return: pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* copy at most n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
/* pad the rest of dest with null bytes if necessary*/
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
