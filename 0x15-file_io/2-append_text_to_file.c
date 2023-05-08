#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: the name of the file to append to
 * @text_content: the text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
