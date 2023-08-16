#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The difference between a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of integer division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The result of a divided by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of integer division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
