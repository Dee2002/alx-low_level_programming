#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings, followed by a new line
*
* @separator: the string to be printed between strings
* @n: the number of strings passed to the function
* @...: variable arguments list of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n); /* Initialize va_list object with the last fixed argument */

for (i = 0; i < n; i++)
{
str = va_arg(args, char*); /* Get the next string argument */

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");

va_end(args); /* Clean up the va_list object */
}
