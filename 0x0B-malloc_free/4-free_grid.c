#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees allocated grid memory
 *
 * @grid: the grid whose memory is to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
