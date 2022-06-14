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
	n = (i / 2);
	if (i % 2)
		n++;
	for (; str[n]; n++)
		_putchar (str[n]);
	_putchar ('\n');
}
