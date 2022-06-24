#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory
 * @b: are the bytes to pass to malloc
 *
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);

	if (p == NULL)
		return (NULL);

	return (p);
}
