#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
