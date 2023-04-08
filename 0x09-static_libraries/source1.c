#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: the character to be printed
 * Return: number of bytes written
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * _islower - Checks if lower is lower case
 * @c: integer parameter to check
 * Return: 0
 */
int _islower(int c)
{
	int res;
	char i;

	res = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			res = 1;
			break;
		}
	}
	return (res);
}

/**
 * _isalpha - checks for alphabetic character.
 * @c: character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}


/**
 * _abs - computes the absolute value
 * @n: the value to compute
 * Return: the absolute value
 */
int _abs(int n)
{
	return (n);
}

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
