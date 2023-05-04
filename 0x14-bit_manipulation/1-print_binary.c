#include "main.h"


/**
 * print_binary - convert decimal ti binary
 * @n: the decimal number to convert
 */
void print_binary(unsigned long int n)
{
	int i = 0, add;
	unsigned long int closest;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> i) > 0)
	{
		closest = 1 << i;
		i++;
	}
	_putchar('1');
	i -= 2;
	while (closest != n)
	{
		add = (1 << i);
		if (closest + add <= n)
		{
			_putchar('1');
			closest += add;
		}
		else
		{
			_putchar('0');
		}
		i -= 1;

	}
	while (i >= 0)
	{
		_putchar('0');
		i--;
	}
}
