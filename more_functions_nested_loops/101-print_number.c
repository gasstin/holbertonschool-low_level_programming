# include "main.h"

/**
 * print_number - prints numbers from 0 to 9 less 2 and 4
 * @n: is a variable
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	if ( i / 10 != 0)
	{
		print_number(i / 10)
		if (i > 0)
		{
			_putchar (i % 10 + '0');
		}
		else
		{
			_putchar (-i % 10 + '0');
		}
	}
	else if ((i / 10) == 0 && (i % 10 != 0) && (i >= 0))
	{
		_putchar (i % 10 + '0');
	}
	else if ((i / 10 == 0) && (i % 10 != 0) && (i < 0))
	{
		_putchar (45);
		_putchar (-i % 10 + '0');
	}	
}
