#include "hash_tables.h"

/**
 * shash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[index];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}

/**
 * shash_table_print - print key/values of hash table in ascending order
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
		return;
	putchar('{');
	current = ht->shead;
	while (current)
	{
		printf("%s'%s': '%s'", comma, current->key, current->value);
		comma = ", ";
		current = current->snext;
	}
	puts("}");
}

/**
 * shash_table_print_rev - print key/values
 * of sorted hashtable in reverse order
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	unsigned long int count = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	putchar('{');
	current = ht->stail;
	while (current)
	{
		if (current != NULL && count)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		count++;
	}
	puts("}");
}

/**
 * shash_table_delete - free and delete sorted hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *current, *next;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	while (index < ht->size)
	{
		current = (ht->array)[index];
		while (current)
		{
			next = current->next;
			if (current->key)
				free(current->key);
			if (current->value)
				free(current->value);
			current->key = NULL;
			current->value = NULL;
			free(current);
			current = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
