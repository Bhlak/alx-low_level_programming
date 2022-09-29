#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number or not
 * @n: Number to be processed
 * Return: integer
 */

int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}

/**
 * prime_checker - Checks for primes
 * @n: Number to be processed
 * @i: Reference checker
 * Return: integer
 */

int prime_checker(int n, int i)
{
	if (n % i == 0 || n <= 1)
		return (0);
	else if (i == 9)
		return (1);
	return (prime_checker(n, i + 1));
}
