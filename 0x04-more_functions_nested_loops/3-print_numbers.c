#include "holberton.h"
/**
 * print_numbers - print digits 0 -9
 *
 * Return: void
 */

void print_numbers(void)
{
char n;
n = '0';
while (n <= '9')
{
_putchar(n);
n++;
}
_putchar('\n');
}
