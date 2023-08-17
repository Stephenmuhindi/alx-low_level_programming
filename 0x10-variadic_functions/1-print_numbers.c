#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Display a series of numbers followed by a new line.
 * @separator: string to be placed between numbers.
 * @n: count of integers provided.
 * @...: An unspecified count of numbers to be displayed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int counter;

	va_start(args_list, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(args_list, int));

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args_list);
}
