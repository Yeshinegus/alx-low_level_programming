#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - a function that create array using malloc
 *
 * @size: size of the array
 * @c: char used for initialization
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

arr = malloc(size);
if (arr == NULL || size == 0)
	return (NULL);
for (i = 0; i < size; i++)
	arr [i] = c;
return (arr);
free(arr);
}
