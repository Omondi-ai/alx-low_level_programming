#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an arrray of a certain numberof elements
 * each of the input byte size
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - Null
 * otherwise - a pointer to the alocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NUL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filer[index] = '\0';

	return (mem);
}
