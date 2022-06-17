# include "main.h"
# include <stdio.h>

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: is the string to find
 * @accept: is the caracter
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if (accept && s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				accept++;
				i++;
			}
			s++;
		}
	}
	return (i + 1);
}
