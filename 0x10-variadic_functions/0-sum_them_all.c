#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters.
 * @n: parameter amount passed to function.
 * @...: A variable number of parameters to calculate the sum of.
 * Return: If n == 0 - 0. Else- the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x, sum = 0;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		int num = va_arg(args, int);

		sum += num;
	}

	va_end(args);

	return (sum);
}
