#include <stdio.h>
#include "main.h"
/**
 * main - prints the program name followed by a new line
 * @argc: the number of arguments supplied to the program
 * @argv: An array of pointers to arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
