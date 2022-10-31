#include "lists.h"

/**
 * *get_nodeint_at_index - Gets node at an index
 * @head: Head node
 * @index: Index to be searched
 * Return: Node indicated
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
