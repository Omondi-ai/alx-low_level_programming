#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char *accept);
unsigned int_strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
char *_strchr(char *s, char c)
#endif
