#include "lists.h"

/**
 * list_len - Counts nodes in a linked list
 * @h: Head node
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
