#include "main.h"

/**
 * *leet - Encodes into 1337
 * @str:String to be encoded
 * Return: String
 */

char *leet(char *str)
{
	int i = 0, j;
	char a[11] = "aAeEoOtTlL";
	char b[11] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
