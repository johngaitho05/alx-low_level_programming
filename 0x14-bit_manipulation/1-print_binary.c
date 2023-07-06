#include "main.h"


/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: decimal number to convert
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int nxt;

	for (i = 63; i >= 0; i--)
	{
		nxt = n >> i;

		if (nxt & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
