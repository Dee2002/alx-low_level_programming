/**
* _strcmp - compares two strings
* @s1: pointer to first string
* @s2: pointer to second string
*
* Description: This function compares the strings pointed to by s1 and s2,
*              character by character, until it finds a mismatch or the end
*              of one of the strings is reached. The function returns an
*              integer value indicating the lexicographic relation between
*              the two strings. If the first string is less than the second
*              string, the function returns a negative integer. If the first
*              string is greater than the second string, the function returns
*              a positive integer. If both strings are equal, the function
*              returns 0.
*
* Return:     The function returns an integer value indicating the
*             lexicographic relation between the two strings.
*/
int _strcmp(char *s1, char *s2)
{
int i = (0);
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
return (s1[i] - s2[i]);
