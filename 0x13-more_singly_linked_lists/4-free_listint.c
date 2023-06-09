#include "lists.h"
#include "stdlib.h"
/**
 * free_listint - free the linked list memory
 * @head: pointer to the head node
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
