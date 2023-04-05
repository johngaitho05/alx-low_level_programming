#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed in reverse
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
