#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of times
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b < n; b++)
		{
			for (a = 0; a < b - 1; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
