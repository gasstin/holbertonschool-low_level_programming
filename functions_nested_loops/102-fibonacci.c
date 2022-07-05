#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints the first
 * 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: the sum of all multiples
 */
int main(void)
{
	unsigned int m = 0, sig = 0, ant_I = 0, ant_II = 1;

	while (m != 50)
	{
		sig = ant_I + ant_II;
		ant_I = ant_II;
		ant_II = sig;
		if (m != 0)
			printf(", ");
		printf("%d", sig);
		m++;
	}
	printf("\n");
	return (0);
}
