#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the dll
 * @head: head node of the dll
 * @n: value of the nee node
 * Return: the newly inserted node if successful else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
