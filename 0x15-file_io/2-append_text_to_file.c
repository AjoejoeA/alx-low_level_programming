#include "main.h"

/**
 * append_text_to_file - at the end of a file, append atext.
 * @filename: the name of the file.
 * @text_content: add to the end of the fileby a string.
 *
 * Return: when the function fails to work or filename is NULL - -1.
 *         when the file does not exist then the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
