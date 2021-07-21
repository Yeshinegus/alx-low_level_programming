#include <stdio.h>
#include "function_pointers.h"
/*
 * int_index - prints the array index
 * @array: integer array
 * @size: size of the array
 * @cmp: a function pointer that perform a given action
 *
 * Return: integer
 */
int int_index (int *array, int size, int (*cmp)(int))
{
int i;

if(size <= 0)
	return (-1);
for (i = 0; i < size; i++)
if(cmp(array[i]))
	return (i);

return (-1);
}
