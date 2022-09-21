#include "main.h"

/**
 * *_strncat - Concats two strings
 * @dest: First string
 * @src: Second string
 * @n: number of times
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, a = -1;

	while (dest[i] != '\0')
	{
		i++;
	}

	do {
		if (n == 0)
		{
			break;
		}
		a++;
		dest[i] = src[a];
		i++;
		n--;
	} while (src[a] != '\0');

	return (dest);
}
