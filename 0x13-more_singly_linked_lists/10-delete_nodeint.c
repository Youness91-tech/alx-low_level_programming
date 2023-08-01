#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to the list.
 * @index: index of the node to delete
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int cont = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (cont < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		cont++;
	}


	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
