#include "search_algos.h"

/**
  * linear_search - Searches linearly for int
  * @array: pointer to element1
  * @size: number of elements
  * @value: what you looking for
  *
  * Return: first occurence or -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
