#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array for the hash table.
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	/* Allocate memory for the hash table structure */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers to hash_node_t */
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* Initialize each array element to NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;
	return (table);
}

