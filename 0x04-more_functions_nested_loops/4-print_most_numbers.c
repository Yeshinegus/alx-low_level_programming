#include "holberton.h"
/**
 * print_numbers - print digits 0 -9
 *
 * Return: void
 */

void print_most_numbers(void)
{
char n;
n = '0';
while (n <= '9')
{
if (n == '2' || n == '4')
n = n;
else
_putchar(n);
n++;
}
_putchar('\n');
}
