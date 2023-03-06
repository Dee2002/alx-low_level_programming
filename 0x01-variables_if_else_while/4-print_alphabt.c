#include <stdio.h>

/**
* main - Entry point
* Description: prints the alphabet in lowercase, followed by a new line
* Prints all the letters except q and e
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 0;
char ch = 'a';

while (i < 26)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
i++;
}
ch++;
}
putchar('\n');

return (0);
}
