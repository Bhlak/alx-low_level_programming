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

	while (s1[i++] != '\0')
		;
	while (s2[j++] != '\0')
		;

	if (s1 == NULL)
	{
		str = malloc(sizeof(char) * (j + 1));
		while (l <= j)
		{
			str[l] = s2[l++];
		}
	}
	else if (s2 == NULL)
	{
		str = malloc(sizeof(char) * (i + 1));
		while (k <= i)
		{
			str[k] = s1[k++];
		}
	}
	else
	{
		str = malloc(sizeof(char) * (i + j + 2));
		while (k <= i)
		{
			str[k] = s1[k++];
		}
		while (l <= j)
		{
			str[k + l] = s2[l++];
		}
	}
	return (str);
}
