# include "main.h"

/**
 * puts2 - Write a function that prints every other character
 * of a string, starting with the first character.
 * @str: is the string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j += 2)
	{
		_putchar (str[j]);
	}
	_putchar ('\n');
}
