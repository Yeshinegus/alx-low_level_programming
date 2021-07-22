#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - prints the array
 * @array: integer array
 * @size: size of the array
 * @action: a function that perform a given action
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL)
	printf("no name");
for (i = 0; i < size; i++)
	action(array[i]);
}
