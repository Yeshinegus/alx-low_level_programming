#include "holberton.h"
/**
 * reverse_array - function to reverse an array
 * @a: an array to be reversed
 * @n: size of an array
 *
 * Return: an integer value
 *
 */
void reverse_array(int *a, int n)
{
int i, j, temp;
j = n - 1;

for (i = 0; i < n; i++)
{
if (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
}
}
}
