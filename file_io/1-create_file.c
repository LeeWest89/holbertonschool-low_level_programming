#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the file
 * @text_content: text to copy
 *
 * Return: -1 if filename is NULL or fails
 */

int create_file(const char *filename, char *text_content)
{
	int o, a;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a]; a++)
			write(o, text_content, a)
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	close(o);
	return (1);
}
