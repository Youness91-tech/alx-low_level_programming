#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: The nth node of the list, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	while (node != NULL)
	{
		if (count == index)
			return (node);

		count++;
		node = node->next;
	}

	return (NULL);
}
