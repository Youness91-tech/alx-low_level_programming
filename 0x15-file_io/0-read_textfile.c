#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- that reads a text file and prints
 * @filename: variable pointer
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t file, w, let;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	let = read(file, text, letters);
	w = write(STDOUT_FILENO, text, let);

	free(text);
	close(file);
	return (w);
}
