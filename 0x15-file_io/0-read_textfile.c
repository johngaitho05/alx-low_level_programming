#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * read_textfile - print the first n letters chars of a file
 * @filename: The file to be printed
 * @letters: Number of letters to print
 * Return: Number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rb, wb;
	char *buff_size = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rb = read(fd,  buff_size, letters);

	if (rb == -1)
		return (0);

	wb = write(STDOUT_FILENO, buff_size, letters);

	if (wb == -1)
		return (0);

	return (rb);
}
