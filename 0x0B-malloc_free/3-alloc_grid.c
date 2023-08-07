#include "main.h"

/**
 * alloc_grid - create a 2-dimensional array with each element set to 0
 * @width: desired number of columns
 * @height: desired number of rows
 *
 * Return: NULL if memory allocation fails or any argument is less than 1,
 * otherwise return a pointer to the first element of the array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	grid = &malloc(height * sizeof(int *));

	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (!grid[i])
		{
			while (--i > -1)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
