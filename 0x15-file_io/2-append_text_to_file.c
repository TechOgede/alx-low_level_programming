#include "main.h"

/**
* append_text_to_file - appends text to a file
* @filename: name of file
* @text_content: text to be appended
*
* Return: 1 on success, -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len_text_content = 0, i, write_count;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		len_text_content++;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write_count = write(fd, text_content, len_text_content);

	if (write_count == -1)
		return (-1);
	close(fd);

	return (1);

}
