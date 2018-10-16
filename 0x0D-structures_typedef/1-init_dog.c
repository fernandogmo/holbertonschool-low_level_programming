#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog for initialization
 * @name: string pointer
 * @age: float
 * @owner: string pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
