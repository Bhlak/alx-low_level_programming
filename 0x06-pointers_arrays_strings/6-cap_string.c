#include "main.h"

/**
 * *cap_string - Capitalize all words in a string
 * @str: String to be processed
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] <= 122 && str[0] >= 97)
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 46 || str[i] == '\t' ||
		    str[i] == '\n' || str[i] == 44 || str[i] == 59 ||
		    str[i] == '!' || str[i] == '?' || str[i] == '(' ||
		    str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] <= 122 && str[i + 1] >= 97)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	i++;
	}
	return (str);
}
