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
	unsigned int j;
	unsigned int h = 0;

	if (s && accept)
	{
		while (s[i] != ' ')
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					h++;
				}
			}
			i++;
		}
	}
	return (h);
}
