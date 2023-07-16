#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file
 * @text_content: text to copy
 *
 * Return: -1 if filename is NULL or fails and 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, a;

	o = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a]; a++)
			write(o, &text_content[a], 1);
	}

	if (o == -1)
		return (-1);

	close(o);
	return (1);
}
