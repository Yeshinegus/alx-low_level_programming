#include "holberton.h"
/**
 * print_sign - prints +, -, 0
 * @n: int c parameter
 * Return: - always an int
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
return (0);
}
