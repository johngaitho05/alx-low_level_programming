#include "stdio.h"
#include "lists.h"


/**
 * print_listint - print the contents of a singly linked list
 * @h: the linked list
 * Return: size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
