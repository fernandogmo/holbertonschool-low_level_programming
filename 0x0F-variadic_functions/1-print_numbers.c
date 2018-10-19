#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a variable number of integer parameters,
 *		   separated by a specified string.
 * @separator: constant string to separate printed parameters
 * @n: const unsigned int number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (n)
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		va_end(nums);
	}
	printf("\n");
}
