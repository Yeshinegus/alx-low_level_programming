#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - checker code
 * @nmemb: integer parameter
 * @size: size of type
 *
 * Return: nothing
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *checker;

if (nmemb == 0 || size == 0)
	return (NULL);
checker = (int *)calloc(nmemb, size);
if (checker == NULL)
	return (NULL);
return (checker);
}
