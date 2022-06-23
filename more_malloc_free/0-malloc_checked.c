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

void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);	

	if (p == NULL)
		return (98);
}
