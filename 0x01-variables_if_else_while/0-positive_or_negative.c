#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Program will assign a random number to variable n each time it is executed
* Variable n will store a different value every time you will run this program
* It prints whether number stored in the variable n is positive or negative.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d is ", n);

if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}

return (0);
}
