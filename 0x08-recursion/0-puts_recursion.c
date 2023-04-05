#include "stdio.h"
#include "string.h"

/**
 * _print_char - print the character at the given index
 * @s: the string
 * @index: the index of the character to be printed
 */
void _print_char(char *s, int index)
{
	if (index >= strlen(s))
	{
		putchar('\n');
		return;
	}
	putchar(s[index]);
	_print_char(s, index + 1);
}

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	_print_char(s, 0);
}
