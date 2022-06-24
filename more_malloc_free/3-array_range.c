#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: is the min value
 * @max: is the max value
 *
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	int n = 0;

	if (max < min)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (n = min; n <= max ; n++)
		p[n - min] = n;
	return (p);
}
