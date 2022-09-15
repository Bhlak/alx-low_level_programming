#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Number of times _ should be printed
 */

void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
