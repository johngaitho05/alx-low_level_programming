#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: the head node
 * @idx: where to insert the new node
 * @n: value of the new node
 * Return: the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h, *prev;
	unsigned int i = 0;

	new->n = n;
	while (current && i < idx)
	{
		current = current->next;
		i++;
	}
	if (!current)
		return (NULL);

	prev = current->prev;
	if (prev)
	{
		prev->next = new;
		new->prev = prev;
	}
	new->next = current;
	if (i == 0)
		*h = new;

	return (new);

}
