#include<stdio.h>
#include<math.h>
/**
* largest_prime_factor - this function find
*
* and return the largest prime factor of
*
* the number 612852475143.
*
* @num: the number whose prime factor will
* be calculated
*
* Return:returns largest
*/
long int largest_prime_factor(long int num)
{
int largest = -1;
int i;

while(num % 2 == 0)
{
largest = 2;
num = num / 2;
}
for (i = 3 ; i <= sqrt(num); i = i + 2)
{
while(num % i == 0)
{
largest = i;
num = num / i;
}
}
if(num > 2)
{
largest = num;
}
return (largest);
}
/**
* main - prints the largest prime factor of
* 612852475143 and a new line
*
* Return: returns 0 (success)
*/
int main(void)
{
long int  num = 612852475143;

printf ("%ld\n", largest_prime_factor(num));
return (0);
}

