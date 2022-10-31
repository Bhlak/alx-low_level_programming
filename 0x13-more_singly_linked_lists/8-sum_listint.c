#include "lists.h"

/**
 * sum_listint - Sums data of a listint_t linked list
 * @head: Head node
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
