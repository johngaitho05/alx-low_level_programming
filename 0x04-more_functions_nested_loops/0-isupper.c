#include "main.h"

/**
 * _isupper - Checks whether the passed letter is uppercase or not
 * @c: - The char to be checked
 * Return: 1 or 0 denoting True or False
 */
int _isupper(int c)
{
int ascii_code = ("%d", c);
if (ascii_code >= 65 && ascii_code <= 90)
{
return (1);
}
else
{
return (0);
}
}


