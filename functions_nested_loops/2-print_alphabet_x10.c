# include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char j;
	char i;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
			{
			_putchar (i);
			}
	_putchar ('\n');
	}
}
