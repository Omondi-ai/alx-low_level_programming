#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: The number of arguments supplied to program
 * @argv: An array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%s\n", argc - 1);
	return (0);
}
