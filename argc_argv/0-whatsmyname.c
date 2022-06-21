#include "main.h"
#include <stdio.h>

/**
 * main- Write a function that prints its name
 * @argc: is the size of the command line
 * @argv: is the pointer array to the command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
