#include "lists.h"
#include <stdio.h>

/**
 * print_list - displays all elements in linked list
 * @h: pointer to list_t.
 * Return: amount of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		d++;
	}
	return (d);
}
