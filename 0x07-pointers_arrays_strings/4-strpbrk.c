#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Searches for a set of bytes
 * @s: String to be processed
 * @accept: Substring to be added
 * Return: Pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		a = 0;
		while (accept[a])
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
