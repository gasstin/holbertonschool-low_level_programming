# include "main.h"

/**
 * print_times_table - prints the 9 times table
 * @n: is a variable
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int m, o, p;

	p = n;
	if (n < 15 && n > 0)
	{
		for (p = 0; p <= n; p++)
		{
			for (m = 0; m <= n; m++)
			{
				o = m * p;
				if (m != 0)
				{
					_putchar (44);
					_putchar (32);
				}
				if (o < 10)
				{
					if (m != 0)
					{
						_putchar (32);
						_putchar (32);
					}
					_putchar (o + '0');
				}
				else if (o >= 10 && o < 100)
				{
					if (m != 0)
					{
						_putchar (32);
					}
					_putchar ((o / 10) + '0');
					_putchar ((o % 10) + '0');
				}
				else
				{
					if (m != 0)
					{
						_putchar (32);
					}
					if (o >= 100)
					{
					_putchar ((o / 100) + '0');
					_putchar (((o % 100) / 10) + '0');
					_putchar ((o % 10) + '0');
					}
					else if (o >= 10 && o < 100)
					{
						
					}
				}
			}
		_putchar ('\n');
		}
	}
}
