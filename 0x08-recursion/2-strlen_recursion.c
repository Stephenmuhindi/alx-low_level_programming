#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string to be worked on
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
