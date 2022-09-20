#include "main.h"

/**
 * rev_string - Reverses the string
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int a = 0;
	int i = 0, j;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (i <= a)
	{
		j = s[i];
		s[i] = s[a];
		s[a] = j;
		a--;
		i++;
	}
}
