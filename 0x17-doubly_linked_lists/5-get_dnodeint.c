#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of a linked list
 *
 * @head: Head node
 * @index: Index of target node
 *
 * Return: On Success - Target Node
 *         On Failure - NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index)
	{
		if (!head)
			return (NULL);
		count++;
		head = head->next;
	}
	return (head);
}
