#include "main.h"

/**
 * factorial -Returns muber factorial, ie (n!)
 * @n: Number which factorial is to be calculated.
 * Return: factorial of number given
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
