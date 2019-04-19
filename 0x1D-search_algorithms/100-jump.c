#include "search_algos.h"
#include <math.h>

#define MIN(a, b) (a > b ? b : a)
#define CHECK(i, v) (printf("Value checked array[%lu] = [%d]\n", i, v))

/**
 * jump_search - searches for a value in an array of ints
 * @array: ptr to the first element of the array to search
 * @size: number of elements in @array
 * @value: value to find in @array
 * Return: first index where value is located,
 *         or -1 if value not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);

	for (; j < size && array[j] < value; i = j, j += step)
		CHECK(j, array[j]);

	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	for (; array[i] < value; i++)
	{
		CHECK(i, array[i]);
		if (i == MIN(j, size - 1))
			return (-1);
	}
	CHECK(i, array[i]);
	if (array[i] == value)
		return (i);
	return (-1);
}
