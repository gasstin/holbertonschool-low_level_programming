#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @n: are the bytes to pass to malloc
 * @s1: is the first string
 * @s2: is the second string
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* pedido de memoria */
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (j <= n)
		n = j;
	p = malloc(i + n);
	if (p == NULL)
		return (NULL);
	/* si malloc no falla */
	for (j = 0; j <= i; j++)
		p[j] = s1[j];
	for (j = 0; j <= n; j++)
		p[j + i] = s2[j];
	p[i + n] = '\0';

	return (p);
}
