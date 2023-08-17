#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints keys for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char key[7], *codex;
	int count = strlen(argv[1]), i, cache;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	cache = (count ^ 59) & 63;
	key[0] = codex[cache];

	cache = 0;
	for (i = 0; i < count; i++)
		cache += argv[1][i];
	key[1] = codex[(cache ^ 79) & 63];

	cache = 1;
	for (i = 0; i < count; i++)
		cache *= argv[1][i];
	key[2] = codex[(cache ^ 85) & 63];

	cache = 0;
	for (i = 0; i < count; i++)
	{
		if (argv[1][i] > cache)
			cache = argv[1][i];
	}
	srand(cache ^ 14);
	key[3] = codex[rand() & 63];

	cache = 0;
	for (i = 0; i < count; i++)
		cache += (argv[1][i] * argv[1][i]);
	key[4] = codex[(cache ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		cache = rand();
	key[5] = codex[(cache ^ 229) & 63];

	key[6] = '\0';
	printf("%s", key);
	return (0);
}
