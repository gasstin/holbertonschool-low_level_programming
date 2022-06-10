# include "main.h"

/**
 * print_diagonal - Write a function that draws a straight line in the terminal.
 * @n: is the number of times
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		i = n;
		while (i >= 0)
		{
			if (i != n)
			{
			for (j = 1; j <= (n - i); j++)
			{
				if (j != 1)
				{
					_putchar (32);
				}
			}
			_putchar (92);
			_putchar ('\n');
			}
			i--;
		}
	}
}
