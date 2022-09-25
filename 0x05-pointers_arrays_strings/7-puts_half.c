#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be processed
 */

void puts_half(char *str)
{
	int count = 0, n;

	while (*(str + count) != '\0')
	{
		count++;
	}

	if (count != 0)
	{
		if (count % 2 == 0)
		{
			n = count / 2;
		}
		else
		{
			n = ((count - 1) / 2) + 1;
		}

		while (n <= count)
		{
			_putchar(str[n++]);
		}
	}
}
