#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 */

void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (a < size)
	{
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
