#include <stdio.h>
/**
 * main - Prints all argumentd it receives
 * @argc: The number of arguments supplied to te program
 * @argv: An array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
