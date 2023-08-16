#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates through array and applies to each element.
 * @array: The array to be iterated.
 * @size: The size of the array.
 * @action: A function pointer to the action to be applied.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
