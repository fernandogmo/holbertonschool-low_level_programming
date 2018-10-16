#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - Holberton doggie structure
 * @name: string pointer
 * @age: float
 * @owner: string pointer
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
