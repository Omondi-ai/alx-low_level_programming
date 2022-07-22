#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prnts the minimum number of coins to
 *		make change for an amount of money.
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: If the number of arguments is not exactly one - 1.
 *		otherwise - 0
 */
int main(int argc, char *argv[])
{
	int cents, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

		if (cents > 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (cents % 25 >= 0)
		{
			change = cents / 25;
			cents = cents % 25;
		}
		if (cents % 2 >= 0)
		{
			change += cents / 2;
			cents = cents % 2;
		}
		if (cents % 1 >= 0)
		{
			change += cents / 1;
		}
		printf("%d\n", change);
		return (0);
}