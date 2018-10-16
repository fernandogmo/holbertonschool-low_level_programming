#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;

	ret = malloc(sizeof(dog_t));
	if (ret)
	{
		ret->name = strdup(name);
		ret->owner = strdup(owner);
		ret->age = age;
	}
	return (ret);
}
