#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings
 * @s1: is the first string
 * @s2: is the second string
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int n = 0, m = 0, a, b;

		while (*(s1 + n))
			n++;
		while (*(s2 + m))
			m++;
		p = malloc(sizeof(char) * (n + m) + 1);
		if (p == NULL)
			return (p);
		for (a = 0; a <= n; a++)
		{
			p[a] = s1[a];
		}
		for (b = 0; b < m; b++)
			p[n + b] = s2[b];
		return (p);
}
