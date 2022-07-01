#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Write a function that prints strings
 * @n: is the number of parameters.
 * @separator: is the character separator
 *
 * Return: Always NULL.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int m = 0;

	if (n)
	{
		va_start(num, n);
		for (m = 0; m < n; m++)
		{
			const char *aux = va_arg(num, const char *);

			if (aux == NULL)
				printf("(nil)");
			else
				printf("%s", aux);
			if (separator && m != (n - 1))
				printf("%s", separator);
		}

		va_end(num);
	}
		printf("\n");
}
