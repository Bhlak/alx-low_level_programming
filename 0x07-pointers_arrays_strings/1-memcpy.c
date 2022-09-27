#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 * Return: Pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
