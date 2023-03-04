#include "rev_array.h"
#include <stdio.h>

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
