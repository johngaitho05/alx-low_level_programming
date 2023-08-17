#include "lists.h"


/**
 * sum_dlistint - computes the sum of all nodes (values)
 * @head: pointer to the head node
 * Return: sum of all values in the list or 0 if list ie empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int res = 0;

	while (current)
	{
		res += current->n;
		current = current->next;
	}

	return (res);
}
