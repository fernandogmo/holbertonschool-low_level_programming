#include <ctype.h>


/**
 * _islower - wrapper function for ctype::islower
 *
 * @c: input character tested
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	return (islower(c) ? 1 : 0);
}
