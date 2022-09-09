#include <stdio.h>

/**
 * main -Entry point
 *
 * Printing combinations of three distinct digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i > k)
				{
					continue;
				}
				for (l = 0; l < 10; l++)
				{
					if ((i > k) || (i == k && j == l))
					{
						continue;
					}
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (!(i + j == 17 && k + l == 18))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
