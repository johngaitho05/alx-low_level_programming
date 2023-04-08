#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @board: pointer to the 2D array representing the chessboard.
 *
 * Return: void.
 */
void print_chessboard(char (*board)[8]) {
	int row, col;

	for (row = 0; row < 8; row++) {
		for (col = 0; col < 8; col++) {
			_putchar(board[row][col]);
		}
		_putchar('\n');
	}
}
