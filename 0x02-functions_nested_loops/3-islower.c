#include "main.h"

/**
 * _islower - Checks if lower is lower case
 * @c: integer parameter to check
 * Description: Checks if char is lower case
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
