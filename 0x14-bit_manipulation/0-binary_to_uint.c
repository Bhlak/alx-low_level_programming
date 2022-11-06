#include "main.h"

/**
 * binary_to_uint - Convertsa binary number to an unsigned integer
 * @b: String depicting binary number
 *
 * Return: Converted number (On Success)
 * 0 - (if) One or more characters in string are not 0 or 1
 * (or) String b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int val = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		val = (2 * val) + (b[i] - '0');
		i++;
	}
	return (val);
}
