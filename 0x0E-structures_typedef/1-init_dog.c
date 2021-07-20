#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize the dog struct
 *
 * @d: dog struct
 * @name: name of dog
 *
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{


d->name = name;
d->age = age;
d->owner = owner;

}