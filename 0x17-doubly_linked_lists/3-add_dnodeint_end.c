#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of a list
 *
 * @head: Head node
 * @n: Value of new node
 *
 * Return: On Success - Address of new node
 *         On Failure - NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	new->prev = last;
	last->next = new;
	return (new);
}
