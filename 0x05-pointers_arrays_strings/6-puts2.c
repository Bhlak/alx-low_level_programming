#include "main.h"

/**
 * puts2 - prints every other character
 * @str: String to be processed
 */

void puts2(char *str)
{
	int count = 1;

	_putchar(*(str + 0));
	while (*(str + count) != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(*(str + count));
		}
		count++;
	}
	_putchar('\n');
}
