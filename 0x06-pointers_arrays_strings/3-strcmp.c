#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0')
	{
		return (s2[1]);
	}
	else if (s2[i] == '\0')
	{
		return (s1[i]);
	}
	return (0);
}
