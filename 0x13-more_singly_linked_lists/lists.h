#ifndef ALX_LOW_LEVEL_PROGRAMMING_LISTS_H
#define ALX_LOW_LEVEL_PROGRAMMING_LISTS_H

/**
 * struct node - singly linked list
 * @n: the int value of the node
 * @next: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct node
{
	int n;
	struct node *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
