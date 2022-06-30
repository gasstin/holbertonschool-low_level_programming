#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - write a program that performs simple operations.
 * as a parameter on each element of an array
 * @argc: is the number of arguments.
 * @argv: is the arguments's vector
 *
 * Return: On success 0.
 */

int main(int argc, char *argv[])
{
	int (*f)(int, char **);
	int n = 0;

	f = &main;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (n = 0; n <= atoi(argv[1]); n++)
		printf("%x ", *((int *)f++));
	printf("\n");

	return (0);
}
