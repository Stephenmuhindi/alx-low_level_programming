#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table.
 * @size: array size
 * Return: hash_table_t, else NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *hashtable;

	if (size == 0)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		hashtable->array[x] = NULL;
	}
	return (hashtable);
}
