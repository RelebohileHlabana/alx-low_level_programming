#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees a 2 dimensional grid
* @grid: the address of the two dimensional grid
* @height: height of the grid
* Description: frees memory of grid
* Return: nothing
*
*/
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)

	{

		free(grid[n]);

	}
	free(grid);
}
