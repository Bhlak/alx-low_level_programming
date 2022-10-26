#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 * @head: Pointer to head of list
 * @str: String to be made into the new head
 * Return: Pointer to address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;
	return (*head);
}
