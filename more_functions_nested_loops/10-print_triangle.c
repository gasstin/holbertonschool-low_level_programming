#include "main.h"

/**
 * print_triangle - Write a function that draws a triangle in the terminal
 * @size: is the number of times
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar (' ');
			}
			for (k = j; k <= size; k++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
