#include "main.h"

/**
 * print_number - prints a number
 * @n: Number to be printed
 */

void print_number(int n)
{
	unsigned int m;
	
	if (n >= 0)
	{
		if (n >= 10)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
	else
	{
		m = -1 * n;

		_putchar('-');
		if (m >= 10)
		{
			print_number(m / 10);
		}
		_putchar((m % 10) + '0');
	}
}
