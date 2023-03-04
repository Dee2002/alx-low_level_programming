#include "REV_ARRAY.H"
#include <stdio.h>

/**
*reverse_array - Reverses the content of an array of integers
* @a: the array of integers to reverse
* @n: the number of elements in the array
*/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}

/**
* main - Entry point
*
* This program tests the reverse_array function by creating an array
* of integers, calling the function to reverse its contents, and then
* printing the reversed array.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int i;

printf("Original array: ");
for (i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");

reverse_array(arr, n);

printf("Reversed array: ");
for (i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");

return (0);
}
