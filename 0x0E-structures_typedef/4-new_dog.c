#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog struct
 *
 * @name: name of dog
 *
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: a dog_t struct
 */

struct dog_t *new_dog(char *name, float age, char *owner)
{
struct dog_t new_d, *d;

d = &new_d;
d = malloc(sizeof(struct dog_t));

d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
