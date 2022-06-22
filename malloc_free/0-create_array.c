#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: is the size of the array
 * @c: is the first character
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size)
	{
		p = malloc(sizeof(char) * size);
		while (*p)
		{
			*p = c;
			p++;
		}
	}
	else
		p = NULL;

	return (p);
}
