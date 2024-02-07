#include "search_algos.h"
/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: the Pointer to the head of the skip list.
 * @value: The value to search for.
 * Return: Pointer to the first node where value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *nd, *jmp_node;

	if (!list)
		return (NULL);

	for (nd = jmp_node = list;
			jmp_node->next != NULL && jmp_node->n < value;)
	{
		nd = jmp_node;
		if (jmp_node->express)
		{
			jmp_node = jmp_node->express;
			printf("Value checked at index [%d] = [%d]\n",
					(int)jmp_node->index, jmp_node->n);
		}
		else
		{
			while (jmp_node->next)
				jmp_node = jmp_node->next;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n",
			(int)nd->index, (int)jmp_node->index);
	for (; nd->index < jmp_node->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%d] = [%d]\n", (int)nd->index, nd->n);
	printf("Value checked at index [%d] = [%d]\n", (int)nd->index, nd->n);
	if (nd->n == value)
		return (nd);
	return (NULL);
}
