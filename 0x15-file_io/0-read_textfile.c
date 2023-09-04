#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  reads a text file and prints it 
 to the POSIX standard output.
 * @filename: name of file
 * @letters: the number of letters to be read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t op, w, rd;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(op, buff, letters);
	w = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(op);
	return (w);
}
