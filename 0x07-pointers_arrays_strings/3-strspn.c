#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring.
 * @s: pointer to a string.
 * @accept: pointer to a string of bytes to compare @s with.
 *
 * Return: number of bytes in the initial segment of @s which consist only of
 * bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept) {
	unsigned int x, y, count = 0;

	for (x = 0; s[x]; x++) {
		for (y = 0; accept[y]; y++) {
			if (s[x] == accept[y]) {
				count++;
				break;
			}
		}
		if (s[x] != accept[y])
			break;
	}
	return (count);
}
