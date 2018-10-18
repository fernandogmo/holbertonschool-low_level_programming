#include <stdlib.h>
/**
 * int_index - executes a function given as a parameter to find the first
 *	       int in an array that meets a certain condition.
 * @array: pointer to integer array
 * @size: integer length of the array
 * @cmp: pointer to void function that takes one int parameter
 * Return: index of first element for which cmp does not return 0, or
 *	   -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
