#include "main.h"

/**
 * flip_bits - Counts the number of bits of the first number
 *             to be flipped to get the second number.
 *
 * @n: The frist number.
 *
 * @m: The second number.
 *
 * Return: The necessary number of bits of n to flip to get m.
 */

unsigned int flip_bits(unsignede long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, res = 0;

	while (diff > 0)
	{
		res += (diff & 1);
		diff >>= 1;
	}
	return (res);
}
