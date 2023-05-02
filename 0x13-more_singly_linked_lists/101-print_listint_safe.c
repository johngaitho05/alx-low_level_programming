#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nxt, *prev;
	size_t count, i;

	nxt = head;
	count = 0;

	while (nxt != NULL)
	{
		prev = head;
		for (i = 0; i < count; i++)
		{
			if (prev == nxt)
			{
				return (count);
			}

			prev = prev->next;
		}
		nxt = nxt->next;
		count++;
	}

	return (count);
}
