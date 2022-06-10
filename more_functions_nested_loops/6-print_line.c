# include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: is the number of times
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;
	int j;

	if (n >= 0)
	{
		j = n;
	}
	else
	{
		j = n * -1;
	}

	while (j >= 0)
	{
		if (n <= 0)
		{
			i = 10;
		}
		else
		{
			i = 95;
			j = n--;
		}

	_putchar (i);
		if (i == 10)
		{
			break;
		}
	}
}
