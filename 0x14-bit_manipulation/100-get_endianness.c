#include "main.h"

/**
 * get_endianness - this one checks the endianness
 *
 * Return: 0 if its a big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
