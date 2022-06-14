# include "main.h"
# include <stdio.h>

/**
 * swap_int - Write a function that swap the values of two integers
 * @a: is the first integer
 * @b: is the second integer
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;

}
