#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to be processed
 * @size: Size of array
 * @cmp: Function to be used
 * Return: Index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
