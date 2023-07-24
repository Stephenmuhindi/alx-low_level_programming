#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longk = 0;
	int b = 0;
	char *c = str;
	int a;

	while (*c != '\0')
	{
		c++;
		longk++;
	}
	b = longk - 1;
	for (a = 0 ; a <= b ; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}
