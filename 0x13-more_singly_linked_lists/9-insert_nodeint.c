#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node
 * @head: first nodepointer
 * @idx: index
 * @n: element to insert
 * Return: new node pointer, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int q;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (q = 0; temp && q < idx; q++)
	{
		if (q == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
