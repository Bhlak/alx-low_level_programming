#include "main.h"

/**
 * _isalpha - Checks for an alpabetic character
 *
 * @c: character to be checked
 *
 * Return: 0(Non-alphabetic character) or 1(Alphabet)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
