#include "main.h"

/**
 * _puts - Outputs string, followed new line, to stdout
 * @str: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
