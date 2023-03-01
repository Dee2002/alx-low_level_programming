#include "main.h"

/**
* swap_int - swaps the values of two integers
*
* @a: enter parameter 1
* @b: enter parameter 2
*
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
