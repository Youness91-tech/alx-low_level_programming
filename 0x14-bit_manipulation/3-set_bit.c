#include "main.h"

/**
 * set_bit - ets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: bit index to set to 1
 *
 * Return: 1 if it worked, -1  if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
