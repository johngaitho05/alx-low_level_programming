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

/**
 * shash_table_create - create sorted hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	ht->size = size;
	ht->array = array;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * _shash_table_set - compare abcs and insert current into list (for printing)
 * @ht: sorted hash table
 * @current: current to insert
 * Return: 1 if success, 0 if fail
 */
int _shash_table_set(shash_table_t *ht, shash_node_t *current)
{
	shash_node_t *tmp;

	if (!(ht->shead))
	{
		ht->shead = current;
		ht->stail = current;
		return (1);
	}
	if (strcmp(current->key, (ht->shead)->key) <= 0)
	{
		current->snext = ht->shead;
		(ht->shead)->sprev = current;
		ht->shead = current;
	}
	else if (strcmp(current->key, (ht->stail)->key) > 0)
	{
		current->sprev = ht->stail;
		(ht->stail)->snext = current;
		ht->stail = current;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(current->key, (tmp->snext)->key) > 0)
			tmp = tmp->snext;
		current->snext = tmp->snext;
		current->sprev = tmp;
		(tmp->snext)->sprev = current;
		tmp->snext = current;
	}
	return (1);
}

/**
 * create_and_add_node - malloc, set values, and insert current into hash table
 * @ht: sorted hash table
 * @key: key; can't be empty string
 * @value: value
 * @index: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
int create_and_add_node(shash_table_t *ht, const char *key, const char *value,
						unsigned long int index)
{
	shash_node_t *current = NULL;
	char *k;
	char *v;
	(void) index;
	current = malloc(sizeof(shash_node_t));
	if (!current)
		return (0);
	k = strdup(key);
	if (!k)
	{
		free(current);
		return (0);
	}
	v = strdup(value);
	if (!v)
	{
		free(k);
		free(current);
		return (0);
	}

	current->key = k;
	current->value = v;
	current->next = NULL;
	current->sprev = NULL;
	current->snext = NULL;

	if ((ht->array)[index] == NULL)
		current->next = NULL;
	else
		current->next = (ht->array)[index];
	(ht->array)[index] = current;

	return (_shash_table_set(ht, current));
}

/**
 * shash_table_set - add element to sorted hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current = NULL;
	char *v;

	if (ht == NULL || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = (ht->array)[index];
	while (current && (strcmp(key, current->key) != 0))
		current = current->next;
	if (current != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (current->value)
			free(current->value);
		current->value = v;
		return (1);
	}

	return (create_and_add_node(ht, key, value, index));
}
