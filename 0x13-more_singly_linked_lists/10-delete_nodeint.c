#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: first element pointer
 * @index: deletion index
 * Return: 1 (Success), else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int q = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

		return (1);
	}
	while (q < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		q++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
