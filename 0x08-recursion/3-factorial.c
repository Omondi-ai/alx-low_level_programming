#include "main.h"
/**
 * factorial - searches for factorial of a number
 * @n: number whose factorial we are finding
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	next = factorial(n - 1);
	return (n * next);
}
