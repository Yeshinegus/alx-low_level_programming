#include "holberton.h"
/**
 * reverse_array - function to reverse an array
 * @a: an array to be reversed
 * @n: size of an array
 *
 * Return: an integer value
 *
 */
void reverse_array(char *a, int n)
{
int i;
i = 0;

for (i = n - 1; i >= 0; i--)
{
  if (i != 0)
    {
  _putchar('a[i]' + '0');
  _putchar(',');
  _putchar(' ');
}
  _putchar('a[i]' +'0');
 _putchar('\n');
 }
 return (0);
}
