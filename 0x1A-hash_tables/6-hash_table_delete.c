#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Pointer to hash table
 * Return: No return(void)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int x;

	if (!ht || !ht->array || !ht->size)
		return;
	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x])
		{
			nd = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = nd;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
