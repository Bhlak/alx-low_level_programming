#include "main.h"

/**
 * set_bit - Sets a bit at an index to 1
 *
 * @n: Pointer to a binary number's representation
 *
 * @index: Index to be changed
 *
 * Return: 1 (Success)
 *         -1 (Error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
