#include "main.h"

/**
 * print_most_numbers - Prints most numbers between 0 and 9
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		_putchar(a++);
	}
	_putchar('\n');
}
