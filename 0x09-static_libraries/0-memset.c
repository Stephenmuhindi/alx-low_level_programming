#include "main.h"

/**
 * _memset - fill a block memory with specific value
 * @s: starting address memory to fill
 * @b: Desired value
 * @n: number bytes  change
 * Return: changed array with new amount of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
