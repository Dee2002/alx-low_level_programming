#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char message[] = "Programming is like building a multilingual puzzle\n";

/* Redirect stderr to /dev/null */
freopen("/dev/null", "w", stderr);

/* Print the message using the puts function */
puts(message);

return (0);
}
