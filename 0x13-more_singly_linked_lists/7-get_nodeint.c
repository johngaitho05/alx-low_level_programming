#include "stdlib.h"
#include "lists.h"

/**
* get_nodeint_at_index - get the node at the given index
 * @head: the header node of the linked list
 * @index: the position of the node we are looking for
 * Return: node at index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *nxt = head;

	while (nxt && count < index)
	{
		nxt = nxt->next;
		count++;
	}

	return (nxt);
}

