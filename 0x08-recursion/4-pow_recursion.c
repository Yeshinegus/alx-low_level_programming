#include "holberton.h"
/**
 * _pow_recursion - function of str concatnate
 *
 * @x: an int
 * @y: an int
 * Return: nothing
 *
 */
int _pow_recursion(int x, int y)
{
int m;
m = 0;
if (y == 0)
return (1);
else if (y == 1)
return (x);
else if (y == -1)
return (1 / x);
else if (y > 1)
m = x * _pow_recursion(x, y - 1);
else if (y < -1)
m = 1 / (x * _pow_recursion(x, y + 1));
return (m);
}
