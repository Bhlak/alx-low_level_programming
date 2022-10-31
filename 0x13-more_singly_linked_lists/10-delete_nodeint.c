#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specified index
 * @head: Head node
 * @index: Index of node to be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (!head)
		return (-1);
	if (index == 0 && (*head))
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if ((*head)->next == NULL)
			return (-1);
		(*head) = (*head)->next;
		i++;
	}
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	free(tmp);
	return (1);
}
