#include "holberton.h"
/**
 * print_last_digit - prints last digit of the given integer
 * @n: integer parameter
 * Return: - always an int
 *
 */
int print_last_digit(int n)
{
int r;
if (n < 0)
r = (n * -1) % 10;
r = n % 10;
return (r);
}
