#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - Creates an array of characters
 * @size: Size of array
 * @c: Character array
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) *  size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
