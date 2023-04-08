#include "main.h"

/**
 * print_alphabet - Prints all lowercase letters
 * Description: prints a-z.
 * Return: 0
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
