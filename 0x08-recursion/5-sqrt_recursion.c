#include "main.h"
#include <stdio.h>

/**
* _sqrt_helper - Helper function to compute the natural square root of n.
* @n: The number to compute the natural square root of.
* @low: The lower bound of the search range.
* @high: The upper bound of the search range.
*
* Return: The integer square root of n, or -1 if no integer square root exists.
*/

int _sqrt_helper(int n, int low, int high)
{
int mid, mid_squared;

if (low > high)
return (-1);

mid = (low + high) / 2;
mid_squared = mid *mid;

if (mid_squared == n)
return (mid);

if (mid_squared > n)
return (_sqrt_helper(n, low, mid - 1));

return (_sqrt_helper(n, mid + 1, high));
}

/**
* _sqrt_recursion - Computes the natural square root of a number.
* @n: The number to compute the natural square root of.
*
* Return: The integer square root of n, or -1 if no integer square root exists.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0, n));
}
