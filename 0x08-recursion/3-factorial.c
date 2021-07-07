#include "holberton.h"
/**
 * factorial - function of str concatnate
 *
 * @n: an int
 * Return: nothing
 *
 */
int factorial(int n)
{
int m;
m = 0;
if (n < 0)
return (-1);
else if(n == 0 || n == 1)
return (n);
else
m = n * factorial(n - 1);

return (m);
}
