#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - Holberton doggie structure
 * @name: string pointer
 * @age: float
 * @owner: string pointer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
