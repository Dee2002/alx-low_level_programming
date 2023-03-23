#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: number of command-line arguments
* @argv: array of command-line arguments
*
* Return: 0 if successful, 1 if incorrect number of arguments,
* 2 if negative number of bytes
*/
int main(int argc, char *argv[])
{
int i, nbytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

nbytes = atoi(argv[1]);

if (nbytes < 0)
{
printf("Error\n");
return (2);
}

char *address = (char *)&main;
for (i = 0; i < nbytes; i++)
printf("%02x ", address[i] & 0xff);
printf("\n");

return (0);
}
