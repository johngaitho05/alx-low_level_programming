#include "lists.h"

/**
 * dlistint_len - count nodes
 * @h: pointer to the header node
 * Return: number of nodes in in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n = 0;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}

	return (n);

}
