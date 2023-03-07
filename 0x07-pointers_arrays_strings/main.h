#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *my_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *, char *);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);

#endif /* MAIN_H */
