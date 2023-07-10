#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read
 *
 * Return: number of letters read, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count;
	ssize_t rp, wp;
	char *buffer;

	if (!filename)
		return (0);
	count = open(filename, O_RDONLY);
	if (count == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	rp = read(count, buffer, letters);
	wp = write(STDOUT_FILENO, buffer, rp);
	close(count);
	free(buffer);

	return (wp);
}
