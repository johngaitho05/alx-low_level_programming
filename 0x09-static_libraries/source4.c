#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}

	return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}

/**
 * *_strspn - gets the length of a prefix substring.
 * @s: pointer to a string.
 * @accept: pointer to a string of bytes to compare @s with.
 *
 * Return: number of bytes in the initial segment of @s which consist only of
 * bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, count = 0;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (s[x] != accept[y])
			break;
	}
	return (count);
}

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return ('\0');
}

/**
 * *_strstr - locates a substring in a string
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack == *pneedle && *pneedle != '\0')
		{
			haystack++;
			pneedle++;
		}

		if (*pneedle == '\0')
		{
			return (bhaystack);
		}

		haystack = bhaystack + 1;
	}

	return ('\0');
}
