#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: String to be filled
 * @b: Byte to be inputed
 * @n: First n bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
