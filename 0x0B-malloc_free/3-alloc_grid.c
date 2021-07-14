#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - a function that allocate grid
 * @width: width
 * @height: height
 *
 * Return: int pointer
 */
int **alloc_grid(int width, int height)
{
int *d, **grid, j, i;

if (width <= 0 || height <= 0)
	return (NULL);
d = (int *) malloc(width * height * sizeof(int));
grid = &d;

if (grid == NULL)
	return (NULL);
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
grid[i][j] = 0;
}

}
return (grid);
}
