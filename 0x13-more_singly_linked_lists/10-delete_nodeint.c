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
	unsigned int count = 0;
	listint_t *prev = NULL;
	listint_t  *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (current && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current)
	{
		prev->next = current->next;
		free(current);
		return (1);
	}
	return (-1);

}
