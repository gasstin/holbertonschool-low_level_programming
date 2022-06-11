# include "main.h"

/**
 * print_number - prints numbers from 0 to 9 less 2 and 4
 * @n: is a variable
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n / 10 != 0)
	{
		print_number(n / 10)
		if (n > 0)
		{
			_putchar (n % 10 + '0');
		}
		else
		{
			_putchar (-n % 10 + '0');
		}
	}
	else if ((n / 10) == 0 && (n % 10 != 0) && (n >= 0))
	{
		_putchar (n % 10 + '0');
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n < 0))
	{
		_putchar (45);
		_putchar (-n % 10 + '0');
	}	
}
