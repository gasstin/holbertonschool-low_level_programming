#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that prints numbers
 * @n: is the number of parameters.
 * @separator: is the character separator
 *
 * Return: Always NULL.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int m = 0;

	if (n)
	{
		va_start(num, n);
		for (m = 0; m < n; m++)
		{
			printf("%d", va_arg(num, unsigned int));
			if (separator && m != (n - 1))
				printf("%s", separator);
		}

		va_end(num);
		printf("\n");
	}
}
