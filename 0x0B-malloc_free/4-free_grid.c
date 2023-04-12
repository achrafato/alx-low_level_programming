#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: pointer to 2D array
 * @height: represent height of array
 */

void free_grid(int **grid, int height)
{
int i, j;

for (i = 0; i < height; i++)
{

for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
}
}
