#include "main.h"

/**
 * get_bit - get bit at given index
 * @n: decimal number
 * @index: index of the bit to be located
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
