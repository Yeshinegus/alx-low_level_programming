#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - checker code
 * @b: integer parameter
 *
 * Return: nothing
 *
 */
void *malloc_checked(unsigned int b)
{
int *check;

if (b <= 0)
	return(NULL);
check = (int *)malloc(b * sizeof(int));
if (check == NULL)
	exit(98);
return (check);
}
