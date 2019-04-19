#include "search_algos.h"
#include <math.h>

#define MIN(a, b) (a > b ? b : a)
#define PRINT(i, v) (printf("Value checked array[%lu] = [%d]\n", i, v))

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
	while (j < size && array[j] < value)
		PRINT(j, array[j]), i = j, j += step;
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	while (i < MIN(j, size - 1) && array[i] < value)
		PRINT(i, array[i]), i++;
	PRINT(i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
