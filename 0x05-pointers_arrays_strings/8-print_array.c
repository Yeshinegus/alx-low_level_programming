#include "holberton.h"
#include <stdio.h>
/**
 * print_array - returns an arry of int
 *
 * @a: is an integer array
 * @n: is an integer value
 */
void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
printf("\n");

}
