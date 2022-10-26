#include "lists.h"

/**
 * listint_len - Returns number of nodes in a list
 * @h: Head node
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
