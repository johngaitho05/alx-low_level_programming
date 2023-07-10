#include "main.h"

/**
 * read_textfile - prints the first n letters of a file
 * @filename: The file to be printed
 * @letters: Number of letters to print
 *
 * Return: Number of printed letters, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	count = read(file, text, sizeof(char) * letters);
	if (count == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	count = write(STDOUT_FILENO, text, count);
	if (count == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (count);
}

