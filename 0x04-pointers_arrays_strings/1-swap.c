#include "holberton.h"

/**
 * swap_int - takes two pointers to ints and swaps the values
 *               they point.
 * @a: pointer to an int
 * @b: pointer to an int
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
