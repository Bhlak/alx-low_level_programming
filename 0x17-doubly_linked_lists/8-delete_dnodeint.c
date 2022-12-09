#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at an index
 *
 * @head: Head node
 * @index: Target index
 *
 * Return: On Success - 1
 *         On Failure - -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	tmp = (*head);
	while (count != index)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	if (tmp == (*head))
	{
		(*head) = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
