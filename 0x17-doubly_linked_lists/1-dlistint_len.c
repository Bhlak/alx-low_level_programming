#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a list
 *
 * @h: Head node
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
