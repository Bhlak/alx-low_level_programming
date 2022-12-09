#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Head node
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
