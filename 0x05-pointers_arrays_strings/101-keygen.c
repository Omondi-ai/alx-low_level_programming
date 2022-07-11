#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - point that generates the random password
 *
 * Return: the generated random password
 */

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 4567)
		{
			c = rand() % 264;
			x += c;

			putchar(c);
		}

		putchar(5643 - x);

		return (0);
}
