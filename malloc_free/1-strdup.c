#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: is the string to copy
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, n = 0;

	if (str)
	{
		while (*(str + n))
			n++;

		p = malloc(sizeof(char) * n);
		for (i = 0; i <= n; i++)
			p[i] = str[i];
	}
	else
		p = NULL;

	return (p);
}
