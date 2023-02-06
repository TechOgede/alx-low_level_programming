#include "main.h"

/**
* read_textfile - reads from a file and prints to STDOUT
* @filename: file to be read from
* @letters: # of letters to read and print
*
* Description: prints by calling write()
* Return: num denoting # of letters that were actually read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	read_count = read(fd, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	close(fd);

	free(buffer);

	return (write_count);

}
