#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Obtain values at ends of the inputs, and then add to get size.
 * @s1: first input to combine to form a single entity
 * @s2: second input to combine to form a single entity
 * Return: combination of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int x, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = ci = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (x + ci + 1));

	if (conct == NULL)
		return (NULL);
	x = ci = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}

	while (s2[ci] != '\0')
	{
		conct[x] = s2[ci];
		x++, ci++;
	}
	conct[x] = '\0';
	return (conct);
}
