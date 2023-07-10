#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rder;
	ssize_t txt, rxt;
	char *buf;

	if (!filename)
		return (0);

	rder = open(filename, O_RDONLY);

	if (rder == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	txt = read(rder, buf, letters);
	rxt = write(STDOUT_FILENO, buf, txt);

	close(rder);

	free(buf);

	return (rxt);
}
