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
	unsigned int count = 0;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *prev = NULL;
	listint_t *current = *head;

	if (new == NULL || *head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (current && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		if (count == idx)
		{
			prev->next = new;
			return (new);
		}
		else
		{
			return (NULL);
		}
	}

	if (prev != NULL)
		prev->next = new;

	new->next = current;
	return (new);
}
