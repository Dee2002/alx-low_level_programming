#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name.
*
* @name: A pointer to a string containing the name.
* @f:A pointer to function that takes pointer to a string and returns nothing
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
