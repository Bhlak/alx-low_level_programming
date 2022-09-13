#include "main.h"

/**
 * main - check the code
 *
 * Return: Alwayxs 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		_putchar(a++);
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
