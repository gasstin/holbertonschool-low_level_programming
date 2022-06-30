#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - write a program that prints the opcodes
 * of its own main function.
 * @argc: is the number of bytes.
 * @argv: is the arguments's vector
 *
 * Return: On success 0.
 */

char main(int argc, char *argv[])
{
	char (*f)(int, char **);
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
	{
		printf("%02x", *((char *)f++));
		if (n != atoi(argv[1]))
			printf(" ");
	}
	printf("\n");

	return (0);
}
