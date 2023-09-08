#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using the DJB2 algorithm.
 * @str: The input string to be hashed.
 *
 * Return: The hash value for the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381; /* Initial hash value */

	while (*str != '\0')
	{
		hash = ((hash << 5) + hash) + *str; /* hash * 33 + c */
		str++;
	}

	return (hash);
}
