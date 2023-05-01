#include "lists.h"
#include "stdlib.h"
/**
* free_listint2 - free linked list and set head to null
 * @head: the linked list to be fred
*/
void free_listint2(listint_t **head)
{

	listint_t *current = *head;
	listint_t *nxt;

	if (current == NULL)
	{
		return;
	}

	while (current)
	{
		nxt = current->next;
		free(current);
		current = nxt;

	}
	*head = NULL;
}
