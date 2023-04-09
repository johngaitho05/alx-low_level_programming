#include "stdio.h"

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: pointer to the command line arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
