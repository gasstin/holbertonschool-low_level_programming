# include "main.h"
# include <stdio.h>

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: is the string to find
 * @c: is the caracter
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	while (s && *s != c)
	{
		if (*s == c)
			break;
		if (!s)
			*s = '\0';
		s++;
	}
	return (s);
}
