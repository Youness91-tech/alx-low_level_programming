#include "main.h"

/**
 * get_bit - eturns the value of a bit at a given index
 * @n: the number to search for
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_value;

	if (index > 64)
		return (-1);

	bit_value = n >> index;

	return (bit_value & 1);
}
