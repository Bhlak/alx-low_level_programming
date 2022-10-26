#include "lists.h"

/**
 * add_nodeint - Adds a new node
 * @head: Head node
 * @n: Value to be added
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
