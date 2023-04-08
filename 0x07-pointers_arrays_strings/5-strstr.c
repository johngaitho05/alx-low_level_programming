#include "main.h"

/**
 * *_strstr - locates a substring in a string
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0') {
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack == *pneedle && *pneedle != '\0') {
			haystack++;
			pneedle++;
		}

		if (*pneedle == '\0') {
			return (bhaystack);
		}

		haystack = bhaystack + 1;
	}

	return ('\0');
}
