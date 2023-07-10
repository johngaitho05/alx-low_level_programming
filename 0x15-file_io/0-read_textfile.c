#include "main.h"

/**
 * read_textfile - prints the first n letters of a file
 * @filename: The file to be printed
 * @letters: Number of letters to print
 * Return: Number of printed letters, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rb, count;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rb = read(fd, buf, letters);
	count = write(STDOUT_FILENO, buf, rb);

	close(fd);

	free(buf);

	return (count);
}
