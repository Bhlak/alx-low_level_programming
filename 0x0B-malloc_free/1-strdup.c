#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Copies a string onto the allocated space
 * @str: String to be processed
 * Return: Pointer
 */

char *_strdup(char *str)
{
	int count = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
	{
		count++;
	}

	s = malloc(sizeof(char) * count);
	if (s == NULL)
		return (NULL);
	while (i <= count)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
