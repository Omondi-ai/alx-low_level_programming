#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Return: Always (Success);
 */

int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);

		if (y != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
