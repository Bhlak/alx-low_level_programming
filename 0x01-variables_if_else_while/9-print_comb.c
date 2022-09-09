#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		for (int j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
