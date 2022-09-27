#include "main.h"

/**
 * *_strpbrk - Searches for a set of bytes
 * @s: String to be processed
 * @accept: Substring to be added
 * Return: Pointer or null
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (NULL);
}
