#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @x: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int x)
{
	int i;
	int z;

	for (i = 0; i < x--; i++)
	{
		z = a[i];
		a[i] = a[x];
		a[x] = z;
	}
}
