#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String containing the binary number
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui_value = 0;
	int leng;

	if (!b)
		return (0);

	for (leng = 0; b[leng]; leng++)
	{
		if (b[leng] < '0' || b[leng] > '1')
			return (0);
		ui_value = 2 * ui_value + (b[leng] - '0');
	}

	return (ui_value);
}
