#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, lenght = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, lenght);

	if (op == -1 || w == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	close(op);

	return (1);
}
