#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	unsigned long int get_flip = n ^ m;

	while (get_flip)
	{
		counter += get_flip & 1;
		get_flip >>= 1;
	}

	return (counter);
}
