#include "main.h"

/**
 * jack_bauer - Main part of the function
 */

void jack_bauer(void)
{
	int i, j, k, l, limit;

	i = 0;

	while (i < 3)
	{
		j = 0;
		i == 2 ? limit = 4 : limit = 10;
		while (j < limit)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
