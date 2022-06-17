# include "main.h"
# include <stdio.h>

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: is the memory area
 * @b: is the caracter to fill
 * @n: is the number of bytes
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;


	if (s)
	{
		while (i < n)
		{
			s[i] = b;
			i++;
		}
	}
	return (s);
}
