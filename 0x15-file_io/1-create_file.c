#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a string to write.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int op, w, lenght = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(op, text_content, lenght);

	if (op == -1 || w == -1)
	{
		return (-1);
	}

	close(op);
	return (1);
}
