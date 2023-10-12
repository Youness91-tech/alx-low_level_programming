#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: head of the dlistint_t list.
 *
 * Return: sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	unsigned int total = 0;

	if (head == NULL)
		return (0);
	while (current_node != NULL)
	{
		total += current_node->n;
		current_node = current_node->next;
	}

	return (total);
}
