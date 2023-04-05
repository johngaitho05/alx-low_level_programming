/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_print_rev_recursion(s + 1);
}
