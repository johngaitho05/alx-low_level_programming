#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list
 * @skip_list: Input skip list
 * @target: Value to search for
 * Return: Node containing the value, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *skip_list, int target)
{
	skiplist_t *current;

	if (skip_list == NULL)
		return (NULL);

	current = skip_list;

	do
	{
		skip_list = current;
		current = current->express;

		printf("Checking at index ");
		printf("[%d] = [%d]\n", (int)current->index, current->n);
	} while (current->express && current->n < target);

	if (current->express == NULL)
	{
		skip_list = current;

		while (current->next)
			current = current->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)skip_list->index, (int)current->index);

	while (skip_list != current->next)
	{
		printf("Checking at index [%d] = [%d]\n", (int)skip_list->index, skip_list->n);

		if (skip_list->n == target)
			return (skip_list);

		skip_list = skip_list->next;
	}

	return (NULL);
}
