#include "main.h"
/**
 * _puts - prints a string
 * @str: the string to be printed
 *
 * Description: prints a string
 * Returns: number of characters printed
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
