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
	int n = 0, add = 0;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			if (atoi(argv[n]))
				add += atoi(argv[n]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
