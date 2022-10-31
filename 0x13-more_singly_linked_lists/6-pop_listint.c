#include "lists.h"

/**
 * pop_listint - Removes a head node
 * @head: Head node
 * Return: Head Node's n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int res;

	if (!(*head))
		return (0);
	tmp = (*head)->next;
	res = (*head)->n;
	free(*head);
	*head = tmp;
	return (res);
}
