#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given position
 *
 * @h: Head node
 * @idx: Target index
 * @n: Value of node
 *
 * Return: On Success - Address of new node
 *         On Failure - NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *curr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (count < idx - 1)
	{
		if (!curr)
			return (NULL);
		curr = curr->next;
		count++;
	}

	if (!curr->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = curr;
	new->next = curr->next;
	curr->next->prev = new;
	curr->next = new;

	return (new);
}
