#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the file
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *	or 0 if filename is NULL or file can be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *alph;
	int o, r, w;

	alph = malloc(sizeof(char) * letters);
	o = open(filename, O_RDONLY);
	r = read(o, alph, letters);
	w = write(STDOUT_FILENO, alph, r);

	if (filename == NULL)
		return (0);

	if (alph == NULL)
		return (0);

	if (o == -1 || r == -1 || w == -1 || w != r)
		return (0);

	close(o);
	return (w);
}
