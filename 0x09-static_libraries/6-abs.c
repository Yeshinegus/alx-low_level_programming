#include "holberton.h"
/**
 * _abs - prints +, -, 0
 * @n: int c parameter
 * Return: - always an int
 *
 */
int _abs(int n)
{
if (n < 0)
return (n * -1);
return (n);
}
