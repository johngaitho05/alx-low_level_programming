#include "lists.h"

/**
 * add_dnodeint_end - inserts a node at the end of a dll
 * @head: pointer to the header node
 * @n: value of the new node
 * Return: the newly created node if successful else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL); /* memory allocation failed */
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	new->prev = current;
	return (new);
}
