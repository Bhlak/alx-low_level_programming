#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array to be processed
 * @size: Size of array
 * @action: Function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < (int) size)
	{
		action(array[i++]);
	}
}
