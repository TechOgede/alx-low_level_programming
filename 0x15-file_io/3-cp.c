#include "main.h"
void safe_close(int des);

/**
* safe_close - close files and print error msg if any
* @des: int denoting file descriptor
*
* Description: simply closes files and prints error message
* Return: no return value
*/

void safe_close(int des)
{
	int error;

	error = close(des);

	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", des);
}



/**
* main - Entry point
* @argc: # of arguments
* @argv: array of pointers to the arguments
* Return: 0 if successful, otherwise anything else
*/
int main(int argc, char **argv)
{
	int fd_to, fd_from, nChar, write_count;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(fd_from);
		exit(99);
	}

	nChar = 1024;
	while (nChar == 1024)
	{
		nChar = read(fd_from, buffer, 1024);
		if (nChar < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_close(fd_from);
			safe_close(fd_to);
			exit(98);
		}

		if (nChar == 0)
			break;
		write_count = write(fd_to, buffer, nChar);
		if (write_count < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(fd_to);
			safe_close(fd_from);
			exit(99);
		}
	}

	return (0);
}

