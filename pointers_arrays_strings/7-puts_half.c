# include "main.h"

/**
 * puts_half - Write a function that prints half of a string
 * @str: is the string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;
	for (n = (i / 2); str[n]; n++)
		_putchar (str[n]);
	_putchar ('\n');
}
