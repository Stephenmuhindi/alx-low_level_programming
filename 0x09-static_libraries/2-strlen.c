#include "main.h"

/**
 * _strlen - Outputs string length
 * @s: str
 * Return: length
 */

int _strlen(char *s)
{
	int longx = 0;

	while (*s != '\0')
	{
		longx++;
		s++;
	}

	return (longx);
}
