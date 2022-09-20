#include "main.h"

/**
 * _puts - Prits a string
 * @str: String to be printed
 */

void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
	}
	_putchar('\n');
}
