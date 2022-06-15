# include "main.h"
# include <stdio.h>

/**
 * print_array - Write a function that prints n elements
 * of an array of integers
 * @a: is the string
 * @n: is the number of elements
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i != n && n > 0)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		printf(", ");

		i++;
	}
	printf("\n");
}
