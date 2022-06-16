# include "main.h"
# include <stdio.h>

/**
 * reverse_array - Write a function that reverses
 * the content of an array of integers.
 * @a: is the array
 * @n: is the number of the array
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	n = n - 1;
	while (i < n)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		i++;
		n--;

	}
}
