#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, then in uppercase,
* followed by a new line using only the putchar function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lower = 'a';
char upper = 'A';
int count;

for (count = 0; count < 26; count++)
{
putchar(lower);
lower++;
}

for (count = 0; count < 26; count++)
{
putchar(upper);
upper++;
}

putchar('\n');

return (0);
}
