#include "main.h"

/**
 * copying - copies file1 to file2
 * @file1: the file to be copied
 * @file2: the file being copied to
 *
 * Return: 98, 99 ,100 on an error
 */

void copying(const char *file1, const char *file2)
{
	char buff[1024];
	int o = open(file1, O_RDONLY);
	int t = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	int r;

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	while ((r = read(o, buff, 1024))  > 0)
	{
		if (write(t, buff, r) != r || t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			exit(99);
		}
	}
	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file2);
		exit(99);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (close(o) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}

	if (close(t) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t);
		exit(100);
	}
	close(o);
	close(t);
}

/**
 * main - the entry point
 * @argc:the number of arguements
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copying(argv[1], argv[2]);
	exit(0);
}
