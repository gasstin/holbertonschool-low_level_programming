# include "main.h"
# include <stdio.h>

/**
 * _strpbrk - Write a function that searches a string
 * for any of a set of bytes.
 * @s: is the string to find
 * @accept: is the caracter
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int n = 0;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				break;
			}
		}
		if (*s == accept[n])
			break;
		s++;
	}
	if (*s)
		return (s);
	else
		return ('\0');

}
