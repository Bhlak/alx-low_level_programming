#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size
 */

void print_triangle(int size)
{
	int a, b, space;
	int shape = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (space = size - shape; space > 0; space--)
			{
				_putchar(' ');
			}
			for (b = 0; b < shape; b++)
			{
				_putchar('#');
			}
			shape++;
			_putchar('\n');
		}
	}
}
