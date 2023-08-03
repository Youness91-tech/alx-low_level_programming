#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Number Input 1.
 * @m: Number Input 2.
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, ctr = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			ctr++;
	}

	return (ctr);
}
