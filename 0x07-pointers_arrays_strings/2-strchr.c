#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: String
 * @c: Character to be found
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int a = 0;
	char *ptr;

	while (s[a] != c && s[a] != '/0')
	{
		a++;
	}
	ptr = &s[a];

	return (ptr);
}
