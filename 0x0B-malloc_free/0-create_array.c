#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * and initializes with specific chars
 * @size: input size
 * @c: input character
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char *) malloc(size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
