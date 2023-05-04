#include "main.h"

/**
 * get_bit - get bit at index
 * @n: decimal number
 * @index: index of the bit to be located
 *
 * Return: value of the bit (0 or 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
