#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: ptr to the first element of the array to search
 * @size: number of elements in @array
 * @value: value to find in @array
 * Return: first index where value is located,
 *         or -1 if value not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; array && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
