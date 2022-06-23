#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: is the width of the array
 * @height: is the height of the array
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * width);
	if (s == NULL)
		return (s);
	for (n = 0; n < width; n++)
		s[n] = malloc(sizeof(int) * height);

	for (n = 0; n < width; n++)
	{
		for (m = 0; m < height; m++)
			s[n][m] = 0;
	}
	for (n = 0; n < width; n++)
		free(s[n]);

	free(s);

	return (s);
}
