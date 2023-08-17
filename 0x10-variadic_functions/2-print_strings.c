#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Display strings followed by new line.
 * @separator: The string to be placed between strings.
 * @n: strings amount provided to function.
 * @...: unspecified count of strings to be displayed.
 * Description: If 'separator' is NULL, dont display.
 * If one of the strings is NULL, display "(nil)"
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	char *str;
	unsigned int counter;

	va_start(args_list, n);

	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(args_list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (counter != (n - 1) && separator != NULL)

			printf("%s", separator);
	}

	printf("\n");

	va_end(args_list);
}
