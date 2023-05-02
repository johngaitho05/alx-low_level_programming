#include "lists.h"
#include "stdlib.h"

/**
 * pop_listint - delete head node of a linked list
 * @head: the head node to the linked list
 * Return: the value of the head node
*/

int pop_listint(listint_t **head)
{
	listint_t *nxt = *head;
	int val;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	val = nxt->n;
	free(nxt);
	return (val);
}
