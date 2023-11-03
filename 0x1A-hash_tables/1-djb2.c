#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_v;
	int ch;

	hash_v = 5381;
	while ((ch = *str++))
	{
		hash_v = ((hash_v << 5) + hash_v) + ch; /* hash_v * 33 + ch */
	}
	return (hash_v);
}
