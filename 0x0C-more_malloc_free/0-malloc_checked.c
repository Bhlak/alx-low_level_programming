#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: Size of string
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
