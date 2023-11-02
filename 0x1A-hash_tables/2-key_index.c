#include "hash_tables.h"

/**
 * key_index - links key to index
 * @key: Key index
 * @size: space in memory
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
