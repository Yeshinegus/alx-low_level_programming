#include "holberton.h"
/**
 * more_numbers - print digits 0 -9
 *
 * Return: void
 */

void more_numbers(void)
{
char n, j;
n = '0';
while (n <= '9')
{
_putchar(n);
if (n == '9')
{
j = '0';
while (j < '5')
{
n++;
_putchar(n);
j++;
}
}
n++;
}
_putchar('\n');
}
