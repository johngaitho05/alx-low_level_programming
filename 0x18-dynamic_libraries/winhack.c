#include "stdlib.h"

/**
 * pick_numbers - returns an array
 * of the 6 numbers required to win jackpot
 * Return: draw numbers
 */
int *pick_numbers()
{
	int *res = malloc(sizeof(int) * 6);

	res[0] = 9;
	res[1] = 8;
	res[2] = 10;
	res[3] = 24;
	res[4] = 75;
	res[5] = 9;

	return (res);
}
