#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for an integer array
 * @width: Width of array
 * @height: Height of array
 * Return: Pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **arr, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			i--;
			for (i; i >= 0; i--)
				free(arr[i]);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
			arr[i][j] = 0;
	}
	return (arr);
}
