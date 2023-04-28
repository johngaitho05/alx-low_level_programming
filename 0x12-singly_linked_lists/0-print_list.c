#include <stdio.h>
#include "lists.h"

/**
* print_list - prints content of a list
* @h: pointer to the list
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
