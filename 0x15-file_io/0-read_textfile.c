#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, l, m;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	l = read(p, buffer, letters);
	m = write(STDOUT_FILENO, buffer, l);

	if (p == -1 || l == -1 || m == -1 || m != l)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(p);

	return (m);
}
