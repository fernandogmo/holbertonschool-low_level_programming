#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of
 *	     size bytes each and returns a pointer to the
 *	     allocated memory.
 * @nmemb: integer number of elements desired in array
 * @size: integer number of bytes for each element
 * Return: pointer to resulting array, or NULL if malloc fails
 *	   or nmemb or size were set to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int bytes;

	bytes = nmemb * size;
	if (!bytes)
		return (NULL);

	return (malloc(bytes));

}
