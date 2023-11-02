#include "hash_tables.h"

/**
 * hash_table_print - a hash table.
 * @ht: hash
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		if (current != NULL)
		{
			/*printf("[%lu]:", i);*/
			while (current != NULL)
			{
				printf(" %s:%s", current->key, current->value);
				current = current->next;
			}
			printf(", ");
		}
	}
	printf("}\n");

}
