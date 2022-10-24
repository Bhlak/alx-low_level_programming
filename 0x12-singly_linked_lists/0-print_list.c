#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints values of all nodes in a linked list
 * @h: Head node
 * Return: Number of Nodes
 */

size_t print_list(const list_h *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h.str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h.len, h.str);
		h = h.next;
		i++;
	}
	return (i);
}
