#include "main.h"

/**
 * *_strcpy - Copies a string
 * @dest: Destination
 * @src: Source
 * Return: string pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
