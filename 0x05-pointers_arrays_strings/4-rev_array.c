#include "holberton.h"

/**
 * reverse_array - reverses the contents of an array of ints
 * @a: pointer to an int array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
