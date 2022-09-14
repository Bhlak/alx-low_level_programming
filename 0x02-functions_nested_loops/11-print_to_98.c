#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *
 * @n: Upper limit
 */

void print_to_98(int n)
{
	int i = 0;

	n = 98;

	while (i <= n)
	{
		if (i < 9)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		if (!(i == n))
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
}
