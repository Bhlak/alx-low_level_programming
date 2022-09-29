#include "main.h"

/**
 * is_palindrome - Checks for a palidrome
 * @s: String to be processed
 * Return: integer
 */

int is_palindrome(char *s)
{
	int len = counter(s) - 1;

	return (pali(s, len));
}

/**
 * counter - Counts number of characters are in the string
 * @s: String to be processed
 * Return: integer
 */

int counter(char *s)
{
	if (!*s)
		return (0);
	return (1 + counter(++s));
}

/**
 * pali - Returns the actual palindrome check
 * @s: String to be processed
 * @n: Length of the string
 * Return: integer
 */

int pali(char *s, int n)
{
	if (n < 1)
		return (1);
	if (*s != *(s + n))
		return (0);
	return (pali(++s, n - 2));
}
