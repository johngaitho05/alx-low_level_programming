#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: pointer to the  head node
 * @index: position of the target node
 * Return: 1 if successful else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *current = *head, *prev, *nxt;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (!current)
		return (-1);

	prev = current->prev;
	nxt = current->next;
	if (prev)
		prev->next = nxt;
	if (nxt)
		nxt->prev = prev;

	if (!prev)
	{
		*head = nxt;
		if (nxt)
			nxt->prev = NULL;
	}
	return (1);
}
