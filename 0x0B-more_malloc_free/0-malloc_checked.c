#include <stdlib.h>

/**
 * malloc_checked - allocates memory, checks malloc success.
 * @b: size of memory to allocate.
 * Return: pointer to allocated memory, or code 98 on fail.
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (!ret)
		exit(98);
	return (ret);
}
