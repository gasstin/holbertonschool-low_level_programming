# include "main.h"

/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line, to stdout.
 * @str: is the string
 *
 * Return: Always 0.
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar (str[i]);
		i--;
	}

	_putchar ('\n');
}
