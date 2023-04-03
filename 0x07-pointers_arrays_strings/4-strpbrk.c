#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string of bytes to match against
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or
 *         NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}

			p++;
		}

		s++;
	}

	return (NULL);
}
