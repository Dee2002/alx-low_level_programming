#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* This program will assign a random number to the variable n each time it is executed.
* The variable n will store a different value every time you run this program.
* It prints the last digit of the number stored in the variable n.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is ", n);

if (n < 0)
{
n = -n;
}

n = n % 10;

if (n > 5)
{
printf("%d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("%d and is 0\n", n);
}
else
{
printf("%d and is less than 6 and not 0\n", n);
}

return (0);
}
