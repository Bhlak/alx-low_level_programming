#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to be processed
 * @accept: Substring to be searched for
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;
	unsigned int count = 0;

	while (s[a] != '\0')
	{
		b = 0;

		for (; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				count++;
				break;
			}
		}
		if (count > 0 && s[a] != accept[b])
		{
			break;
		}
		a++;
	}
	return (count);
}
