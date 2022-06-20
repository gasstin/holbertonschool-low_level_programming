#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the ñength of a string
 * @s: is the string
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s)
	{
		s++;
		return (n + _strlen_recursion(s));
	}
	else
		return (0);
}
