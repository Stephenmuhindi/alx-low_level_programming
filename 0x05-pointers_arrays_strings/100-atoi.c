#include "main.h"

/**
 * _atoi - converts strings to integers
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, a, c, len, d, digit;

	i = 0;
	a = 0;
	c = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && d == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			d = 0;
		}
		i++;
	}

	if (d == 0)
		return (0);

	return (c);
}
