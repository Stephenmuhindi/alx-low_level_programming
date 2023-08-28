#include "lists.h"

/**
 * get_nodeint_at_index - displays node at given index
 * @head: first node
 * @index: index
 * Return: node pointer, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *temp = head;

	while (temp && q < index)
	{
		temp = temp->next;
		q++;
	}
	return (temp ? temp : NULL);
}
