#include "main.h"
#include <stdlib.h>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/**
 * malloc_checked - Write a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @b: is the size of memory 
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		return (p);
		exit(1);
	}

	return (p);	

}
