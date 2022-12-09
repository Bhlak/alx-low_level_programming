#include "lists.h"

/**
 * sum_dlistint - Sums all data in a linked list
 *
 * @head: Head node
 *
 * Return: Sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
