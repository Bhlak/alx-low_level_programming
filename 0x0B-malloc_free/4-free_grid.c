#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory previously allocated for a grid
 * @grid: Grid to be freed
 * @height: Height of array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (grid[i] != '\0')
	{
		free(grid[i]);
	}
	free(grid);
}
