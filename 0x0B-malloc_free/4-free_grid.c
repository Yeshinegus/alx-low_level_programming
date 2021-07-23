#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - a function that free allocated grid
 * 
 * @grid: grid of pointer
 * @height: height
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i, j;

i = 0;
while (grid[i][j])
{
for (j = 0; j < height; j++)
	free((void **)grid[i][j]);
free(grid[i]);
i++;
}
free(grid);
}
