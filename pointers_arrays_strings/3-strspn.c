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
	char **p;
	char **q;
	unsigned int i = 0;
	unsigned int j = 0;

	q=&accept;
	if (s && accept)
	{
		while (*q)
		{
			p = &s;
			while (*p != *q)
			{
				i++;
				p++;
			}
			if (j <= i)
				j = i;
			q++;
		}
	}

	return (j);
}
