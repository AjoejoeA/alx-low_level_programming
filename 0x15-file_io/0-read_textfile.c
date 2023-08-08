#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the txt fle,  prnt to POSIX stdout.
 * @filename: a pointer nme the file.
 * @letters: The number of letters
 *           function should prnt and Read.
 *
 * Return: when the function fails or filename is NULL - 0.
 *         O/w - the Actual num  bytes the function should read and prnt.
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
