# include "main.h"

/**
 * print_square - Write a function that draws a straight line in the terminal
 * @size: is the number of times
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
}
