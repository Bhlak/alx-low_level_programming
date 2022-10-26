#include "lists.h"

/**
 * add_nodeint_end - Adds node to end of list
 * @head: Head node
 * @n: Node to be addded
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tmp2;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if (!*head)
	{
		*head = tmp;
		return (tmp);
	}

	tmp2 = *head;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	return (tmp);
}
