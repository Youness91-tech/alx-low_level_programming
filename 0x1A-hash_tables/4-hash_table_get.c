#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: key to looking for
 * Return: Returns value of key or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int x;

	if (ht == NULL || ht->array == NULL ||
			ht->size == 0 || strlen(key) == 0 || key == NULL)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	nd = ht->array[x];
	while (nd != NULL)
	{
		if (strcmp(nd->key, key) == 0)
		{
			return (nd->value);
		}
		nd = nd->next;
	}
	return (NULL);
}
