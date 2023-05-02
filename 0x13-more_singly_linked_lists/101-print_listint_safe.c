#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: list of type listint_t to print
 *
 * Return: countber of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	long int change;

	while (head)
	{
		change = head - head->next;
		counter++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (change > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (counter);
}
