#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (current != NULL && count)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			count++;
		}
	}
	printf("}\n");
}
