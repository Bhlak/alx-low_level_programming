#include <stdio.h>

/**
 * main - Entry point
 *
 * Reversing the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'z';

	while (a > 'a')
	{
		putchar(a--);
	}
	putchar('\n');
	return (0);
}
