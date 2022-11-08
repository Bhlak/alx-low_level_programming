#include "main.h"

/**
 * get_endianness - Checks the endianness of a system
 *
 * Return: 0 - Big Endian
 *         1 - Little Endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *)&i;

	return (*endian);
}
