#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Their difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product
 * @a: The first number
 * @b: The second number
 * Return: Their product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient
 * @a: The first number
 * @b: The second number
 * Return: their quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return the modulus
 * @a: The first number
 * @b: The second number
 * Return: their remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
