#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that copies the content
 * of a file to another file.
 * @ac: is the number of arguments.
 * @av: is the string whit the arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res, res_1;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = open(av[1], O_RDONLY);
	if (res == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	res_1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	buffer = malloc(1024);
	if (!buffer)
		return (-1);
	read(res, buffer, 1024);
	write(res_1, buffer, 1024);
	if (res_1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[2]);
		exit(99);
	}
	close(res);
	close(res_1);
	free(buffer);
	


	return (0);
}
