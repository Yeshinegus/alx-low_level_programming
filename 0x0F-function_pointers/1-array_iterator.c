#include "function_pointers.h"
/*
 * array_iterator - prints the array
 * @array: integer array
 * @size: size of the array
 * @action: a function that perform a given action
 *
 * Return: nothing
 */
void array_iterator (int *array, size_t size, void (*action)(int))
{
unsigned int i;

for (i = 0; i < size; i++)
	action(array[i]);
}
