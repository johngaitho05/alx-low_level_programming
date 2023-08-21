#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: the string pointer
 *
 * Return: the number of characters printed
 */
void _puts(char *s)
{

	if (s == NULL)
		return;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
