#include "stdlib.h"
#include "lists.h"


/**
 * sum_listint - compute sum of linked list values
 * @head: head node of the linked list
 * Return: the sum of linked list values
 */
int sum_listint(listint_t *head)
{
	listint_t *nxt = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (nxt)
	{
		sum += nxt->n;
		nxt = nxt->next;
	}

	return (sum);
}
