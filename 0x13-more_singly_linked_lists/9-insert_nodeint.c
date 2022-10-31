#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a node at a given index
 * @head: Head Node
 * @idx: Target index
 * @n: Value to be added
 * Return: Node added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *target;
	unsigned int i = 0;

	target = malloc(sizeof(listint_t));
	if (!target || !head)
		return (NULL);
	target->n = n;
	target->next = NULL;

	if (idx == 0)
	{
		target->next = *head;
		*head = target;
		return (target);
	}
	while (i < idx)
	{
		if (i == idx - 1)
		{
			target->next = (*head)->next;
			(*head)->next = target;
			return (target);
		}
		(*head) = (*head)->next;
		i++;
	}
	return (NULL);
}
