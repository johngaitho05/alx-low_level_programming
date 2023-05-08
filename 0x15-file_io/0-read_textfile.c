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

	if (!filename || !buff_size)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(buff_size);
		return (0);
	}

	rb = read(fd,  buff_size, letters);

	if (rb < 0)
	{
		free(buff_size);
		return (0);
	}

	close(fd);

	wb = write(STDOUT_FILENO, buff_size, rb);

	if (wb < 0)
	{
		free(buff_size);
		return (0);
	}
	free(buff_size);
	return (wb);
}
