#include "main.h"

/**
 * more_numbers - Prints numbers from 0 - 14 x 10
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		a = 0;
		while (a < 15)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
	}
}
