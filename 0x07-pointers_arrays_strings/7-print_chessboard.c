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
unsigned int i, j;
for (i = 0; ; i++)
{
for (j = 0; a[i][j] != '\0'; j++)
_putchar(a[i][j]);

_putchar('\n');
}
}
