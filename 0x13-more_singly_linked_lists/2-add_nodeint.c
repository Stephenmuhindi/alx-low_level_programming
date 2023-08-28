#include "lists.h"

/**
 * add_nodeint - adds a node at the start of the list
 * @head: first node pointer
 * @n: data placed in new node
 * Return: pointer to the new node, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
