#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip to get from one number to another
 * @n: original number
 * @m: target number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int tmp;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		tmp = flip >> i;
		if (tmp & 1)
			j++;
	}

	return (j);
}
