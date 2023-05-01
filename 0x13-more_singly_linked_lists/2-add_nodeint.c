#include "stdlib.h"
#include "lists.h"

/**
 * add_nodeint - insert a node in at the begining of a linked list
 * @head: the head node of the list
 * @n: the value to insert
 * Return: the head inserted node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
