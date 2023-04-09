#include "stdio.h"

/**
 * main - prints all passed arguments
 * @argc: number of command line arguments
 * @argv: pointer to the command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
