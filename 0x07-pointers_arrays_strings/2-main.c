#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
char *s = "hello";
char *f;

f = my_strchr(s, 'l');
printf("%s\n", f);
return (0);
}
