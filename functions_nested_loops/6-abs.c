# include "main.h"

/**
 * _abs - prints the absolute value of n
 * @n: is a variable
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * n);

	}
}
