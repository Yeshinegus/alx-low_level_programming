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
j = size - 1;
sum = sum2 = 0;
for (i = 0; i < size; i++)
{
sum += a[i][i];
sum2 += a[j - i][i];
}
printf("%d", sum);
printf("%d\n", sum2);

}
