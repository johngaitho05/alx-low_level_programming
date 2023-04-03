#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string of accepted characters
 *
 * Return: the number of bytes in the initial segment of s which consist only of
 *         bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}

			p++;
		}

		if (*p == '\0')
		{
			return (count);
		}

		s++;
	}

	return (count);
}
