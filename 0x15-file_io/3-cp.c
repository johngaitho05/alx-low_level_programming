#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

/**
 * errorResponse -  prints error message and returns the respective error code
 * @error_code: the code of the encountered error
 * @fileName: the erroneous file
 * Return: the error code
 */
int errorResponse(int error_code, const char *fileName)
{
	const char *msg = NULL;
	int exitCode;

	switch (error_code)
	{
		case 97:
			msg = "Usage: cp file_from file_to\n";
			exitCode = 97;
			break;
		case 98:
			msg = "Error: Can't read from file %s\n";
			exitCode = 98;
			break;
		case 99:
			msg = "Error: Can't write to %s\n";
			exitCode = 99;
			break;
		case 100:
			msg = "Error: Can't close fd %s\n";
			exitCode = 100;
			break;
		default:
			exitCode = -1;
			break;
	}
	if (msg)
	{
		dprintf(STDERR_FILENO, msg, fileName);
	}
	return (exitCode);
}

/**
 * main - entry point (copies a file)
 * @argc: args count
 * @argv: command line args
 * Return: 0 if success else respective error code
 */
int main(int argc, char *argv[])
{
	int src, dest, rs, ws;
	char buf[BUF_SIZE];


	if (argc != 3)
	{
		return (errorResponse(97, NULL));
	}

	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		return (errorResponse(98, argv[1]));
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest < 0)
		return (errorResponse(99, argv[2]));

	while ((rs = read(src, buf, BUF_SIZE)) > 0)
	{
		ws = write(dest, buf, rs);
		if (ws != rs)
		{
			return (errorResponse(99, argv[2]));
		}
	}

	if (rs < 0)
		return (errorResponse(98, argv[1]));

	if (close(src) < 0)
		return (errorResponse(100, argv[1]));

	if (close(dest) < 0)
		return (errorResponse(100, argv[2]));

	return (0);
}
