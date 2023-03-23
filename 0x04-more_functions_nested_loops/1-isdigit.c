#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
int i;
int j = ("%d", c);
for (i = 0; i < 10; i++)
{
if (i == j || j == 48 + i)
{
return (1);
}
}
return (0);
}

