#include "stdlib.h"
#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to the first node in the linked list
 *
 * Return: elements count in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int tmp;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		tmp = *h - (*h)->next;
		if (tmp > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
