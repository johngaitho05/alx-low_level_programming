#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	for (const list_t *node = h; node != NULL; node = node->next)
	{
		length++;
	}

	return (length);
}
