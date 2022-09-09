#include <stdio.h>

/**
 * main -Entry point
 *
 * Printing combinations of two distinct digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = ++i; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
