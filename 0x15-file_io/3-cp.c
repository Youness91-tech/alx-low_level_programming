#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fl_from, fl_to;
	int r = 1024, w = 0;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp from to\n"), exit(97);
	fl_from = open(argv[1], O_RDONLY);
	if (fl_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fl_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fl_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fl_from), exit(99);
	}
	while (r == 1024)
	{
		r = read(fl_from, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fl_to, buf, r);
		if (w < r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(fl_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_from), exit(100);

	if (close(fl_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_to), exit(100);

	return (0);
}
