#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key-value pair in the hash table.
 * @ht: The hash table to add/update the key-value pair.
 * @key: The key to add/update.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = NULL;
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	/* Check if the key already exists in the linked list at the computed index */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Update the value associated with the existing key */
			char *new_value = strdup(value);

			if (new_value == NULL)
				return (0);

			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}
	 /* If the key doesn't exist, create a new node and add it to the list*/
	new_node = malloc(sizeof(hash_node_t));
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
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

