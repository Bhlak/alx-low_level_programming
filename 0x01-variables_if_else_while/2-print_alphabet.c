#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char arf[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while ( i < 26)
	{
		putchar(arf[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
