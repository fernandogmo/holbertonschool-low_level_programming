#include <stdlib.h>

/**
 * array_range - creates an array of integers contining all the
 *		 values in the integer range [min, max]
 * @min: minimum int
 * @max: maximum int
 * Return: pointer to resulting array, or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *ret, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ret = malloc(sizeof(int) * len);
	if (ret)
		while (len--)
			ret[len] = max--;
	return (ret);
}
