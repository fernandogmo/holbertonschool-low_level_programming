#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on
 *		    each element of an array.
 * @array: pointer to integer array
 * @size: size_t length of the array
 * @action: pointer to void function that takes one int parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
