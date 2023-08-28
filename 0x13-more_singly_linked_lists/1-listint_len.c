#include "lists.h"

/**
 * listint_len -  displays the number of elements in a linked listint_t list
 * @h: linked list
 * Return: nodes amount
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
