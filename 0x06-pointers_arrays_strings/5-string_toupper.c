#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase
 * @str: string to be processed
 * Return: String
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 'Z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
