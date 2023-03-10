#include "main.h"

/**
* is_prime_number - Checks if a number is prime.
* @n: The number to be checked.
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n == 2 || n == 3 || n == 5 || n == 7)
return (1);
if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
return (0);
return (1);
}
