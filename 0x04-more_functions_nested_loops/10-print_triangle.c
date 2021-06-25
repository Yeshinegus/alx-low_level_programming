#include "holberton.h"
/**
 * print_triangle - prints diagonal line
 * @n: integer value
 * Return: void
 */

void print_triangle(int n)
{
int i, j, k;
if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
for (i = 0; i <= n; i++)
{

for (j = n; j > i; j--)
_putchar(' ');

for (k = 0; k < i; k++)
_putchar('#');

_putchar('\n');
}
}
_putchar('\n');
}
