#include "main.h"

/**
 * times_table - prints the 9-times table
 */

void times_table(void)
{
	int i, j, res;

	i = 1;
	while (i < 10)
	{
		j = 1;
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		while (j < 10)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar(32);
				_putchar((res % 10) + 48);
			}
			else
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
			if (j == 9)
			{
				break;
			}
			j++;
			_putchar(',');
			_putchar (' ');
		}
		_putchar('\n');
		i++;
	}
}
