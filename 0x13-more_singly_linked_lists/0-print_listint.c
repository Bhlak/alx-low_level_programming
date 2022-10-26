#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a list
 * @h: Head node
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *tmp;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
