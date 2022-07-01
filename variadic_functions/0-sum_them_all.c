#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns
 * the sum of all its parameters.
 * @n: is the number of parameters.
 *
 * Return: The sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int m = 0;
	int sum = 0;

	if (n)
	{
		va_start(num, n);
		for (m = 0; m < n; m++)
			sum += va_arg(num, unsigned int);

		va_end(num);
	}
	return (sum);
}
