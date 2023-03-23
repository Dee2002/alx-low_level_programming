#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: variable arguments list
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n); /* initialize the va_list object */

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int)); /* print the next integer argument */
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}

va_end(args); /* clean up the va_list object */

printf("\n"); /* print new line at the end of the function */
}
