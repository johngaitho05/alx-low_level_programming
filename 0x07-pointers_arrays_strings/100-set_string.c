#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: double pointer to string to set
 * @to: string to set double pointer to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
