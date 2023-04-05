#include "stdio.h"
#include "string.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		putchar(s[i]);
	}
}
