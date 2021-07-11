#include "holberton.h"
/**
 * _sqrt_recursion - function of str concatnate
 *
 * @x: an int
 *
 * Return: nothing
 *
 */
int _sqrt_recursion(int x)
{
int y;
y = -1;
if (x == 0 || x == 1)
return (x);

if (x >= 4)
{

y = _sqrt_recursion(x - 1);

if ((y*y) == x)
return (y);

}

return (-1);
}
