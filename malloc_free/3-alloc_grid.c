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
	int **s = NULL;
	int n = 0, m = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		s[n] = NULL;
		s[n] = malloc(sizeof(int) * width);
		if (s[n] == NULL)
		{
			for( ; n >= 0; n--)
			{
				free(s[n]);
			}
			free(s);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			s[n][m] = 0;
	}
	return (s);
}
