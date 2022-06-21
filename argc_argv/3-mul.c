#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Write a that multiplies two numbers.
 * @argc: is the size of the command line
 * @argv: is the pointer array to the command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc > 2)
	{
		mul += atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
