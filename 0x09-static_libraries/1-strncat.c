#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of concatenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int j;

	k = 0;

	for (j = 0; j < 1000; j++)
	{
		if (dest[j] == '\0')
		{
			break;
		}

		k++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[k + j] = src[j];
	}

	dest[k + j] = '\0';

	return (dest);
}
