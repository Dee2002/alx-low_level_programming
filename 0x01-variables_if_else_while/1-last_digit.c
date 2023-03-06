#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

/**
* main - Entry point
*
* The program assigns a random number to the variable n each time it's executed
* The variable n will store a different value every time you run this program.
* It prints the last digit of the number stored in the variable n.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = abs(n % 10);

printf("Last digit of %d is ", n);
if (n < 0)
{
last_digit *= -1;
printf("-%d and is ", last_digit);
}
else
{
printf("%d and is ", last_digit);
}
if (last_digit > 5)
{
printf("greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}
