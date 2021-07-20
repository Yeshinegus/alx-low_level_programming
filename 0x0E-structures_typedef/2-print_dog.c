#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog struct
 *
 * @d: dog struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{

if (d == NULL)
	return;
if (d->name == NULL || d->owner == NULL)
	printf("nil");
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
