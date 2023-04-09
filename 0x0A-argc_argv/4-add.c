#include "stdio.h"
#include "stdlib.h"

/**
 * main - add passed numbers
 * @argc: number of command line arguments
 * @argv: pointer to the command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;
	int current;
	char *ptr[] = {};

	for (i = 1; i < argc; i++)
	{
		current = strtol(argv[i], ptr, 10);
		if (**ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		result += current;
	}
	printf("%d\n", result);
	return (0);
}
