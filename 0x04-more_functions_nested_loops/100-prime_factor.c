#include <stdio.h>
#include <math.h>

/**
* largest_prime_factor - Finds the largest prime factor of a given number
* @n: The number
*
* Return: The largest prime factor
*/
long largest_prime_factor(long n)
{
long i;

while (n % 2 == 0)
{
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
n /= i;
}
}

if (n > 2)
{
return (n);
}

return (i);
}


/**
* main - entry point
*
* Return : 0 always
*/
int main(void)
{
long number = 612852475143;
long largest_factor = largest_prime_factor(number);

printf("%ld\n", largest_factor);

return (0);
}
