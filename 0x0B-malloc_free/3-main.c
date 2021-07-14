#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_grid - prints grid of 2d array
 * @grid: 2d grid to print
 * @height: height
 * @width: width
 * Return: nothing
 *
 */
void print_grid(int **grid, int width, int height)
{
int w, h;

h = 0;
while(h < height)
{
w = 0;
while(w < width)
{

printf("%d", grid[h][w]);
w++;
}
printf("\n");
h++;
}
}
/**
 * main - code tester for ALX School students
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{

int **grid;

grid = alloc_grid(6, 4);
if (grid == NULL)
{

return (1);
}
print_grid(grid, 6, 4);
printf("\n");
grid[0][3] = 98;
grid[3][4] = 402;
print_grid(grid, 6, 4);
free(grid);
return (0);

}
