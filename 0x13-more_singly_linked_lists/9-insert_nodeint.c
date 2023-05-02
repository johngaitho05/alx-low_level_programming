#include "stdlib.h"
#include "lists.h"

/**
 * *insert_nodeint_at_index - insert a node at index;
 * @head: the header node
 * @idx: position to insert the new node
 * @n: value of the new node
 * Return: address to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *prev = NULL;
	listint_t *current = *head;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		return (new);


	while (current && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (!current)
		return (NULL);

	if(prev)
		prev->next = new;
	new->next = current;

	return (new);
}
