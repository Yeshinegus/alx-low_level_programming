#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - checker code
 * @min: integer min val
 * @max: integer max val
 *
 * Return: integer array
 *
 */
int *array_range(int min, int max)
{
int i, *rang;

if (min > max)
	return (NULL);
rang = (int *)malloc(((max - min) + 1) * sizeof(int));
if (rang == NULL)
	return (NULL);
else
for (i = 0; min <= max; i++)
{
	rang[i] = min;
	min++;
}
return (rang);
}
