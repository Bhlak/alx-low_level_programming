#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - Creates an array of characters
 * @size: Size of array
 * @c: Character array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	
	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) *  size);
	ar[0] = c;
	return (ar);
}
