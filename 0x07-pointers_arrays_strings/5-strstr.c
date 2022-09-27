#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to be processed
 * @needle: Substring to be located
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, count = 0;

	while (needle[a])
	{
		count++;
		a++;
	}

	while (*haystack)
	{
		if (*haystack == *needle && *(haystack + count) == *(needle + count))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
