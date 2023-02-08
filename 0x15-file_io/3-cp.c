#include "main.h"

/**
* main - Entry point
* @argc: # of arguments
* @argv: array of pointers to the arguments
*
* Return: 0 if successful, otherwise anything else
*/
void error(int n, int fd, int err_code, char *s);

int main(int argc, char **argv)
{
	int fd_to, fd_from, nChar, write_count, fd_to_close, fd_from_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
		error(1, fd_to, 99, argv[2]);
	nChar = 1024;
	while (nChar == 1024)
	{
		nChar = read(fd_from, buffer, 1024);
		if (fd_from < 0 || nChar < 0)
			error(0, fd_from, 98, argv[1]);
		write_count = write(fd_to, buffer, 1024);
		if (write_count < 0)
			error(1, fd_to, 99, argv[2]);
	}
	fd_from_close = close(fd_from);
	if (fd_from_close < 0)
		error(2, fd_from, 100, "");
	fd_to_close = close(fd_to);
	if(fd_to_close < 0)
		error(2, fd_to, 100, "");

	return (0);
}

/**
* error - prints error message to stderr
* @n: 0 for read errors, 1 for write errors, 2 for close errors
* @fd: integer denoting the file descriptor
* @err_code: integer denoting the code to call exit with
*
* Return: no return value
*/

void error(int n, int fd, int err_code, char *s)
{
	if ( n == 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s", s);
		exit(err_code);
	}

	if (n == 1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s ", s);
		exit(err_code);
	}

	if (n == 2)
	{
		dprintf(STDERR_FILENO, "Cant't close fd %d ", fd);
		exit(err_code);
	}
}
