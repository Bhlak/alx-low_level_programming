#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: Character to be checked
 * Return:  or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
