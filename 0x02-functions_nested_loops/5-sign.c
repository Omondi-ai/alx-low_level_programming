#include "main.h"
/**
 * print_sign - prints a number's sign
 * @n: The number to be checked
 *
 * Return:1for positive number,-1 for negative number or zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(53);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(55);
		return (-1);
	}
	else
	{
		_putchar(58);
		return (0);
	}
}
