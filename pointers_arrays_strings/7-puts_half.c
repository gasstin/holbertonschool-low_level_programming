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
	{
		i++;
	}
	if ((i - 1) % 2 == 0)
	{
		for (n = (i - 1) / 2; n <= (i - 1); n++)
		{
			_putchar (str[n]);
		}
	}
	else
	{
		for (n = ((i - 2) / 2 + 1); n <= (i - 1); n++)
		{
			_putchar (str[n]);
		}
	}
	_putchar ('\n');
}
