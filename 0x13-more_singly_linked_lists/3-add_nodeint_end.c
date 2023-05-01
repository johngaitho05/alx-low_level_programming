#include "stdlib.h"
#include "lists.h"

/**
 * add_nodeint_end - insert a node in at the end of a linked list
 * @head: the head node of the list
 * @n: the value to insert
 * Return: the head node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t  *current = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (*head);
}
