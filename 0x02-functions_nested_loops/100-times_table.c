#include "main.h"

/**
 * get_numbers - splits a number in to individual digits
 * @n: number to split
 * Return: an array of digits
 */

int *get_numbers(int n)
{
	static int r[3];
	r[0] = 0;
	while (n >= 100)
	{
		r[0] += 1;
		n -= 100;
	}
	r[1] = n / 10;
	r[2] = n % 10;

	return (r);
}

/**
 * get_space_count - get the number of spaces to add based on next number
 * @n: the number that follows
 * Return: number of spaces
 */

int get_space_count(int n)
{
	if (n < 10)
	{
		return (3);
	} else if (n < 100)
	{
		return (2);
	} else
	{
		return (1);
	}
}


/**
 * print_times_table - prints n times table starting with 0
 * get_numbers - splits a number in to individual digits
 * @n: number times table (0 < n <= 15)
 */

void print_times_table(int n)
{
	int i, j, k, l, m, s, spaces;
	int *numbers;
	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			numbers = get_numbers(i * j);
			spaces = get_space_count(i * (j + 1));
			k = numbers[0];
			l = numbers[1];
			m = numbers[2];
			if (k > 0)
			{
				_putchar(48 + k);
			}
			if (l > 0 || k > 0)
			{
				_putchar(48 + l);
			}
			_putchar(48 + m);
			if (!(j == n))
			{
				_putchar(',');
				for (s = 0; s < spaces; s++)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}


