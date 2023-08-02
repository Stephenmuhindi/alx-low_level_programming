#include "main.h"

/**
 * _pow_recursion - returns computed x raised to exponent y
 * @x: value of the base
 * @y: exponent
 * Return: result of exponentation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
