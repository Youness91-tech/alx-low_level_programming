#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: key to add value at
 * @value: Value to add
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nd;
	unsigned long int x, sz;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	sz = ht->size;
	x = key_index((const unsigned char *)key, sz);

	if (ht->array[x] != NULL && strcmp(ht->array[x]->key, key) == 0)
	{
		free(ht->array[x]->value);
		ht->array[x]->value = strdup(value);
		return (1);
	}
	nd = malloc(sizeof(hash_node_t));
	if (nd == NULL)
	{
		return (0);
	}
	nd->key = strdup(key);
	nd->value = strdup(value);
	nd->next = ht->array[x];
	ht->array[x] = nd;
	return (1);
}
