#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 * shash_table_set - Set a key/value pair in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current, *prev = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL && strcmp(current->key, key) <= 0)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		prev = current;
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = current;

	if (prev)
		prev->next = new_node;
	else
		ht->array[index] = new_node;

	if (current == NULL || strcmp(new_node->key, current->key) < 0)
	{
		if (prev)
			prev->next = new_node;
		else
			ht->array[index] = new_node;
		new_node->next = current;
	}

	if (ht->shead == NULL || strcmp(key, ht->shead->key) <= 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		if (ht->shead)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		current = ht->shead;
		while (current->snext && strcmp(key, current->snext->key) > 0)
			current = current->snext;
		new_node->snext = current->snext;
		current->snext = new_node;
		new_node->sprev = current;
		if (new_node->snext)
			new_node->snext->sprev = new_node;
		else
			ht->stail = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Get the value associated with a key in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL && strcmp(current->key, key) <= 0)
	{
		if (strcmp(current->key, key) == 0)
			return (strdup(current->value));
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table in ascending order
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;

	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in descending order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;

	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table and free its memory
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	current = ht->shead;
	while (current)
	{
		temp = current;
		current = current->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

	free(ht->array);
	free(ht);
}
