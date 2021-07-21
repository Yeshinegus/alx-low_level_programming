#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct
 * @name: name of dog
 * @age: age of doge
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 * struct dog_t - structure
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
