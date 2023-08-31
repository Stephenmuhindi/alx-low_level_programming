#include "main.h"

/**
 * set_bit - places bit at index to 1
 * @n: num pointer.
 * @index: ind of bit
 * Return: 1,else  -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
