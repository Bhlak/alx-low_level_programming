#include "lists.h"

/**
 * add_node_end - Add new node to the end of the list
 * @head: Head node of list
 * @str: String to be added as a node value
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	if (!new || !str || new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;

	return (new);
}
