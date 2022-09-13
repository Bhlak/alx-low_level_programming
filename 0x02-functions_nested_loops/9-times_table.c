#include "main.h"

/**
 * times_table - prints the 9-times table
 */

void times_table(void)
{
	int i, j, res;

	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			res = i * j;
			_putchar(res + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
