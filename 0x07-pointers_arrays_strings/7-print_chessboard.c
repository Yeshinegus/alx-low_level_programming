#include "holberton.h"
/**
 * print_chessboard - a function
 * @a: char pointer
 *
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
unsigned int i, j = 8;
for (i = 0; i < 8; i++)
{
for (j = 0; i < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
_putchar('\n');
}
