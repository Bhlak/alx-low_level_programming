#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to be preocessed
 * Return: Integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_check(n, 1));
}

/**
 * _sqrt_check - Checks for the square root
 * @n: Number to be processed
 * @i: Counter
 * Return: integer
 */

int _sqrt_check(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_check(n, i + 1));
}
