#include "function_pointers.h"

/**
 * int_index - Returns index of first element matching condition.
 * @array: The array to search in.
 * @size: The size of array.
 * @cmp: Pointer to a function for the comparison.
 * Return: Index of the matched element, or -1 if not found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}
