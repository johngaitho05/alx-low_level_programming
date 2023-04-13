#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_error_and_exit - Print error message and exit with status 98.
 */
void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_valid_number - Check if the string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int is_valid_number(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - Multiply two numbers.
 * @x: The first number.
 * @y: The second number.
 *
 * Return: The result of the multiplication.
 */
int multiply(int x, int y)
{
	return (x * y);
}

/**
 * main - Multiply two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		print_error_and_exit();
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
