#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1, x = 0;
	unsigned int res = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		res = (res * 10) + (s[x] - '0');
		x++;
	}
	res *= sign;
	return (res);
}
