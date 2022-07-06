#include "main.h"
/**
 * print_the_last_digit - Prints a     number's last digir
 * @n: The digit to be printed
 *
 * Return: Valuation of a number's last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
