#include "dog.h"
#include <stdio.h>

/**
 * prints_dog - prints an initialized struct dog
 * @d: pointer to struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			puts("Name: (nil)");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			puts("Age: (nil)");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			puts("Owner: (nil)");
	}
}
