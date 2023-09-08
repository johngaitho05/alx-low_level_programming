#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key using the DJB2 hash algorithm.
 * @key: The key string to be hashed.
 * @size: The size of the hash table.
 *
 * Return: The index in the hash table where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	/* Compute the index as hash modulo size */
	unsigned long int index = hash % size;

	return (index);
}
