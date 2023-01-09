#include "main.h"

/**
* free_grid - frees the memory allocated to a grid of integers
* @grid: a pointer to a pointer
* @height: int specifying the height of the grid
*
* Description: frees dynamically allocated memory used to create the grid
* Return: no return value
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}
