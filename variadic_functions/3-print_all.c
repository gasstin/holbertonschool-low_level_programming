#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_s - print a string.
 * @s: is the string to print.
 *
 * Return: Always void.
 */
void print_s(char *s)
{
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - Write a function that prints anything
 * @format: is a list of types of arguments
 *
 * Return: Always NULL.
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	va_list num;

	va_start(num, format);

	while (format && format[n])
	{
		switch (format[n])
		{
			case 'i':
				printf("%d", va_arg(num, int));
				break;
			case 's':
				print_s(va_arg(num, char *));
				break;
			case 'f':
				printf("%f", va_arg(num, double));
				break;
			case 'c':
				printf("%c", va_arg(num, int));
				break;
			default:
				break;

		}
		if ((format[n] == 'i' || format[n] == 'f'
		|| format[n] == 's' || format[n] == 'c') && format[n + 1])
			printf(", ");
		++n;
	}
		va_end(num);
		printf("\n");
}
