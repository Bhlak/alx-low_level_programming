#include "main.h"

/**
 * print_number - prints a number
 * @n: Number to be printed
 */

void print_number(int n)
{
	if (n >= 0)
	{
		if (n >= 10)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + '0');
	}
	else
	{
		n = -n;

		_putchar('-');
		if (n >= 10)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + '0');
	}
}
