#include "REV_ARRAY.H"
#include <stdio.h>

/**
* reverse_array - Reverses the content of an array of integers
*
* @a: The array of integers
* @n: The number of elements in the array
*
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
int temp, i;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int n = sizeof(a) / sizeof(a[0]);
int i;

printf("Before Reverse: ");
for (i = 0; i < n; i++)
printf("%d ", a[i]);

reverse_array(a, n);

printf("\nAfter Reverse: ");
for (i = 0; i < n; i++)
printf("%d ", a[i]);

return (0);
}
