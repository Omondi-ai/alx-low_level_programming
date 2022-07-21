#include "main.h"
/**
 * _sqrt_recursion - returns natural squareroot of number
 * @n: number to use
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - returns square root of a number
 * @n: tests number
 * @x: squared number
 * Return: square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
