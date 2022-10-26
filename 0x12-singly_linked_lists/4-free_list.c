#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Head node of list
 */

void freee_list(list_t *head)
{
	list_t tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
