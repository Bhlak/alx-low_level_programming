#include "main.h"

/**
 * *cap_string - Capitalize all words in a string
 * @str: String to be processed
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
			{
				if (!(str[i] > 47 && str[i] < 58))
				{
					if (!(str[i] > 47 && str[i] < 58))
					{
						str[i + 1] = str[i + 1] - 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
