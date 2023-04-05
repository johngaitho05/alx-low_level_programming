
/**
 * _strlen_recursion - prints the length of a string
 * @s: the string whose length is to be counted
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
