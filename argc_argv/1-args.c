#include "main.h"
#include <stdio.h>

/**
 * main - Write a function that prints the number of arguments
 * passed into it.
 * @argc: is the size of the command line
 * @argv: is the pointer array to the command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int contador = 0;

	if (argc > 1)
	{
		while ((argc - 1))
		{
			argc--;
			contador++;
		}
	}
		printf("%d\n", contador);

	return (0);
}
