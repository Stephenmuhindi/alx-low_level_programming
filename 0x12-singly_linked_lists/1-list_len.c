#include <stdlib.h>
#include "lists.h"

/**
 * list_len - displays the amount of items in a linked list
 * @h: list_t pointer.
 * Return: amouunt in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
