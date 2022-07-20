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
	int res, res_1, cl, cl_1, bytes;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*open the files*/
	res = open(av[1], O_RDONLY);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	res_1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	buffer = malloc(1024);
	if (!buffer)
		return (-1);
	/*read the file*/
	while ((bytes = read(res, buffer, sizeof(char))) > 0)
		write(res_1, buffer, bytes);
	if (res_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	/*close the files*/
	cl = close(res);
	cl_1 = close(res_1);
	if (cl == -1 || cl_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl);
		exit(100);
	}
	free(buffer);
	return (0);
}
