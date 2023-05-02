#include "lists.h"

/**
 * find_listint_loop - Check if a loop exists in a linked list
 * @head: first node
 *
 * Return: pointer to the loop origin
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hair = head;

	if (!head)
		return (NULL);

	while (tortoise && hair && hair->next)
	{
		hair = hair->next->next;
		tortoise = tortoise->next;
		if (hair == tortoise)
		{
			tortoise = head;
			while (tortoise != hair)
			{
				tortoise = tortoise->next;
				hair = hair->next;
			}
			return (hair);
		}
	}

	return (NULL);
}
