#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of dlistint_s list.
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	while (head != NULL)
	{
		frees_dl = head;
		head = head->next;
		free(frees_dl);
	}
}
