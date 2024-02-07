#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algo
 * @list: the pointer to the head of the list
 * @size: the size of the list (number of elements)
 * @value: the value to search for int the list
 *
 * Return: first idx of the value or -1 if value is not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stps, i;
	listint_t *node, *jmp_node;

	if (!list || size == 0)
		return (NULL);

	stps = sqrt(size);
	i = 0;

	for (node = jmp_node = list;
			jmp_node->index + 1 < size && jmp_node->n < value;)
	{
		node = jmp_node;
		for (i += stps; jmp_node->index < i; jmp_node = jmp_node->next)
		{
			if (jmp_node->index + 1 == size)
				break;
		}
		printf("Value checked at index [%d] = [%d]\n",
				(int)jmp_node->index, jmp_node->n);

	}

	printf("Value found between indexes [%d] and [%d]\n",
			(int)node->index, (int)jmp_node->index);

	for (; node->index < jmp_node->index && node->n < value; node = node->next)
	{
		/* printf("srt\n"); */
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);

	}
	printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
	if (node->n == value)
	{
		/* printf("end1\n"); */
		return (node);
	}
	/* printf("end\n"); */
	return (NULL);
}
