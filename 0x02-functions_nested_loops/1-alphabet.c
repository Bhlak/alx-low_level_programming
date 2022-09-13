#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Alwayxs 0 (Success)
 */

void print_alphabet(void)
{
	char a;

	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar('\n');
}
