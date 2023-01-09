#include "main.h"

/**
* alloc_grid - creates a grid of integers
* @width: integer specifying the width of the grid
* @height: int specifying the height of the grid
*
* Description: dynamically allocates memory to create the grid
* Return: a pointer to the grid, if successful. otherwise, NULL
*/

int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{	free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);

}
