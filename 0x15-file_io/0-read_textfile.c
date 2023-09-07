#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reada txt file & printsto POSIX stdout.
 * @filename: A pointer to the nam of the fle.
 * @letters:  numb of letters the
 *           function should read and print.
 *
 * Return: when the function fails or filename is NULL - 0.
 *         O/w - actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, a, b;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	a= read(o, buffer, letters);
	b = write(STDOUT_FILENO, buffer, a);

	if (o == -1 || a == -1 || b == -1 || b != a)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (b);
}
