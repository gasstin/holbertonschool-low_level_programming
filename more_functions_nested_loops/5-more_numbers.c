# include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	char h;
	char i;

	for (h = 0; h <= 10; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
		_putchar ((i % 10) + '0');
		}
	_putchar ('\n');
	}
}
