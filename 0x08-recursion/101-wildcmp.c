#include "main.h"

/**
 * wildcmp - Compares identical strings
 * @s1: String s1
 * @s2: String s2
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if ((*s1 == '\0') && (*s2 == '*'))
		return (wildcmp(s1, s2 + 1));
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
