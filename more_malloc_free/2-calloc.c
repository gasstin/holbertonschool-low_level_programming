#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _calloc - Write a function that allocates memory for an array
 * @nmemb: is the size of the array
 * @size: is the size of bytes
 *
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **p = NULL;
	unsigned int n = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb);
	if (p == NULL)
		return (NULL);
	for (n = 0; n <= nmemb; n++)
	{
		p[n] = malloc(size);
		if (p[n] == NULL)
		{
			for ( ; n == 0; n--)
			{
				free(p[n]);
				free(p);
			}
		}
	}
	for (n = 0; n <= nmemb; n++)
	{
		p[n] = 0;
	}

	return (p);
}
