#include "holberton.h"
/**
 * print_line - prints _ or newline
 * @n: integer value
 * Return: void
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
i = 0;
while (i < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
