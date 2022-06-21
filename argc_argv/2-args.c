#include "main.h"
#include <stdio.h>

/**
 * main - Write a function that prints all the arguments it receives
 * @argc: is the size of the command line
 * @argv: is the pointer array to the command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int contador = 0;

	if (argc > 0)
	{
		while (argc)
		{
			printf("%s\n", argv[contador]);
			argc--;
			contador++;
		}
	}
	return (0);
}
