#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the list.
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_nd = NULL;
	listint_t *next_nd = NULL;

	while (*head)
	{
		next_nd = (*head)->next_nd;
		(*head)->next_nd = prev_nd;
		prev_nd = *head;
		*head = next_nd;
	}

	*head = prev_nd;

	return (*head);
}
