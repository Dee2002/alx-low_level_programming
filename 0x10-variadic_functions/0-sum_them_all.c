#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_numbers - Prints a variable number of integers separated by given string
*
* @separator: The string to be printed between integers
* @n: The number of integers to be printed
* @...: The integers to be printed
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args; /* Declare a va_list object to hold the arguments */
unsigned int i;

va_start(args, n);/*Initialize va_list object with the last fixed argument*/

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int)); /* Print the next integer argument */
if (i != n - 1 && separator != NULL)

{
printf("%s", separator); /* Print the separator if not the last integer */
}
}

va_end(args); /* Clean up the va_list object */

printf("\n"); /* Print a newline character to end the line */
}

/**
* sum_them_all - calculates the sum of its arguments
* @n: number of arguments
*
* Return: sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

va_start(args, n); /* initialize the va_list object */
for (i = 0; i < n; i++)
{
sum += va_arg(args, int); /* add the next argument to the sum */
}
va_end(args); /* clean up the va_list object */

return (sum);
}
