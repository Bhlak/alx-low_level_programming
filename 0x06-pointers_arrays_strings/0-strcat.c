 #include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: Pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	dest[i] = src[a];

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (*(src + a) != '\0');

	return (dest);
}
