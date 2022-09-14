#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *
 * @n: Upper limit
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 9)
			{
				_putchar(n + 48);
			}
			else
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			if (!(n == 98))
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		if (!(n == 98))
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
		}
	}
}
