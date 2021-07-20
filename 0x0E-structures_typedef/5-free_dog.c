#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - new dog struct
 *
 * @d: pointer to dog_t
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
if (d == NULL)
	return (NULL);
free(d);
}
