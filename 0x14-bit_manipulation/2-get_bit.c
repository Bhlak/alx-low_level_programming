#include "main.h"

/**
 * get_bit  Gets the value of a bit at a given index
 *
 * n: Binary number to be processed
 *
 * index: Index to be checked
 *
 * Return: Value of bit at index (Success)
 * -1 (Error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return (!!(n & (1 << index)));
}
