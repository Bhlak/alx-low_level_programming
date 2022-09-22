#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: Target string
 * @src: String to be copied
 * @n: Integer count
 * Return: Pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
