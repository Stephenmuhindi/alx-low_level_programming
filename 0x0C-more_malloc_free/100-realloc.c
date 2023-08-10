#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - malloc and free reallocation of memory block
 * @ptr: pointer to reallocated memory by malloc.
 * @old_size: allocated memory for pointer size.
 * @new_size: new size of new memory block.
 * Return: newly allocated memory block pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = old_ptr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = old_ptr[x];
	}

	free(ptr);
	return (ptr1);
}
