#include "stdlib.h"
#include "lists.h"

/**
 * free_listint2 - frees a linked list by setting head to null
 * @head: the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head == NULL)
		return;

	while (*head)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
	}

	*head = NULL;
}

