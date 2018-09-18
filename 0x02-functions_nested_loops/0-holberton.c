#include "holberton.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[10] = "Holberton";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');

	return (0);
}
