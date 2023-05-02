#include "stdlib.h"
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: the head node
 * @idx: the position to insert the new node
 * @n: the value to insert
 *
 * Return: pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new == NULL || *head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (count = 0; current && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
	}

	return (NULL);
}
