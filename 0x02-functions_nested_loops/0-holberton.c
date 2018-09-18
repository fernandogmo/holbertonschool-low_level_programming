#include "stdio.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[] = "Holberton\n";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(h[i]);
	}

	return (0);
}
