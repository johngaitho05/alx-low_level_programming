#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: the file in which to append
 * @text_content: the tesxt to append
 *
 * Return: 1 if success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, rs, ws = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[ws])
			ws++;
		rs = write(file, text_content, ws);
		if (rs != ws)
			return (-1);
	}

	close(file);

	return (1);
}
