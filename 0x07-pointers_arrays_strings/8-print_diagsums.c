#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - a function
 * @a: integer pointer
 * @size: integer var
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i, j, sum, sum2;

sum = sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if ( i == j)
sum += a[i][j];
else if ((i + j) == size - 1)
sum2 += a[i][j];
}
}
printf("%d", sum);
printf("%d\n", sum2);

}
