#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with constant byte.
 * @s: Memory area.
 * @b: Character copy
 * @n: number of bmultiples.
 * Return: pointer memory area to copy
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - Allocates array memory.
 * @nmemb: number of array elements.
 * @size: element size.
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
