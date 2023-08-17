#include "lists.h"

/**
 * free_dlistint -frees a dll by deleting all nodes
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head->next;
		if (current != NULL)
			current->prev = NULL;
		free(head);
		head = current;
	}
}
