#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - instantiates an array
 *
 * @width: the width of the array
 * @height: height of the array
 *
 * Description: instantiates an array
 * Return: returns a pointer to a 2 dimensional array of integers or NULL
 * if creation failed
 */
int **alloc_grid(int width, int height)
{
	int row, col;

	if (width == 0 || height == 0)
		return (NULL);

	int **grid, *grid_row;

	for (row = 0; row < height; ++row)
	{
		grid_row = malloc(sizeof(int) * width);
		for (col = 0; col < width; ++col)
		{
			*(grid_row + col) = 0;
		}
		*(grid + row) = grid_row;
	}

	return (grid);
}
