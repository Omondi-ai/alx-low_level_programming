#include <stdio.h>

/**
 * main - Prints combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int p, i;

	for (p = '0'; p <= '9'; p++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (p < i)
			{
				putchar(p);
				putchar(i);

				if (p != '8' || (p == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
