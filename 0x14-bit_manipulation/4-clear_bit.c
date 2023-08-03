#include "main.h"

/**
 * clear_bit - Function that clear the value of a bit to 1 at a given index.
 * @n: pointer to the number to change
 * @index: is the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
