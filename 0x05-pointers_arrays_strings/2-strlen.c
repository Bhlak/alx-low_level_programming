#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string to be checked
 * Return: integer
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
