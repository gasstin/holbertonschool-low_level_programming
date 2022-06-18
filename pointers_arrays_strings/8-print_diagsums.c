#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints
 * the sum of the two diagonals of a square matrix of integers.
 * @size: is the size of the array
 * @a: is the array
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int n = 0;
	/*int aux = size - 1;*/
	int diag1 = 0;
	int diag2 = 0;

	for (n = 0; n <= (size * size); n += (size + 1))
		diag1 += a[n];
	for (n = (size - 1); n <= (size * size) - (size - 1); n += (size - 1))
		diag2 += a[n];
	printf("%d, %d\n", diag1, diag2);
}
