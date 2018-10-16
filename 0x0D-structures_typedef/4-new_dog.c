#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - initializes a new struct dog
 * @name: string pointer
 * @age: float
 * @owner: string pointer
 * Return: pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;

	ret = malloc(sizeof(dog_t));
	if (ret)
	{
		ret->name = _strdup(name);
		if (!(ret->name))
		{
			free(ret);
			return (NULL);
		}
		ret->owner = _strdup(owner);
		if (!(ret->owner))
		{
			free(ret->name);
			free(ret);
			return (NULL);
		}
		ret->age = age;
	}
	return (ret);
}

/**
 * _strdup - returns a pointer to a newly allocated space
 *	     in memory, which contains a copy of the
 *	     string given as a parameter.
 * @str: pointer to string
 *
 * Return: pointer to duplicate of str, or NULL if str is NULL
 *	   or if malloc fails.
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *p, *s;

	if (!str)
		return ((char *)0);

	p = str;
	while (*p++)
		size++;

	s = (char *)malloc(size + 1);
	if (s)
	{
		p = s;
		while (*str)
			*p++ = *str++;
		*p = '\0';
	}
	return (s);
}
