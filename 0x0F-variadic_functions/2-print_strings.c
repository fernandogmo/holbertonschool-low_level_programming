#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a variable number of string parameters,
 *		   separated by a specified string.
 * @separator: constant string to separate printed parameters
 * @n: const unsigned int number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *s;
	unsigned int i;

	if (n)
	{
		va_start(strs, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(strs, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		va_end(strs);
	}
	printf("\n");
}
