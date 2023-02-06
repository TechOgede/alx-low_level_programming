#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file
* @text_content: textual contents to be written to the file
*
* Return: 1 if successful, -1 if not
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len_text_content = 0, i, write_count;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		len_text_content++;

	fd = open(filename, O_CREAT | O_WRONLY| O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write_count = write(fd, text_content, len_text_content);

	close(fd);

	if (write_count == -1)
		return (-1);

	return (1);
}
