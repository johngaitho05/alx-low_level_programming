#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char secrect[7], *hash;
	int len = strlen(argv[1]), i, tmp;

	hash = "H-AHvDw87lNS0E9j2TibgpnMVys5XzvtOGJcYLU+4mjL6fxqZeF3Qa1rKhdKIouk";

	tmp = (len ^ 59) & 63;
	secrect[0] = hash[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	secrect[1] = hash[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	secrect[2] = hash[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	secrect[3] = hash[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	secrect[4] = hash[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	secrect[5] = hash[(tmp ^ 229) & 63];

	secrect[6] = '\0';
	printf("%s", secrect);
	return (0);
}
