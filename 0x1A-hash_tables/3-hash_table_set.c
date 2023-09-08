#include "hash_tables.h"

/**
 * add_n_hash - adds a node at the beginning of a hash at a given index
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 *
 * Return: head of the hash
 */

hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *current;

	current = *head;

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (*head);
		}
		current = current->next;
	}

	current = malloc(sizeof(hash_node_t));

	if (current == NULL)
		return (NULL);

	current->key = strdup(key);
	current->value = strdup(value);
	current->next = *head;
	*head = current;

	return (*head);
}

/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if success, 0 if fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[k_index]), key, value) == NULL)
		return (0);
	return (1);
}
