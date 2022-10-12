#include "function_pointers.h"

/**
 * int_index -Searcheds for an integer
 * @array: Array to be processed
 * @size: Size of array
 * @cmp: Function to be used
 * Return: Index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0;
	int res;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
