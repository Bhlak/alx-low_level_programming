#include "main.h"

/**
 * _islower - Checks for a lowercase letter
 *
 * @c: character
 *
 * Return: 0(Uppercase) or 1(Lowercase)
 */

int _islower(int c)
{
	if (c < 'a')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
