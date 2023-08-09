#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the txt fle, and pints it to POSIX stdout.
 * @filename: name of the file to be read.
 * @letters: Numb of letters read and prnt
 *           function should read and print.
 *
 * Return: When a function fail or flename is NULL - 0.
 *         O/w - actual num of bytes a functn can print and read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
