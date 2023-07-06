#include "main.h"

/**
 * clear_bit - sets the given bit to 0
 * @n: decimal number for whose to clear the bit
 * @index: index of the bit to be cleared
 *
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
