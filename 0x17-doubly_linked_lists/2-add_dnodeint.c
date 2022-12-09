#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list
 *
 * @head: Head node
 * @n: Value of new node
 *
 * Return: On Success - Address of new element
 *         On Failure - NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if ((*head))
		(*head)->prev = new;
	*head = new;
	return (new);
}
