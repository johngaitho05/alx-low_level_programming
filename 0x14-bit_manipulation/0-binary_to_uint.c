#include "string.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: the number to convert in binary format
 * Return: the corresponding number in decimal format
 */
unsigned int binary_to_uint(const char *b)
{
	int i, res, index;
	int n;
	char current;

	if (b == NULL)
		return (0);

	res = 0;
	n = strlen(b) - 1;

	for (i = n; i >= 0; i--)
	{
		current = b[i];
		index = n - i;
		if (current != '1' && current != '0')
			return (0);

		if (current == '1')
			res += (1 << index);

	}
	return (res);
}
