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
else if (size > 0)
{
	for (i = 0; i < size; i++)
	if(cmp(array[i] == 1))
		return (i);
}
else
return (-1);
}
