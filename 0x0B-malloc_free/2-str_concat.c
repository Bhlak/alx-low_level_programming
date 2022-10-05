#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - Concatenates two strings
 * @s1: First string to be processed
 * @s2: Second string
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	str = malloc(sizeof(char) * (i + j) + 1);

	if (str == NULL)
		return (NULL);

	while (k < i)
	{
		str[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		str[k] = s2[l];
		k++;
		l++;
	}
	return (str);
}
