#include "main.h"

/**
 * print_array - function printing n elements of an array
 * @h: array name
 * @n: is the number of elements OF the array to be printed
 * Return: h and n inputs
 */

void print_array(int *h, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", h[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", h[n - 1]);
		}
			printf("\n");
}
