#include "main.h"
#include <string.h>

/**
 * create_file - create a file and paste content
 * @filename: the name of the file
 * @text_content: content to paste to the file
 *
 * Return: 1 if success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, rs, ws = strlen(text_content);

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		rs = write(file, text_content, ws);
		if (rs != ws)
			return (-1);
	}

	close(file);

	return (1);
}
