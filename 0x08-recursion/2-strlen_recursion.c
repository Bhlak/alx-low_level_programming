#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: String to be processed
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
