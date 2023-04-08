#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix.
 * @matrix: pointer to the first element of the square matrix.
 * @size: size of the square matrix.
 *
 * Return: void.
 */
void print_diagsums(int *matrix, int size) {
	int row, col;
	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (row = 0; row < size; row++) {
		for (col = 0; col < size; col++) {
			if (row == col) {
				sum1 += *(matrix + (row * size) + col);
			}
			if ((row + col) == (size - 1)) {
				sum2 += *(matrix + (row * size) + col);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
