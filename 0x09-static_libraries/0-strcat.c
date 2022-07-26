#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *pointer;

	strcat(dest, src);
	pointer = dest;

	return (pointer);
}
