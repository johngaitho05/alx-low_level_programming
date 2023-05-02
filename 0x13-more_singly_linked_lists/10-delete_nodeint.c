#include "stdlib.h"
#include "lists.h"

/**
 *
 * delete_nodeint_at_index - delete element at given index
 * @index: the index of the deletion candidate
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;

	if(*head == NULL){
		return (-1);
	}
	while (index)

}