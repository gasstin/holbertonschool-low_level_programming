#include <stdlib.h>
#include "main.h"
#include <stdio.h>

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
		exit(98);
	return (p);
}
