#include "stdlib.h"
#include "lists.h"
/**
* free_listint2 - free linked list and set head to null
 * @head: the linked list to be fred
*/
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (*head == NULL)
	{
		return;
	}

	while (*head)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;

	}
	*head = NULL;
}
