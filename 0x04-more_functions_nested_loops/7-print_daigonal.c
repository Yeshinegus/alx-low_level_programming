#include "holberton.h"
/**
 * print_diagonal - prints diagonal line
 * @n: integer value
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)

_putchar('\n');
else if (n > 0)
{
for (i = 0; i < n; i++)
for (j = 0; j <= i; j++)
{
if (i == j)
{
_putchar('\\');
_putchar('\n');
}
else
_putchar(32);
}
}
}
