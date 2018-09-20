#include "holberton.h"


/**
 * _isdigit - checks if a character is a single digit number
 * @c: input character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return ((('0' <= c) && ('9' >= c)) ? 1 : 0);
}
