# include "main.h"

/**
 * _islower - check if c is lowercase
 * @c: is a variable
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
