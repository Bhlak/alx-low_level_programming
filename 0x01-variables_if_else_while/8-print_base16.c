#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing in base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 'a';

	while (i < 58)
	{
		putchar(i++);
	}
	while (j <= 'z')
	{
		putchar(j++);
	}
	putchar('\n');
	return (0);
}
