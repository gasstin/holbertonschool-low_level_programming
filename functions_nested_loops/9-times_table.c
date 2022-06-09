# include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
		o = m * n;
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
			}
			_putchar (o + '0');
		}
		else
		{
			_putchar ((o / 10) + '0');
			_putchar ((o % 10) + '0');
		}
		}
		_putchar ('\n');
	}
}
