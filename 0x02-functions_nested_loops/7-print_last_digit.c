#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @a: Number whose digit is to be displayed
 *
 * Return: Always the last digit of the number given
 */

int print_last_digit(int a)
{
	int ld = a % 10;
	
	_putchar(ld + '0');
	return (ld);
}
