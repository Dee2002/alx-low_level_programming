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

def _sqrt_recursion(n, start=0, end=None):
if end is None:
end = n // 2 + 1
if start > end:
return None
mid = (start + end) // 2
if mid * mid == n:
return mid
elif mid * mid < n:
return _sqrt_recursion(n, mid + 1, end)
else:
return (_sqrt_recursion)
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
