#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 *
 * @n: Pointer to binary representation
 *
 * @index: Index of target bit
 *
 * Return: 1 (Success)
 *         -1 (Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
