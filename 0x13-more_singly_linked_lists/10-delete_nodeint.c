#include "stdlib.h"
#include "lists.h"

/**
 * delete_nodeint_at_index - delete element at given index
 * @head: pointer to the first node
 * @index: the index of the deletion candidate
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nxt = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nxt);
		return (1);
	}

	while (i < index - 1)
	{
		if (!nxt || !(nxt->next))
			return (-1);
		nxt = nxt->next;
		i++;
	}

	current = nxt->next;
	nxt->next = current->next;
	free(current);

	return (1);
}
