#include "main.h"


/**
 * print_binary - convert decimal ti binary
 * @n: the decimal number to convert
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int increment;
	unsigned long int closest = 1;
	int pow = 0;
	unsigned long int next = 2;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	while (next <= n)
	{
		closest = 1 << (pow + 1);
		next = closest + (1 << (pow + 1));
		pow++;
	}

	_putchar('1');
	for (i = pow - 1; i >= 0; i--)
	{
		increment = 1 << i;
		if (closest + increment <= n)
		{
			closest += increment;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
