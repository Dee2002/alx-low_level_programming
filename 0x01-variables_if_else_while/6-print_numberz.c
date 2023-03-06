#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints all single digit numbers of base 10
* starting from 0 using the putchar function. No variable of type char is
* allowed to be used and only two putchar function calls are allowed.
*
* Return: Always 0 (success)
*/

int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
