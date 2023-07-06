#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int ind = 1;
	char *m = (char *) &ind;

	return (*m);
}
