#include "main.h"

/**
* main - Entry point
* @argc: # of arguments
* @argv: array of pointers to the arguments
*
* Return: 0 if successful, otherwise anything else
*/

int main(int argc, char **argv)
{
	int fd_to, fd_from, nChar, write_count, fd_to_close, fd_from_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	nChar = 1024;
	while (nChar == 1024)
	{
		nChar = read(fd_from, buffer, 1024);
		if (nChar == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_count = write(fd_to, buffer, 1024);
		if (write_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	fd_to_close = close(fd_to);
	fd_from_close = close(fd_from);
	if (fd_to_close == -1 || fd_from_close == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
