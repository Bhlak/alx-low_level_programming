#include "main.h"

/**
 * times_table - prints the 9-times table
 */

void times_table(void)
{
	int i, j, res;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			res = i * j;
			if (res < 10)
			{
				putchar((res % 10) + 48);
			}
			else
			{
				putchar((res / 10) + 48);
				putchar((res % 10) + 48);
			}

			if (j == 9)
			{
				break;
			}
			j++;
			putchar(',');
			putchar (' ');
		}
		putchar('\n');
		i++;
	}
}
