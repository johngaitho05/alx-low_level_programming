#include "lists.h"

/**
 * get_dnodeint_at_index - get node at the given index
 * @head: pointer to the head node
 * @index: the position of the node in the list
 * Return: node at the given index if it exists else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
