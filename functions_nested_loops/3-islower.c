# include "main.h"

/**
 * _islower - check if c is lowercase
 * @c: is a variable
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if ((c >= 61) && (c <= 122))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
