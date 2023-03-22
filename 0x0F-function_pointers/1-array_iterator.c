#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - Executes a function on each element of an array.
*
* @array: A pointer to an array of integers.
* @size: The size of the array.
* @action: A pointer to a function that takes an integer and returns nothing.
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
